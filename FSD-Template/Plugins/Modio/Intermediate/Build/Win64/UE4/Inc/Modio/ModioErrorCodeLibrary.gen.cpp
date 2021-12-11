// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioErrorCodeLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioErrorCodeLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioErrorCodeLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioErrorCodeLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioErrorCode();
// End Cross Module References
	DEFINE_FUNCTION(UModioErrorCodeLibrary::execGetMessage)
	{
		P_GET_STRUCT_REF(FModioErrorCode,Z_Param_Out_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioErrorCodeLibrary::GetMessage(Z_Param_Out_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioErrorCodeLibrary::execGetValue)
	{
		P_GET_STRUCT_REF(FModioErrorCode,Z_Param_Out_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UModioErrorCodeLibrary::GetValue(Z_Param_Out_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioErrorCodeLibrary::execIsError)
	{
		P_GET_STRUCT_REF(FModioErrorCode,Z_Param_Out_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UModioErrorCodeLibrary::IsError(Z_Param_Out_Error);
		P_NATIVE_END;
	}
	void UModioErrorCodeLibrary::StaticRegisterNativesUModioErrorCodeLibrary()
	{
		UClass* Class = UModioErrorCodeLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMessage", &UModioErrorCodeLibrary::execGetMessage },
			{ "GetValue", &UModioErrorCodeLibrary::execGetValue },
			{ "IsError", &UModioErrorCodeLibrary::execIsError },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics
	{
		struct ModioErrorCodeLibrary_eventGetMessage_Parms
		{
			FModioErrorCode Error;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioErrorCodeLibrary_eventGetMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioErrorCodeLibrary_eventGetMessage_Parms, Error), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Error" },
		{ "Comment", "/**\n\x09 * Get the textual representation of the error\n\x09 * @param Error -\n\x09 * @return \n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioErrorCodeLibrary.h" },
		{ "ToolTip", "Get the textual representation of the error\n@param Error -\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioErrorCodeLibrary, nullptr, "GetMessage", nullptr, nullptr, sizeof(ModioErrorCodeLibrary_eventGetMessage_Parms), Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics
	{
		struct ModioErrorCodeLibrary_eventGetValue_Parms
		{
			FModioErrorCode Error;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioErrorCodeLibrary_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioErrorCodeLibrary_eventGetValue_Parms, Error), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities|Error" },
		{ "Comment", "/**\n\x09 * Get underlying error code \n\x09 * @param Error -\n\x09 * @return 0 if there is no error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioErrorCodeLibrary.h" },
		{ "ToolTip", "Get underlying error code\n@param Error -\n@return 0 if there is no error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioErrorCodeLibrary, nullptr, "GetValue", nullptr, nullptr, sizeof(ModioErrorCodeLibrary_eventGetValue_Parms), Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics
	{
		struct ModioErrorCodeLibrary_eventIsError_Parms
		{
			FModioErrorCode Error;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModioErrorCodeLibrary_eventIsError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioErrorCodeLibrary_eventIsError_Parms), &Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioErrorCodeLibrary_eventIsError_Parms, Error), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|Error" },
		{ "Comment", "/**\n\x09 * Checks if a error code contains a error\n\x09 * @param Error -\n\x09 * @return true if the error code is a error\n\x09 */" },
		{ "CompactNodeTitle", "Error" },
		{ "ModuleRelativePath", "Public/Libraries/ModioErrorCodeLibrary.h" },
		{ "ToolTip", "Checks if a error code contains a error\n@param Error -\n@return true if the error code is a error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioErrorCodeLibrary, nullptr, "IsError", nullptr, nullptr, sizeof(ModioErrorCodeLibrary_eventIsError_Parms), Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioErrorCodeLibrary_IsError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioErrorCodeLibrary_IsError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioErrorCodeLibrary_NoRegister()
	{
		return UModioErrorCodeLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioErrorCodeLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioErrorCodeLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioErrorCodeLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioErrorCodeLibrary_GetMessage, "GetMessage" }, // 3360103152
		{ &Z_Construct_UFunction_UModioErrorCodeLibrary_GetValue, "GetValue" }, // 3397641751
		{ &Z_Construct_UFunction_UModioErrorCodeLibrary_IsError, "IsError" }, // 202005656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioErrorCodeLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioErrorCodeLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioErrorCodeLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioErrorCodeLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioErrorCodeLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioErrorCodeLibrary_Statics::ClassParams = {
		&UModioErrorCodeLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioErrorCodeLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioErrorCodeLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioErrorCodeLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioErrorCodeLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioErrorCodeLibrary, 3671312008);
	template<> MODIO_API UClass* StaticClass<UModioErrorCodeLibrary>()
	{
		return UModioErrorCodeLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioErrorCodeLibrary(Z_Construct_UClass_UModioErrorCodeLibrary, &UModioErrorCodeLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioErrorCodeLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioErrorCodeLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
