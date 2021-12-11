// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleAnalytics/Public/GoogleAnalyticsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleAnalyticsSettings() {}
// Cross Module References
	GOOGLEANALYTICS_API UClass* Z_Construct_UClass_UGoogleAnalyticsSettings_NoRegister();
	GOOGLEANALYTICS_API UClass* Z_Construct_UClass_UGoogleAnalyticsSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GoogleAnalytics();
// End Cross Module References
	void UGoogleAnalyticsSettings::StaticRegisterNativesUGoogleAnalyticsSettings()
	{
	}
	UClass* Z_Construct_UClass_UGoogleAnalyticsSettings_NoRegister()
	{
		return UGoogleAnalyticsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleAnalyticsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableIDFACollection_MetaData[];
#endif
		static void NewProp_bEnableIDFACollection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableIDFACollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleAnalyticsSettings.h" },
		{ "ModuleRelativePath", "Public/GoogleAnalyticsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::NewProp_bEnableIDFACollection_MetaData[] = {
		{ "Category", "GoogleAnalyticsSettings" },
		{ "ModuleRelativePath", "Public/GoogleAnalyticsSettings.h" },
	};
#endif
	void Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::NewProp_bEnableIDFACollection_SetBit(void* Obj)
	{
		((UGoogleAnalyticsSettings*)Obj)->bEnableIDFACollection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::NewProp_bEnableIDFACollection = { "bEnableIDFACollection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGoogleAnalyticsSettings), &Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::NewProp_bEnableIDFACollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::NewProp_bEnableIDFACollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::NewProp_bEnableIDFACollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::NewProp_bEnableIDFACollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleAnalyticsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::ClassParams = {
		&UGoogleAnalyticsSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleAnalyticsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoogleAnalyticsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoogleAnalyticsSettings, 1332415342);
	template<> GOOGLEANALYTICS_API UClass* StaticClass<UGoogleAnalyticsSettings>()
	{
		return UGoogleAnalyticsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoogleAnalyticsSettings(Z_Construct_UClass_UGoogleAnalyticsSettings, &UGoogleAnalyticsSettings::StaticClass, TEXT("/Script/GoogleAnalytics"), TEXT("UGoogleAnalyticsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleAnalyticsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
