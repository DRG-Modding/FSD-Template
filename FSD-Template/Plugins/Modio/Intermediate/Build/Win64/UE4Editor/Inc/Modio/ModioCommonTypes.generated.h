// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODIO_ModioCommonTypes_generated_h
#error "ModioCommonTypes.generated.h already included, missing '#pragma once' in ModioCommonTypes.h"
#endif
#define MODIO_ModioCommonTypes_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_436_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioEmailAuthCode>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_411_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioEmailAddress_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioEmailAddress>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_384_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioApiKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioApiKey>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_325_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioUserID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioUserID>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioFileMetadataID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioFileMetadataID>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioGameID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioGameID>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioOptionalModID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioOptionalModID>();

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModioModID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODIO_API UScriptStruct* StaticStruct<struct FModioModID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Types_ModioCommonTypes_h


#define FOREACH_ENUM_EMODIOLANGUAGE(op) \
	op(EModioLanguage::English) \
	op(EModioLanguage::Bulgarian) \
	op(EModioLanguage::French) \
	op(EModioLanguage::German) \
	op(EModioLanguage::Italian) \
	op(EModioLanguage::Polish) \
	op(EModioLanguage::Portuguese) \
	op(EModioLanguage::Hungarian) \
	op(EModioLanguage::Japanese) \
	op(EModioLanguage::Korean) \
	op(EModioLanguage::Russian) \
	op(EModioLanguage::Spanish) \
	op(EModioLanguage::Thai) \
	op(EModioLanguage::ChineseSimplified) \
	op(EModioLanguage::ChineseTraditional) 

enum class EModioLanguage : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioLanguage>();

#define FOREACH_ENUM_EMODIOLOGLEVEL(op) \
	op(EModioLogLevel::Trace) \
	op(EModioLogLevel::Info) \
	op(EModioLogLevel::Warning) \
	op(EModioLogLevel::Error) 

enum class EModioLogLevel : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioLogLevel>();

#define FOREACH_ENUM_EMODIOGALLERYSIZE(op) \
	op(EModioGallerySize::Original) \
	op(EModioGallerySize::Thumb320) 

enum class EModioGallerySize : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioGallerySize>();

#define FOREACH_ENUM_EMODIOAVATARSIZE(op) \
	op(EModioAvatarSize::Original) \
	op(EModioAvatarSize::Thumb50) \
	op(EModioAvatarSize::Thumb100) 

enum class EModioAvatarSize : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioAvatarSize>();

#define FOREACH_ENUM_EMODIOLOGOSIZE(op) \
	op(EModioLogoSize::Original) \
	op(EModioLogoSize::Thumb320) \
	op(EModioLogoSize::Thumb640) \
	op(EModioLogoSize::Thumb1280) 

enum class EModioLogoSize : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioLogoSize>();

#define FOREACH_ENUM_EMODIOPORTAL(op) \
	op(EModioPortal::None) \
	op(EModioPortal::Apple) \
	op(EModioPortal::EpicGamesStore) \
	op(EModioPortal::GOG) \
	op(EModioPortal::Google) \
	op(EModioPortal::Itchio) \
	op(EModioPortal::Nintendo) \
	op(EModioPortal::PSN) \
	op(EModioPortal::Steam) \
	op(EModioPortal::XboxLive) 

enum class EModioPortal : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioPortal>();

#define FOREACH_ENUM_EMODIOENVIRONMENT(op) \
	op(EModioEnvironment::Test) \
	op(EModioEnvironment::Live) 

enum class EModioEnvironment : uint8;
template<> MODIO_API UEnum* StaticEnum<EModioEnvironment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
