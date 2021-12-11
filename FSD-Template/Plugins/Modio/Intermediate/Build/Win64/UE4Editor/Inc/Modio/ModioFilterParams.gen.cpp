// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioFilterParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioFilterParams() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioSortDirection();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioSortFieldType();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFilterParams();
// End Cross Module References
	static UEnum* EModioSortDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioSortDirection, Z_Construct_UPackage__Script_Modio(), TEXT("EModioSortDirection"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioSortDirection>()
	{
		return EModioSortDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioSortDirection(EModioSortDirection_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioSortDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioSortDirection_Hash() { return 269405053U; }
	UEnum* Z_Construct_UEnum_Modio_EModioSortDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioSortDirection"), 0, Get_Z_Construct_UEnum_Modio_EModioSortDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioSortDirection::Ascending", (int64)EModioSortDirection::Ascending },
				{ "EModioSortDirection::Descending", (int64)EModioSortDirection::Descending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ascending.Name", "EModioSortDirection::Ascending" },
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Enum indicating which direction sorting should be applied\n" },
				{ "Descending.Comment", "/** (default) */" },
				{ "Descending.Name", "EModioSortDirection::Descending" },
				{ "Descending.ToolTip", "(default)" },
				{ "ModuleRelativePath", "Public/Types/ModioFilterParams.h" },
				{ "ToolTip", "@brief Enum indicating which direction sorting should be applied" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioSortDirection",
				"EModioSortDirection",
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
	static UEnum* EModioSortFieldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioSortFieldType, Z_Construct_UPackage__Script_Modio(), TEXT("EModioSortFieldType"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioSortFieldType>()
	{
		return EModioSortFieldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioSortFieldType(EModioSortFieldType_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioSortFieldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioSortFieldType_Hash() { return 289143859U; }
	UEnum* Z_Construct_UEnum_Modio_EModioSortFieldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioSortFieldType"), 0, Get_Z_Construct_UEnum_Modio_EModioSortFieldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioSortFieldType::ID", (int64)EModioSortFieldType::ID },
				{ "EModioSortFieldType::DownloadsToday", (int64)EModioSortFieldType::DownloadsToday },
				{ "EModioSortFieldType::SubscriberCount", (int64)EModioSortFieldType::SubscriberCount },
				{ "EModioSortFieldType::Rating", (int64)EModioSortFieldType::Rating },
				{ "EModioSortFieldType::DateMarkedLive", (int64)EModioSortFieldType::DateMarkedLive },
				{ "EModioSortFieldType::DateUpdated", (int64)EModioSortFieldType::DateUpdated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Enum indicating which field should be used to sort the results\n" },
				{ "DateMarkedLive.Comment", "/** use mod rating */" },
				{ "DateMarkedLive.Name", "EModioSortFieldType::DateMarkedLive" },
				{ "DateMarkedLive.ToolTip", "use mod rating" },
				{ "DateUpdated.Comment", "/** use date mod was marked live */" },
				{ "DateUpdated.Name", "EModioSortFieldType::DateUpdated" },
				{ "DateUpdated.ToolTip", "use date mod was marked live" },
				{ "DownloadsToday.Comment", "/** use mod ID (default) */" },
				{ "DownloadsToday.Name", "EModioSortFieldType::DownloadsToday" },
				{ "DownloadsToday.ToolTip", "use mod ID (default)" },
				{ "ID.Name", "EModioSortFieldType::ID" },
				{ "ModuleRelativePath", "Public/Types/ModioFilterParams.h" },
				{ "Rating.Comment", "/** use number of subscribers */" },
				{ "Rating.Name", "EModioSortFieldType::Rating" },
				{ "Rating.ToolTip", "use number of subscribers" },
				{ "SubscriberCount.Comment", "/** use number of downloads in last 24 (exposed in REST API as 'popular' */" },
				{ "SubscriberCount.Name", "EModioSortFieldType::SubscriberCount" },
				{ "SubscriberCount.ToolTip", "use number of downloads in last 24 (exposed in REST API as 'popular'" },
				{ "ToolTip", "@brief Enum indicating which field should be used to sort the results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioSortFieldType",
				"EModioSortFieldType",
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
class UScriptStruct* FModioFilterParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioFilterParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioFilterParams, Z_Construct_UPackage__Script_Modio(), TEXT("ModioFilterParams"), sizeof(FModioFilterParams), Get_Z_Construct_UScriptStruct_FModioFilterParams_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioFilterParams>()
{
	return FModioFilterParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioFilterParams(FModioFilterParams::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioFilterParams"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioFilterParams
{
	FScriptStruct_Modio_StaticRegisterNativesFModioFilterParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioFilterParams")),new UScriptStruct::TCppStructOps<FModioFilterParams>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioFilterParams;
	struct Z_Construct_UScriptStruct_FModioFilterParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFilterParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Class storing a set of filter parameters for use in xref:ListAllModsAsync[] */" },
		{ "ModuleRelativePath", "Public/Types/ModioFilterParams.h" },
		{ "ToolTip", "@brief Class storing a set of filter parameters for use in xref:ListAllModsAsync[]" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioFilterParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioFilterParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioFilterParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioFilterParams",
		sizeof(FModioFilterParams),
		alignof(FModioFilterParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFilterParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFilterParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioFilterParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioFilterParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioFilterParams"), sizeof(FModioFilterParams), Get_Z_Construct_UScriptStruct_FModioFilterParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioFilterParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioFilterParams_Hash() { return 3896928501U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
