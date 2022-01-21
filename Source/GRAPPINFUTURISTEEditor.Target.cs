// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GRAPPINFUTURISTEEditorTarget : TargetRules
{
	public GRAPPINFUTURISTEEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GRAPPINFUTURISTE");
	}
}
