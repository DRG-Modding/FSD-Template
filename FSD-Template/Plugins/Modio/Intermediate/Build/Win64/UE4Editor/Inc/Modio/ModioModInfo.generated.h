// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioModInfo_generated_h
#error "ModioModInfo.generated.h already included, missing '#pragma once' in ModioModInfo.h"
#endif
#define MODIO_ModioModInfo_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioModInfo_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioOptionalModInfo>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioModInfo_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioModInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioModInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioModInfo_h


#define FOREACH_ENUM_EMODIOMATURITYFLAGS(op) \
	op(EModioMaturityFlags::None) \
	op(EModioMaturityFlags::Alcohol) \
	op(EModioMaturityFlags::Drugs) \
	op(EModioMaturityFlags::Violence) \
	op(EModioMaturityFlags::Explicit) 

enum class EModioMaturityFlags : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioMaturityFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
