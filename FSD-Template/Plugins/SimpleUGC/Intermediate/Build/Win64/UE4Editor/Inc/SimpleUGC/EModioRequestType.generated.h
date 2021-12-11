// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEUGC_EModioRequestType_generated_h
#error "EModioRequestType.generated.h already included, missing '#pragma once' in EModioRequestType.h"
#endif
#define SIMPLEUGC_EModioRequestType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_EModioRequestType_h


#define FOREACH_ENUM_EMODIOREQUESTTYPE(op) \
	op(EModioRequestType::InitializeLocalInstallation) \
	op(EModioRequestType::Authentication) \
	op(EModioRequestType::K2_Authentication) \
	op(EModioRequestType::TermsOfUse) \
	op(EModioRequestType::FetchModUpdates) \
	op(EModioRequestType::ModMetaData) \
	op(EModioRequestType::Thumbnail) \
	op(EModioRequestType::HostHiddenModsInstalled) \
	op(EModioRequestType::Subscribe) \
	op(EModioRequestType::ModDependencySubscribe) \
	op(EModioRequestType::ModDependencyList) \
	op(EModioRequestType::ModDependencyAdd) 

enum class EModioRequestType : uint8;
template<> SIMPLEUGC_API UEnum* StaticEnum<EModioRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
