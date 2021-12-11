// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModioTests/Private/Tests/ModioTestValidationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioTestValidationData() {}
// Cross Module References
	MODIOTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FModioTestFilterParamData();
	UPackage* Z_Construct_UPackage__Script_ModioTests();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
	MODIOTESTS_API UClass* Z_Construct_UClass_UModioTestValidationData_NoRegister();
	MODIOTESTS_API UClass* Z_Construct_UClass_UModioTestValidationData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FModioTestFilterParamData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIOTESTS_API uint32 Get_Z_Construct_UScriptStruct_FModioTestFilterParamData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioTestFilterParamData, Z_Construct_UPackage__Script_ModioTests(), TEXT("ModioTestFilterParamData"), sizeof(FModioTestFilterParamData), Get_Z_Construct_UScriptStruct_FModioTestFilterParamData_Hash());
	}
	return Singleton;
}
template<> MODIOTESTS_API UScriptStruct* StaticStruct<FModioTestFilterParamData>()
{
	return FModioTestFilterParamData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioTestFilterParamData(FModioTestFilterParamData::StaticStruct, TEXT("/Script/ModioTests"), TEXT("ModioTestFilterParamData"), false, nullptr, nullptr);
static struct FScriptStruct_ModioTests_StaticRegisterNativesFModioTestFilterParamData
{
	FScriptStruct_ModioTests_StaticRegisterNativesFModioTestFilterParamData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioTestFilterParamData")),new UScriptStruct::TCppStructOps<FModioTestFilterParamData>);
	}
} ScriptStruct_ModioTests_StaticRegisterNativesFModioTestFilterParamData;
	struct Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Last_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Last;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_First_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_First;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioTestFilterParamData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_Last_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_Last = { "Last", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTestFilterParamData, Last), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_Last_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_Last_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_First_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_First = { "First", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTestFilterParamData, First), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_First_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_First_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_Last,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::NewProp_First,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModioTests,
		nullptr,
		&NewStructOps,
		"ModioTestFilterParamData",
		sizeof(FModioTestFilterParamData),
		alignof(FModioTestFilterParamData),
		Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioTestFilterParamData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioTestFilterParamData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ModioTests();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioTestFilterParamData"), sizeof(FModioTestFilterParamData), Get_Z_Construct_UScriptStruct_FModioTestFilterParamData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioTestFilterParamData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioTestFilterParamData_Hash() { return 1050909017U; }
	void UModioTestValidationData::StaticRegisterNativesUModioTestValidationData()
	{
	}
	UClass* Z_Construct_UClass_UModioTestValidationData_NoRegister()
	{
		return UModioTestValidationData::StaticClass();
	}
	struct Z_Construct_UClass_UModioTestValidationData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameSubstringSearchFirstID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NameSubstringSearchFirstID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortSubCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortSubCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortRating_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortRating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortDownloadsToday_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortDownloadsToday;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortDateUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortDateUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortDateMarkedLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortDateMarkedLive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioTestValidationData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModioTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @brief Config class containing unit test verification data\n *\n */" },
		{ "IncludePath", "Tests/ModioTestValidationData.h" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
		{ "ToolTip", "@brief Config class containing unit test verification data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_NameSubstringSearchFirstID_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_NameSubstringSearchFirstID = { "NameSubstringSearchFirstID", nullptr, (EPropertyFlags)0x0040000000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTestValidationData, NameSubstringSearchFirstID), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_NameSubstringSearchFirstID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_NameSubstringSearchFirstID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortSubCount_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortSubCount = { "SortSubCount", nullptr, (EPropertyFlags)0x0040000000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTestValidationData, SortSubCount), Z_Construct_UScriptStruct_FModioTestFilterParamData, METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortSubCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortSubCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortRating_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortRating = { "SortRating", nullptr, (EPropertyFlags)0x0040000000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTestValidationData, SortRating), Z_Construct_UScriptStruct_FModioTestFilterParamData, METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortRating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortRating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortID_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortID = { "SortID", nullptr, (EPropertyFlags)0x0040000000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTestValidationData, SortID), Z_Construct_UScriptStruct_FModioTestFilterParamData, METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDownloadsToday_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDownloadsToday = { "SortDownloadsToday", nullptr, (EPropertyFlags)0x0040000000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTestValidationData, SortDownloadsToday), Z_Construct_UScriptStruct_FModioTestFilterParamData, METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDownloadsToday_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDownloadsToday_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateUpdated_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateUpdated = { "SortDateUpdated", nullptr, (EPropertyFlags)0x0040000000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTestValidationData, SortDateUpdated), Z_Construct_UScriptStruct_FModioTestFilterParamData, METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateMarkedLive_MetaData[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Private/Tests/ModioTestValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateMarkedLive = { "SortDateMarkedLive", nullptr, (EPropertyFlags)0x0040000000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTestValidationData, SortDateMarkedLive), Z_Construct_UScriptStruct_FModioTestFilterParamData, METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateMarkedLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateMarkedLive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModioTestValidationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_NameSubstringSearchFirstID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortSubCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDownloadsToday,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTestValidationData_Statics::NewProp_SortDateMarkedLive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioTestValidationData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioTestValidationData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioTestValidationData_Statics::ClassParams = {
		&UModioTestValidationData::StaticClass,
		"ModioTest",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModioTestValidationData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UModioTestValidationData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTestValidationData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioTestValidationData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioTestValidationData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioTestValidationData, 2956092754);
	template<> MODIOTESTS_API UClass* StaticClass<UModioTestValidationData>()
	{
		return UModioTestValidationData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioTestValidationData(Z_Construct_UClass_UModioTestValidationData, &UModioTestValidationData::StaticClass, TEXT("/Script/ModioTests"), TEXT("UModioTestValidationData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioTestValidationData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
