// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioModTagOptionsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModTagOptionsLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioModTagOptionsLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioModTagOptionsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioPagedResult();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModTagOptions();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModTagInfo();
// End Cross Module References
	DEFINE_FUNCTION(UModioModTagOptionsLibrary::execGetPagedResult)
	{
		P_GET_STRUCT_REF(FModioModTagOptions,Z_Param_Out_ModTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioPagedResult*)Z_Param__Result=UModioModTagOptionsLibrary::GetPagedResult(Z_Param_Out_ModTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioModTagOptionsLibrary::execGetTags)
	{
		P_GET_STRUCT_REF(FModioModTagOptions,Z_Param_Out_ModTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModioModTagInfo>*)Z_Param__Result=UModioModTagOptionsLibrary::GetTags(Z_Param_Out_ModTags);
		P_NATIVE_END;
	}
	void UModioModTagOptionsLibrary::StaticRegisterNativesUModioModTagOptionsLibrary()
	{
		UClass* Class = UModioModTagOptionsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPagedResult", &UModioModTagOptionsLibrary::execGetPagedResult },
			{ "GetTags", &UModioModTagOptionsLibrary::execGetTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics
	{
		struct FModioModTagOptions
		{
			FModioPagedResult PagedResult;
			TArray<FModioModTagInfo> InternalList;
		};

		struct ModioModTagOptionsLibrary_eventGetPagedResult_Parms
		{
			FModioModTagOptions ModTags;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModTagOptionsLibrary_eventGetPagedResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioPagedResult, METADATA_PARAMS(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ModTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ModTags = { "ModTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModTagOptionsLibrary_eventGetPagedResult_Parms, ModTags), Z_Construct_UScriptStruct_FModioModTagOptions, METADATA_PARAMS(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ModTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ModTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::NewProp_ModTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the paged result that contains information of the data returned\n\x09 * @param ModTags\n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModTagOptionsLibrary.h" },
		{ "ToolTip", "Get the paged result that contains information of the data returned\n@param ModTags\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModTagOptionsLibrary, nullptr, "GetPagedResult", nullptr, nullptr, sizeof(ModioModTagOptionsLibrary_eventGetPagedResult_Parms), Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics
	{
		struct FModioModTagOptions
		{
			FModioPagedResult PagedResult;
			TArray<FModioModTagInfo> InternalList;
		};

		struct ModioModTagOptionsLibrary_eventGetTags_Parms
		{
			FModioModTagOptions ModTags;
			TArray<FModioModTagInfo> ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModTagOptionsLibrary_eventGetTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModTagInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ModTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ModTags = { "ModTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModTagOptionsLibrary_eventGetTags_Parms, ModTags), Z_Construct_UScriptStruct_FModioModTagOptions, METADATA_PARAMS(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ModTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ModTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::NewProp_ModTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the tags in a mod tag options list\n\x09 * @param ModTags \n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModTagOptionsLibrary.h" },
		{ "ToolTip", "Get the tags in a mod tag options list\n@param ModTags\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModTagOptionsLibrary, nullptr, "GetTags", nullptr, nullptr, sizeof(ModioModTagOptionsLibrary_eventGetTags_Parms), Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioModTagOptionsLibrary_NoRegister()
	{
		return UModioModTagOptionsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioModTagOptionsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioModTagOptionsLibrary_GetPagedResult, "GetPagedResult" }, // 2552780598
		{ &Z_Construct_UFunction_UModioModTagOptionsLibrary_GetTags, "GetTags" }, // 3018963728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioModTagOptionsLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModTagOptionsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioModTagOptionsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::ClassParams = {
		&UModioModTagOptionsLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioModTagOptionsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioModTagOptionsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioModTagOptionsLibrary, 3983775686);
	template<> MODIO_API UClass* StaticClass<UModioModTagOptionsLibrary>()
	{
		return UModioModTagOptionsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioModTagOptionsLibrary(Z_Construct_UClass_UModioModTagOptionsLibrary, &UModioModTagOptionsLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioModTagOptionsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioModTagOptionsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
