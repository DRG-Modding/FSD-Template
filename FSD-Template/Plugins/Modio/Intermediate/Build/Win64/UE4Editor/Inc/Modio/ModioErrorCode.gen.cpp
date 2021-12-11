// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioErrorCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioErrorCode() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioErrorCode();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioErrorCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioErrorCode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioErrorCode, Z_Construct_UPackage__Script_Modio(), TEXT("ModioErrorCode"), sizeof(FModioErrorCode), Get_Z_Construct_UScriptStruct_FModioErrorCode_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioErrorCode>()
{
	return FModioErrorCode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioErrorCode(FModioErrorCode::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioErrorCode"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioErrorCode
{
	FScriptStruct_Modio_StaticRegisterNativesFModioErrorCode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioErrorCode")),new UScriptStruct::TCppStructOps<FModioErrorCode>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioErrorCode;
	struct Z_Construct_UScriptStruct_FModioErrorCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioErrorCode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief wrapper around Modio::ErrorCode */" },
		{ "ModuleRelativePath", "Public/Types/ModioErrorCode.h" },
		{ "ToolTip", "@brief wrapper around Modio::ErrorCode" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioErrorCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioErrorCode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioErrorCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioErrorCode",
		sizeof(FModioErrorCode),
		alignof(FModioErrorCode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioErrorCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioErrorCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioErrorCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioErrorCode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioErrorCode"), sizeof(FModioErrorCode), Get_Z_Construct_UScriptStruct_FModioErrorCode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioErrorCode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioErrorCode_Hash() { return 1467396471U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
