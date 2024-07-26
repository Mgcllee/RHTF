#pragma once

#include "stdafx.h"

/*
WSA�� Windows Socket API �� ���ڷ�
���ͳ� ��Ʈ��ũ �� ���� ���� �Լ��� ���� ���ִ� API
Winsock�� version 1�� 2�� ������, 1 ���� ����� �߰��� ���� 2 �̴�.

���� ���� �ƶ�����
OVERLAPPED ����ü�� WSA ���ξ ���� ����
WSAOVERLAPPED ����ü�̴�. ���Ǹ� ã�ƺ��� ����.

WS2tcpip.h ����� Winsock2.h���� ������Ʈ�� ���.
*/
#include <WS2tcpip.h>
#include <MSWSock.h>
#include <atomic>

#pragma comment(lib, "ws2_32")
#pragma comment(lib, "MSWSock.lib")

#define PORT_NUM 7777
#define BUF_SIZE 256

enum TYPE { ACCEPT, RECV, SEND };

// WSAOVERLAPPED extension class
class OVER_EXT {
public:
	WSAOVERLAPPED _over;			// : WSAOVERLAPPED, OVERLAPPED Ȯ�� �ʿ�
	WSABUF _wsabuf;					// : WSABUF Ȯ�� �ʿ�
	char _send_buf[BUF_SIZE];		// ��Ŷ ũ��
	TYPE curr_type = TYPE::RECV;	// ��Ŷ Ÿ��

	// ��Ŷ ���� ����
	OVER_EXT()
	{
		_wsabuf.len = BUF_SIZE;
		_wsabuf.buf = _send_buf;
		curr_type = TYPE::RECV;
		ZeroMemory(&_over, sizeof(_over));
	}

	// ��Ŷ ������ ����
	OVER_EXT(char* packet)
	{
		_wsabuf.len = packet[0];
		_wsabuf.buf = _send_buf;
		ZeroMemory(&_over, sizeof(_over));
		curr_type = TYPE::SEND;
		memcpy(_send_buf, packet, packet[0]);
	}
};

class SESSION
{
public:
	SESSION(SOCKET _sock)
		: _socket(_sock)
	{

	}

	// WSARecv ��ȯ���� int������ ���� ���� ���� ��ȯ�� �� ������
	// �ܺο��� �� ���� Ȯ���� �ʿ�� �����Ƿ� bool ������ ���� ���� ����
	bool do_recv()
	{
		DWORD recv_flag = 0;
		// std::fill�� iterator�� ����ؾ� �ϹǷ� ������.
		// Zeromem
		// [����] memset(&_recv_over._over, 0, sizeof(_recv_over._over)); 
		ZeroMemory(&_recv_over._over, sizeof(_recv_over._over));

		_recv_over._wsabuf.len = BUF_SIZE - _prev_rest_packet;
		_recv_over._wsabuf.buf = _recv_over._send_buf + _prev_rest_packet;

		int ret = WSARecv
		(
			_socket,				// [1] Client Socket
			&_recv_over._wsabuf,
			1,
			0,
			&recv_flag,
			&_recv_over._over,
			0
		);

		return (ret == WSA_IO_PENDING ? true : false);
	}

	bool do_send(void* sending_packet)
	{
		OVER_EXT* packet = new OVER_EXT(reinterpret_cast<char*>(sending_packet));

		int ret = WSASend
		(
			_socket,
			&packet->_wsabuf,
			1,
			0,
			0,
			&packet->_over,
			0
		);

		return (ret == ERROR_IO_PENDING ? true : false);
	}

	bool _disconnect()
	{
		int ret;
		// WSASendDisconnect(_socket,	)
		ret = closesocket(_socket);

		// +@) Memory Leak ����å �ʿ�.

		return (ret == 0 ? true : false);
	}

	void set_prev_rest_packet(int _in)
	{
		_prev_rest_packet = _in;
	}
	int get_prev_rest_packet()
	{
		return _prev_rest_packet;
	}

public:
	int _prev_rest_packet;

private:
	SOCKET _socket;
	OVER_EXT _recv_over;

};


extern HANDLE h_iocp;
extern SOCKET g_s_socket;
extern SOCKET g_c_socket;
extern OVER_EXT g_over;
