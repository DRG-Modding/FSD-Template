// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModDependencyList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModDependencyList() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModDependencyList();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModDependencyList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModDependency();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
// End Cross Module References
class UScriptStruct* FModioOptionalModDependencyList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalModDependencyList, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalModDependencyList"), sizeof(FModioOptionalModDependencyList), Get_Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalModDependencyList>()
{
	return FModioOptionalModDependencyList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalModDependencyList(FModioOptionalModDependencyList::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalModDependencyList"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModDependencyList
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModDependencyList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalModDependencyList")),new UScriptStruct::TCppStructOps<FModioOptionalModDependencyList>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalModDependencyList;
	struct Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioModDependencyList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalModDependencyList>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalModDependencyList",
		sizeof(FModioOptionalModDependencyList),
		alignof(FModioOptionalModDependencyList),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModDependencyList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalModDependencyList"), sizeof(FModioOptionalModDependencyList), Get_Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModDependencyList_Hash() { return 582712939U; }
class UScriptStruct* FModioModDependencyList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModDependencyList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModDependencyList, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModDependencyList"), sizeof(FModioModDependencyList), Get_Z_Construct_UScriptStruct_FModioModDependencyList_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModDependencyList>()
{
	return FModioModDependencyList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModDependencyList(FModioModDependencyList::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModDependencyList"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModDependencyList
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModDependencyList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModDependencyList")),new UScriptStruct::TCppStructOps<FModioModDependencyList>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModDependencyList;
	struct Z_Construct_UScriptStruct_FModioModDependencyList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModDependencyList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Paged list of mod dependencies\n * @experimental\n */" },
		{ "ModuleRelativePath", "Public/Types/ModioModDependencyList.h" },
		{ "ToolTip", "@brief Paged list of mod dependencies\n@experimental" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModDependencyList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_InternalList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/ModioModDependencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_InternalList = { "InternalList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModDependencyList, InternalList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_InternalList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_InternalList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_InternalList_Inner = { "InternalList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModDependency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_PagedResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/ModioModDependencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_PagedResult = { "PagedResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModDependencyList, PagedResult), Z_Construct_UScriptStruct_FModioPagedResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_PagedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_PagedResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModDependencyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_InternalList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_InternalList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModDependencyList_Statics::NewProp_PagedResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModDependencyList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModDependencyList",
		sizeof(FModioModDependencyList),
		alignof(FModioModDependencyList),
		Z_Construct_UScriptStruct_FModioModDependencyList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependencyList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModDependencyList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependencyList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModDependencyList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModDependencyList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModDependencyList"), sizeof(FModioModDependencyList), Get_Z_Construct_UScriptStruct_FModioModDependencyList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModDependencyList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModDependencyList_Hash() { return 3233483940U; }
class UScriptStruct* FModioModDependency::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModDependency_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModDependency, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModDependency"), sizeof(FModioModDependency), Get_Z_Construct_UScriptStruct_FModioModDependency_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModDependency>()
{
	return FModioModDependency::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModDependency(FModioModDependency::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModDependency"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModDependency
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModDependency()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModDependency")),new UScriptStruct::TCppStructOps<FModioModDependency>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModDependency;
	struct Z_Construct_UScriptStruct_FModioModDependency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModDependency_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Minimal data about a mod which is a dependency of another mod\n * @experimental\n */" },
		{ "ModuleRelativePath", "Public/Types/ModioModDependencyList.h" },
		{ "ToolTip", "@brief Minimal data about a mod which is a dependency of another mod\n@experimental" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModDependency>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModName_MetaData[] = {
		{ "Category", "ModioModDependency" },
		{ "Comment", "/**\n\x09 * @brief The name of the dependency\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/ModioModDependencyList.h" },
		{ "ToolTip", "@brief The name of the dependency" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModDependency, ModName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModID_MetaData[] = {
		{ "Category", "ModioModDependency" },
		{ "Comment", "/**\n\x09 * @brief The ID of the dependency\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/ModioModDependencyList.h" },
		{ "ToolTip", "@brief The ID of the dependency" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModID = { "ModID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModDependency, ModID), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModDependency_Statics::NewProp_ModID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModDependency",
		sizeof(FModioModDependency),
		alignof(FModioModDependency),
		Z_Construct_UScriptStruct_FModioModDependency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModDependency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModDependency()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModDependency_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModDependency"), sizeof(FModioModDependency), Get_Z_Construct_UScriptStruct_FModioModDependency_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModDependency_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModDependency_Hash() { return 253689412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
