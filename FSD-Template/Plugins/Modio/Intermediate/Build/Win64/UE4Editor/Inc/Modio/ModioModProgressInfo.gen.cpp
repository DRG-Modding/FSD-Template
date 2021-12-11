// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModProgressInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModProgressInfo() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModProgressInfo();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModProgressInfo();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
// End Cross Module References
class UScriptStruct* FModioOptionalModProgressInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalModProgressInfo, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalModProgressInfo"), sizeof(FModioOptionalModProgressInfo), Get_Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalModProgressInfo>()
{
	return FModioOptionalModProgressInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalModProgressInfo(FModioOptionalModProgressInfo::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalModProgressInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModProgressInfo
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModProgressInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalModProgressInfo")),new UScriptStruct::TCppStructOps<FModioOptionalModProgressInfo>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalModProgressInfo;
	struct Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioModProgressInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalModProgressInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalModProgressInfo",
		sizeof(FModioOptionalModProgressInfo),
		alignof(FModioOptionalModProgressInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModProgressInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalModProgressInfo"), sizeof(FModioOptionalModProgressInfo), Get_Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModProgressInfo_Hash() { return 3633282717U; }
class UScriptStruct* FModioModProgressInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModProgressInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModProgressInfo, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModProgressInfo"), sizeof(FModioModProgressInfo), Get_Z_Construct_UScriptStruct_FModioModProgressInfo_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModProgressInfo>()
{
	return FModioModProgressInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModProgressInfo(FModioModProgressInfo::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModProgressInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModProgressInfo
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModProgressInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModProgressInfo")),new UScriptStruct::TCppStructOps<FModioModProgressInfo>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModProgressInfo;
	struct Z_Construct_UScriptStruct_FModioModProgressInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyExtractedBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_CurrentlyExtractedBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalExtractedSizeOnDisk_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TotalExtractedSizeOnDisk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyDownloadedBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_CurrentlyDownloadedBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDownloadSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TotalDownloadSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Class representing the progress of a mod installation or update */" },
		{ "ModuleRelativePath", "Public/Types/ModioModProgressInfo.h" },
		{ "ToolTip", "@brief Class representing the progress of a mod installation or update" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModProgressInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ModProgressInfo" },
		{ "Comment", "/** @brief The mod ID of the mod being processed */" },
		{ "ModuleRelativePath", "Public/Types/ModioModProgressInfo.h" },
		{ "ToolTip", "@brief The mod ID of the mod being processed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModProgressInfo, ID), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyExtractedBytes_MetaData[] = {
		{ "Category", "ModProgressInfo|Current" },
		{ "Comment", "/** @brief Amount of data currently extracted */" },
		{ "ModuleRelativePath", "Public/Types/ModioModProgressInfo.h" },
		{ "ToolTip", "@brief Amount of data currently extracted" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyExtractedBytes = { "CurrentlyExtractedBytes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModProgressInfo, CurrentlyExtractedBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyExtractedBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyExtractedBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalExtractedSizeOnDisk_MetaData[] = {
		{ "Category", "ModProgressInfo" },
		{ "Comment", "/** @brief Total size on disk when fully extracted */" },
		{ "ModuleRelativePath", "Public/Types/ModioModProgressInfo.h" },
		{ "ToolTip", "@brief Total size on disk when fully extracted" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalExtractedSizeOnDisk = { "TotalExtractedSizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModProgressInfo, TotalExtractedSizeOnDisk), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalExtractedSizeOnDisk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalExtractedSizeOnDisk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyDownloadedBytes_MetaData[] = {
		{ "Category", "ModProgressInfo|Current" },
		{ "Comment", "/** @brief Current amount downloaded in bytes */" },
		{ "ModuleRelativePath", "Public/Types/ModioModProgressInfo.h" },
		{ "ToolTip", "@brief Current amount downloaded in bytes" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyDownloadedBytes = { "CurrentlyDownloadedBytes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModProgressInfo, CurrentlyDownloadedBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyDownloadedBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyDownloadedBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalDownloadSize_MetaData[] = {
		{ "Category", "ModProgressInfo" },
		{ "Comment", "/** @brief Total size of the downloaded file */" },
		{ "ModuleRelativePath", "Public/Types/ModioModProgressInfo.h" },
		{ "ToolTip", "@brief Total size of the downloaded file" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalDownloadSize = { "TotalDownloadSize", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModProgressInfo, TotalDownloadSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalDownloadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalDownloadSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyExtractedBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalExtractedSizeOnDisk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_CurrentlyDownloadedBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::NewProp_TotalDownloadSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModProgressInfo",
		sizeof(FModioModProgressInfo),
		alignof(FModioModProgressInfo),
		Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModProgressInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModProgressInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModProgressInfo"), sizeof(FModioModProgressInfo), Get_Z_Construct_UScriptStruct_FModioModProgressInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModProgressInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModProgressInfo_Hash() { return 4007754148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
