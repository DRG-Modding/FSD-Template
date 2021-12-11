// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModStats() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModStats();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioModStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModStats, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModStats"), sizeof(FModioModStats), Get_Z_Construct_UScriptStruct_FModioModStats_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModStats>()
{
	return FModioModStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModStats(FModioModStats::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModStats"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModStats
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModStats")),new UScriptStruct::TCppStructOps<FModioModStats>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModStats;
	struct Z_Construct_UScriptStruct_FModioModStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatingDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RatingDisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatingWeightedAggregate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RatingWeightedAggregate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatingPercentagePositive_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_RatingPercentagePositive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatingNegative_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_RatingNegative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatingPositive_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_RatingPositive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatingTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_RatingTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscribersTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SubscribersTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadsTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DownloadsTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopularityRankTotalMods_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_PopularityRankTotalMods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopularityRankPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_PopularityRankPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Contains download stats and ratings for a mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Contains download stats and ratings for a mod" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingDisplayText_MetaData[] = {
		{ "Category", "ModStats|Rating" },
		{ "Comment", "/**\n\x09 * @brief Textual representation of the rating in format: Overwhelmingly\n\x09 * Positive -> Very Positive -> Positive -> Mostly Positive -> Mixed ->\n\x09 * Negative -> Mostly Negative -> Very Negative -> Overwhelmingly\n\x09 * Negative -> Unrated\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Textual representation of the rating in format: Overwhelmingly\nPositive -> Very Positive -> Positive -> Mostly Positive -> Mixed ->\nNegative -> Mostly Negative -> Very Negative -> Overwhelmingly\nNegative -> Unrated" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingDisplayText = { "RatingDisplayText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, RatingDisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingDisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingWeightedAggregate_MetaData[] = {
		{ "Category", "ModStats|Rating" },
		{ "Comment", "/**\n\x09 * @brief Overall rating of this item calculated using the [Wilson score confidence\n\x09 * interval](https://www.evanmiller.org/how-not-to-sort-by-average-Ratinghtml). This column is good to sort\n\x09 * on, as it will order items based on number of ratings and will place items with many positive ratings\n\x09 * above those with a higher score but fewer ratings.\n\x09 * We actually get a double back from the server, but it's converted to a float for blueprint support\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Overall rating of this item calculated using the [Wilson score confidence\ninterval](https://www.evanmiller.org/how-not-to-sort-by-average-Ratinghtml). This column is good to sort\non, as it will order items based on number of ratings and will place items with many positive ratings\nabove those with a higher score but fewer ratings.\nWe actually get a double back from the server, but it's converted to a float for blueprint support" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingWeightedAggregate = { "RatingWeightedAggregate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, RatingWeightedAggregate), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingWeightedAggregate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingWeightedAggregate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPercentagePositive_MetaData[] = {
		{ "Category", "ModStats|Rating" },
		{ "Comment", "/** @brief Number of positive ratings, divided by the total ratings to determine it\xe2\x80\x99s percentage score. */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Number of positive ratings, divided by the total ratings to determine it\xe2\x80\x99s percentage score." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPercentagePositive = { "RatingPercentagePositive", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, RatingPercentagePositive), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPercentagePositive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPercentagePositive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingNegative_MetaData[] = {
		{ "Category", "ModStats|Rating" },
		{ "Comment", "/** @brief Number of negative ratings. */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Number of negative ratings." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingNegative = { "RatingNegative", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, RatingNegative), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingNegative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingNegative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPositive_MetaData[] = {
		{ "Category", "ModStats|Rating" },
		{ "Comment", "/** @brief Number of positive ratings. */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Number of positive ratings." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPositive = { "RatingPositive", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, RatingPositive), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPositive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPositive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingTotal_MetaData[] = {
		{ "Category", "ModStats|Rating" },
		{ "Comment", "/** @brief Number of times this mod has been rated. */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Number of times this mod has been rated." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingTotal = { "RatingTotal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, RatingTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_SubscribersTotal_MetaData[] = {
		{ "Category", "ModStats" },
		{ "Comment", "/** @brief Number of total users who have subscribed to the mod.  */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Number of total users who have subscribed to the mod." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_SubscribersTotal = { "SubscribersTotal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, SubscribersTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_SubscribersTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_SubscribersTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_DownloadsTotal_MetaData[] = {
		{ "Category", "ModStats" },
		{ "Comment", "/** @brief Number of total mod downloads.  */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Number of total mod downloads." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_DownloadsTotal = { "DownloadsTotal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, DownloadsTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_DownloadsTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_DownloadsTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankTotalMods_MetaData[] = {
		{ "Category", "ModStats|Popularity" },
		{ "Comment", "/** @brief Number of ranking spots the current rank is measured against.  */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Number of ranking spots the current rank is measured against." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankTotalMods = { "PopularityRankTotalMods", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, PopularityRankTotalMods), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankTotalMods_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankTotalMods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankPosition_MetaData[] = {
		{ "Category", "ModStats|Popularity" },
		{ "Comment", "/** @brief Current rank of the mod. */" },
		{ "ModuleRelativePath", "Public/Types/ModioModStats.h" },
		{ "ToolTip", "@brief Current rank of the mod." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankPosition = { "PopularityRankPosition", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModStats, PopularityRankPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingDisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingWeightedAggregate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPercentagePositive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingNegative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingPositive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_RatingTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_SubscribersTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_DownloadsTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankTotalMods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModStats_Statics::NewProp_PopularityRankPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModStats",
		sizeof(FModioModStats),
		alignof(FModioModStats),
		Z_Construct_UScriptStruct_FModioModStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModStats"), sizeof(FModioModStats), Get_Z_Construct_UScriptStruct_FModioModStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModStats_Hash() { return 717027228U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
