// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModTagOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModTagOptions() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModTagOptions();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModTagOptions();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModTagInfo();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult();
// End Cross Module References
class UScriptStruct* FModioOptionalModTagOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalModTagOptions, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalModTagOptions"), sizeof(FModioOptionalModTagOptions), Get_Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalModTagOptions>()
{
	return FModioOptionalModTagOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalModTagOptions(FModioOptionalModTagOptions::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalModTagOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModTagOptions
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModTagOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalModTagOptions")),new UScriptStruct::TCppStructOps<FModioOptionalModTagOptions>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalModTagOptions;
	struct Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioModTagOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalModTagOptions>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalModTagOptions",
		sizeof(FModioOptionalModTagOptions),
		alignof(FModioOptionalModTagOptions),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModTagOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalModTagOptions"), sizeof(FModioOptionalModTagOptions), Get_Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModTagOptions_Hash() { return 309382092U; }
	struct Z_Construct_UScriptStruct_FModioModTagOptions_Statics
	{
		struct FModioModTagOptions
		{
			FModioPagedResult PagedResult;
			TArray<FModioModTagInfo> InternalList;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InternalList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InternalList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PagedResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PagedResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModTagOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Blueprint mirror of FModioModTagOptions that's flattened as blueprints don't understand either template classes or\n// multiple inheritance\n" },
		{ "ModuleRelativePath", "Public/Types/ModioModTagOptions.h" },
		{ "ToolTip", "Blueprint mirror of FModioModTagOptions that's flattened as blueprints don't understand either template classes or\nmultiple inheritance" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_InternalList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/ModioModTagOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_InternalList = { "InternalList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModTagOptions, InternalList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_InternalList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_InternalList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_InternalList_Inner = { "InternalList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModTagInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_PagedResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/ModioModTagOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_PagedResult = { "PagedResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModTagOptions, PagedResult), Z_Construct_UScriptStruct_FModioPagedResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_PagedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_PagedResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModTagOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_InternalList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_InternalList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModTagOptions_Statics::NewProp_PagedResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModTagOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		nullptr,
		"ModioModTagOptions",
		sizeof(FModioModTagOptions),
		alignof(FModioModTagOptions),
		Z_Construct_UScriptStruct_FModioModTagOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000208),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModTagOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModTagOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModTagOptions"), sizeof(Z_Construct_UScriptStruct_FModioModTagOptions_Statics::FModioModTagOptions), Get_Z_Construct_UScriptStruct_FModioModTagOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModTagOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModTagOptions_Hash() { return 2958873849U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
