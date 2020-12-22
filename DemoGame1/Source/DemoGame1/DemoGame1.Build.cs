// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DemoGame1 : ModuleRules
{
	public DemoGame1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
