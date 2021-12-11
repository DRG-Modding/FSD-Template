// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/ModioModInfoWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModInfoWrapper() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UModioModInfoWrapper_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UModioModInfoWrapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus();
// End Cross Module References
	DEFINE_FUNCTION(UModioModInfoWrapper::execIsModIdInvalid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModIdInvalid();
		P_NATIVE_END;
	}
	void UModioModInfoWrapper::StaticRegisterNativesUModioModInfoWrapper()
	{
		UClass* Class = UModioModInfoWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsModIdInvalid", &UModioModInfoWrapper::execIsModIdInvalid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics
	{
		struct ModioModInfoWrapper_eventIsModIdInvalid_Parms
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
	void Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModioModInfoWrapper_eventIsModIdInvalid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioModInfoWrapper_eventIsModIdInvalid_Parms), &Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModInfoWrapper, nullptr, "IsModIdInvalid", nullptr, nullptr, sizeof(ModioModInfoWrapper_eventIsModIdInvalid_Parms), Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioModInfoWrapper_NoRegister()
	{
		return UModioModInfoWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UModioModInfoWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModAuthor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModAuthor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioModInfoWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioModInfoWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioModInfoWrapper_IsModIdInvalid, "IsModIdInvalid" }, // 2710640863
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModioModInfoWrapper.h" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "ModioModInfoWrapper" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioModInfoWrapper, Status), Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus, METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModDescription_MetaData[] = {
		{ "Category", "ModioModInfoWrapper" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModDescription = { "ModDescription", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioModInfoWrapper, ModDescription), METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModVersion_MetaData[] = {
		{ "Category", "ModioModInfoWrapper" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModVersion = { "ModVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioModInfoWrapper, ModVersion), METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModAuthor_MetaData[] = {
		{ "Category", "ModioModInfoWrapper" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModAuthor = { "ModAuthor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioModInfoWrapper, ModAuthor), METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModAuthor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModAuthor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModURL_MetaData[] = {
		{ "Category", "ModioModInfoWrapper" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModURL = { "ModURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioModInfoWrapper, ModURL), METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModName_MetaData[] = {
		{ "Category", "ModioModInfoWrapper" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioModInfoWrapper, ModName), METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModId_MetaData[] = {
		{ "Category", "ModioModInfoWrapper" },
		{ "ModuleRelativePath", "Public/ModioModInfoWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioModInfoWrapper, ModId), METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModioModInfoWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModAuthor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioModInfoWrapper_Statics::NewProp_ModId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioModInfoWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioModInfoWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioModInfoWrapper_Statics::ClassParams = {
		&UModioModInfoWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModioModInfoWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioModInfoWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModInfoWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioModInfoWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioModInfoWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioModInfoWrapper, 3056485418);
	template<> SIMPLEUGC_API UClass* StaticClass<UModioModInfoWrapper>()
	{
		return UModioModInfoWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioModInfoWrapper(Z_Construct_UClass_UModioModInfoWrapper, &UModioModInfoWrapper::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UModioModInfoWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioModInfoWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
