// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioFilterParamsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioFilterParamsLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioFilterParamsLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioFilterParamsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFilterParams();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioSortDirection();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioSortFieldType();
// End Cross Module References
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execMetadataLike)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::MetadataLike(Z_Param_Out_Filter,Z_Param_SearchString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execPagedResults)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FInt64Property,Z_Param_PageNumber);
		P_GET_PROPERTY(FInt64Property,Z_Param_PageSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::PagedResults(Z_Param_Out_Filter,Z_Param_PageNumber,Z_Param_PageSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execIndexedResults)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FInt64Property,Z_Param_StartIndex);
		P_GET_PROPERTY(FInt64Property,Z_Param_ResultCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::IndexedResults(Z_Param_Out_Filter,Z_Param_StartIndex,Z_Param_ResultCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execWithoutTags)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_TARRAY_REF(FString,Z_Param_Out_NewTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::WithoutTags(Z_Param_Out_Filter,Z_Param_Out_NewTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execWithoutTag)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::WithoutTag(Z_Param_Out_Filter,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execWithTags)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_TARRAY_REF(FString,Z_Param_Out_NewTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::WithTags(Z_Param_Out_Filter,Z_Param_Out_NewTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execWithTag)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::WithTag(Z_Param_Out_Filter,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execMarkedLiveBefore)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_STRUCT(FDateTime,Z_Param_LiveBefore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::MarkedLiveBefore(Z_Param_Out_Filter,Z_Param_LiveBefore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execMarkedLiveAfter)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_STRUCT(FDateTime,Z_Param_LiveAfter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::MarkedLiveAfter(Z_Param_Out_Filter,Z_Param_LiveAfter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execNameContainsStrings)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::NameContainsStrings(Z_Param_Out_Filter,Z_Param_SearchString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execNameContains)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::NameContains(Z_Param_Out_Filter,Z_Param_SearchString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execSortBy)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_ENUM(EModioSortFieldType,Z_Param_ByField);
		P_GET_ENUM(EModioSortDirection,Z_Param_ByDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::SortBy(Z_Param_Out_Filter,EModioSortFieldType(Z_Param_ByField),EModioSortDirection(Z_Param_ByDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execExcludingIDs)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_TARRAY_REF(FModioModID,Z_Param_Out_IDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::ExcludingIDs(Z_Param_Out_Filter,Z_Param_Out_IDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioFilterParamsLibrary::execMatchingIDs)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_TARRAY_REF(FModioModID,Z_Param_Out_IDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioFilterParams*)Z_Param__Result=UModioFilterParamsLibrary::MatchingIDs(Z_Param_Out_Filter,Z_Param_Out_IDs);
		P_NATIVE_END;
	}
	void UModioFilterParamsLibrary::StaticRegisterNativesUModioFilterParamsLibrary()
	{
		UClass* Class = UModioFilterParamsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExcludingIDs", &UModioFilterParamsLibrary::execExcludingIDs },
			{ "IndexedResults", &UModioFilterParamsLibrary::execIndexedResults },
			{ "MarkedLiveAfter", &UModioFilterParamsLibrary::execMarkedLiveAfter },
			{ "MarkedLiveBefore", &UModioFilterParamsLibrary::execMarkedLiveBefore },
			{ "MatchingIDs", &UModioFilterParamsLibrary::execMatchingIDs },
			{ "MetadataLike", &UModioFilterParamsLibrary::execMetadataLike },
			{ "NameContains", &UModioFilterParamsLibrary::execNameContains },
			{ "NameContainsStrings", &UModioFilterParamsLibrary::execNameContainsStrings },
			{ "PagedResults", &UModioFilterParamsLibrary::execPagedResults },
			{ "SortBy", &UModioFilterParamsLibrary::execSortBy },
			{ "WithoutTag", &UModioFilterParamsLibrary::execWithoutTag },
			{ "WithoutTags", &UModioFilterParamsLibrary::execWithoutTags },
			{ "WithTag", &UModioFilterParamsLibrary::execWithTag },
			{ "WithTags", &UModioFilterParamsLibrary::execWithTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics
	{
		struct ModioFilterParamsLibrary_eventExcludingIDs_Parms
		{
			FModioFilterParams Filter;
			TArray<FModioModID> IDs;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventExcludingIDs_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_IDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventExcludingIDs_Parms, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_IDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_IDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventExcludingIDs_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_IDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_IDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Indicates the filter should exclude the specified mods.\n\x09 * @param IDs the set of mods to exclude\n\x09 * @return *this\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Indicates the filter should exclude the specified mods.\n@param IDs the set of mods to exclude\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "ExcludingIDs", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventExcludingIDs_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics
	{
		struct ModioFilterParamsLibrary_eventIndexedResults_Parms
		{
			FModioFilterParams Filter;
			int64 StartIndex;
			int64 ResultCount;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ResultCount;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventIndexedResults_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_ResultCount = { "ResultCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventIndexedResults_Parms, ResultCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventIndexedResults_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventIndexedResults_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_ResultCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Returns a sub-range of query results from StartIndex to StartIndex + ResultCount\n\x09 * @param StartIndex Zero-based index of first result to return\n\x09 * @param ResultCount Number of results to return\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Returns a sub-range of query results from StartIndex to StartIndex + ResultCount\n@param StartIndex Zero-based index of first result to return\n@param ResultCount Number of results to return\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "IndexedResults", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventIndexedResults_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics
	{
		struct ModioFilterParamsLibrary_eventMarkedLiveAfter_Parms
		{
			FModioFilterParams Filter;
			FDateTime LiveAfter;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveAfter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMarkedLiveAfter_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::NewProp_LiveAfter = { "LiveAfter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMarkedLiveAfter_Parms, LiveAfter), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMarkedLiveAfter_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::NewProp_LiveAfter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods that were marked live (i.e released) after the specified date\n\x09 * @param LiveAfter Minimum date\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods that were marked live (i.e released) after the specified date\n@param LiveAfter Minimum date\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "MarkedLiveAfter", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventMarkedLiveAfter_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics
	{
		struct ModioFilterParamsLibrary_eventMarkedLiveBefore_Parms
		{
			FModioFilterParams Filter;
			FDateTime LiveBefore;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveBefore;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMarkedLiveBefore_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::NewProp_LiveBefore = { "LiveBefore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMarkedLiveBefore_Parms, LiveBefore), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMarkedLiveBefore_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::NewProp_LiveBefore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods that were marked live (i.e released) before the specified date\n\x09 * @param LiveBefore Maximum date\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods that were marked live (i.e released) before the specified date\n@param LiveBefore Maximum date\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "MarkedLiveBefore", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventMarkedLiveBefore_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics
	{
		struct ModioFilterParamsLibrary_eventMatchingIDs_Parms
		{
			FModioFilterParams Filter;
			TArray<FModioModID> IDs;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMatchingIDs_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_IDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMatchingIDs_Parms, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_IDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_IDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMatchingIDs_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_IDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_IDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Indicates the filter should only include the specified mods\n\x09 * @param IDs the set of mods to match\n\x09 * @return *this\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Indicates the filter should only include the specified mods\n@param IDs the set of mods to match\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "MatchingIDs", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventMatchingIDs_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics
	{
		struct ModioFilterParamsLibrary_eventMetadataLike_Parms
		{
			FModioFilterParams Filter;
			FString SearchString;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMetadataLike_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::NewProp_SearchString = { "SearchString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMetadataLike_Parms, SearchString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventMetadataLike_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::NewProp_SearchString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods with a metadata blob containing the specified substring\n\x09 * @param SearchString The substring to search for\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods with a metadata blob containing the specified substring\n@param SearchString The substring to search for\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "MetadataLike", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventMetadataLike_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics
	{
		struct ModioFilterParamsLibrary_eventNameContains_Parms
		{
			FModioFilterParams Filter;
			FString SearchString;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventNameContains_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_SearchString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_SearchString = { "SearchString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventNameContains_Parms, SearchString), METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_SearchString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_SearchString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventNameContains_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_SearchString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods where the name contains the provided string\n\x09 * @param SearchString Search string\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods where the name contains the provided string\n@param SearchString Search string\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "NameContains", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventNameContains_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics
	{
		struct ModioFilterParamsLibrary_eventNameContainsStrings_Parms
		{
			FModioFilterParams Filter;
			FString SearchString;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventNameContainsStrings_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_SearchString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_SearchString = { "SearchString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventNameContainsStrings_Parms, SearchString), METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_SearchString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_SearchString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventNameContainsStrings_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_SearchString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods where the name contains the provided strings\n\x09 * @param SearchString Search string\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods where the name contains the provided strings\n@param SearchString Search string\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "NameContainsStrings", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventNameContainsStrings_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics
	{
		struct ModioFilterParamsLibrary_eventPagedResults_Parms
		{
			FModioFilterParams Filter;
			int64 PageNumber;
			int64 PageSize;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_PageNumber;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventPagedResults_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventPagedResults_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_PageNumber = { "PageNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventPagedResults_Parms, PageNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventPagedResults_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_PageNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Returns a sub-range of query results based on a specified page size and index\n\x09 * @param PageNumber Zero-based index of page to return\n\x09 * @param PageSize Number of results in a page\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Returns a sub-range of query results based on a specified page size and index\n@param PageNumber Zero-based index of page to return\n@param PageSize Number of results in a page\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "PagedResults", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventPagedResults_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics
	{
		struct ModioFilterParamsLibrary_eventSortBy_Parms
		{
			FModioFilterParams Filter;
			EModioSortFieldType ByField;
			EModioSortDirection ByDirection;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ByDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByDirection_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ByField;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByField_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventSortBy_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByDirection = { "ByDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventSortBy_Parms, ByDirection), Z_Construct_UEnum_Modio_EModioSortDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByField = { "ByField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventSortBy_Parms, ByField), Z_Construct_UEnum_Modio_EModioSortFieldType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByField_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventSortBy_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_ByField_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Indicates results should be sorted using the specified field and direction\n\x09 * @param ByField Field to sort with\n\x09 * @param ByDirection Direction to sort\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Indicates results should be sorted using the specified field and direction\n@param ByField Field to sort with\n@param ByDirection Direction to sort\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "SortBy", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventSortBy_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics
	{
		struct ModioFilterParamsLibrary_eventWithoutTag_Parms
		{
			FModioFilterParams Filter;
			FString Tag;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithoutTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithoutTag_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithoutTag_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods that do not have the specified tag\n\x09 * @param Tag Tag to exclude\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods that do not have the specified tag\n@param Tag Tag to exclude\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "WithoutTag", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventWithoutTag_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics
	{
		struct ModioFilterParamsLibrary_eventWithoutTags_Parms
		{
			FModioFilterParams Filter;
			TArray<FString> NewTags;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewTags_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithoutTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_NewTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_NewTags = { "NewTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithoutTags_Parms, NewTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_NewTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_NewTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_NewTags_Inner = { "NewTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithoutTags_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_NewTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_NewTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods that do not have any of the specified tags ( NOT (tag1 OR tag2 OR tagN...))\n\x09 * @param NewTags Tags to exclude\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods that do not have any of the specified tags ( NOT (tag1 OR tag2 OR tagN...))\n@param NewTags Tags to exclude\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "WithoutTags", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventWithoutTags_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics
	{
		struct ModioFilterParamsLibrary_eventWithTag_Parms
		{
			FModioFilterParams Filter;
			FString Tag;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithTag_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithTag_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods that have the specified tag\n\x09 * @param Tag Tag to include\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods that have the specified tag\n@param Tag Tag to include\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "WithTag", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventWithTag_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics
	{
		struct ModioFilterParamsLibrary_eventWithTags_Parms
		{
			FModioFilterParams Filter;
			TArray<FString> NewTags;
			FModioFilterParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewTags_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_NewTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_NewTags = { "NewTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithTags_Parms, NewTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_NewTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_NewTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_NewTags_Inner = { "NewTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioFilterParamsLibrary_eventWithTags_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_NewTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_NewTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Filter" },
		{ "Comment", "/**\n\x09 * @brief Only include mods that have all the specified tags (tag1 AND tag2 AND tagN...)\n\x09 * @param NewTags The set of tags to filter on\n\x09 * @return *this\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
		{ "ToolTip", "@brief Only include mods that have all the specified tags (tag1 AND tag2 AND tagN...)\n@param NewTags The set of tags to filter on\n@return *this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioFilterParamsLibrary, nullptr, "WithTags", nullptr, nullptr, sizeof(ModioFilterParamsLibrary_eventWithTags_Parms), Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioFilterParamsLibrary_NoRegister()
	{
		return UModioFilterParamsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioFilterParamsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioFilterParamsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioFilterParamsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_ExcludingIDs, "ExcludingIDs" }, // 1389328212
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_IndexedResults, "IndexedResults" }, // 3637014553
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveAfter, "MarkedLiveAfter" }, // 296771164
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_MarkedLiveBefore, "MarkedLiveBefore" }, // 1373493373
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_MatchingIDs, "MatchingIDs" }, // 714470678
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_MetadataLike, "MetadataLike" }, // 3655162799
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_NameContains, "NameContains" }, // 531864451
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_NameContainsStrings, "NameContainsStrings" }, // 216968836
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_PagedResults, "PagedResults" }, // 2168281923
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_SortBy, "SortBy" }, // 2705918758
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTag, "WithoutTag" }, // 3359983721
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_WithoutTags, "WithoutTags" }, // 3195441820
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_WithTag, "WithTag" }, // 3610473895
		{ &Z_Construct_UFunction_UModioFilterParamsLibrary_WithTags, "WithTags" }, // 1307095551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioFilterParamsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioFilterParamsLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioFilterParamsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioFilterParamsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioFilterParamsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioFilterParamsLibrary_Statics::ClassParams = {
		&UModioFilterParamsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioFilterParamsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioFilterParamsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioFilterParamsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioFilterParamsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioFilterParamsLibrary, 429470261);
	template<> MODIO_API UClass* StaticClass<UModioFilterParamsLibrary>()
	{
		return UModioFilterParamsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioFilterParamsLibrary(Z_Construct_UClass_UModioFilterParamsLibrary, &UModioFilterParamsLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioFilterParamsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioFilterParamsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
