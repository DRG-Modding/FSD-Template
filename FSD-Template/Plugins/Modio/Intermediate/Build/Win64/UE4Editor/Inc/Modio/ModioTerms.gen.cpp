// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioTerms.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioTerms() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalTerms();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioTerms();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioLink();
// End Cross Module References
class UScriptStruct* FModioOptionalTerms::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalTerms_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalTerms, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalTerms"), sizeof(FModioOptionalTerms), Get_Z_Construct_UScriptStruct_FModioOptionalTerms_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalTerms>()
{
	return FModioOptionalTerms::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalTerms(FModioOptionalTerms::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalTerms"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalTerms
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalTerms()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalTerms")),new UScriptStruct::TCppStructOps<FModioOptionalTerms>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalTerms;
	struct Z_Construct_UScriptStruct_FModioOptionalTerms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalTerms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalTerms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalTerms>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalTerms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalTerms",
		sizeof(FModioOptionalTerms),
		alignof(FModioOptionalTerms),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalTerms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalTerms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalTerms()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalTerms_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalTerms"), sizeof(FModioOptionalTerms), Get_Z_Construct_UScriptStruct_FModioOptionalTerms_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalTerms_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalTerms_Hash() { return 3770934397U; }
class UScriptStruct* FModioTerms::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioTerms_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioTerms, Z_Construct_UPackage__Script_Modio(), TEXT("ModioTerms"), sizeof(FModioTerms), Get_Z_Construct_UScriptStruct_FModioTerms_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioTerms>()
{
	return FModioTerms::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioTerms(FModioTerms::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioTerms"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioTerms
{
	FScriptStruct_Modio_StaticRegisterNativesFModioTerms()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioTerms")),new UScriptStruct::TCppStructOps<FModioTerms>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioTerms;
	struct Z_Construct_UScriptStruct_FModioTerms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManageLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManageLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivacyLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrivacyLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TermsLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TermsLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebsiteLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WebsiteLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisagreeButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisagreeButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreeButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AgreeButtonText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTerms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief This struct contains strings that should be displayed to a user\n * when displaying the terms of use and offering to create a mod.io account\n **/" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief This struct contains strings that should be displayed to a user\nwhen displaying the terms of use and offering to create a mod.io account" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioTerms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioTerms>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_ManageLink_MetaData[] = {
		{ "Category", "Terms|Links" },
		{ "Comment", "/** @brief Link to the mod.io Manage User Account page */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief Link to the mod.io Manage User Account page" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_ManageLink = { "ManageLink", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTerms, ManageLink), Z_Construct_UScriptStruct_FModioLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_ManageLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_ManageLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_PrivacyLink_MetaData[] = {
		{ "Category", "Terms|Links" },
		{ "Comment", "/** @brief Link to the mod.io Privacy Policy */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief Link to the mod.io Privacy Policy" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_PrivacyLink = { "PrivacyLink", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTerms, PrivacyLink), Z_Construct_UScriptStruct_FModioLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_PrivacyLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_PrivacyLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_TermsLink_MetaData[] = {
		{ "Category", "Terms|Links" },
		{ "Comment", "/** @brief Link to the mod.io terms of use */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief Link to the mod.io terms of use" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_TermsLink = { "TermsLink", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTerms, TermsLink), Z_Construct_UScriptStruct_FModioLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_TermsLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_TermsLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_WebsiteLink_MetaData[] = {
		{ "Category", "Terms|Links" },
		{ "Comment", "/** @brief Link to the mod.io website */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief Link to the mod.io website" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_WebsiteLink = { "WebsiteLink", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTerms, WebsiteLink), Z_Construct_UScriptStruct_FModioLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_WebsiteLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_WebsiteLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_DisagreeButtonText_MetaData[] = {
		{ "Category", "Terms|Buttons" },
		{ "Comment", "/** @brief Text to display on the negative/cancel button */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief Text to display on the negative/cancel button" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_DisagreeButtonText = { "DisagreeButtonText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTerms, DisagreeButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_DisagreeButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_DisagreeButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_AgreeButtonText_MetaData[] = {
		{ "Category", "Terms|Buttons" },
		{ "Comment", "/** @brief Text to display on the affirmative/OK button */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief Text to display on the affirmative/OK button" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_AgreeButtonText = { "AgreeButtonText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioTerms, AgreeButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_AgreeButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_AgreeButtonText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioTerms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_ManageLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_PrivacyLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_TermsLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_WebsiteLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_DisagreeButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioTerms_Statics::NewProp_AgreeButtonText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioTerms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioTerms",
		sizeof(FModioTerms),
		alignof(FModioTerms),
		Z_Construct_UScriptStruct_FModioTerms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioTerms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioTerms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioTerms()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioTerms_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioTerms"), sizeof(FModioTerms), Get_Z_Construct_UScriptStruct_FModioTerms_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioTerms_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioTerms_Hash() { return 1605370916U; }
class UScriptStruct* FModioLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioLink, Z_Construct_UPackage__Script_Modio(), TEXT("ModioLink"), sizeof(FModioLink), Get_Z_Construct_UScriptStruct_FModioLink_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioLink>()
{
	return FModioLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioLink(FModioLink::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioLink"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioLink
{
	FScriptStruct_Modio_StaticRegisterNativesFModioLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioLink")),new UScriptStruct::TCppStructOps<FModioLink>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioLink;
	struct Z_Construct_UScriptStruct_FModioLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequired_MetaData[];
#endif
		static void NewProp_bRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_bRequired_MetaData[] = {
		{ "Category", "Terms|Link" },
		{ "Comment", "/** @brief Is displaying this link mandatory? */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief Is displaying this link mandatory?" },
	};
#endif
	void Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_bRequired_SetBit(void* Obj)
	{
		((FModioLink*)Obj)->bRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_bRequired = { "bRequired", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModioLink), &Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_bRequired_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_bRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_bRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "Terms|Link" },
		{ "Comment", "/** @brief The actual URL for the link */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief The actual URL for the link" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioLink, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Terms|Link" },
		{ "Comment", "/** @brief The user-facing text for the link */" },
		{ "ModuleRelativePath", "Public/Types/ModioTerms.h" },
		{ "ToolTip", "@brief The user-facing text for the link" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioLink, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_bRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioLink_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioLink",
		sizeof(FModioLink),
		alignof(FModioLink),
		Z_Construct_UScriptStruct_FModioLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioLink"), sizeof(FModioLink), Get_Z_Construct_UScriptStruct_FModioLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioLink_Hash() { return 2802221063U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
