// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/ModioSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioSettings() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioSettings_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioPortal();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLogLevel();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioEnvironment();
// End Cross Module References
	void UModioSettings::StaticRegisterNativesUModioSettings()
	{
	}
	UClass* Z_Construct_UClass_UModioSettings_NoRegister()
	{
		return UModioSettings::StaticClass();
	}
	struct Z_Construct_UClass_UModioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultPortal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPortal_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Environment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Environment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Environment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_GameId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @brief Settings that can be configured per project that generally don't change during the run of a game */" },
		{ "IncludePath", "ModioSettings.h" },
		{ "ModuleRelativePath", "Public/ModioSettings.h" },
		{ "ToolTip", "@brief Settings that can be configured per project that generally don't change during the run of a game" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSettings_Statics::NewProp_DefaultPortal_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** The default portal to use.*/" },
		{ "ModuleRelativePath", "Public/ModioSettings.h" },
		{ "ToolTip", "The default portal to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_DefaultPortal = { "DefaultPortal", nullptr, (EPropertyFlags)0x0010000000014001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioSettings, DefaultPortal), Z_Construct_UEnum_Modio_EModioPortal, METADATA_PARAMS(Z_Construct_UClass_UModioSettings_Statics::NewProp_DefaultPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSettings_Statics::NewProp_DefaultPortal_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_DefaultPortal_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSettings_Statics::NewProp_LogLevel_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** What's the default log level you are interested in */" },
		{ "ModuleRelativePath", "Public/ModioSettings.h" },
		{ "ToolTip", "What's the default log level you are interested in" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_LogLevel = { "LogLevel", nullptr, (EPropertyFlags)0x0010000000014001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioSettings, LogLevel), Z_Construct_UEnum_Modio_EModioLogLevel, METADATA_PARAMS(Z_Construct_UClass_UModioSettings_Statics::NewProp_LogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSettings_Statics::NewProp_LogLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_LogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSettings_Statics::NewProp_Environment_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** If your game is configured to be running on either mod.io or test.mod.io. Recommended is to first create your\n\x09 * game on test.mod.io as only you and your team can see it there */" },
		{ "ModuleRelativePath", "Public/ModioSettings.h" },
		{ "ToolTip", "If your game is configured to be running on either mod.io or test.mod.io. Recommended is to first create your\ngame on test.mod.io as only you and your team can see it there" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_Environment = { "Environment", nullptr, (EPropertyFlags)0x0010000000014001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioSettings, Environment), Z_Construct_UEnum_Modio_EModioEnvironment, METADATA_PARAMS(Z_Construct_UClass_UModioSettings_Statics::NewProp_Environment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSettings_Statics::NewProp_Environment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_Environment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSettings_Statics::NewProp_ApiKey_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** ApiKey that can be found in your game configuration page on the mod.io site. Unique per environment  */" },
		{ "ModuleRelativePath", "Public/ModioSettings.h" },
		{ "ToolTip", "ApiKey that can be found in your game configuration page on the mod.io site. Unique per environment" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000014001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioSettings, ApiKey), METADATA_PARAMS(Z_Construct_UClass_UModioSettings_Statics::NewProp_ApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSettings_Statics::NewProp_ApiKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSettings_Statics::NewProp_GameId_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** Game id that can be found in your game configuration page on the mod.io site. Unique per environment  */" },
		{ "ModuleRelativePath", "Public/ModioSettings.h" },
		{ "ToolTip", "Game id that can be found in your game configuration page on the mod.io site. Unique per environment" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UModioSettings_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000014001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioSettings, GameId), METADATA_PARAMS(Z_Construct_UClass_UModioSettings_Statics::NewProp_GameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSettings_Statics::NewProp_GameId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_DefaultPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_DefaultPortal_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_LogLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_LogLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_Environment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_Environment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_ApiKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioSettings_Statics::NewProp_GameId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioSettings_Statics::ClassParams = {
		&UModioSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UModioSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioSettings, 4056229701);
	template<> MODIO_API UClass* StaticClass<UModioSettings>()
	{
		return UModioSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioSettings(Z_Construct_UClass_UModioSettings, &UModioSettings::StaticClass, TEXT("/Script/Modio"), TEXT("UModioSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
