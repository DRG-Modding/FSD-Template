// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioReportLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioReportLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioReportLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioReportLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioReportParams();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioReportType();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioGameID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioUserID();
// End Cross Module References
	DEFINE_FUNCTION(UModioReportLibrary::execMakeReportForMod)
	{
		P_GET_STRUCT(FModioModID,Z_Param_Mod);
		P_GET_ENUM(EModioReportType,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReportDescription);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReporterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReporterContact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioReportParams*)Z_Param__Result=UModioReportLibrary::MakeReportForMod(Z_Param_Mod,EModioReportType(Z_Param_Type),Z_Param_ReportDescription,Z_Param_ReporterName,Z_Param_ReporterContact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioReportLibrary::execMakeReportForUser)
	{
		P_GET_STRUCT(FModioUserID,Z_Param_User);
		P_GET_ENUM(EModioReportType,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReportDescription);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReporterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReporterContact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioReportParams*)Z_Param__Result=UModioReportLibrary::MakeReportForUser(Z_Param_User,EModioReportType(Z_Param_Type),Z_Param_ReportDescription,Z_Param_ReporterName,Z_Param_ReporterContact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioReportLibrary::execMakeReportForGame)
	{
		P_GET_STRUCT(FModioGameID,Z_Param_Game);
		P_GET_ENUM(EModioReportType,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReportDescription);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReporterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReporterContact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioReportParams*)Z_Param__Result=UModioReportLibrary::MakeReportForGame(Z_Param_Game,EModioReportType(Z_Param_Type),Z_Param_ReportDescription,Z_Param_ReporterName,Z_Param_ReporterContact);
		P_NATIVE_END;
	}
	void UModioReportLibrary::StaticRegisterNativesUModioReportLibrary()
	{
		UClass* Class = UModioReportLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeReportForGame", &UModioReportLibrary::execMakeReportForGame },
			{ "MakeReportForMod", &UModioReportLibrary::execMakeReportForMod },
			{ "MakeReportForUser", &UModioReportLibrary::execMakeReportForUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics
	{
		struct ModioReportLibrary_eventMakeReportForGame_Parms
		{
			FModioGameID Game;
			EModioReportType Type;
			FString ReportDescription;
			FString ReporterName;
			FString ReporterContact;
			FModioReportParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterContact;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportDescription;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Game;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForGame_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioReportParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReporterContact = { "ReporterContact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForGame_Parms, ReporterContact), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReporterName = { "ReporterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForGame_Parms, ReporterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReportDescription = { "ReportDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForGame_Parms, ReportDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForGame_Parms, Type), Z_Construct_UEnum_Modio_EModioReportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForGame_Parms, Game), Z_Construct_UScriptStruct_FModioGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReporterContact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReporterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_ReportDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::NewProp_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Content Reporting" },
		{ "Comment", "/// @brief Creates a content report for a game.\n/// @param Game The ID of the game being reported\n/// @param Type The nature of the content report\n/// @param ReportDescription A description of why the content is being reported\n/// @param ReporterName Name of the submitting user. Recommended for DMCA reports, but may be empty\n/// @param ReporterContact Contact details of the submitting user. Recommended for DMCA reports, but may be\n/// empty\n" },
		{ "ModuleRelativePath", "Public/Libraries/ModioReportLibrary.h" },
		{ "ToolTip", "@brief Creates a content report for a game.\n@param Game The ID of the game being reported\n@param Type The nature of the content report\n@param ReportDescription A description of why the content is being reported\n@param ReporterName Name of the submitting user. Recommended for DMCA reports, but may be empty\n@param ReporterContact Contact details of the submitting user. Recommended for DMCA reports, but may be\nempty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioReportLibrary, nullptr, "MakeReportForGame", nullptr, nullptr, sizeof(ModioReportLibrary_eventMakeReportForGame_Parms), Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics
	{
		struct ModioReportLibrary_eventMakeReportForMod_Parms
		{
			FModioModID Mod;
			EModioReportType Type;
			FString ReportDescription;
			FString ReporterName;
			FString ReporterContact;
			FModioReportParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterContact;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportDescription;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForMod_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioReportParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReporterContact = { "ReporterContact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForMod_Parms, ReporterContact), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReporterName = { "ReporterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForMod_Parms, ReporterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReportDescription = { "ReportDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForMod_Parms, ReportDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForMod_Parms, Type), Z_Construct_UEnum_Modio_EModioReportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_Mod = { "Mod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForMod_Parms, Mod), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReporterContact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReporterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_ReportDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::NewProp_Mod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Content Reporting" },
		{ "Comment", "/// @docpublic\n/// @brief Creates a content report for a game.\n/// @param Mod The ID of the content being reported\n/// @param Type The nature of the content report\n/// @param ReportDescription A description of why the content is being reported\n/// @param ReporterName Name of the submitting user. Recommended for DMCA reports, but may be empty\n/// @param ReporterContact Contact details of the submitting user. Recommended for DMCA reports, but may be\n/// empty\n" },
		{ "ModuleRelativePath", "Public/Libraries/ModioReportLibrary.h" },
		{ "ToolTip", "@docpublic\n@brief Creates a content report for a game.\n@param Mod The ID of the content being reported\n@param Type The nature of the content report\n@param ReportDescription A description of why the content is being reported\n@param ReporterName Name of the submitting user. Recommended for DMCA reports, but may be empty\n@param ReporterContact Contact details of the submitting user. Recommended for DMCA reports, but may be\nempty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioReportLibrary, nullptr, "MakeReportForMod", nullptr, nullptr, sizeof(ModioReportLibrary_eventMakeReportForMod_Parms), Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics
	{
		struct ModioReportLibrary_eventMakeReportForUser_Parms
		{
			FModioUserID User;
			EModioReportType Type;
			FString ReportDescription;
			FString ReporterName;
			FString ReporterContact;
			FModioReportParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterContact;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportDescription;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioReportParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReporterContact = { "ReporterContact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForUser_Parms, ReporterContact), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReporterName = { "ReporterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForUser_Parms, ReporterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReportDescription = { "ReportDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForUser_Parms, ReportDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForUser_Parms, Type), Z_Construct_UEnum_Modio_EModioReportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioReportLibrary_eventMakeReportForUser_Parms, User), Z_Construct_UScriptStruct_FModioUserID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReporterContact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReporterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_ReportDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Content Reporting" },
		{ "Comment", "/// @docpublic\n/// @brief Creates a content report for a game.\n/// @param User The ID of the User being reported\n/// @param Type The nature of the content report\n/// @param ReportDescription A description of why the content is being reported\n/// @param ReporterName Name of the submitting user. Recommended for DMCA reports, but may be empty\n/// @param ReporterContact Contact details of the submitting user. Recommended for DMCA reports, but may be\n/// empty\n" },
		{ "ModuleRelativePath", "Public/Libraries/ModioReportLibrary.h" },
		{ "ToolTip", "@docpublic\n@brief Creates a content report for a game.\n@param User The ID of the User being reported\n@param Type The nature of the content report\n@param ReportDescription A description of why the content is being reported\n@param ReporterName Name of the submitting user. Recommended for DMCA reports, but may be empty\n@param ReporterContact Contact details of the submitting user. Recommended for DMCA reports, but may be\nempty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioReportLibrary, nullptr, "MakeReportForUser", nullptr, nullptr, sizeof(ModioReportLibrary_eventMakeReportForUser_Parms), Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioReportLibrary_NoRegister()
	{
		return UModioReportLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioReportLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioReportLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioReportLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioReportLibrary_MakeReportForGame, "MakeReportForGame" }, // 2705687097
		{ &Z_Construct_UFunction_UModioReportLibrary_MakeReportForMod, "MakeReportForMod" }, // 355117805
		{ &Z_Construct_UFunction_UModioReportLibrary_MakeReportForUser, "MakeReportForUser" }, // 3094343220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioReportLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Libraries/ModioReportLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioReportLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioReportLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioReportLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioReportLibrary_Statics::ClassParams = {
		&UModioReportLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioReportLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioReportLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioReportLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioReportLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioReportLibrary, 3438115108);
	template<> MODIO_API UClass* StaticClass<UModioReportLibrary>()
	{
		return UModioReportLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioReportLibrary(Z_Construct_UClass_UModioReportLibrary, &UModioReportLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioReportLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioReportLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
