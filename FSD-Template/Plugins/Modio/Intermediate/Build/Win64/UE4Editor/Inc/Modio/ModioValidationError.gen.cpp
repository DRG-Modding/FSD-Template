// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioValidationError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioValidationError() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioValidationError();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioValidationError::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioValidationError_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioValidationError, Z_Construct_UPackage__Script_Modio(), TEXT("ModioValidationError"), sizeof(FModioValidationError), Get_Z_Construct_UScriptStruct_FModioValidationError_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioValidationError>()
{
	return FModioValidationError::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioValidationError(FModioValidationError::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioValidationError"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioValidationError
{
	FScriptStruct_Modio_StaticRegisterNativesFModioValidationError()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioValidationError")),new UScriptStruct::TCppStructOps<FModioValidationError>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioValidationError;
	struct Z_Construct_UScriptStruct_FModioValidationError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidationFailureDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValidationFailureDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioValidationError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Wrapper struct containing information about a field validation error\n */" },
		{ "ModuleRelativePath", "Public/Types/ModioValidationError.h" },
		{ "ToolTip", "@brief Wrapper struct containing information about a field validation error" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioValidationError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioValidationError>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_ValidationFailureDescription_MetaData[] = {
		{ "Category", "ModioValidationError" },
		{ "Comment", "/**\n\x09 * @brief String description of the validation failure\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/ModioValidationError.h" },
		{ "ToolTip", "@brief String description of the validation failure" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_ValidationFailureDescription = { "ValidationFailureDescription", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioValidationError, ValidationFailureDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_ValidationFailureDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_ValidationFailureDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "ModioValidationError" },
		{ "Comment", "/**\n\x09 * @brief String description of the field that failed validation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/ModioValidationError.h" },
		{ "ToolTip", "@brief String description of the field that failed validation" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioValidationError, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioValidationError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_ValidationFailureDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioValidationError_Statics::NewProp_FieldName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioValidationError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioValidationError",
		sizeof(FModioValidationError),
		alignof(FModioValidationError),
		Z_Construct_UScriptStruct_FModioValidationError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioValidationError_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioValidationError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioValidationError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioValidationError()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioValidationError_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioValidationError"), sizeof(FModioValidationError), Get_Z_Construct_UScriptStruct_FModioValidationError_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioValidationError_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioValidationError_Hash() { return 3183648981U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
