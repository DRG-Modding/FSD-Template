// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioFileMetadata_generated_h
#error "ModioFileMetadata.generated.h already included, missing '#pragma once' in ModioFileMetadata.h"
#endif
#define MODIO_ModioFileMetadata_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioFileMetadata_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioFileMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioFileMetadata>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioFileMetadata_h


#define FOREACH_ENUM_EMODIOVIRUSSTATUS(op) \
	op(EModioVirusStatus::NoThreat) \
	op(EModioVirusStatus::Malicious) 

enum class EModioVirusStatus : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioVirusStatus>();

#define FOREACH_ENUM_EMODIOVIRUSSCANSTATUS(op) \
	op(EModioVirusScanStatus::NotScanned) \
	op(EModioVirusScanStatus::ScanComplete) \
	op(EModioVirusScanStatus::InProgress) \
	op(EModioVirusScanStatus::TooLargeToScan) \
	op(EModioVirusScanStatus::FileNotFound) \
	op(EModioVirusScanStatus::ErrorScanning) 

enum class EModioVirusScanStatus : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioVirusScanStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
