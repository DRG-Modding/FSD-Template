// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModInfoList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModInfoList() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModInfoList();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModInfoList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModInfo();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult();
// End Cross Module References
class UScriptStruct* FModioOptionalModInfoList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModInfoList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalModInfoList, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalModInfoList"), sizeof(FModioOptionalModInfoList), Get_Z_Construct_UScriptStruct_FModioOptionalModInfoList_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalModInfoList>()
{
	return FModioOptionalModInfoList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalModInfoList(FModioOptionalModInfoList::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalModInfoList"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModInfoList
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModInfoList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalModInfoList")),new UScriptStruct::TCppStructOps<FModioOptionalModInfoList>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalModInfoList;
	struct Z_Construct_UScriptStruct_FModioOptionalModInfoList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalModInfoList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfoList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalModInfoList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalModInfoList>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalModInfoList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalModInfoList",
		sizeof(FModioOptionalModInfoList),
		alignof(FModioOptionalModInfoList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalModInfoList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalModInfoList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModInfoList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModInfoList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalModInfoList"), sizeof(FModioOptionalModInfoList), Get_Z_Construct_UScriptStruct_FModioOptionalModInfoList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalModInfoList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModInfoList_Hash() { return 697457443U; }
	struct Z_Construct_UScriptStruct_FModioModInfoList_Statics
	{
		struct FModioModInfoList
		{
			FModioPagedResult PagedResult;
			TArray<FModioModInfo> InternalList;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfoList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Blueprint mirror of FModioModInfoList that's flattened as blueprints don't understand either template classes or\n// multiple inheritance\n" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfoList.h" },
		{ "ToolTip", "Blueprint mirror of FModioModInfoList that's flattened as blueprints don't understand either template classes or\nmultiple inheritance" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_InternalList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/ModioModInfoList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_InternalList = { "InternalList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfoList, InternalList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_InternalList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_InternalList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_InternalList_Inner = { "InternalList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_PagedResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/ModioModInfoList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_PagedResult = { "PagedResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfoList, PagedResult), Z_Construct_UScriptStruct_FModioPagedResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_PagedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_PagedResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModInfoList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_InternalList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_InternalList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfoList_Statics::NewProp_PagedResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModInfoList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		nullptr,
		"ModioModInfoList",
		sizeof(FModioModInfoList),
		alignof(FModioModInfoList),
		Z_Construct_UScriptStruct_FModioModInfoList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfoList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000208),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfoList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfoList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModInfoList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModInfoList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModInfoList"), sizeof(Z_Construct_UScriptStruct_FModioModInfoList_Statics::FModioModInfoList), Get_Z_Construct_UScriptStruct_FModioModInfoList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModInfoList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModInfoList_Hash() { return 6991141U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
