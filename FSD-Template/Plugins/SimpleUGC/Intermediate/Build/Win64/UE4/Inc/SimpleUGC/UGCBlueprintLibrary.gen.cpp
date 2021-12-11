// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCBlueprintLibrary() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUGCBlueprintLibrary::execGetUGCRegistry)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUGCRegistry**)Z_Param__Result=UUGCBlueprintLibrary::GetUGCRegistry(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UUGCBlueprintLibrary::StaticRegisterNativesUUGCBlueprintLibrary()
	{
		UClass* Class = UUGCBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUGCRegistry", &UUGCBlueprintLibrary::execGetUGCRegistry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics
	{
		struct UGCBlueprintLibrary_eventGetUGCRegistry_Parms
		{
			UObject* WorldContextObject;
			UUGCRegistry* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCBlueprintLibrary_eventGetUGCRegistry_Parms, ReturnValue), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCBlueprintLibrary_eventGetUGCRegistry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCBlueprintLibrary, nullptr, "GetUGCRegistry", nullptr, nullptr, sizeof(UGCBlueprintLibrary_eventGetUGCRegistry_Parms), Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister()
	{
		return UUGCBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUGCBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGCBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry, "GetUGCRegistry" }, // 1749484950
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGCBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/UGCBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGCBlueprintLibrary_Statics::ClassParams = {
		&UUGCBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGCBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGCBlueprintLibrary, 1550673718);
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCBlueprintLibrary>()
	{
		return UUGCBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGCBlueprintLibrary(Z_Construct_UClass_UUGCBlueprintLibrary, &UUGCBlueprintLibrary::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UUGCBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
