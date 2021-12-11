// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/Mods.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMods() {}
// Cross Module References
	SIMPLEUGC_API UScriptStruct* Z_Construct_UScriptStruct_FMods();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	SIMPLEUGC_API UScriptStruct* Z_Construct_UScriptStruct_FModDefinition();
// End Cross Module References
class UScriptStruct* FMods::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEUGC_API uint32 Get_Z_Construct_UScriptStruct_FMods_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMods, Z_Construct_UPackage__Script_SimpleUGC(), TEXT("Mods"), sizeof(FMods), Get_Z_Construct_UScriptStruct_FMods_Hash());
	}
	return Singleton;
}
template<> SIMPLEUGC_API UScriptStruct* StaticStruct<FMods>()
{
	return FMods::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMods(FMods::StaticStruct, TEXT("/Script/SimpleUGC"), TEXT("Mods"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleUGC_StaticRegisterNativesFMods
{
	FScriptStruct_SimpleUGC_StaticRegisterNativesFMods()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Mods")),new UScriptStruct::TCppStructOps<FMods>);
	}
} ScriptStruct_SimpleUGC_StaticRegisterNativesFMods;
	struct Z_Construct_UScriptStruct_FMods_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mods_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mods;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mods_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMods_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Mods.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMods_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMods>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMods_Statics::NewProp_Mods_MetaData[] = {
		{ "Category", "Mods" },
		{ "ModuleRelativePath", "Public/Mods.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMods_Statics::NewProp_Mods = { "Mods", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMods, Mods), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMods_Statics::NewProp_Mods_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMods_Statics::NewProp_Mods_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMods_Statics::NewProp_Mods_Inner = { "Mods", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMods_Statics::NewProp_Mods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMods_Statics::NewProp_Mods_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMods_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
		nullptr,
		&NewStructOps,
		"Mods",
		sizeof(FMods),
		alignof(FMods),
		Z_Construct_UScriptStruct_FMods_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMods_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMods_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMods_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMods()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMods_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleUGC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Mods"), sizeof(FMods), Get_Z_Construct_UScriptStruct_FMods_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMods_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMods_Hash() { return 3818486610U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
