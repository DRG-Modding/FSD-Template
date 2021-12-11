// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioFilterParams_generated_h
#error "ModioFilterParams.generated.h already included, missing '#pragma once' in ModioFilterParams.h"
#endif
#define MODIO_ModioFilterParams_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioFilterParams_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioFilterParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioFilterParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioFilterParams_h


#define FOREACH_ENUM_EMODIOSORTDIRECTION(op) \
	op(EModioSortDirection::Ascending) \
	op(EModioSortDirection::Descending) 

enum class EModioSortDirection : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioSortDirection>();

#define FOREACH_ENUM_EMODIOSORTFIELDTYPE(op) \
	op(EModioSortFieldType::ID) \
	op(EModioSortFieldType::DownloadsToday) \
	op(EModioSortFieldType::SubscriberCount) \
	op(EModioSortFieldType::Rating) \
	op(EModioSortFieldType::DateMarkedLive) \
	op(EModioSortFieldType::DateUpdated) 

enum class EModioSortFieldType : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioSortFieldType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
