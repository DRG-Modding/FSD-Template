// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioInitializeOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioInitializeOptions() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioInitializeOptions();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioPortal();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioEnvironment();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioApiKey();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioGameID();
// End Cross Module References
class UScriptStruct* FModioInitializeOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioInitializeOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioInitializeOptions, Z_Construct_UPackage__Script_Modio(), TEXT("ModioInitializeOptions"), sizeof(FModioInitializeOptions), Get_Z_Construct_UScriptStruct_FModioInitializeOptions_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioInitializeOptions>()
{
	return FModioInitializeOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioInitializeOptions(FModioInitializeOptions::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioInitializeOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioInitializeOptions
{
	FScriptStruct_Modio_StaticRegisterNativesFModioInitializeOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioInitializeOptions")),new UScriptStruct::TCppStructOps<FModioInitializeOptions>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioInitializeOptions;
	struct Z_Construct_UScriptStruct_FModioInitializeOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalInUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PortalInUse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PortalInUse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameEnvironment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameEnvironment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameEnvironment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "Modio.ModioCommonTypesLibrary.MakeInitializeOptions" },
		{ "ModuleRelativePath", "Public/Types/ModioInitializeOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioInitializeOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_PortalInUse_MetaData[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/** @brief The portal your title is running through */" },
		{ "ModuleRelativePath", "Public/Types/ModioInitializeOptions.h" },
		{ "ToolTip", "@brief The portal your title is running through" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_PortalInUse = { "PortalInUse", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioInitializeOptions, PortalInUse), Z_Construct_UEnum_Modio_EModioPortal, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_PortalInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_PortalInUse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_PortalInUse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameEnvironment_MetaData[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/** @brief The mod.io environment you want to run the SDK on */" },
		{ "ModuleRelativePath", "Public/Types/ModioInitializeOptions.h" },
		{ "ToolTip", "@brief The mod.io environment you want to run the SDK on" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameEnvironment = { "GameEnvironment", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioInitializeOptions, GameEnvironment), Z_Construct_UEnum_Modio_EModioEnvironment, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameEnvironment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameEnvironment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameEnvironment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_ApiKey_MetaData[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/** @brief The Mod.io-provided API key for your application or game */" },
		{ "ModuleRelativePath", "Public/Types/ModioInitializeOptions.h" },
		{ "ToolTip", "@brief The Mod.io-provided API key for your application or game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioInitializeOptions, ApiKey), Z_Construct_UScriptStruct_FModioApiKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_ApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_ApiKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameId_MetaData[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/** @brief The Mod.io-provided ID for the game */" },
		{ "ModuleRelativePath", "Public/Types/ModioInitializeOptions.h" },
		{ "ToolTip", "@brief The Mod.io-provided ID for the game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioInitializeOptions, GameId), Z_Construct_UScriptStruct_FModioGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_PortalInUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_PortalInUse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameEnvironment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameEnvironment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_ApiKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::NewProp_GameId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioInitializeOptions",
		sizeof(FModioInitializeOptions),
		alignof(FModioInitializeOptions),
		Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioInitializeOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioInitializeOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioInitializeOptions"), sizeof(FModioInitializeOptions), Get_Z_Construct_UScriptStruct_FModioInitializeOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioInitializeOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioInitializeOptions_Hash() { return 2796548021U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
