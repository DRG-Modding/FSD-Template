// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDRawInput/Public/RawInputDeviceConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputDeviceConfiguration() {}
// Cross Module References
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration();
	UPackage* Z_Construct_UPackage__Script_FSDRawInput();
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties();
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties();
// End Cross Module References
class UScriptStruct* FRawInputDeviceConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FSDRAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration, Z_Construct_UPackage__Script_FSDRawInput(), TEXT("RawInputDeviceConfiguration"), sizeof(FRawInputDeviceConfiguration), Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash());
	}
	return Singleton;
}
template<> FSDRAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceConfiguration>()
{
	return FRawInputDeviceConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawInputDeviceConfiguration(FRawInputDeviceConfiguration::StaticStruct, TEXT("/Script/FSDRawInput"), TEXT("RawInputDeviceConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceConfiguration
{
	FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawInputDeviceConfiguration")),new UScriptStruct::TCppStructOps<FRawInputDeviceConfiguration>);
	}
} ScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceConfiguration;
	struct Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ButtonProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VendorID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RawInputDeviceConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData[] = {
		{ "Category", "RawInputDeviceConfiguration" },
		{ "ModuleRelativePath", "Public/RawInputDeviceConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties = { "ButtonProperties", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, ButtonProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_Inner = { "ButtonProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData[] = {
		{ "Category", "RawInputDeviceConfiguration" },
		{ "ModuleRelativePath", "Public/RawInputDeviceConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties = { "AxisProperties", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, AxisProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_Inner = { "AxisProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "RawInputDeviceConfiguration" },
		{ "ModuleRelativePath", "Public/RawInputDeviceConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData[] = {
		{ "Category", "RawInputDeviceConfiguration" },
		{ "ModuleRelativePath", "Public/RawInputDeviceConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID = { "VendorID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, VendorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FSDRawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceConfiguration",
		sizeof(FRawInputDeviceConfiguration),
		alignof(FRawInputDeviceConfiguration),
		Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FSDRawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawInputDeviceConfiguration"), sizeof(FRawInputDeviceConfiguration), Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash() { return 3527127312U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
