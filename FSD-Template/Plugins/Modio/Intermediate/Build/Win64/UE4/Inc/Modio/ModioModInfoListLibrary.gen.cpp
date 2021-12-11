// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioModInfoListLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModInfoListLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioModInfoListLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioModInfoListLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModInfo();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModInfoList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult();
// End Cross Module References
	DEFINE_FUNCTION(UModioModInfoListLibrary::execGetPagedResult)
	{
		P_GET_STRUCT_REF(FModioModInfoList,Z_Param_Out_ModInfoList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioPagedResult*)Z_Param__Result=UModioModInfoListLibrary::GetPagedResult(Z_Param_Out_ModInfoList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioModInfoListLibrary::execGetMods)
	{
		P_GET_STRUCT_REF(FModioModInfoList,Z_Param_Out_ModInfoList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModioModInfo>*)Z_Param__Result=UModioModInfoListLibrary::GetMods(Z_Param_Out_ModInfoList);
		P_NATIVE_END;
	}
	void UModioModInfoListLibrary::StaticRegisterNativesUModioModInfoListLibrary()
	{
		UClass* Class = UModioModInfoListLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMods", &UModioModInfoListLibrary::execGetMods },
			{ "GetPagedResult", &UModioModInfoListLibrary::execGetPagedResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics
	{
		struct FModioModInfoList
		{
			FModioPagedResult PagedResult;
			TArray<FModioModInfo> InternalList;
		};

		struct ModioModInfoListLibrary_eventGetMods_Parms
		{
			FModioModInfoList ModInfoList;
			TArray<FModioModInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModInfoList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModInfoList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModInfoListLibrary_eventGetMods_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ModInfoList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ModInfoList = { "ModInfoList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModInfoListLibrary_eventGetMods_Parms, ModInfoList), Z_Construct_UScriptStruct_FModioModInfoList, METADATA_PARAMS(Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ModInfoList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ModInfoList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::NewProp_ModInfoList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the mods in a mod info list\n\x09 * @param ModInfoList\n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModInfoListLibrary.h" },
		{ "ToolTip", "Get the mods in a mod info list\n@param ModInfoList\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModInfoListLibrary, nullptr, "GetMods", nullptr, nullptr, sizeof(ModioModInfoListLibrary_eventGetMods_Parms), Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModInfoListLibrary_GetMods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModInfoListLibrary_GetMods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics
	{
		struct FModioModInfoList
		{
			FModioPagedResult PagedResult;
			TArray<FModioModInfo> InternalList;
		};

		struct ModioModInfoListLibrary_eventGetPagedResult_Parms
		{
			FModioModInfoList ModInfoList;
			FModioPagedResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModInfoList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModInfoList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModInfoListLibrary_eventGetPagedResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioPagedResult, METADATA_PARAMS(Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ModInfoList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ModInfoList = { "ModInfoList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModInfoListLibrary_eventGetPagedResult_Parms, ModInfoList), Z_Construct_UScriptStruct_FModioModInfoList, METADATA_PARAMS(Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ModInfoList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ModInfoList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::NewProp_ModInfoList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the paged result that contains information of the data returned\n\x09 * @param ModInfoList\n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModInfoListLibrary.h" },
		{ "ToolTip", "Get the paged result that contains information of the data returned\n@param ModInfoList\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModInfoListLibrary, nullptr, "GetPagedResult", nullptr, nullptr, sizeof(ModioModInfoListLibrary_eventGetPagedResult_Parms), Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioModInfoListLibrary_NoRegister()
	{
		return UModioModInfoListLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioModInfoListLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioModInfoListLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioModInfoListLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioModInfoListLibrary_GetMods, "GetMods" }, // 3955145556
		{ &Z_Construct_UFunction_UModioModInfoListLibrary_GetPagedResult, "GetPagedResult" }, // 2496808372
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoListLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioModInfoListLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModInfoListLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioModInfoListLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioModInfoListLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioModInfoListLibrary_Statics::ClassParams = {
		&UModioModInfoListLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioModInfoListLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoListLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioModInfoListLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioModInfoListLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioModInfoListLibrary, 4041539377);
	template<> MODIO_API UClass* StaticClass<UModioModInfoListLibrary>()
	{
		return UModioModInfoListLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioModInfoListLibrary(Z_Construct_UClass_UModioModInfoListLibrary, &UModioModInfoListLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioModInfoListLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioModInfoListLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
