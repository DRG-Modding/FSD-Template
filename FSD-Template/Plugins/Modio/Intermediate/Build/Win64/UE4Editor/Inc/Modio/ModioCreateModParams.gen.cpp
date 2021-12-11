// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioCreateModParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioCreateModParams() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioCreateModParams();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioCreateModParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioCreateModParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioCreateModParams, Z_Construct_UPackage__Script_Modio(), TEXT("ModioCreateModParams"), sizeof(FModioCreateModParams), Get_Z_Construct_UScriptStruct_FModioCreateModParams_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioCreateModParams>()
{
	return FModioCreateModParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioCreateModParams(FModioCreateModParams::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioCreateModParams"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioCreateModParams
{
	FScriptStruct_Modio_StaticRegisterNativesFModioCreateModParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioCreateModParams")),new UScriptStruct::TCppStructOps<FModioCreateModParams>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioCreateModParams;
	struct Z_Construct_UScriptStruct_FModioCreateModParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Summary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToLogoFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToLogoFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioCreateModParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioCreateModParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioCreateModParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Summary_MetaData[] = {
		{ "Category", "ModioCreateModParams" },
		{ "ModuleRelativePath", "Public/Types/ModioCreateModParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Summary = { "Summary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioCreateModParams, Summary), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Summary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Summary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ModioCreateModParams" },
		{ "ModuleRelativePath", "Public/Types/ModioCreateModParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioCreateModParams, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_PathToLogoFile_MetaData[] = {
		{ "Category", "ModioCreateModParams" },
		{ "ModuleRelativePath", "Public/Types/ModioCreateModParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_PathToLogoFile = { "PathToLogoFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioCreateModParams, PathToLogoFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_PathToLogoFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_PathToLogoFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioCreateModParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Summary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioCreateModParams_Statics::NewProp_PathToLogoFile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioCreateModParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioCreateModParams",
		sizeof(FModioCreateModParams),
		alignof(FModioCreateModParams),
		Z_Construct_UScriptStruct_FModioCreateModParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioCreateModParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioCreateModParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioCreateModParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioCreateModParams"), sizeof(FModioCreateModParams), Get_Z_Construct_UScriptStruct_FModioCreateModParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioCreateModParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioCreateModParams_Hash() { return 3966160560U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
