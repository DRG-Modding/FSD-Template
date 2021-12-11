// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioErrorCondition_generated_h
#error "ModioErrorCondition.generated.h already included, missing '#pragma once' in ModioErrorCondition.h"
#endif
#define MODIO_ModioErrorCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_GeneratedHeader_Public_ModioErrorCondition_h


#define FOREACH_ENUM_EMODIOERRORCONDITION(op) \
	op(EModioErrorCondition::NoError) \
	op(EModioErrorCondition::NetworkError) \
	op(EModioErrorCondition::ConfigurationError) \
	op(EModioErrorCondition::InvalidArgsError) \
	op(EModioErrorCondition::FilesystemError) \
	op(EModioErrorCondition::InternalError) \
	op(EModioErrorCondition::EntityNotFoundError) \
	op(EModioErrorCondition::UserTermsOfUseError) \
	op(EModioErrorCondition::SubmitReportError) 

enum class EModioErrorCondition : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioErrorCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
