// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/ModioTermsWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioTermsWrapper() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UModioTermsWrapper_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UModioTermsWrapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	DEFINE_FUNCTION(UModioTermsWrapper::execisEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isEmpty();
		P_NATIVE_END;
	}
	void UModioTermsWrapper::StaticRegisterNativesUModioTermsWrapper()
	{
		UClass* Class = UModioTermsWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "isEmpty", &UModioTermsWrapper::execisEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics
	{
		struct ModioTermsWrapper_eventisEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModioTermsWrapper_eventisEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioTermsWrapper_eventisEmpty_Parms), &Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioTermsWrapper, nullptr, "isEmpty", nullptr, nullptr, sizeof(ModioTermsWrapper_eventisEmpty_Parms), Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioTermsWrapper_isEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioTermsWrapper_isEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioTermsWrapper_NoRegister()
	{
		return UModioTermsWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UModioTermsWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TermsOfUseText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TermsOfUseText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivacyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrivacyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivacyLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrivacyLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TermsText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TermsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TermsLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TermsLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisagreeButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisagreeButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreeButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AgreeButtonText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioTermsWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioTermsWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioTermsWrapper_isEmpty, "isEmpty" }, // 3180437252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModioTermsWrapper.h" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsOfUseText_MetaData[] = {
		{ "Category", "ModioTermsWrapper" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsOfUseText = { "TermsOfUseText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTermsWrapper, TermsOfUseText), METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsOfUseText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsOfUseText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyText_MetaData[] = {
		{ "Category", "ModioTermsWrapper" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyText = { "PrivacyText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTermsWrapper, PrivacyText), METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyLink_MetaData[] = {
		{ "Category", "ModioTermsWrapper" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyLink = { "PrivacyLink", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTermsWrapper, PrivacyLink), METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsText_MetaData[] = {
		{ "Category", "ModioTermsWrapper" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsText = { "TermsText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTermsWrapper, TermsText), METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsLink_MetaData[] = {
		{ "Category", "ModioTermsWrapper" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsLink = { "TermsLink", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTermsWrapper, TermsLink), METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_DisagreeButtonText_MetaData[] = {
		{ "Category", "ModioTermsWrapper" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_DisagreeButtonText = { "DisagreeButtonText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTermsWrapper, DisagreeButtonText), METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_DisagreeButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_DisagreeButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_AgreeButtonText_MetaData[] = {
		{ "Category", "ModioTermsWrapper" },
		{ "ModuleRelativePath", "Public/ModioTermsWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_AgreeButtonText = { "AgreeButtonText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioTermsWrapper, AgreeButtonText), METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_AgreeButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_AgreeButtonText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModioTermsWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsOfUseText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_PrivacyLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_TermsLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_DisagreeButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioTermsWrapper_Statics::NewProp_AgreeButtonText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioTermsWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioTermsWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioTermsWrapper_Statics::ClassParams = {
		&UModioTermsWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModioTermsWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioTermsWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioTermsWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioTermsWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioTermsWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioTermsWrapper, 370627516);
	template<> SIMPLEUGC_API UClass* StaticClass<UModioTermsWrapper>()
	{
		return UModioTermsWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioTermsWrapper(Z_Construct_UClass_UModioTermsWrapper, &UModioTermsWrapper::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UModioTermsWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioTermsWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
