// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioImageState_generated_h
#error "ModioImageState.generated.h already included, missing '#pragma once' in ModioImageState.h"
#endif
#define MODIO_ModioImageState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioImageState_h


#define FOREACH_ENUM_EMODIOIMAGESTATE(op) \
	op(EModioImageState::OnDisc) \
	op(EModioImageState::LoadingIntoMemory) \
	op(EModioImageState::InMemory) \
	op(EModioImageState::Corrupted) 

enum class EModioImageState : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioImageState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
