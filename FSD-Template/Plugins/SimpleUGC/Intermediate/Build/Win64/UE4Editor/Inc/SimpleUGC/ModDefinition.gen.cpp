// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/ModDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModDefinition() {}
// Cross Module References
	SIMPLEUGC_API UScriptStruct* Z_Construct_UScriptStruct_FModDefinition();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
class UScriptStruct* FModDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEUGC_API uint32 Get_Z_Construct_UScriptStruct_FModDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModDefinition, Z_Construct_UPackage__Script_SimpleUGC(), TEXT("ModDefinition"), sizeof(FModDefinition), Get_Z_Construct_UScriptStruct_FModDefinition_Hash());
	}
	return Singleton;
}
template<> SIMPLEUGC_API UScriptStruct* StaticStruct<FModDefinition>()
{
	return FModDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModDefinition(FModDefinition::StaticStruct, TEXT("/Script/SimpleUGC"), TEXT("ModDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleUGC_StaticRegisterNativesFModDefinition
{
	FScriptStruct_SimpleUGC_StaticRegisterNativesFModDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModDefinition")),new UScriptStruct::TCppStructOps<FModDefinition>);
	}
} ScriptStruct_SimpleUGC_StaticRegisterNativesFModDefinition;
	struct Z_Construct_UScriptStruct_FModDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "ModDefinition" },
		{ "ModuleRelativePath", "Public/ModDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModDefinition, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "ModDefinition" },
		{ "ModuleRelativePath", "Public/ModDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModDefinition, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ModDefinition" },
		{ "ModuleRelativePath", "Public/ModDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDefinition_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
		nullptr,
		&NewStructOps,
		"ModDefinition",
		sizeof(FModDefinition),
		alignof(FModDefinition),
		Z_Construct_UScriptStruct_FModDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleUGC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModDefinition"), sizeof(FModDefinition), Get_Z_Construct_UScriptStruct_FModDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModDefinition_Hash() { return 3096743131U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
