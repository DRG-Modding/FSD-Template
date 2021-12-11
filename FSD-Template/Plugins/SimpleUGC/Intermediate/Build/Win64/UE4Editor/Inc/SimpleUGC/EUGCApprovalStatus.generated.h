// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEUGC_EUGCApprovalStatus_generated_h
#error "EUGCApprovalStatus.generated.h already included, missing '#pragma once' in EUGCApprovalStatus.h"
#endif
#define SIMPLEUGC_EUGCApprovalStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_EUGCApprovalStatus_h


#define FOREACH_ENUM_EUGCAPPROVALSTATUS(op) \
	op(EUGCApprovalStatus::Fully) \
	op(EUGCApprovalStatus::Progression) \
	op(EUGCApprovalStatus::Sandbox) \
	op(EUGCApprovalStatus::All) 

enum class EUGCApprovalStatus : uint8;
template<> SIMPLEUGC_API UEnum* StaticEnum<EUGCApprovalStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
