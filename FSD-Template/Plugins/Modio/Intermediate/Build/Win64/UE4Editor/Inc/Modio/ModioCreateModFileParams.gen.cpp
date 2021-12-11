// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioCreateModFileParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioCreateModFileParams() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioCreateModFileParams();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioCreateModFileParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioCreateModFileParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioCreateModFileParams, Z_Construct_UPackage__Script_Modio(), TEXT("ModioCreateModFileParams"), sizeof(FModioCreateModFileParams), Get_Z_Construct_UScriptStruct_FModioCreateModFileParams_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioCreateModFileParams>()
{
	return FModioCreateModFileParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioCreateModFileParams(FModioCreateModFileParams::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioCreateModFileParams"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioCreateModFileParams
{
	FScriptStruct_Modio_StaticRegisterNativesFModioCreateModFileParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioCreateModFileParams")),new UScriptStruct::TCppStructOps<FModioCreateModFileParams>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioCreateModFileParams;
	struct Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToModRootDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToModRootDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioCreateModFileParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioCreateModFileParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::NewProp_PathToModRootDirectory_MetaData[] = {
		{ "Category", "ModioCreateModFileParams" },
		{ "ModuleRelativePath", "Public/Types/ModioCreateModFileParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::NewProp_PathToModRootDirectory = { "PathToModRootDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioCreateModFileParams, PathToModRootDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::NewProp_PathToModRootDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::NewProp_PathToModRootDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::NewProp_PathToModRootDirectory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioCreateModFileParams",
		sizeof(FModioCreateModFileParams),
		alignof(FModioCreateModFileParams),
		Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioCreateModFileParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioCreateModFileParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioCreateModFileParams"), sizeof(FModioCreateModFileParams), Get_Z_Construct_UScriptStruct_FModioCreateModFileParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioCreateModFileParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioCreateModFileParams_Hash() { return 3524720710U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
