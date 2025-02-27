// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GravityProject : ModuleRules
{
	public GravityProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
