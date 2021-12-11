// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioModCollectionEntry_generated_h
#error "ModioModCollectionEntry.generated.h already included, missing '#pragma once' in ModioModCollectionEntry.h"
#endif
#define MODIO_ModioModCollectionEntry_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioModCollectionEntry_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioModCollectionEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioModCollectionEntry_h


#define FOREACH_ENUM_EMODIOMODSTATE(op) \
	op(EModioModState::InstallationPending) \
	op(EModioModState::Installed) \
	op(EModioModState::UpdatePending) \
	op(EModioModState::Downloading) \
	op(EModioModState::Extracting) \
	op(EModioModState::UninstallPending) 

enum class EModioModState : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioModState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
