// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioCommonTypesLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioCommonTypesLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioCommonTypesLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioCommonTypesLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioApiKey();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAddress();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAuthCode();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFileMetadataID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioGameID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioUserID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioAuthenticationParams();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioInitializeOptions();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioPortal();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioEnvironment();
// End Cross Module References
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execSetSessionIdentifier)
	{
		P_GET_STRUCT_REF(FModioInitializeOptions,Z_Param_Out_Options);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioInitializeOptions*)Z_Param__Result=UModioCommonTypesLibrary::SetSessionIdentifier(Z_Param_Out_Options,Z_Param_SessionIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execSetPortal)
	{
		P_GET_STRUCT_REF(FModioInitializeOptions,Z_Param_Out_Options);
		P_GET_ENUM(EModioPortal,Z_Param_PortalToUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioInitializeOptions*)Z_Param__Result=UModioCommonTypesLibrary::SetPortal(Z_Param_Out_Options,EModioPortal(Z_Param_PortalToUse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execMakeInitializeOptions)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_GameId);
		P_GET_PROPERTY(FStrProperty,Z_Param_APIKey);
		P_GET_ENUM(EModioEnvironment,Z_Param_GameEnvironment);
		P_GET_ENUM(EModioPortal,Z_Param_PortalInUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioInitializeOptions*)Z_Param__Result=UModioCommonTypesLibrary::MakeInitializeOptions(Z_Param_GameId,Z_Param_APIKey,EModioEnvironment(Z_Param_GameEnvironment),EModioPortal(Z_Param_PortalInUse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_StringToEmailAuthCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AuthCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioEmailAuthCode*)Z_Param__Result=UModioCommonTypesLibrary::Conv_StringToEmailAuthCode(Z_Param_AuthCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_StringToEmailAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioEmailAddress*)Z_Param__Result=UModioCommonTypesLibrary::Conv_StringToEmailAddress(Z_Param_Email);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_EmailAuthCodeToString)
	{
		P_GET_STRUCT(FModioEmailAuthCode,Z_Param_EmailAuthCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioCommonTypesLibrary::Conv_EmailAuthCodeToString(Z_Param_EmailAuthCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_EmailAddressToString)
	{
		P_GET_STRUCT(FModioEmailAddress,Z_Param_EmailAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioCommonTypesLibrary::Conv_EmailAddressToString(Z_Param_EmailAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_UserIDToString)
	{
		P_GET_STRUCT(FModioUserID,Z_Param_UserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioCommonTypesLibrary::Conv_UserIDToString(Z_Param_UserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_FileMetadataIDToString)
	{
		P_GET_STRUCT(FModioFileMetadataID,Z_Param_FileMetadataID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioCommonTypesLibrary::Conv_FileMetadataIDToString(Z_Param_FileMetadataID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_ModIDToString)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioCommonTypesLibrary::Conv_ModIDToString(Z_Param_ModID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_ApiKeyToString)
	{
		P_GET_STRUCT(FModioApiKey,Z_Param_ApiKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioCommonTypesLibrary::Conv_ApiKeyToString(Z_Param_ApiKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execMakeApiKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioApiKey*)Z_Param__Result=UModioCommonTypesLibrary::MakeApiKey(Z_Param_ApiKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execMakeAuthParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AuthToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
		P_GET_UBOOL(Z_Param_bHasAcceptedTOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioAuthenticationParams*)Z_Param__Result=UModioCommonTypesLibrary::MakeAuthParams(Z_Param_AuthToken,Z_Param_EmailAddress,Z_Param_bHasAcceptedTOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execConv_GameIDToString)
	{
		P_GET_STRUCT(FModioGameID,Z_Param_GameId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioCommonTypesLibrary::Conv_GameIDToString(Z_Param_GameId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioCommonTypesLibrary::execMakeGameId)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_GameId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioGameID*)Z_Param__Result=UModioCommonTypesLibrary::MakeGameId(Z_Param_GameId);
		P_NATIVE_END;
	}
	void UModioCommonTypesLibrary::StaticRegisterNativesUModioCommonTypesLibrary()
	{
		UClass* Class = UModioCommonTypesLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_ApiKeyToString", &UModioCommonTypesLibrary::execConv_ApiKeyToString },
			{ "Conv_EmailAddressToString", &UModioCommonTypesLibrary::execConv_EmailAddressToString },
			{ "Conv_EmailAuthCodeToString", &UModioCommonTypesLibrary::execConv_EmailAuthCodeToString },
			{ "Conv_FileMetadataIDToString", &UModioCommonTypesLibrary::execConv_FileMetadataIDToString },
			{ "Conv_GameIDToString", &UModioCommonTypesLibrary::execConv_GameIDToString },
			{ "Conv_ModIDToString", &UModioCommonTypesLibrary::execConv_ModIDToString },
			{ "Conv_StringToEmailAddress", &UModioCommonTypesLibrary::execConv_StringToEmailAddress },
			{ "Conv_StringToEmailAuthCode", &UModioCommonTypesLibrary::execConv_StringToEmailAuthCode },
			{ "Conv_UserIDToString", &UModioCommonTypesLibrary::execConv_UserIDToString },
			{ "MakeApiKey", &UModioCommonTypesLibrary::execMakeApiKey },
			{ "MakeAuthParams", &UModioCommonTypesLibrary::execMakeAuthParams },
			{ "MakeGameId", &UModioCommonTypesLibrary::execMakeGameId },
			{ "MakeInitializeOptions", &UModioCommonTypesLibrary::execMakeInitializeOptions },
			{ "SetPortal", &UModioCommonTypesLibrary::execSetPortal },
			{ "SetSessionIdentifier", &UModioCommonTypesLibrary::execSetSessionIdentifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_ApiKeyToString_Parms
		{
			FModioApiKey ApiKey;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApiKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_ApiKeyToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_ApiKeyToString_Parms, ApiKey), Z_Construct_UScriptStruct_FModioApiKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::NewProp_ApiKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/**\n\x09 * @brief Converts a ApiKey string so you can debug output it\n\x09 * @param ApiKey Input Api Key\n\x09 * @return InvalidApiKey if invalid\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ModioApiKey)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Converts a ApiKey string so you can debug output it\n@param ApiKey Input Api Key\n@return InvalidApiKey if invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_ApiKeyToString", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_ApiKeyToString_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_EmailAddressToString_Parms
		{
			FModioEmailAddress EmailAddress;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmailAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_EmailAddressToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_EmailAddressToString_Parms, EmailAddress), Z_Construct_UScriptStruct_FModioEmailAddress, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::NewProp_EmailAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/**\n\x09 * @brief Converts a EmailAddress string so you can debug output it\n\x09 * @param EmailAddress -\n\x09 * @return InvalidEmailAddress if invalid\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ModioEmailAddress)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Converts a EmailAddress string so you can debug output it\n@param EmailAddress -\n@return InvalidEmailAddress if invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_EmailAddressToString", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_EmailAddressToString_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_EmailAuthCodeToString_Parms
		{
			FModioEmailAuthCode EmailAuthCode;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmailAuthCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_EmailAuthCodeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::NewProp_EmailAuthCode = { "EmailAuthCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_EmailAuthCodeToString_Parms, EmailAuthCode), Z_Construct_UScriptStruct_FModioEmailAuthCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::NewProp_EmailAuthCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/**\n\x09 * @brief Converts a EmailAuthCode string so you can debug output it\n\x09 * @param EmailAuthCode -\n\x09 * @return InvalidEmailAuthCode if invalid\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ModioEmailAuthCode)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Converts a EmailAuthCode string so you can debug output it\n@param EmailAuthCode -\n@return InvalidEmailAuthCode if invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_EmailAuthCodeToString", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_EmailAuthCodeToString_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_FileMetadataIDToString_Parms
		{
			FModioFileMetadataID FileMetadataID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileMetadataID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_FileMetadataIDToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::NewProp_FileMetadataID = { "FileMetadataID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_FileMetadataIDToString_Parms, FileMetadataID), Z_Construct_UScriptStruct_FModioFileMetadataID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::NewProp_FileMetadataID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/**\n\x09 * @brief Converts a FFileMetadataID to string so you can debug output it\n\x09 * @param FileMetadataID Input File metadata ID\n\x09 * @return InvalidFileMetadataID if invalid\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FileMetadataID)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Converts a FFileMetadataID to string so you can debug output it\n@param FileMetadataID Input File metadata ID\n@return InvalidFileMetadataID if invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_FileMetadataIDToString", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_FileMetadataIDToString_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_GameIDToString_Parms
		{
			FModioGameID GameId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_GameIDToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_GameIDToString_Parms, GameId), Z_Construct_UScriptStruct_FModioGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::NewProp_GameId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/**\n\x09 * @brief Converts a game id to a string so you can debug output it\n\x09 * @param GameId - Input Game Id\n\x09 * @return InvalidGameId if invalid\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ModioGameId)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Converts a game id to a string so you can debug output it\n@param GameId - Input Game Id\n@return InvalidGameId if invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_GameIDToString", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_GameIDToString_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_ModIDToString_Parms
		{
			FModioModID ModID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_ModIDToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::NewProp_ModID = { "ModID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_ModIDToString_Parms, ModID), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::NewProp_ModID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/**\n\x09 * @brief Converts a ModId string so you can debug output it\n\x09 * @param ModID Input Mod ID\n\x09 * @return InvalidModID if invalid\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ModioModID)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Converts a ModId string so you can debug output it\n@param ModID Input Mod ID\n@return InvalidModID if invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_ModIDToString", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_ModIDToString_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_StringToEmailAddress_Parms
		{
			FString Email;
			FModioEmailAddress ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_StringToEmailAddress_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioEmailAddress, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_StringToEmailAddress_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * @brief Make a email address from a string\n\x09 * @param Email Input string to convert\n\x09 * @return FModioEmailAddress object\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToEmailAdress (String)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Make a email address from a string\n@param Email Input string to convert\n@return FModioEmailAddress object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_StringToEmailAddress", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_StringToEmailAddress_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_StringToEmailAuthCode_Parms
		{
			FString AuthCode;
			FModioEmailAuthCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_StringToEmailAuthCode_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioEmailAuthCode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::NewProp_AuthCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::NewProp_AuthCode = { "AuthCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_StringToEmailAuthCode_Parms, AuthCode), METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::NewProp_AuthCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::NewProp_AuthCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::NewProp_AuthCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * @brief Make a email auth code from a string\n\x09 * @param GameId Input string\n\x09 * @return Auth code for submission\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToEmailAuthCode (String)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Make a email auth code from a string\n@param GameId Input string\n@return Auth code for submission" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_StringToEmailAuthCode", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_StringToEmailAuthCode_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics
	{
		struct ModioCommonTypesLibrary_eventConv_UserIDToString_Parms
		{
			FModioUserID UserID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_UserIDToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventConv_UserIDToString_Parms, UserID), Z_Construct_UScriptStruct_FModioUserID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::NewProp_UserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/**\n\x09 * @brief Converts a UserID string so you can debug output it\n\x09 * @param UserID -\n\x09 * @return InvalidUserID if invalid\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ModioUserID)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Converts a UserID string so you can debug output it\n@param UserID -\n@return InvalidUserID if invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "Conv_UserIDToString", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventConv_UserIDToString_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics
	{
		struct ModioCommonTypesLibrary_eventMakeApiKey_Parms
		{
			FString ApiKey;
			FModioApiKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeApiKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioApiKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeApiKey_Parms, ApiKey), METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::NewProp_ApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::NewProp_ApiKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::NewProp_ApiKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * @brief Create a ApiKey id from a string, should only be used in conjunction with InitializeAsync\n\x09 * @param ApiKey - a api key from your settings panel on mod.io\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@brief Create a ApiKey id from a string, should only be used in conjunction with InitializeAsync\n@param ApiKey - a api key from your settings panel on mod.io" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "MakeApiKey", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventMakeApiKey_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics
	{
		struct ModioCommonTypesLibrary_eventMakeAuthParams_Parms
		{
			FString AuthToken;
			FString EmailAddress;
			bool bHasAcceptedTOS;
			FModioAuthenticationParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAcceptedTOS_MetaData[];
#endif
		static void NewProp_bHasAcceptedTOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAcceptedTOS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeAuthParams_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioAuthenticationParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_bHasAcceptedTOS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_bHasAcceptedTOS_SetBit(void* Obj)
	{
		((ModioCommonTypesLibrary_eventMakeAuthParams_Parms*)Obj)->bHasAcceptedTOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_bHasAcceptedTOS = { "bHasAcceptedTOS", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioCommonTypesLibrary_eventMakeAuthParams_Parms), &Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_bHasAcceptedTOS_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_bHasAcceptedTOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_bHasAcceptedTOS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeAuthParams_Parms, EmailAddress), METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_EmailAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_AuthToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeAuthParams_Parms, AuthToken), METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_AuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_AuthToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_bHasAcceptedTOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_EmailAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::NewProp_AuthToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * @brief Creates an AuthenticationParams object \n\x09 * @param AuthToken - Authentication provider-supplied OAuth token\n\x09 * @param EmailAddress - User email address, can be left blank\n\x09 * @param bHasAcceptedTOS - Has the user been shown the TOS and accepted the TOS?\n\x09 * @return The constructed FModioAuthenticationParams object for use with <<K2_AuthenticateUserExternalAsync>>\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@brief Creates an AuthenticationParams object\n@param AuthToken - Authentication provider-supplied OAuth token\n@param EmailAddress - User email address, can be left blank\n@param bHasAcceptedTOS - Has the user been shown the TOS and accepted the TOS?\n@return The constructed FModioAuthenticationParams object for use with <<K2_AuthenticateUserExternalAsync>>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "MakeAuthParams", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventMakeAuthParams_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics
	{
		struct ModioCommonTypesLibrary_eventMakeGameId_Parms
		{
			int64 GameId;
			FModioGameID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_GameId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeGameId_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeGameId_Parms, GameId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::NewProp_GameId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * @brief Create a game id from a integer, should only be used in conjunction with InitializeAsync\n\x09 * @param GameId - a positive integer that maps to your game\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@brief Create a game id from a integer, should only be used in conjunction with InitializeAsync\n@param GameId - a positive integer that maps to your game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "MakeGameId", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventMakeGameId_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics
	{
		struct ModioCommonTypesLibrary_eventMakeInitializeOptions_Parms
		{
			int64 GameId;
			FString APIKey;
			EModioEnvironment GameEnvironment;
			EModioPortal PortalInUse;
			FModioInitializeOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PortalInUse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PortalInUse_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameEnvironment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameEnvironment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_APIKey;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_GameId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeInitializeOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioInitializeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_PortalInUse = { "PortalInUse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeInitializeOptions_Parms, PortalInUse), Z_Construct_UEnum_Modio_EModioPortal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_PortalInUse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_GameEnvironment = { "GameEnvironment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeInitializeOptions_Parms, GameEnvironment), Z_Construct_UEnum_Modio_EModioEnvironment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_GameEnvironment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_APIKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeInitializeOptions_Parms, APIKey), METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_APIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_APIKey_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventMakeInitializeOptions_Parms, GameId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_PortalInUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_PortalInUse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_GameEnvironment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_GameEnvironment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_APIKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::NewProp_GameId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * @brief Make initialization options, should only be used in conjunction with InitializeAsync\n\x09 * @param GameId - a positive integer that maps to your game\n\x09 * @param APIKey - APIKey available at https://<your-game-name>.test.mod.io/edit/api or https://<your-game-name>.mod.io/edit/api\n\x09 * @param GameEnvironment - If your environment is setup on test or production\n\x09 */" },
		{ "CPP_Default_PortalInUse", "None" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@brief Make initialization options, should only be used in conjunction with InitializeAsync\n@param GameId - a positive integer that maps to your game\n@param APIKey - APIKey available at https://<your-game-name>.test.mod.io/edit/api or https://<your-game-name>.mod.io/edit/api\n@param GameEnvironment - If your environment is setup on test or production" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "MakeInitializeOptions", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventMakeInitializeOptions_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics
	{
		struct ModioCommonTypesLibrary_eventSetPortal_Parms
		{
			FModioInitializeOptions Options;
			EModioPortal PortalToUse;
			FModioInitializeOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PortalToUse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PortalToUse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventSetPortal_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioInitializeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_PortalToUse = { "PortalToUse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventSetPortal_Parms, PortalToUse), Z_Construct_UEnum_Modio_EModioPortal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_PortalToUse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventSetPortal_Parms, Options), Z_Construct_UScriptStruct_FModioInitializeOptions, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_PortalToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_PortalToUse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * @brief Changes the portal for the provided set of initialization options\n\x09 * @param Options - The template initialization options\n\x09 * @param PortalToUse - The new portal to use\n\x09 * @return New Initialization Options object with the portal set to the desired value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
		{ "ToolTip", "@brief Changes the portal for the provided set of initialization options\n@param Options - The template initialization options\n@param PortalToUse - The new portal to use\n@return New Initialization Options object with the portal set to the desired value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "SetPortal", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventSetPortal_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics
	{
		struct ModioCommonTypesLibrary_eventSetSessionIdentifier_Parms
		{
			FModioInitializeOptions Options;
			FString SessionIdentifier;
			FModioInitializeOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventSetSessionIdentifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioInitializeOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_SessionIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_SessionIdentifier = { "SessionIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventSetSessionIdentifier_Parms, SessionIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_SessionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_SessionIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioCommonTypesLibrary_eventSetSessionIdentifier_Parms, Options), Z_Construct_UScriptStruct_FModioInitializeOptions, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_SessionIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioCommonTypesLibrary, nullptr, "SetSessionIdentifier", nullptr, nullptr, sizeof(ModioCommonTypesLibrary_eventSetSessionIdentifier_Parms), Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioCommonTypesLibrary_NoRegister()
	{
		return UModioCommonTypesLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioCommonTypesLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioCommonTypesLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioCommonTypesLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ApiKeyToString, "Conv_ApiKeyToString" }, // 4079952882
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAddressToString, "Conv_EmailAddressToString" }, // 2107154235
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_EmailAuthCodeToString, "Conv_EmailAuthCodeToString" }, // 2022385177
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_FileMetadataIDToString, "Conv_FileMetadataIDToString" }, // 1982416642
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_GameIDToString, "Conv_GameIDToString" }, // 188004786
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_ModIDToString, "Conv_ModIDToString" }, // 49842191
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAddress, "Conv_StringToEmailAddress" }, // 1069881336
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_StringToEmailAuthCode, "Conv_StringToEmailAuthCode" }, // 3803214854
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_Conv_UserIDToString, "Conv_UserIDToString" }, // 3706195698
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_MakeApiKey, "MakeApiKey" }, // 2669092607
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_MakeAuthParams, "MakeAuthParams" }, // 3739699484
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_MakeGameId, "MakeGameId" }, // 1323187317
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_MakeInitializeOptions, "MakeInitializeOptions" }, // 1127058996
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_SetPortal, "SetPortal" }, // 2408975786
		{ &Z_Construct_UFunction_UModioCommonTypesLibrary_SetSessionIdentifier, "SetSessionIdentifier" }, // 3892179612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioCommonTypesLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioCommonTypesLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioCommonTypesLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioCommonTypesLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioCommonTypesLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioCommonTypesLibrary_Statics::ClassParams = {
		&UModioCommonTypesLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioCommonTypesLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioCommonTypesLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioCommonTypesLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioCommonTypesLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioCommonTypesLibrary, 3485537435);
	template<> MODIO_API UClass* StaticClass<UModioCommonTypesLibrary>()
	{
		return UModioCommonTypesLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioCommonTypesLibrary(Z_Construct_UClass_UModioCommonTypesLibrary, &UModioCommonTypesLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioCommonTypesLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioCommonTypesLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
