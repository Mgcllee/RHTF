#pragma once

#include <unordered_map>

#include "Network.h"

class Client 
{
public:
	Client() : _session(NULL) { }
	Client(IOCP::SESSION _session);

	bool Disconnect();
	IOCP::SESSION& get_session()
	{
		return _session;
	}

	void set_name(std::string& _in)
	{
		_name = _in;
	}
	inline std::string get_name()
	{
		return _name;
	}

private:
	IOCP::SESSION _session;
	// Client Class���� 
	// �ݵ�� _uid ��ü�� ���� �־���ϴ°�.


public:


private:
	std::string _name;

};

extern std::unordered_map<int, Client> Clients;
