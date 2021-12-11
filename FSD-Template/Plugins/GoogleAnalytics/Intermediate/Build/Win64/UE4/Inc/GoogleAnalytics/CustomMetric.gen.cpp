// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleAnalytics/Public/CustomMetric.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMetric() {}
// Cross Module References
	GOOGLEANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMetric();
	UPackage* Z_Construct_UPackage__Script_GoogleAnalytics();
// End Cross Module References
class UScriptStruct* FCustomMetric::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GOOGLEANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCustomMetric_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomMetric, Z_Construct_UPackage__Script_GoogleAnalytics(), TEXT("CustomMetric"), sizeof(FCustomMetric), Get_Z_Construct_UScriptStruct_FCustomMetric_Hash());
	}
	return Singleton;
}
template<> GOOGLEANALYTICS_API UScriptStruct* StaticStruct<FCustomMetric>()
{
	return FCustomMetric::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomMetric(FCustomMetric::StaticStruct, TEXT("/Script/GoogleAnalytics"), TEXT("CustomMetric"), false, nullptr, nullptr);
static struct FScriptStruct_GoogleAnalytics_StaticRegisterNativesFCustomMetric
{
	FScriptStruct_GoogleAnalytics_StaticRegisterNativesFCustomMetric()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomMetric")),new UScriptStruct::TCppStructOps<FCustomMetric>);
	}
} ScriptStruct_GoogleAnalytics_StaticRegisterNativesFCustomMetric;
	struct Z_Construct_UScriptStruct_FCustomMetric_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMetric_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomMetric.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomMetric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomMetric>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CustomMetric" },
		{ "ModuleRelativePath", "Public/CustomMetric.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMetric, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "CustomMetric" },
		{ "ModuleRelativePath", "Public/CustomMetric.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMetric, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomMetric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMetric_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomMetric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleAnalytics,
		nullptr,
		&NewStructOps,
		"CustomMetric",
		sizeof(FCustomMetric),
		alignof(FCustomMetric),
		Z_Construct_UScriptStruct_FCustomMetric_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMetric_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMetric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMetric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomMetric()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomMetric_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GoogleAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomMetric"), sizeof(FCustomMetric), Get_Z_Construct_UScriptStruct_FCustomMetric_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomMetric_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomMetric_Hash() { return 1273717325U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
