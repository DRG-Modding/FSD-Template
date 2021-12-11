// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioRating_generated_h
#error "ModioRating.generated.h already included, missing '#pragma once' in ModioRating.h"
#endif
#define MODIO_ModioRating_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioRating_h


#define FOREACH_ENUM_EMODIORATING(op) \
	op(EModioRating::Neutral) \
	op(EModioRating::Positive) \
	op(EModioRating::Negative) 

enum class EModioRating : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioRating>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
