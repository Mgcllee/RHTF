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

#pragma comment(lib, "ws2_32")
#pragma comment(lib, "MSWSock.lib")

#pragma warning( disable : 4251 )
#pragma warning( disable : 4244 )
#include "../LogicPacket.pb.h"
#pragma warning( default : 4251 )
#pragma warning( default : 4244 )

#define PORT_NUM 7777
#define BUF_SIZE 256

namespace IOCP
{
	enum TYPE { ACCEPT, RECV, SEND };
	
	class OVER_EXT;
	extern HANDLE h_iocp;
	extern SOCKET g_s_socket;
	extern SOCKET g_c_socket;
	extern OVER_EXT g_over;

	// WSAOVERLAPPED extension class
	class OVER_EXT {
	public:
		WSAOVERLAPPED _over;		// : WSAOVERLAPPED, OVERLAPPED Ȯ�� �ʿ�
		WSABUF _wsabuf;				// : WSABUF Ȯ�� �ʿ�

		char _send_buf[BUF_SIZE];	// ��Ŷ ũ��
		TYPE curr_type = TYPE::RECV;	// ��Ŷ Ÿ��

		int _ai_target_obj;

		// ��Ŷ ���� ����
		OVER_EXT()
		{
			_wsabuf.len = BUF_SIZE;
			_wsabuf.buf = _send_buf;
			curr_type = RECV;
			ZeroMemory(&_over, sizeof(_over));
		}

		// ��Ŷ ������ ����
		OVER_EXT(char* packet)
		{
			_wsabuf.len = packet[0];
			_wsabuf.buf = _send_buf;
			ZeroMemory(&_over, sizeof(_over));
			curr_type = SEND;
			memcpy(_send_buf, packet, packet[0]);
		}
	};
};
