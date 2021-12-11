// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioAuthenticationParams_generated_h
#error "ModioAuthenticationParams.generated.h already included, missing '#pragma once' in ModioAuthenticationParams.h"
#endif
#define MODIO_ModioAuthenticationParams_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioAuthenticationParams_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioAuthenticationParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioAuthenticationParams_h


#define FOREACH_ENUM_EMODIOAUTHENTICATIONPROVIDER(op) \
	op(EModioAuthenticationProvider::XboxLive) \
	op(EModioAuthenticationProvider::Steam) \
	op(EModioAuthenticationProvider::GoG) \
	op(EModioAuthenticationProvider::Itch) \
	op(EModioAuthenticationProvider::Switch) \
	op(EModioAuthenticationProvider::Discord) 

enum class EModioAuthenticationProvider : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioAuthenticationProvider>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
