// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEUGC_EPackageSortField_generated_h
#error "EPackageSortField.generated.h already included, missing '#pragma once' in EPackageSortField.h"
#endif
#define SIMPLEUGC_EPackageSortField_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_EPackageSortField_h


#define FOREACH_ENUM_EPACKAGESORTFIELD(op) \
	op(EPackageSortField::None) \
	op(EPackageSortField::Name) \
	op(EPackageSortField::Status) \
	op(EPackageSortField::Author) \
	op(EPackageSortField::Mounted) 

enum class EPackageSortField : uint8;
template<> SIMPLEUGC_API UEnum* StaticEnum<EPackageSortField>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
