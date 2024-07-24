#pragma once

#include <unordered_map>

#include "Network.h"

class Client 
{
public:
	Client(IOCP::SESSION _session);

	bool Disconnect();
	IOCP::SESSION& get_session()
	{
		return _session;
	}

private:
	IOCP::SESSION _session;
	// Client Class���� 
	// �ݵ�� _uid ��ü�� ���� �־���ϴ°�.


public:


private:


};

// ������ 
std::unordered_map<int, Client> Clients;
