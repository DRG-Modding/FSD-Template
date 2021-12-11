// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordSDK/Public/DiscordUserDataSDK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordUserDataSDK() {}
// Cross Module References
	DISCORDSDK_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserDataSDK();
	UPackage* Z_Construct_UPackage__Script_DiscordSDK();
// End Cross Module References
class UScriptStruct* FDiscordUserDataSDK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDSDK_API uint32 Get_Z_Construct_UScriptStruct_FDiscordUserDataSDK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordUserDataSDK, Z_Construct_UPackage__Script_DiscordSDK(), TEXT("DiscordUserDataSDK"), sizeof(FDiscordUserDataSDK), Get_Z_Construct_UScriptStruct_FDiscordUserDataSDK_Hash());
	}
	return Singleton;
}
template<> DISCORDSDK_API UScriptStruct* StaticStruct<FDiscordUserDataSDK>()
{
	return FDiscordUserDataSDK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordUserDataSDK(FDiscordUserDataSDK::StaticStruct, TEXT("/Script/DiscordSDK"), TEXT("DiscordUserDataSDK"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordSDK_StaticRegisterNativesFDiscordUserDataSDK
{
	FScriptStruct_DiscordSDK_StaticRegisterNativesFDiscordUserDataSDK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DiscordUserDataSDK")),new UScriptStruct::TCppStructOps<FDiscordUserDataSDK>);
	}
} ScriptStruct_DiscordSDK_StaticRegisterNativesFDiscordUserDataSDK;
	struct Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_avatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_discriminator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_discriminator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordUserDataSDK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordUserDataSDK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_avatar_MetaData[] = {
		{ "Category", "DiscordUserDataSDK" },
		{ "ModuleRelativePath", "Public/DiscordUserDataSDK.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_avatar = { "avatar", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserDataSDK, avatar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_avatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_discriminator_MetaData[] = {
		{ "Category", "DiscordUserDataSDK" },
		{ "ModuleRelativePath", "Public/DiscordUserDataSDK.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_discriminator = { "discriminator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserDataSDK, discriminator), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_discriminator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_discriminator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "DiscordUserDataSDK" },
		{ "ModuleRelativePath", "Public/DiscordUserDataSDK.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserDataSDK, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "DiscordUserDataSDK" },
		{ "ModuleRelativePath", "Public/DiscordUserDataSDK.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserDataSDK, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_discriminator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordSDK,
		nullptr,
		&NewStructOps,
		"DiscordUserDataSDK",
		sizeof(FDiscordUserDataSDK),
		alignof(FDiscordUserDataSDK),
		Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserDataSDK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordUserDataSDK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordUserDataSDK"), sizeof(FDiscordUserDataSDK), Get_Z_Construct_UScriptStruct_FDiscordUserDataSDK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordUserDataSDK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordUserDataSDK_Hash() { return 2270219902U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
