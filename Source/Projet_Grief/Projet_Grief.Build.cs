// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Projet_Grief : ModuleRules
{
	public Projet_Grief(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
        PrivateDependencyModuleNames.AddRange(new string[] { "GASCompanion", "GameplayAbilities", "GameplayTasks", "GameplayTags" });
    }
}
