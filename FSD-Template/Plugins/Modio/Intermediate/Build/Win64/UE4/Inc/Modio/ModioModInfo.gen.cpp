// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModInfo() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioMaturityFlags();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModInfo();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModInfo();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModStats();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioSketchfabURLList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioYoutubeURLList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModTag();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioMetadata();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFileMetadata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioUser();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
// End Cross Module References
	static UEnum* EModioMaturityFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioMaturityFlags, Z_Construct_UPackage__Script_Modio(), TEXT("EModioMaturityFlags"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioMaturityFlags>()
	{
		return EModioMaturityFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioMaturityFlags(EModioMaturityFlags_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioMaturityFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioMaturityFlags_Hash() { return 3689009081U; }
	UEnum* Z_Construct_UEnum_Modio_EModioMaturityFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioMaturityFlags"), 0, Get_Z_Construct_UEnum_Modio_EModioMaturityFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioMaturityFlags::None", (int64)EModioMaturityFlags::None },
				{ "EModioMaturityFlags::Alcohol", (int64)EModioMaturityFlags::Alcohol },
				{ "EModioMaturityFlags::Drugs", (int64)EModioMaturityFlags::Drugs },
				{ "EModioMaturityFlags::Violence", (int64)EModioMaturityFlags::Violence },
				{ "EModioMaturityFlags::Explicit", (int64)EModioMaturityFlags::Explicit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alcohol.Name", "EModioMaturityFlags::Alcohol" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Drugs.Name", "EModioMaturityFlags::Drugs" },
				{ "Explicit.Name", "EModioMaturityFlags::Explicit" },
				{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
				{ "None.Name", "EModioMaturityFlags::None" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
				{ "Violence.Name", "EModioMaturityFlags::Violence" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioMaturityFlags",
				"EModioMaturityFlags",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FModioOptionalModInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalModInfo, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalModInfo"), sizeof(FModioOptionalModInfo), Get_Z_Construct_UScriptStruct_FModioOptionalModInfo_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalModInfo>()
{
	return FModioOptionalModInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalModInfo(FModioOptionalModInfo::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalModInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModInfo
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalModInfo")),new UScriptStruct::TCppStructOps<FModioOptionalModInfo>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalModInfo;
	struct Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalModInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalModInfo",
		sizeof(FModioOptionalModInfo),
		alignof(FModioOptionalModInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalModInfo"), sizeof(FModioOptionalModInfo), Get_Z_Construct_UScriptStruct_FModioOptionalModInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalModInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModInfo_Hash() { return 3446077784U; }
class UScriptStruct* FModioModInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModInfo, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModInfo"), sizeof(FModioModInfo), Get_Z_Construct_UScriptStruct_FModioModInfo_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModInfo>()
{
	return FModioModInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModInfo(FModioModInfo::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModInfo
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModInfo")),new UScriptStruct::TCppStructOps<FModioModInfo>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModInfo;
	struct Z_Construct_UScriptStruct_FModioModInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SketchfabURLs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SketchfabURLs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YoutubeURLs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YoutubeURLs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumGalleryImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumGalleryImages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetadataKvp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetadataKvp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetadataKvp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetadataBlob_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetadataBlob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileMaturityOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProfileMaturityOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProfileMaturityOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileDateLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileDateLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileDateUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileDateUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileDateAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileDateAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileSubmittedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileSubmittedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileDescriptionPlaintext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileDescriptionPlaintext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileSummary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileSummary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Full mod profile including current release information, media links, and stats */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Full mod profile including current release information, media links, and stats" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** @brief Stats and rating information for the mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Stats and rating information for the mod" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, Stats), Z_Construct_UScriptStruct_FModioModStats, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Stats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_SketchfabURLs_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** @brief List of sketchfab links provided by the creator of the mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief List of sketchfab links provided by the creator of the mod" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_SketchfabURLs = { "SketchfabURLs", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, SketchfabURLs), Z_Construct_UScriptStruct_FModioSketchfabURLList, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_SketchfabURLs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_SketchfabURLs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_YoutubeURLs_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** @brief List of youtube links provided by the creator of the mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief List of youtube links provided by the creator of the mod" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_YoutubeURLs = { "YoutubeURLs", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, YoutubeURLs), Z_Construct_UScriptStruct_FModioYoutubeURLList, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_YoutubeURLs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_YoutubeURLs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_NumGalleryImages_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** @brief Number of images in the mod's media gallery */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Number of images in the mod's media gallery" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_NumGalleryImages = { "NumGalleryImages", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, NumGalleryImages), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_NumGalleryImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_NumGalleryImages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "/** @brief Tags this mod has set */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Tags this mod has set" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataKvp_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "/** @brief Arbitrary key-value metadata set for this mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Arbitrary key-value metadata set for this mod" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataKvp = { "MetadataKvp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, MetadataKvp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataKvp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataKvp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataKvp_Inner = { "MetadataKvp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioMetadata, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_FileInfo_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** @brief Information about the mod's most recent public release */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Information about the mod's most recent public release" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_FileInfo = { "FileInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, FileInfo), Z_Construct_UScriptStruct_FModioFileMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_FileInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_FileInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataBlob_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataBlob = { "MetadataBlob", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, MetadataBlob), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataBlob_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataBlob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileMaturityOption_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/**\n\x09 * @brief Flags for maturity options\n\x09 * Maturity options flagged by the mod developer, this is only relevant if the parent game allows mods to\n\x09 * be labeled as mature.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Flags for maturity options\nMaturity options flagged by the mod developer, this is only relevant if the parent game allows mods to\nbe labeled as mature." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileMaturityOption = { "ProfileMaturityOption", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileMaturityOption), Z_Construct_UEnum_Modio_EModioMaturityFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileMaturityOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileMaturityOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileMaturityOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateLive_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Unix timestamp of the date the mod was marked live */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Unix timestamp of the date the mod was marked live" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateLive = { "ProfileDateLive", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileDateLive), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateUpdated_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Unix timestamp of the date the mod was updated */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Unix timestamp of the date the mod was updated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateUpdated = { "ProfileDateUpdated", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileDateUpdated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateAdded_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Unix timestamp of the date the mod was registered */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Unix timestamp of the date the mod was registered" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateAdded = { "ProfileDateAdded", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileDateAdded), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSubmittedBy_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Information on the user who submitted the mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Information on the user who submitted the mod" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSubmittedBy = { "ProfileSubmittedBy", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileSubmittedBy), Z_Construct_UScriptStruct_FModioUser, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSubmittedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSubmittedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileURL_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief URL to the mod profile */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief URL to the mod profile" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileURL = { "ProfileURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescriptionPlaintext_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Detailed description in plaintext */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Detailed description in plaintext" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescriptionPlaintext = { "ProfileDescriptionPlaintext", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileDescriptionPlaintext), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescriptionPlaintext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescriptionPlaintext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescription_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Detailed description in HTML format */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Detailed description in HTML format" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescription = { "ProfileDescription", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSummary_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Summary of the mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Summary of the mod" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSummary = { "ProfileSummary", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileSummary), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSummary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSummary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** @brief Name of the mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Name of the mod" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ModId_MetaData[] = {
		{ "Category", "ModInfo" },
		{ "Comment", "/** @brief Unique Mod ID */" },
		{ "ModuleRelativePath", "Public/Types/ModioModInfo.h" },
		{ "ToolTip", "@brief Unique Mod ID" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModInfo, ModId), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ModId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ModId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_SketchfabURLs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_YoutubeURLs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_NumGalleryImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataKvp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataKvp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_FileInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_MetadataBlob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileMaturityOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileMaturityOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDateAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSubmittedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescriptionPlaintext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileSummary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModInfo_Statics::NewProp_ModId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModInfo",
		sizeof(FModioModInfo),
		alignof(FModioModInfo),
		Z_Construct_UScriptStruct_FModioModInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModInfo"), sizeof(FModioModInfo), Get_Z_Construct_UScriptStruct_FModioModInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModInfo_Hash() { return 1840803742U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
