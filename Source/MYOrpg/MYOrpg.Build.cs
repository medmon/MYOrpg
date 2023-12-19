// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MYOrpg : ModuleRules
{
	public MYOrpg(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
