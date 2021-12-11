// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleAnalytics/Public/CustomDimension.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomDimension() {}
// Cross Module References
	GOOGLEANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDimension();
	UPackage* Z_Construct_UPackage__Script_GoogleAnalytics();
// End Cross Module References
class UScriptStruct* FCustomDimension::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GOOGLEANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCustomDimension_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomDimension, Z_Construct_UPackage__Script_GoogleAnalytics(), TEXT("CustomDimension"), sizeof(FCustomDimension), Get_Z_Construct_UScriptStruct_FCustomDimension_Hash());
	}
	return Singleton;
}
template<> GOOGLEANALYTICS_API UScriptStruct* StaticStruct<FCustomDimension>()
{
	return FCustomDimension::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomDimension(FCustomDimension::StaticStruct, TEXT("/Script/GoogleAnalytics"), TEXT("CustomDimension"), false, nullptr, nullptr);
static struct FScriptStruct_GoogleAnalytics_StaticRegisterNativesFCustomDimension
{
	FScriptStruct_GoogleAnalytics_StaticRegisterNativesFCustomDimension()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomDimension")),new UScriptStruct::TCppStructOps<FCustomDimension>);
	}
} ScriptStruct_GoogleAnalytics_StaticRegisterNativesFCustomDimension;
	struct Z_Construct_UScriptStruct_FCustomDimension_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDimension_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomDimension.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomDimension_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomDimension>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CustomDimension" },
		{ "ModuleRelativePath", "Public/CustomDimension.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomDimension, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "CustomDimension" },
		{ "ModuleRelativePath", "Public/CustomDimension.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomDimension, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomDimension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDimension_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomDimension_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleAnalytics,
		nullptr,
		&NewStructOps,
		"CustomDimension",
		sizeof(FCustomDimension),
		alignof(FCustomDimension),
		Z_Construct_UScriptStruct_FCustomDimension_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDimension_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDimension_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDimension_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomDimension()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomDimension_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GoogleAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomDimension"), sizeof(FCustomDimension), Get_Z_Construct_UScriptStruct_FCustomDimension_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomDimension_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomDimension_Hash() { return 2478731692U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
