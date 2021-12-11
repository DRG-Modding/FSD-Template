// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioPagedResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioPagedResult() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioPagedResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioPagedResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioPagedResult, Z_Construct_UPackage__Script_Modio(), TEXT("ModioPagedResult"), sizeof(FModioPagedResult), Get_Z_Construct_UScriptStruct_FModioPagedResult_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioPagedResult>()
{
	return FModioPagedResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioPagedResult(FModioPagedResult::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioPagedResult"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioPagedResult
{
	FScriptStruct_Modio_StaticRegisterNativesFModioPagedResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioPagedResult")),new UScriptStruct::TCppStructOps<FModioPagedResult>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioPagedResult;
	struct Z_Construct_UScriptStruct_FModioPagedResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResultCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalResultCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalResultCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioPagedResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for all api endpoints that can return paged results */" },
		{ "ModuleRelativePath", "Public/Types/ModioPagedResult.h" },
		{ "ToolTip", "Base class for all api endpoints that can return paged results" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioPagedResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_ResultCount_MetaData[] = {
		{ "Category", "mod.io|PagedResult" },
		{ "ModuleRelativePath", "Public/Types/ModioPagedResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_ResultCount = { "ResultCount", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioPagedResult, ResultCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_ResultCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_ResultCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_TotalResultCount_MetaData[] = {
		{ "Category", "mod.io|PagedResult" },
		{ "ModuleRelativePath", "Public/Types/ModioPagedResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_TotalResultCount = { "TotalResultCount", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioPagedResult, TotalResultCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_TotalResultCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_TotalResultCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageCount_MetaData[] = {
		{ "Category", "mod.io|PagedResult|Page" },
		{ "ModuleRelativePath", "Public/Types/ModioPagedResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageCount = { "PageCount", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioPagedResult, PageCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageSize_MetaData[] = {
		{ "Category", "mod.io|PagedResult|Page" },
		{ "ModuleRelativePath", "Public/Types/ModioPagedResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioPagedResult, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageIndex_MetaData[] = {
		{ "Category", "mod.io|PagedResult|Page" },
		{ "ModuleRelativePath", "Public/Types/ModioPagedResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioPagedResult, PageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioPagedResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_ResultCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_TotalResultCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioPagedResult_Statics::NewProp_PageIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioPagedResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioPagedResult",
		sizeof(FModioPagedResult),
		alignof(FModioPagedResult),
		Z_Construct_UScriptStruct_FModioPagedResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioPagedResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioPagedResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioPagedResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioPagedResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioPagedResult"), sizeof(FModioPagedResult), Get_Z_Construct_UScriptStruct_FModioPagedResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioPagedResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioPagedResult_Hash() { return 114374930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
