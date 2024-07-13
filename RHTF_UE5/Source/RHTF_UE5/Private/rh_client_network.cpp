// Fill out your copyright notice in the Description page of Project Settings.


#include "rh_client_network.h"

#include "ProtobufCore/NetProtocol/LogicPacket.pb.h"

Urh_client_network::Urh_client_network()
{
}

Urh_client_network::~Urh_client_network()
{
}

bool Urh_client_network::connect_to_server(FString addr)
{
	int nRet = WSAStartup(MAKEWORD(2, 2), &wsaData);	// Winsock �ʱ�ȭ
	if (nRet != 0) return false;

	// ���� ����
	Socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
	if (Socket == INVALID_SOCKET) return false;

	// IP, Port ���� �Է�
	SOCKADDR_IN stServerAddr;
	stServerAddr.sin_family = AF_INET;
	stServerAddr.sin_port = htons(Port);
	stServerAddr.sin_addr.s_addr = inet_addr(TCHAR_TO_UTF8(*addr));

    C2SPCLoginUserReq login_req_pack;

	// ����
	nRet = connect(Socket, (sockaddr*)&stServerAddr, sizeof(sockaddr));

	if (nRet == SOCKET_ERROR)
		return false;
	else
		return true;
}
