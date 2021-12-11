// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDRawInput/Public/RawInputDeviceButtonProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputDeviceButtonProperties() {}
// Cross Module References
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties();
	UPackage* Z_Construct_UPackage__Script_FSDRawInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FRawInputDeviceButtonProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FSDRAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties, Z_Construct_UPackage__Script_FSDRawInput(), TEXT("RawInputDeviceButtonProperties"), sizeof(FRawInputDeviceButtonProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash());
	}
	return Singleton;
}
template<> FSDRAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceButtonProperties>()
{
	return FRawInputDeviceButtonProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawInputDeviceButtonProperties(FRawInputDeviceButtonProperties::StaticStruct, TEXT("/Script/FSDRawInput"), TEXT("RawInputDeviceButtonProperties"), false, nullptr, nullptr);
static struct FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceButtonProperties
{
	FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceButtonProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawInputDeviceButtonProperties")),new UScriptStruct::TCppStructOps<FRawInputDeviceButtonProperties>);
	}
} ScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceButtonProperties;
	struct Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RawInputDeviceButtonProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceButtonProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "RawInputDeviceButtonProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceButtonProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceButtonProperties, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "RawInputDeviceButtonProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceButtonProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRawInputDeviceButtonProperties*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceButtonProperties), &Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FSDRawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceButtonProperties",
		sizeof(FRawInputDeviceButtonProperties),
		alignof(FRawInputDeviceButtonProperties),
		Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FSDRawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawInputDeviceButtonProperties"), sizeof(FRawInputDeviceButtonProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash() { return 1688300679U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
