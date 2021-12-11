// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioModDependenciesLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModDependenciesLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioModDependenciesLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioModDependenciesLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModDependency();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModDependencyList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult();
// End Cross Module References
	DEFINE_FUNCTION(UModioModDependenciesLibrary::execGetPagedResult)
	{
		P_GET_STRUCT_REF(FModioModDependencyList,Z_Param_Out_ModTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioPagedResult*)Z_Param__Result=UModioModDependenciesLibrary::GetPagedResult(Z_Param_Out_ModTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioModDependenciesLibrary::execGetDependencies)
	{
		P_GET_STRUCT_REF(FModioModDependencyList,Z_Param_Out_ModTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModioModDependency>*)Z_Param__Result=UModioModDependenciesLibrary::GetDependencies(Z_Param_Out_ModTags);
		P_NATIVE_END;
	}
	void UModioModDependenciesLibrary::StaticRegisterNativesUModioModDependenciesLibrary()
	{
		UClass* Class = UModioModDependenciesLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDependencies", &UModioModDependenciesLibrary::execGetDependencies },
			{ "GetPagedResult", &UModioModDependenciesLibrary::execGetPagedResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics
	{
		struct ModioModDependenciesLibrary_eventGetDependencies_Parms
		{
			FModioModDependencyList ModTags;
			TArray<FModioModDependency> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModDependenciesLibrary_eventGetDependencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModDependency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ModTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ModTags = { "ModTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModDependenciesLibrary_eventGetDependencies_Parms, ModTags), Z_Construct_UScriptStruct_FModioModDependencyList, METADATA_PARAMS(Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ModTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ModTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::NewProp_ModTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the tags in a mod tag options list\n\x09 * @param ModTags \n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModDependenciesLibrary.h" },
		{ "ToolTip", "Get the tags in a mod tag options list\n@param ModTags\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModDependenciesLibrary, nullptr, "GetDependencies", nullptr, nullptr, sizeof(ModioModDependenciesLibrary_eventGetDependencies_Parms), Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics
	{
		struct ModioModDependenciesLibrary_eventGetPagedResult_Parms
		{
			FModioModDependencyList ModTags;
			FModioPagedResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModDependenciesLibrary_eventGetPagedResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioPagedResult, METADATA_PARAMS(Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ModTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ModTags = { "ModTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModDependenciesLibrary_eventGetPagedResult_Parms, ModTags), Z_Construct_UScriptStruct_FModioModDependencyList, METADATA_PARAMS(Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ModTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ModTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::NewProp_ModTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the paged result that contains information of the data returned\n\x09 * @param ModTags\n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModDependenciesLibrary.h" },
		{ "ToolTip", "Get the paged result that contains information of the data returned\n@param ModTags\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModDependenciesLibrary, nullptr, "GetPagedResult", nullptr, nullptr, sizeof(ModioModDependenciesLibrary_eventGetPagedResult_Parms), Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioModDependenciesLibrary_NoRegister()
	{
		return UModioModDependenciesLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioModDependenciesLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioModDependenciesLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioModDependenciesLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioModDependenciesLibrary_GetDependencies, "GetDependencies" }, // 878201675
		{ &Z_Construct_UFunction_UModioModDependenciesLibrary_GetPagedResult, "GetPagedResult" }, // 2234564545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModDependenciesLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioModDependenciesLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModDependenciesLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioModDependenciesLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioModDependenciesLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioModDependenciesLibrary_Statics::ClassParams = {
		&UModioModDependenciesLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioModDependenciesLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModDependenciesLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioModDependenciesLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioModDependenciesLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioModDependenciesLibrary, 2739052505);
	template<> MODIO_API UClass* StaticClass<UModioModDependenciesLibrary>()
	{
		return UModioModDependenciesLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioModDependenciesLibrary(Z_Construct_UClass_UModioModDependenciesLibrary, &UModioModDependenciesLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioModDependenciesLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioModDependenciesLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
