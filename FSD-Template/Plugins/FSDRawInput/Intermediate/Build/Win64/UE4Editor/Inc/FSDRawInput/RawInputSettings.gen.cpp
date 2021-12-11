// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDRawInput/Public/RawInputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputSettings() {}
// Cross Module References
	FSDRAWINPUT_API UClass* Z_Construct_UClass_URawInputSettings_NoRegister();
	FSDRAWINPUT_API UClass* Z_Construct_UClass_URawInputSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_FSDRawInput();
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration();
// End Cross Module References
	void URawInputSettings::StaticRegisterNativesURawInputSettings()
	{
	}
	UClass* Z_Construct_UClass_URawInputSettings_NoRegister()
	{
		return URawInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_URawInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegisterDefaultDevice_MetaData[];
#endif
		static void NewProp_bRegisterDefaultDevice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegisterDefaultDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceConfigurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeviceConfigurations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceConfigurations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URawInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FSDRawInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RawInputSettings.h" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_MetaData[] = {
		{ "Category", "RawInputSettings" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	void Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_SetBit(void* Obj)
	{
		((URawInputSettings*)Obj)->bRegisterDefaultDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice = { "bRegisterDefaultDevice", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URawInputSettings), &Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData[] = {
		{ "Category", "RawInputSettings" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations = { "DeviceConfigurations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URawInputSettings, DeviceConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_Inner = { "DeviceConfigurations", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawInputDeviceConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URawInputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URawInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URawInputSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URawInputSettings_Statics::ClassParams = {
		&URawInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URawInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URawInputSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URawInputSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URawInputSettings, 2079092791);
	template<> FSDRAWINPUT_API UClass* StaticClass<URawInputSettings>()
	{
		return URawInputSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URawInputSettings(Z_Construct_UClass_URawInputSettings, &URawInputSettings::StaticClass, TEXT("/Script/FSDRawInput"), TEXT("URawInputSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URawInputSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
