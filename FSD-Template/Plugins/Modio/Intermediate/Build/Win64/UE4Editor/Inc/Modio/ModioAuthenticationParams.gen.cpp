// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioAuthenticationParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioAuthenticationParams() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioAuthenticationProvider();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioAuthenticationParams();
// End Cross Module References
	static UEnum* EModioAuthenticationProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioAuthenticationProvider, Z_Construct_UPackage__Script_Modio(), TEXT("EModioAuthenticationProvider"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioAuthenticationProvider>()
	{
		return EModioAuthenticationProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioAuthenticationProvider(EModioAuthenticationProvider_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioAuthenticationProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioAuthenticationProvider_Hash() { return 2572224910U; }
	UEnum* Z_Construct_UEnum_Modio_EModioAuthenticationProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioAuthenticationProvider"), 0, Get_Z_Construct_UEnum_Modio_EModioAuthenticationProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioAuthenticationProvider::XboxLive", (int64)EModioAuthenticationProvider::XboxLive },
				{ "EModioAuthenticationProvider::Steam", (int64)EModioAuthenticationProvider::Steam },
				{ "EModioAuthenticationProvider::GoG", (int64)EModioAuthenticationProvider::GoG },
				{ "EModioAuthenticationProvider::Itch", (int64)EModioAuthenticationProvider::Itch },
				{ "EModioAuthenticationProvider::Switch", (int64)EModioAuthenticationProvider::Switch },
				{ "EModioAuthenticationProvider::Discord", (int64)EModioAuthenticationProvider::Discord },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Simple struct to encapsulate data passed to external authentication systems */" },
				{ "Discord.Name", "EModioAuthenticationProvider::Discord" },
				{ "GoG.Name", "EModioAuthenticationProvider::GoG" },
				{ "Itch.Name", "EModioAuthenticationProvider::Itch" },
				{ "ModuleRelativePath", "Public/Types/ModioAuthenticationParams.h" },
				{ "Steam.Name", "EModioAuthenticationProvider::Steam" },
				{ "Switch.Name", "EModioAuthenticationProvider::Switch" },
				{ "ToolTip", "@brief Simple struct to encapsulate data passed to external authentication systems" },
				{ "XboxLive.Name", "EModioAuthenticationProvider::XboxLive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioAuthenticationProvider",
				"EModioAuthenticationProvider",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FModioAuthenticationParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioAuthenticationParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioAuthenticationParams, Z_Construct_UPackage__Script_Modio(), TEXT("ModioAuthenticationParams"), sizeof(FModioAuthenticationParams), Get_Z_Construct_UScriptStruct_FModioAuthenticationParams_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioAuthenticationParams>()
{
	return FModioAuthenticationParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioAuthenticationParams(FModioAuthenticationParams::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioAuthenticationParams"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioAuthenticationParams
{
	FScriptStruct_Modio_StaticRegisterNativesFModioAuthenticationParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioAuthenticationParams")),new UScriptStruct::TCppStructOps<FModioAuthenticationParams>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioAuthenticationParams;
	struct Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUserHasAcceptedTerms_MetaData[];
#endif
		static void NewProp_bUserHasAcceptedTerms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUserHasAcceptedTerms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserEmail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Simple struct to encapsulate data passed to external authentication systems */" },
		{ "ModuleRelativePath", "Public/Types/ModioAuthenticationParams.h" },
		{ "ToolTip", "@brief Simple struct to encapsulate data passed to external authentication systems" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioAuthenticationParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_bUserHasAcceptedTerms_MetaData[] = {
		{ "Category", "ModioAuthenticationParams" },
		{ "ModuleRelativePath", "Public/Types/ModioAuthenticationParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_bUserHasAcceptedTerms_SetBit(void* Obj)
	{
		((FModioAuthenticationParams*)Obj)->bUserHasAcceptedTerms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_bUserHasAcceptedTerms = { "bUserHasAcceptedTerms", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModioAuthenticationParams), &Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_bUserHasAcceptedTerms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_bUserHasAcceptedTerms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_bUserHasAcceptedTerms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_UserEmail_MetaData[] = {
		{ "Category", "ModioAuthenticationParams" },
		{ "ModuleRelativePath", "Public/Types/ModioAuthenticationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_UserEmail = { "UserEmail", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioAuthenticationParams, UserEmail), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_UserEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_UserEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_AuthToken_MetaData[] = {
		{ "Category", "ModioAuthenticationParams" },
		{ "ModuleRelativePath", "Public/Types/ModioAuthenticationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioAuthenticationParams, AuthToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_AuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_AuthToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_bUserHasAcceptedTerms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_UserEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::NewProp_AuthToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioAuthenticationParams",
		sizeof(FModioAuthenticationParams),
		alignof(FModioAuthenticationParams),
		Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioAuthenticationParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioAuthenticationParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioAuthenticationParams"), sizeof(FModioAuthenticationParams), Get_Z_Construct_UScriptStruct_FModioAuthenticationParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioAuthenticationParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioAuthenticationParams_Hash() { return 6315732U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
