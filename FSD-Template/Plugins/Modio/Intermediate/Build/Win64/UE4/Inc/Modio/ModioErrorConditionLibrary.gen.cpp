// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioErrorConditionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioErrorConditionLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioErrorConditionLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioErrorConditionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioErrorCondition();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioErrorCode();
// End Cross Module References
	DEFINE_FUNCTION(UModioErrorConditionLibrary::execErrorCodeMatches)
	{
		P_GET_STRUCT(FModioErrorCode,Z_Param_ErrorCode);
		P_GET_ENUM(EModioErrorCondition,Z_Param_Condition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UModioErrorConditionLibrary::ErrorCodeMatches(Z_Param_ErrorCode,EModioErrorCondition(Z_Param_Condition));
		P_NATIVE_END;
	}
	void UModioErrorConditionLibrary::StaticRegisterNativesUModioErrorConditionLibrary()
	{
		UClass* Class = UModioErrorConditionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ErrorCodeMatches", &UModioErrorConditionLibrary::execErrorCodeMatches },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics
	{
		struct ModioErrorConditionLibrary_eventErrorCodeMatches_Parms
		{
			FModioErrorCode ErrorCode;
			EModioErrorCondition Condition;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Condition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Condition_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModioErrorConditionLibrary_eventErrorCodeMatches_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioErrorConditionLibrary_eventErrorCodeMatches_Parms), &Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioErrorConditionLibrary_eventErrorCodeMatches_Parms, Condition), Z_Construct_UEnum_Modio_EModioErrorCondition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_Condition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioErrorConditionLibrary_eventErrorCodeMatches_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_Condition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Error Handling" },
		{ "Comment", "/**\n\x09 * @brief Checks if the passed-in ErrorCode matches the specified error condition\n\x09 * @param ErrorCode The code to check\n\x09 * @param Condition The error condition to check against\n\x09 * @return true if the code matches the condition\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioErrorConditionLibrary.h" },
		{ "ToolTip", "@brief Checks if the passed-in ErrorCode matches the specified error condition\n@param ErrorCode The code to check\n@param Condition The error condition to check against\n@return true if the code matches the condition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioErrorConditionLibrary, nullptr, "ErrorCodeMatches", nullptr, nullptr, sizeof(ModioErrorConditionLibrary_eventErrorCodeMatches_Parms), Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioErrorConditionLibrary_NoRegister()
	{
		return UModioErrorConditionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioErrorConditionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioErrorConditionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioErrorConditionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioErrorConditionLibrary_ErrorCodeMatches, "ErrorCodeMatches" }, // 4146253948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioErrorConditionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioErrorConditionLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioErrorConditionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioErrorConditionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioErrorConditionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioErrorConditionLibrary_Statics::ClassParams = {
		&UModioErrorConditionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioErrorConditionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioErrorConditionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioErrorConditionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioErrorConditionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioErrorConditionLibrary, 2359792297);
	template<> MODIO_API UClass* StaticClass<UModioErrorConditionLibrary>()
	{
		return UModioErrorConditionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioErrorConditionLibrary(Z_Construct_UClass_UModioErrorConditionLibrary, &UModioErrorConditionLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioErrorConditionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioErrorConditionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
