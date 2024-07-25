// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "rh_client_network.h"

#include "RHTF_UE5/LogicPacket.pb.h"



Urh_client_network::Urh_client_network()
{
}

Urh_client_network::~Urh_client_network()
{
}

bool Urh_client_network::connect_to_server(FString server_addr)
{
    // ������ ����
    socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(TEXT("Stream"), TEXT("Client Socket"));

    // IP�� FString���� �Է¹޾� ����
    FIPv4Address ip;
    FIPv4Address::Parse(server_addr, ip);

    int32 port = 7777;	// ��Ʈ�� 7777��

    // ��Ʈ�� ������ ��� Ŭ����
    TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
    addr->SetIp(ip.Value);
    addr->SetPort(port);

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Trying to connect.")));

    // ����õ�, ����� �޾ƿ�
    bool isConnetcted = socket->Connect(*addr);

	// ����
    return isConnetcted;
}

bool Urh_client_network::send_client_info(FString name)
{
    User::C2SPCLoginUserReq packet;

    packet.set_userid(9785);

    uint8* buffer = new uint8[sizeof(User::C2SPCLoginUserReq)];
    packet.SerializeToArray(buffer, sizeof(packet));

    int32 bytesent = 0;
    bool send_ret = socket->Send(buffer, sizeof(User::C2SPCLoginUserReq), bytesent);

    return send_ret;
}
