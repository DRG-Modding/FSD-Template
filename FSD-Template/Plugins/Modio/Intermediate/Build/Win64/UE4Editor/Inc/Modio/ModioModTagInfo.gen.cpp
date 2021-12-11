// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModTagInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModTagInfo() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModTagInfo();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioModTagInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModTagInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModTagInfo, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModTagInfo"), sizeof(FModioModTagInfo), Get_Z_Construct_UScriptStruct_FModioModTagInfo_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModTagInfo>()
{
	return FModioModTagInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModTagInfo(FModioModTagInfo::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModTagInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModTagInfo
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModTagInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModTagInfo")),new UScriptStruct::TCppStructOps<FModioModTagInfo>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModTagInfo;
	struct Z_Construct_UScriptStruct_FModioModTagInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleSelection_MetaData[];
#endif
		static void NewProp_bAllowMultipleSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagGroupValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagGroupValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagGroupValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagGroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModTagInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Metadata about a group of tags that can be used for filtering mods */" },
		{ "ModuleRelativePath", "Public/Types/ModioModTagInfo.h" },
		{ "ToolTip", "@brief Metadata about a group of tags that can be used for filtering mods" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModTagInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_bAllowMultipleSelection_MetaData[] = {
		{ "Category", "mod.io|ModTagInfo" },
		{ "Comment", "/** @brief True if multiple tags from the group can be used simultaneously */" },
		{ "ModuleRelativePath", "Public/Types/ModioModTagInfo.h" },
		{ "ToolTip", "@brief True if multiple tags from the group can be used simultaneously" },
	};
#endif
	void Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_bAllowMultipleSelection_SetBit(void* Obj)
	{
		((FModioModTagInfo*)Obj)->bAllowMultipleSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_bAllowMultipleSelection = { "bAllowMultipleSelection", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModioModTagInfo), &Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_bAllowMultipleSelection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_bAllowMultipleSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_bAllowMultipleSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupValues_MetaData[] = {
		{ "Category", "mod.io|ModTagInfo" },
		{ "Comment", "/** @brief The valid tags the group can have */" },
		{ "ModuleRelativePath", "Public/Types/ModioModTagInfo.h" },
		{ "ToolTip", "@brief The valid tags the group can have" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupValues = { "TagGroupValues", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModTagInfo, TagGroupValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupValues_Inner = { "TagGroupValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupName_MetaData[] = {
		{ "Category", "mod.io|ModTagInfo" },
		{ "Comment", "/** @brief The display name for the tag */" },
		{ "ModuleRelativePath", "Public/Types/ModioModTagInfo.h" },
		{ "ToolTip", "@brief The display name for the tag" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupName = { "TagGroupName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModTagInfo, TagGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModTagInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_bAllowMultipleSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModTagInfo_Statics::NewProp_TagGroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModTagInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModTagInfo",
		sizeof(FModioModTagInfo),
		alignof(FModioModTagInfo),
		Z_Construct_UScriptStruct_FModioModTagInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModTagInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModTagInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModTagInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModTagInfo"), sizeof(FModioModTagInfo), Get_Z_Construct_UScriptStruct_FModioModTagInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModTagInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModTagInfo_Hash() { return 3700213294U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
