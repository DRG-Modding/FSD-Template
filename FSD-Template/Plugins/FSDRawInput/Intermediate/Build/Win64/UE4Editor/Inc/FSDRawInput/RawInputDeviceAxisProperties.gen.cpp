// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDRawInput/Public/RawInputDeviceAxisProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputDeviceAxisProperties() {}
// Cross Module References
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties();
	UPackage* Z_Construct_UPackage__Script_FSDRawInput();
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FRawInputDeviceAxisProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FSDRAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties, Z_Construct_UPackage__Script_FSDRawInput(), TEXT("RawInputDeviceAxisProperties"), sizeof(FRawInputDeviceAxisProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash());
	}
	return Singleton;
}
template<> FSDRAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceAxisProperties>()
{
	return FRawInputDeviceAxisProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawInputDeviceAxisProperties(FRawInputDeviceAxisProperties::StaticStruct, TEXT("/Script/FSDRawInput"), TEXT("RawInputDeviceAxisProperties"), false, nullptr, nullptr);
static struct FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceAxisProperties
{
	FScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceAxisProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawInputDeviceAxisProperties")),new UScriptStruct::TCppStructOps<FRawInputDeviceAxisProperties>);
	}
} ScriptStruct_FSDRawInput_StaticRegisterNativesFRawInputDeviceAxisProperties;
	struct Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisToButtonMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisToButtonMapping;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisToButtonMapping_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGamepadStick_MetaData[];
#endif
		static void NewProp_bGamepadStick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGamepadStick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverted_MetaData[];
#endif
		static void NewProp_bInverted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMapToButton_MetaData[];
#endif
		static void NewProp_bMapToButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMapToButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceAxisProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_AxisToButtonMapping_MetaData[] = {
		{ "Category", "RawInputDeviceAxisProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_AxisToButtonMapping = { "AxisToButtonMapping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisProperties, AxisToButtonMapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_AxisToButtonMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_AxisToButtonMapping_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_AxisToButtonMapping_Inner = { "AxisToButtonMapping", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawInputDeviceAxisToButtonProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "RawInputDeviceAxisProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisProperties, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_MetaData[] = {
		{ "Category", "RawInputDeviceAxisProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bGamepadStick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick = { "bGamepadStick", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData[] = {
		{ "Category", "RawInputDeviceAxisProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bInverted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted = { "bInverted", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "RawInputDeviceAxisProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisProperties, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bMapToButton_MetaData[] = {
		{ "Category", "RawInputDeviceAxisProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bMapToButton_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bMapToButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bMapToButton = { "bMapToButton", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bMapToButton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bMapToButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bMapToButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "RawInputDeviceAxisProperties" },
		{ "ModuleRelativePath", "Public/RawInputDeviceAxisProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_AxisToButtonMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_AxisToButtonMapping_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bMapToButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FSDRawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceAxisProperties",
		sizeof(FRawInputDeviceAxisProperties),
		alignof(FRawInputDeviceAxisProperties),
		Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FSDRawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawInputDeviceAxisProperties"), sizeof(FRawInputDeviceAxisProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash() { return 2537647928U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
