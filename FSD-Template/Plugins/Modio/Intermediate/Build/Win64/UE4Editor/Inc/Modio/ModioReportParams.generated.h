// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioReportParams_generated_h
#error "ModioReportParams.generated.h already included, missing '#pragma once' in ModioReportParams.h"
#endif
#define MODIO_ModioReportParams_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioReportParams_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioReportParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioReportParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioReportParams_h


#define FOREACH_ENUM_EMODIOREPORTTYPE(op) \
	op(EModioReportType::Generic) \
	op(EModioReportType::DMCA) \
	op(EModioReportType::NotWorking) \
	op(EModioReportType::RudeContent) \
	op(EModioReportType::IllegalContent) \
	op(EModioReportType::StolenContent) \
	op(EModioReportType::FalseInformation) \
	op(EModioReportType::Other) 

enum class EModioReportType : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioReportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
