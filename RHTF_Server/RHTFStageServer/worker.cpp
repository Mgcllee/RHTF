#pragma once

#include "worker.h"

void worker_thread(HANDLE h_iocp)
{
    while (true)
    {
        DWORD num_bytes;
		ULONG_PTR key;
		WSAOVERLAPPED* over = nullptr;

		// IOCP�� I/O Completion Queue���� �����Ͱ� �Էµ� ������ [[���� ���]] �մϴ�.
		BOOL ret
			= GetQueuedCompletionStatus
            (
				h_iocp,		// ������� iocp ��ü
				&num_bytes,	// ��/���ŵ� Byte ��
				&key,		// 
				&over,		// OVERLAPPED ��ü (WSAOVERLAPPED ����ü�� ����.)
				INFINITE	// ���� ���
			);
		
		/*
		- GetQueuedCompletionStatus function() -
		1. [CompletionPort] : ��⸦ ������ IOCP �ڵ�
		2. [lpNumberOfBytesTransferred] : ��/���ŵ� Byte ��
		3. [lpCompletionKey] : �񵿱� I/O ��û�� �߻��� ����̽��� CompletionKey
		4. [lpOverlapped] : �񵿱� ȣ��� ������ Overlapped ����ü �ּ�
		5. [dwMilliseconds] : ��⸦ ������ �ð�(ms)
		
		��ȯ ���� true�̸� ����, false�̸� ����
		*/
		
        // WSAOVERLAPPED ����ü �о����.
		IOCP::OVER_EXT* ex_over = reinterpret_cast<IOCP::OVER_EXT*>(over);
        
        // ���� �����
        if ((0 == num_bytes) && (ex_over->curr_type == IOCP::RECV)) continue;
        else if (FALSE == ret) {
            // Queue�� �۾��� ������, ��ȿ�ϰ� �������� �� �Ͽ���.
            // (�۾��� ������ GetQueuedCompletionStatus �Լ� ��ü���� �����.
            // ��, �۾��� �־��⿡ ret ������ ���� ��ȯ�� ��.)

            if (ex_over->curr_type == IOCP::ACCEPT) std::cout << "Accept Error";
            else continue;
        }
        
        switch (ex_over->curr_type)
        {
        case IOCP::ACCEPT:
        {
            // ���ο� Ŭ���̾�Ʈ�� ���� ID �߱� �ʿ�!
            // ���� ������ �ִ��� �ذ����� �߱ޱⰡ �ʿ�
            int new_c_id = -1;

            if (-1 != new_c_id)
            {
                // [[Ŭ���̾�Ʈ ��ü �ʱ�ȭ]]
                Client new_c_info(IOCP::g_c_socket); // g_~ ��ü atomic �ʿ�


                // Clients.insert(std::make_pair(new_c_id, new_c_info));
                Clients[new_c_id] = new_c_info;

                CreateIoCompletionPort(reinterpret_cast<HANDLE>(IOCP::g_c_socket), h_iocp, new_c_id, 0);
                // clients[new_c_id].do_recv();
                
                // Global Client Socket �ٽ� ���󺹱� �ʱ�ȭ (���� ���ο� Ŭ���̾�Ʈ �غ�)
                IOCP::g_c_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
                
                // Accept new client!
            }
            else
            {
                // Accept Error!
            }

            ZeroMemory(&IOCP::g_over._over, sizeof(IOCP::g_over._over));
            int addr_size = sizeof(SOCKADDR_IN);
            AcceptEx(IOCP::g_s_socket, IOCP::g_c_socket, IOCP::g_over._send_buf, 0, addr_size + 16, addr_size + 16, 0, &IOCP::g_over._over);
        }
            break;
        case IOCP::RECV:
        {
            int amount_packet
                = num_bytes + Clients[key].get_session().get_prev_rest_packet();

            // �о�� WSAOVERLAPPED ����ü ��ȯ.
            char* recv_packet = ex_over->_send_buf;
            
            while (amount_packet > 0)
            {
                int packet_size = recv_packet[0];

                if (packet_size <= amount_packet)
                {
                    process_packet(static_cast<int>(key), recv_packet);

                    // ��Ŷ ũ�⸸ŭ �о����.
                    recv_packet += packet_size;

                    // ���� �����ִ� ��Ŷ ���̱�.
                    amount_packet -= packet_size;
                }
                else
                {
                    break;
                }

                // ���ƹ��� ���� ũ�⸦ ������ ���� �����صα�
                Clients[key].get_session().set_prev_rest_packet(amount_packet);

                if (amount_packet > 0)
                {
                    memcpy(ex_over->_send_buf, recv_packet, amount_packet);
                }

                // do_recv() ȣ���� �ʼ��ΰ�?
                Clients[key].get_session().do_recv();
            }
        }
        break;
        case IOCP::SEND:

            break;
        }
    }
}

void process_packet(int c_id, char* packet)
{
    switch (packet[1])
    {
    case User::NUM::C2SLoginUserReq:
    {
        User::S2CPCLoginUserRes login_pack;
        login_pack.ParseFromString(packet);

        std::cout << "[User Info]\n";
        std::cout << "ID: " << login_pack.userid() << '\n';
        std::cout << "Name: " << login_pack.username() << '\n';
        std::cout << "Level: " << login_pack.userlevel() << '\n';
    }
    break;
    case User::NUM::S2SLoginUserReq:
    {
        User::C2SPCLoginUserReq c2slogin;
        c2slogin.set_userid(9785);
        std::string serialized_data;
        c2slogin.SerializeToString(&serialized_data);

        // send(Sock, serialized_data.c_str(), serialized_data.size(), 0);
        Clients[c_id].get_session().do_send(&serialized_data);
    }
    break;
    }
}
