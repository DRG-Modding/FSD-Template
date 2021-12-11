// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PS5_Mock/Public/PS5MockExternalEndpointSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS5MockExternalEndpointSettings() {}
// Cross Module References
	PS5_MOCK_API UClass* Z_Construct_UClass_UPS5MockExternalEndpointSettings_NoRegister();
	PS5_MOCK_API UClass* Z_Construct_UClass_UPS5MockExternalEndpointSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase();
	UPackage* Z_Construct_UPackage__Script_PS5_Mock();
// End Cross Module References
	void UPS5MockExternalEndpointSettings::StaticRegisterNativesUPS5MockExternalEndpointSettings()
	{
	}
	UClass* Z_Construct_UClass_UPS5MockExternalEndpointSettings_NoRegister()
	{
		return UPS5MockExternalEndpointSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEndpointSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PS5_Mock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PS5MockExternalEndpointSettings.h" },
		{ "ModuleRelativePath", "Public/PS5MockExternalEndpointSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPS5MockExternalEndpointSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics::ClassParams = {
		&UPS5MockExternalEndpointSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPS5MockExternalEndpointSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPS5MockExternalEndpointSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPS5MockExternalEndpointSettings, 4021902322);
	template<> PS5_MOCK_API UClass* StaticClass<UPS5MockExternalEndpointSettings>()
	{
		return UPS5MockExternalEndpointSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPS5MockExternalEndpointSettings(Z_Construct_UClass_UPS5MockExternalEndpointSettings, &UPS5MockExternalEndpointSettings::StaticClass, TEXT("/Script/PS5_Mock"), TEXT("UPS5MockExternalEndpointSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPS5MockExternalEndpointSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
