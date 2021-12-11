// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDRawInput/Public/RawInputDeviceAxisToButtonProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputDeviceAxisToButtonProperties() {}
// Cross Module References
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties();
	UPackage* Z_Construct_UPackage__Script_FSDRawInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FRawInputDeviceAxisToButtonProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FSDRAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties, Z_Construct_UPackage__Script_FSDRawInput(), TEXT("RawInputDeviceAxisToButtonProperties"), sizeof(FRawInputDeviceAxisToButtonProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Hash());
	}
	return Singleton;
}
template<> FSDRAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceAxisToButtonProperties>()
{
	return FRawInputDeviceAxisToButtonProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawInputDeviceAxisToButtonProperties(FRawInputDeviceAxisToButtonProperties::StaticStruct, TEXT("/Script/FSDRawInput"), TEXT("RawInputDeviceAxisToButtonProperties"), false, nullptr, nullptr);
static struct FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceAxisToButtonProperties
{
	FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceAxisToButtonProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawInputDeviceAxisToButtonProperties")),new UScriptStruct::TCppStructOps<FRawInputDeviceAxisToButtonProperties>);
	}
} ScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceAxisToButtonProperties;
	struct Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisToButtonProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceAxisToButtonProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_ButtonKey_MetaData[] = {
		{ "Category", "RawInputDeviceAxisToButtonProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisToButtonProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_ButtonKey = { "ButtonKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisToButtonProperties, ButtonKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_ButtonKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_ButtonKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisThreshold_MetaData[] = {
		{ "Category", "RawInputDeviceAxisToButtonProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisToButtonProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisThreshold = { "AxisThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisToButtonProperties, AxisThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisValue_MetaData[] = {
		{ "Category", "RawInputDeviceAxisToButtonProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisToButtonProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisToButtonProperties, AxisValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_ButtonKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::NewProp_AxisValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FSDRawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceAxisToButtonProperties",
		sizeof(FRawInputDeviceAxisToButtonProperties),
		alignof(FRawInputDeviceAxisToButtonProperties),
		Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FSDRawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawInputDeviceAxisToButtonProperties"), sizeof(FRawInputDeviceAxisToButtonProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties_Hash() { return 2149737447U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
