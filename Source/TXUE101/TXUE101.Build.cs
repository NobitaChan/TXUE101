// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TXUE101 : ModuleRules
{
	public TXUE101(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
