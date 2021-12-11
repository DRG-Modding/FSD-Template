// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioModManagementEvent_generated_h
#error "ModioModManagementEvent.generated.h already included, missing '#pragma once' in ModioModManagementEvent.h"
#endif
#define MODIO_ModioModManagementEvent_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioModManagementEvent_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioModManagementEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioModManagementEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioModManagementEvent_h


#define FOREACH_ENUM_EMODIOMODMANAGEMENTEVENTTYPE(op) \
	op(EModioModManagementEventType::Installed) \
	op(EModioModManagementEventType::Uninstalled) \
	op(EModioModManagementEventType::Updated) \
	op(EModioModManagementEventType::Uploaded) 

enum class EModioModManagementEventType : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioModManagementEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
