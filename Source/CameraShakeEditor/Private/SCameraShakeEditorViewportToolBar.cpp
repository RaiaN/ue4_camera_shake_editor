﻿// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SCameraShakeEditorViewportToolBar.h"
#include "SCameraShakeEditorViewport.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "UObject/Package.h"
#include "EditorStyleSet.h"
#include "ICameraShakeEditor.h"
#include "CameraShakeEditorActions.h"
#include "Slate/SceneViewport.h"
#include "EngineAnalytics.h"
#include "Widgets/Docking/SDockTab.h"
#include "Editor/UnrealEd/Public/SEditorViewportToolBarMenu.h"

#define LOCTEXT_NAMESPACE "CameraShakeEditorViewportToolbar"

///////////////////////////////////////////////////////////


void SCameraShakeEditorViewportToolbar::Construct(const FArguments& InArgs, TSharedPtr<class ICommonEditorViewportToolbarInfoProvider> InInfoProvider)
{
	SCommonEditorViewportToolbarBase::Construct(SCommonEditorViewportToolbarBase::FArguments(), InInfoProvider);
}

#undef LOCTEXT_NAMESPACE
