// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealClass : ModuleRules
{
	public UnrealClass(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
