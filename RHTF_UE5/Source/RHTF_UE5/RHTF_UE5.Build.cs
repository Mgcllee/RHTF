// Copyright Epic Games, Inc. All Rights Reserved.
using System.IO;
using UnrealBuildTool;

public class RHTF_UE5 : ModuleRules
{
	public RHTF_UE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // Public ������ �ִ� .h ���Ͽ��� �����.
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Sockets", "Networking" });
            
        // Private ������ �ִ� .cpp ���Ͽ����� ����Ѵ�.
		PrivateDependencyModuleNames.AddRange(new string[] { "ProtobufCore" });
    }
}
