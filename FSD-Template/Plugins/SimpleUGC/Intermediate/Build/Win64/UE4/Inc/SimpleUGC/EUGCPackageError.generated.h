// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEUGC_EUGCPackageError_generated_h
#error "EUGCPackageError.generated.h already included, missing '#pragma once' in EUGCPackageError.h"
#endif
#define SIMPLEUGC_EUGCPackageError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_EUGCPackageError_h


#define FOREACH_ENUM_EUGCPACKAGEERROR(op) \
	op(EUGCPackageError::Exists) \
	op(EUGCPackageError::Invalid) \
	op(EUGCPackageError::Other) 

enum class EUGCPackageError : uint8;
template<> SIMPLEUGC_API UEnum* StaticEnum<EUGCPackageError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
