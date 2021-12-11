// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/ModioSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioSubsystem() {}
// Cross Module References
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioErrorCode();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModDependencyList();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalTerms();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModTagOptions();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalImage();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModInfo();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModInfoList();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModManagementEvent();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature();
	MODIO_API UClass* Z_Construct_UClass_UModioSubsystem_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioValidationError();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAuthCode();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioAuthenticationProvider();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioAuthenticationParams();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModCreationHandle();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioAvatarSize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioGallerySize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLogoSize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLanguage();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioInitializeOptions();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFilterParams();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModProgressInfo();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalUser();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioReportParams();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAddress();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioRating();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioCreateModParams();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioCreateModFileParams();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModCollectionEntry();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLogLevel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnSubmitNewModDelegate_Parms
		{
			FModioErrorCode ErrorCode;
			FModioOptionalModID NewModID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewModID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::NewProp_NewModID = { "NewModID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnSubmitNewModDelegate_Parms, NewModID), Z_Construct_UScriptStruct_FModioOptionalModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnSubmitNewModDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::NewProp_NewModID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnSubmitNewModDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnSubmitNewModDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnGetModDependenciesDelegate_Parms
		{
			FModioErrorCode ErrorCode;
			FModioOptionalModDependencyList Dependencies;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetModDependenciesDelegate_Parms, Dependencies), Z_Construct_UScriptStruct_FModioOptionalModDependencyList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetModDependenciesDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::NewProp_Dependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnGetModDependenciesDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnGetModDependenciesDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnGetTermsOfUseDelegate_Parms
		{
			FModioErrorCode ErrorCode;
			FModioOptionalTerms Terms;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Terms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::NewProp_Terms = { "Terms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetTermsOfUseDelegate_Parms, Terms), Z_Construct_UScriptStruct_FModioOptionalTerms, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetTermsOfUseDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::NewProp_Terms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnGetTermsOfUseDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnGetTermsOfUseDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnGetModTagOptionsDelegate_Parms
		{
			FModioErrorCode ErrorCode;
			FModioOptionalModTagOptions ModTagOptions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModTagOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::NewProp_ModTagOptions = { "ModTagOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetModTagOptionsDelegate_Parms, ModTagOptions), Z_Construct_UScriptStruct_FModioOptionalModTagOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetModTagOptionsDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::NewProp_ModTagOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnGetModTagOptionsDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnGetModTagOptionsDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnGetMediaDelegate_Parms
		{
			FModioErrorCode ErrorCode;
			FModioOptionalImage Path;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetMediaDelegate_Parms, Path), Z_Construct_UScriptStruct_FModioOptionalImage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetMediaDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnGetMediaDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnGetMediaDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnGetModInfoDelegate_Parms
		{
			FModioErrorCode ErrorCode;
			FModioOptionalModInfo ModInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::NewProp_ModInfo = { "ModInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetModInfoDelegate_Parms, ModInfo), Z_Construct_UScriptStruct_FModioOptionalModInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnGetModInfoDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::NewProp_ModInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnGetModInfoDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnGetModInfoDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnListAllModsDelegate_Parms
		{
			FModioErrorCode ErrorCode;
			FModioOptionalModInfoList Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnListAllModsDelegate_Parms, Result), Z_Construct_UScriptStruct_FModioOptionalModInfoList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnListAllModsDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnListAllModsDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnListAllModsDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnModManagementDelegate_Parms
		{
			FModioModManagementEvent Event;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnModManagementDelegate_Parms, Event), Z_Construct_UScriptStruct_FModioModManagementEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnModManagementDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnModManagementDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnErrorOnlyDelegate_Parms
		{
			FModioErrorCode ErrorCode;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnErrorOnlyDelegate_Parms, ErrorCode), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Blueprint version of delegates\n" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "Blueprint version of delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnErrorOnlyDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnErrorOnlyDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_ReportContentAsync)
	{
		P_GET_STRUCT(FModioReportParams,Z_Param_Report);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ReportContentAsync(Z_Param_Report,FOnErrorOnlyDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_SubmitNewModFileForMod)
	{
		P_GET_STRUCT(FModioModID,Z_Param_Mod);
		P_GET_STRUCT(FModioCreateModFileParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SubmitNewModFileForMod(Z_Param_Mod,Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_SubmitNewModAsync)
	{
		P_GET_STRUCT(FModioModCreationHandle,Z_Param_Handle);
		P_GET_STRUCT(FModioCreateModParams,Z_Param_Params);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SubmitNewModAsync(Z_Param_Handle,Z_Param_Params,FOnSubmitNewModDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetModCreationHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioModCreationHandle*)Z_Param__Result=P_THIS->K2_GetModCreationHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_SubmitModRatingAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_Mod);
		P_GET_ENUM(EModioRating,Z_Param_Rating);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SubmitModRatingAsync(Z_Param_Mod,EModioRating(Z_Param_Rating),FOnErrorOnlyDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetUserMediaAvatarAsync)
	{
		P_GET_ENUM(EModioAvatarSize,Z_Param_AvatarSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetUserMediaAvatarAsync(EModioAvatarSize(Z_Param_AvatarSize),FOnGetMediaDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_ClearUserDataAsync)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ClearUserDataAsync(FOnErrorOnlyDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetTermsOfUseAsync)
	{
		P_GET_ENUM(EModioAuthenticationProvider,Z_Param_Provider);
		P_GET_ENUM(EModioLanguage,Z_Param_Locale);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetTermsOfUseAsync(EModioAuthenticationProvider(Z_Param_Provider),EModioLanguage(Z_Param_Locale),FOnGetTermsOfUseDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_AuthenticateUserExternalAsync)
	{
		P_GET_STRUCT_REF(FModioAuthenticationParams,Z_Param_Out_User);
		P_GET_ENUM(EModioAuthenticationProvider,Z_Param_Provider);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AuthenticateUserExternalAsync(Z_Param_Out_User,EModioAuthenticationProvider(Z_Param_Provider),FOnErrorOnlyDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_AuthenticateUserEmailAsync)
	{
		P_GET_STRUCT_REF(FModioEmailAuthCode,Z_Param_Out_AuthenticationCode);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AuthenticateUserEmailAsync(Z_Param_Out_AuthenticationCode,FOnErrorOnlyDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_RequestEmailAuthCodeAsync)
	{
		P_GET_STRUCT_REF(FModioEmailAddress,Z_Param_Out_EmailAddress);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_RequestEmailAuthCodeAsync(Z_Param_Out_EmailAddress,FOnErrorOnlyDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetModDependenciesAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetModDependenciesAsync(Z_Param_ModID,FOnGetModDependenciesDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetModTagOptionsAsync)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetModTagOptionsAsync(FOnGetModTagOptionsDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetModMediaAvatarAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModId);
		P_GET_ENUM(EModioAvatarSize,Z_Param_AvatarSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetModMediaAvatarAsync(Z_Param_ModId,EModioAvatarSize(Z_Param_AvatarSize),FOnGetMediaDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetModMediaGalleryImageAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModId);
		P_GET_ENUM(EModioGallerySize,Z_Param_GallerySize);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetModMediaGalleryImageAsync(Z_Param_ModId,EModioGallerySize(Z_Param_GallerySize),Z_Param_Index,FOnGetMediaDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetModMediaLogoAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModId);
		P_GET_ENUM(EModioLogoSize,Z_Param_LogoSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetModMediaLogoAsync(Z_Param_ModId,EModioLogoSize(Z_Param_LogoSize),FOnGetMediaDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_GetModInfoAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetModInfoAsync(Z_Param_ModId,FOnGetModInfoDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_ListAllModsAsync)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_Filter);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ListAllModsAsync(Z_Param_Out_Filter,FOnListAllModsDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_QueryUserProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioOptionalUser*)Z_Param__Result=P_THIS->K2_QueryUserProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execForceUninstallModAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModToRemove);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUninstallModAsync(Z_Param_ModToRemove,FOnErrorOnlyDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_QueryCurrentModUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioOptionalModProgressInfo*)Z_Param__Result=P_THIS->K2_QueryCurrentModUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_EnableModManagement)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_EnableModManagement(FOnModManagementDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_FetchExternalUpdatesAsync)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFetchDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_FetchExternalUpdatesAsync(FOnErrorOnlyDelegate(Z_Param_OnFetchDone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_UnsubscribeFromModAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModToUnsubscribeFrom);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnUnsubscribeComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_UnsubscribeFromModAsync(Z_Param_ModToUnsubscribeFrom,FOnErrorOnlyDelegate(Z_Param_OnUnsubscribeComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_ShutdownAsync)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnShutdownComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ShutdownAsync(FOnErrorOnlyDelegate(Z_Param_OnShutdownComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_SubscribeToModAsync)
	{
		P_GET_STRUCT(FModioModID,Z_Param_ModToSubscribeTo);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSubscribeComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SubscribeToModAsync(Z_Param_ModToSubscribeTo,FOnErrorOnlyDelegate(Z_Param_OnSubscribeComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execK2_InitializeAsync)
	{
		P_GET_STRUCT_REF(FModioInitializeOptions,Z_Param_Out_InitializeOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnInitComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_InitializeAsync(Z_Param_Out_InitializeOptions,FOnErrorOnlyDelegate(Z_Param_OnInitComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execQuerySystemInstallations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FModioModID,FModioModCollectionEntry>*)Z_Param__Result=P_THIS->QuerySystemInstallations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execQueryUserInstallations)
	{
		P_GET_UBOOL(Z_Param_bIncludeOutdatedMods);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FModioModID,FModioModCollectionEntry>*)Z_Param__Result=P_THIS->QueryUserInstallations(Z_Param_bIncludeOutdatedMods);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execQueryUserSubscriptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FModioModID,FModioModCollectionEntry>*)Z_Param__Result=P_THIS->QueryUserSubscriptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execIsModManagementBusy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModManagementBusy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execDisableModManagement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableModManagement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execGetLastValidationError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModioValidationError>*)Z_Param__Result=P_THIS->GetLastValidationError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execRunPendingHandlers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunPendingHandlers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSubsystem::execSetLogLevel)
	{
		P_GET_ENUM(EModioLogLevel,Z_Param_UnrealLogLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogLevel(EModioLogLevel(Z_Param_UnrealLogLevel));
		P_NATIVE_END;
	}
	void UModioSubsystem::StaticRegisterNativesUModioSubsystem()
	{
		UClass* Class = UModioSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableModManagement", &UModioSubsystem::execDisableModManagement },
			{ "ForceUninstallModAsync", &UModioSubsystem::execForceUninstallModAsync },
			{ "GetLastValidationError", &UModioSubsystem::execGetLastValidationError },
			{ "IsModManagementBusy", &UModioSubsystem::execIsModManagementBusy },
			{ "K2_AuthenticateUserEmailAsync", &UModioSubsystem::execK2_AuthenticateUserEmailAsync },
			{ "K2_AuthenticateUserExternalAsync", &UModioSubsystem::execK2_AuthenticateUserExternalAsync },
			{ "K2_ClearUserDataAsync", &UModioSubsystem::execK2_ClearUserDataAsync },
			{ "K2_EnableModManagement", &UModioSubsystem::execK2_EnableModManagement },
			{ "K2_FetchExternalUpdatesAsync", &UModioSubsystem::execK2_FetchExternalUpdatesAsync },
			{ "K2_GetModCreationHandle", &UModioSubsystem::execK2_GetModCreationHandle },
			{ "K2_GetModDependenciesAsync", &UModioSubsystem::execK2_GetModDependenciesAsync },
			{ "K2_GetModInfoAsync", &UModioSubsystem::execK2_GetModInfoAsync },
			{ "K2_GetModMediaAvatarAsync", &UModioSubsystem::execK2_GetModMediaAvatarAsync },
			{ "K2_GetModMediaGalleryImageAsync", &UModioSubsystem::execK2_GetModMediaGalleryImageAsync },
			{ "K2_GetModMediaLogoAsync", &UModioSubsystem::execK2_GetModMediaLogoAsync },
			{ "K2_GetModTagOptionsAsync", &UModioSubsystem::execK2_GetModTagOptionsAsync },
			{ "K2_GetTermsOfUseAsync", &UModioSubsystem::execK2_GetTermsOfUseAsync },
			{ "K2_GetUserMediaAvatarAsync", &UModioSubsystem::execK2_GetUserMediaAvatarAsync },
			{ "K2_InitializeAsync", &UModioSubsystem::execK2_InitializeAsync },
			{ "K2_ListAllModsAsync", &UModioSubsystem::execK2_ListAllModsAsync },
			{ "K2_QueryCurrentModUpdate", &UModioSubsystem::execK2_QueryCurrentModUpdate },
			{ "K2_QueryUserProfile", &UModioSubsystem::execK2_QueryUserProfile },
			{ "K2_ReportContentAsync", &UModioSubsystem::execK2_ReportContentAsync },
			{ "K2_RequestEmailAuthCodeAsync", &UModioSubsystem::execK2_RequestEmailAuthCodeAsync },
			{ "K2_ShutdownAsync", &UModioSubsystem::execK2_ShutdownAsync },
			{ "K2_SubmitModRatingAsync", &UModioSubsystem::execK2_SubmitModRatingAsync },
			{ "K2_SubmitNewModAsync", &UModioSubsystem::execK2_SubmitNewModAsync },
			{ "K2_SubmitNewModFileForMod", &UModioSubsystem::execK2_SubmitNewModFileForMod },
			{ "K2_SubscribeToModAsync", &UModioSubsystem::execK2_SubscribeToModAsync },
			{ "K2_UnsubscribeFromModAsync", &UModioSubsystem::execK2_UnsubscribeFromModAsync },
			{ "QuerySystemInstallations", &UModioSubsystem::execQuerySystemInstallations },
			{ "QueryUserInstallations", &UModioSubsystem::execQueryUserInstallations },
			{ "QueryUserSubscriptions", &UModioSubsystem::execQueryUserSubscriptions },
			{ "RunPendingHandlers", &UModioSubsystem::execRunPendingHandlers },
			{ "SetLogLevel", &UModioSubsystem::execSetLogLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioSubsystem_DisableModManagement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_DisableModManagement_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mod Management" },
		{ "Comment", "/**\n\x09 * @brief Disables automatic installation or uninstallation of mods based on the user's subscriptions. Allows\n\x09 * currently processing installation to complete; will cancel any pending operations when called.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Disables automatic installation or uninstallation of mods based on the user's subscriptions. Allows\ncurrently processing installation to complete; will cancel any pending operations when called." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_DisableModManagement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "DisableModManagement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_DisableModManagement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_DisableModManagement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_DisableModManagement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_DisableModManagement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics
	{
		struct ModioSubsystem_eventForceUninstallModAsync_Parms
		{
			FModioModID ModToRemove;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventForceUninstallModAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::NewProp_ModToRemove = { "ModToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventForceUninstallModAsync_Parms, ModToRemove), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::NewProp_ModToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mod Management" },
		{ "Comment", "/**\n\x09 * @brief Forcibly uninstalls a mod from the system. This is intended for use when a host application requires more\n\x09 * room for a mod that the user wants to install, and as such will return an error if the current user is\n\x09 * subscribed to the mod. To remove a mod the current user is subscribed to, use\n\x09 * xref:UnsubscribeFromModAsync[].\n\x09 * @param Callback Callback invoked when the uninstallation is successful, or if it failed because the current user\n\x09 * remains subscribed.\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @error UserDataError::InvalidUser|No authenticated user\n\x09 * @error ModManagementError::AlreadySubscribed|User is still subscribed to the specified mod\n\x09 */" },
		{ "DisplayName", "ForceUninstallModAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Forcibly uninstalls a mod from the system. This is intended for use when a host application requires more\nroom for a mod that the user wants to install, and as such will return an error if the current user is\nsubscribed to the mod. To remove a mod the current user is subscribed to, use\nxref:UnsubscribeFromModAsync[].\n@param Callback Callback invoked when the uninstallation is successful, or if it failed because the current user\nremains subscribed.\n@error GenericError::SDKNotInitialized|SDK not initialized\n@error UserDataError::InvalidUser|No authenticated user\n@error ModManagementError::AlreadySubscribed|User is still subscribed to the specified mod" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "ForceUninstallModAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventForceUninstallModAsync_Parms), Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics
	{
		struct ModioSubsystem_eventGetLastValidationError_Parms
		{
			TArray<FModioValidationError> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventGetLastValidationError_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioValidationError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/**\n\x09 * @brief If the last request to the mod.io servers returned a validation failure, this function returns extended\n\x09 * information describing the fields that failed validation.\n\x09 * @return Collection of Modio::FieldError objects, or empty collection if there was no validation failures\n\x09 * @requires initialized-sdk\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief If the last request to the mod.io servers returned a validation failure, this function returns extended\ninformation describing the fields that failed validation.\n@return Collection of Modio::FieldError objects, or empty collection if there was no validation failures\n@requires initialized-sdk" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "GetLastValidationError", nullptr, nullptr, sizeof(ModioSubsystem_eventGetLastValidationError_Parms), Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_GetLastValidationError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_GetLastValidationError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics
	{
		struct ModioSubsystem_eventIsModManagementBusy_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModioSubsystem_eventIsModManagementBusy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioSubsystem_eventIsModManagementBusy_Parms), &Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mod Management" },
		{ "Comment", "/**\n\x09 * @brief Checks if the automatic management process is currently installing or removing mods\n\x09 * @return True if automatic management is currently performing an operation\n\x09 **/" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Checks if the automatic management process is currently installing or removing mods\n@return True if automatic management is currently performing an operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "IsModManagementBusy", nullptr, nullptr, sizeof(ModioSubsystem_eventIsModManagementBusy_Parms), Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics
	{
		struct ModioSubsystem_eventK2_AuthenticateUserEmailAsync_Parms
		{
			FModioEmailAuthCode AuthenticationCode;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthenticationCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthenticationCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_AuthenticateUserEmailAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::NewProp_AuthenticationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::NewProp_AuthenticationCode = { "AuthenticationCode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_AuthenticateUserEmailAsync_Parms, AuthenticationCode), Z_Construct_UScriptStruct_FModioEmailAuthCode, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::NewProp_AuthenticationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::NewProp_AuthenticationCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::NewProp_AuthenticationCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Authentication" },
		{ "Comment", "/**\n\x09 * @brief Completes email authentication for the current session by submitting the one-time code sent to the user's\n\x09 * email address\n\x09 * @param AuthenticationCode User's authentication code\n\x09 * @param Callback Callback providing a status code indicating if authentication was successful or not\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @requires no-authenticated-user\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @error UserAuthError::AlreadyAuthenticated|Authenticated user already signed-in. Call ClearUserDataAsync to\n\x09 * de-authenticate the old user, then Shutdown() and reinitialize the SDK first.\n\x09 **/" },
		{ "DisplayName", "AuthenticateUserEmailAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Completes email authentication for the current session by submitting the one-time code sent to the user's\nemail address\n@param AuthenticationCode User's authentication code\n@param Callback Callback providing a status code indicating if authentication was successful or not\n@requires initialized-sdk\n@requires no-rate-limiting\n@requires no-authenticated-user\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@error UserAuthError::AlreadyAuthenticated|Authenticated user already signed-in. Call ClearUserDataAsync to\nde-authenticate the old user, then Shutdown() and reinitialize the SDK first." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_AuthenticateUserEmailAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_AuthenticateUserEmailAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics
	{
		struct ModioSubsystem_eventK2_AuthenticateUserExternalAsync_Parms
		{
			FModioAuthenticationParams User;
			EModioAuthenticationProvider Provider;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Provider;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Provider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_AuthenticateUserExternalAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_AuthenticateUserExternalAsync_Parms, Provider), Z_Construct_UEnum_Modio_EModioAuthenticationProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_Provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_User_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_AuthenticateUserExternalAsync_Parms, User), Z_Construct_UScriptStruct_FModioAuthenticationParams, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_User_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_Provider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Authentication" },
		{ "Comment", "/**\n\x09 * @brief Uses platform-specific authentication to associate a Mod.io user account with the current platform user\n\x09 * @param User Authentication payload data to submit to the provider\n\x09 * @param Provider The provider to use to perform the authentication\n\x09 * @param Callback Callback invoked once the authentication request has been made\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @requires no-authenticated-user\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @error UserAuthError::AlreadyAuthenticated|Authenticated user already signed-in. Call ClearUserDataAsync to\n\x09 * de-authenticate the old user, then Shutdown() and reinitialize the SDK first.\n\x09 **/" },
		{ "DisplayName", "AuthenticateUserExternalAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Uses platform-specific authentication to associate a Mod.io user account with the current platform user\n@param User Authentication payload data to submit to the provider\n@param Provider The provider to use to perform the authentication\n@param Callback Callback invoked once the authentication request has been made\n@requires initialized-sdk\n@requires no-rate-limiting\n@requires no-authenticated-user\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@error UserAuthError::AlreadyAuthenticated|Authenticated user already signed-in. Call ClearUserDataAsync to\nde-authenticate the old user, then Shutdown() and reinitialize the SDK first." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_AuthenticateUserExternalAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_AuthenticateUserExternalAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics
	{
		struct ModioSubsystem_eventK2_ClearUserDataAsync_Parms
		{
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_ClearUserDataAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|User" },
		{ "Comment", "/**\n\x09 * @brief De-authenticates the current Mod.io user for the current session, and clears all user-specific data\n\x09 * stored on the current device. Any subscribed mods that are installed but do not have other local users\n\x09 * subscribed will be uninstalled\n\x09 * @param Callback Callback providing a status code indicating the outcome of clearing the user data. Error codes\n\x09 * returned by this function are informative only - it will always succeed.\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @requires authenticated-user\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @error UserDataError::InvalidUser|No authenticated user\n\n\x09 **/" },
		{ "DisplayName", "ClearUserDataAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief De-authenticates the current Mod.io user for the current session, and clears all user-specific data\nstored on the current device. Any subscribed mods that are installed but do not have other local users\nsubscribed will be uninstalled\n@param Callback Callback providing a status code indicating the outcome of clearing the user data. Error codes\nreturned by this function are informative only - it will always succeed.\n@requires initialized-sdk\n@requires no-rate-limiting\n@requires authenticated-user\n@error GenericError::SDKNotInitialized|SDK not initialized\n@error UserDataError::InvalidUser|No authenticated user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_ClearUserDataAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_ClearUserDataAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics
	{
		struct ModioSubsystem_eventK2_EnableModManagement_Parms
		{
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_EnableModManagement_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mod Management" },
		{ "Comment", "/**\n\x09 * @brief Enables the automatic management of installed mods on the system based on the user's subscriptions.\n\x09 * @param Callback This callback handler will be invoked with a ModManagementEvent for each mod operation performed\n\x09 * by the SDK\n\x09 */" },
		{ "DisplayName", "EnableModManagement" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Enables the automatic management of installed mods on the system based on the user's subscriptions.\n@param Callback This callback handler will be invoked with a ModManagementEvent for each mod operation performed\nby the SDK" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_EnableModManagement", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_EnableModManagement_Parms), Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics
	{
		struct ModioSubsystem_eventK2_FetchExternalUpdatesAsync_Parms
		{
			FScriptDelegate OnFetchDone;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnFetchDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::NewProp_OnFetchDone = { "OnFetchDone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_FetchExternalUpdatesAsync_Parms, OnFetchDone), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::NewProp_OnFetchDone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mod Management" },
		{ "Comment", "/**\n\x09 * @brief Synchronises the local list of the current user's subscribed mods with the server. Any mods that have\n\x09 * been externally subscribed will be automatically marked for installation, and mods that have been externally\n\x09 * removed from the user's subscriptions may be uninstalled if no other local users have a current subscription.\n\x09 * @param OnFetchDone Callback invoked when the external state has been retrieved and merged with the local data\n\x09 **/" },
		{ "DisplayName", "FetchExternalUpdatesAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Synchronises the local list of the current user's subscribed mods with the server. Any mods that have\nbeen externally subscribed will be automatically marked for installation, and mods that have been externally\nremoved from the user's subscriptions may be uninstalled if no other local users have a current subscription.\n@param OnFetchDone Callback invoked when the external state has been retrieved and merged with the local data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_FetchExternalUpdatesAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_FetchExternalUpdatesAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics
	{
		struct ModioSubsystem_eventK2_GetModCreationHandle_Parms
		{
			FModioModCreationHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModCreationHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioModCreationHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods|Submission" },
		{ "Comment", "/**\n\x09 * @brief Gets a new mod handle for use with SubmitNewModAsync.\n\x09 * @returns New handle\n\x09 * @experimental\n\x09 */" },
		{ "DisplayName", "GetModCreationHandle" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Gets a new mod handle for use with SubmitNewModAsync.\n@returns New handle\n@experimental" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetModCreationHandle", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetModCreationHandle_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetModDependenciesAsync_Parms
		{
			FModioModID ModID;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModDependenciesAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::NewProp_ModID = { "ModID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModDependenciesAsync_Parms, ModID), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::NewProp_ModID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief For a given Mod ID, fetches a list of any mods that the creator has marked as dependencies\n\x09 * @param ModID The mod to retrieve dependencies for\n\x09 * @param Callback Callback providing a status code and an optional ModTagOptions object containing the available\n\x09 * tags\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @experimental\n\x09 **/" },
		{ "DisplayName", "GetModDependenciesAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief For a given Mod ID, fetches a list of any mods that the creator has marked as dependencies\n@param ModID The mod to retrieve dependencies for\n@param Callback Callback providing a status code and an optional ModTagOptions object containing the available\ntags\n@requires initialized-sdk\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@experimental" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetModDependenciesAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetModDependenciesAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetModInfoAsync_Parms
		{
			FModioModID ModId;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModInfoAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModInfoAsync_Parms, ModId), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Fetches detailed information about the specified mod, including description and file metadata for the\n\x09 * most recent release\n\x09 * @param ModId Mod ID of the mod to fetch data\n\x09 * @param Callback Callback providing a status code and an optional Modio::ModInfo object with the mod's extended\n\x09 * information\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @errorcategory EntityNotFoundError|Specified mod does not exist or was deleted\n\x09 **/" },
		{ "DisplayName", "GetModInfoAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Fetches detailed information about the specified mod, including description and file metadata for the\nmost recent release\n@param ModId Mod ID of the mod to fetch data\n@param Callback Callback providing a status code and an optional Modio::ModInfo object with the mod's extended\ninformation\n@requires initialized-sdk\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@errorcategory EntityNotFoundError|Specified mod does not exist or was deleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetModInfoAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetModInfoAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetModMediaAvatarAsync_Parms
		{
			FModioModID ModId;
			EModioAvatarSize AvatarSize;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvatarSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvatarSize_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaAvatarAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_AvatarSize = { "AvatarSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaAvatarAsync_Parms, AvatarSize), Z_Construct_UEnum_Modio_EModioAvatarSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_AvatarSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaAvatarAsync_Parms, ModId), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_AvatarSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_AvatarSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Downloads the creator avatar for a specified mod. Will use existing file if it is already present on disk\n\x09 * and not outdated\n\x09 * @param ModId ID of the mod the creator avatar will be retrieved for\n\x09 * @param AvatarSize Parameter indicating the size of avatar image that's required\n\x09 * @param Callback Callback providing a status code and an optional path object pointing to the location of the\n\x09 * downloaded image\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @errorcategory EntityNotFoundError|Specified mod media does not exist or was deleted\n\x09 * @error FilesystemError::InsufficientSpace|Not enough space for the file\n\x09 **/" },
		{ "DisplayName", "GetModMediaAsync (Avatar)" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Downloads the creator avatar for a specified mod. Will use existing file if it is already present on disk\nand not outdated\n@param ModId ID of the mod the creator avatar will be retrieved for\n@param AvatarSize Parameter indicating the size of avatar image that's required\n@param Callback Callback providing a status code and an optional path object pointing to the location of the\ndownloaded image\n@requires initialized-sdk\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@errorcategory EntityNotFoundError|Specified mod media does not exist or was deleted\n@error FilesystemError::InsufficientSpace|Not enough space for the file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetModMediaAvatarAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetModMediaAvatarAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetModMediaGalleryImageAsync_Parms
		{
			FModioModID ModId;
			EModioGallerySize GallerySize;
			int32 Index;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GallerySize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GallerySize_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaGalleryImageAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaGalleryImageAsync_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_GallerySize = { "GallerySize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaGalleryImageAsync_Parms, GallerySize), Z_Construct_UEnum_Modio_EModioGallerySize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_GallerySize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaGalleryImageAsync_Parms, ModId), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_GallerySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_GallerySize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Get a gallery image for the specified mod ID. If it already exists on disk the file will be reused unless\n\x09 * it is outdated\n\x09 * @param ModId The mod you want to retrieve an image for\n\x09 * @param GallerySize Size of the image you want to retrieve\n\x09 * @param Index The zero-based index of the image you want to retrieve\n\x09 * @param Callback Callback containing a status code and an Optional containing a path to the image file on disk\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @errorcategory EntityNotFoundError|Specified mod media does not exist or was deleted\n\x09 * @error FilesystemError::InsufficientSpace|Not enough space for the file\n\x09 **/" },
		{ "DisplayName", "GetModMediaAsync (Gallery Image)" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Get a gallery image for the specified mod ID. If it already exists on disk the file will be reused unless\nit is outdated\n@param ModId The mod you want to retrieve an image for\n@param GallerySize Size of the image you want to retrieve\n@param Index The zero-based index of the image you want to retrieve\n@param Callback Callback containing a status code and an Optional containing a path to the image file on disk\n@requires initialized-sdk\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@errorcategory EntityNotFoundError|Specified mod media does not exist or was deleted\n@error FilesystemError::InsufficientSpace|Not enough space for the file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetModMediaGalleryImageAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetModMediaGalleryImageAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetModMediaLogoAsync_Parms
		{
			FModioModID ModId;
			EModioLogoSize LogoSize;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogoSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogoSize_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaLogoAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_LogoSize = { "LogoSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaLogoAsync_Parms, LogoSize), Z_Construct_UEnum_Modio_EModioLogoSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_LogoSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModMediaLogoAsync_Parms, ModId), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_LogoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_LogoSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Downloads the logo for the specified mod. Will use existing file if it is already present on disk\n\x09 * @param ModId Mod ID for use in logo retrieval\n\x09 * @param LogoSize Parameter indicating the size of logo that's required\n\x09 * @param Callback Callback providing a status code and an optional path object pointing to the location of the\n\x09 * downloaded image\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @errorcategory EntityNotFoundError|Specified mod media does not exist or was deleted\n\x09 * @error FilesystemError::InsufficientSpace|Not enough space for the file\n\x09 **/" },
		{ "DisplayName", "GetModMediaAsync (Logo)" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Downloads the logo for the specified mod. Will use existing file if it is already present on disk\n@param ModId Mod ID for use in logo retrieval\n@param LogoSize Parameter indicating the size of logo that's required\n@param Callback Callback providing a status code and an optional path object pointing to the location of the\ndownloaded image\n@requires initialized-sdk\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@errorcategory EntityNotFoundError|Specified mod media does not exist or was deleted\n@error FilesystemError::InsufficientSpace|Not enough space for the file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetModMediaLogoAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetModMediaLogoAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetModTagOptionsAsync_Parms
		{
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetModTagOptionsAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Fetches the available tags used on mods for the current game. These tags can them be used in conjunction\n\x09 * with the FilterParams passed to ListAllMods\n\x09 * Will be cached when first received\n\x09 * @param Callback Callback providing a status code and an optional ModTagOptions object containing the available\n\x09 * tags\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 **/" },
		{ "DisplayName", "GetModTagOptionsAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Fetches the available tags used on mods for the current game. These tags can them be used in conjunction\nwith the FilterParams passed to ListAllMods\nWill be cached when first received\n@param Callback Callback providing a status code and an optional ModTagOptions object containing the available\ntags\n@requires initialized-sdk\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetModTagOptionsAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetModTagOptionsAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetTermsOfUseAsync_Parms
		{
			EModioAuthenticationProvider Provider;
			EModioLanguage Locale;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Locale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Locale_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Provider;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Provider_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetTermsOfUseAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetTermsOfUseAsync_Parms, Locale), Z_Construct_UEnum_Modio_EModioLanguage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Locale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetTermsOfUseAsync_Parms, Provider), Z_Construct_UEnum_Modio_EModioAuthenticationProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Locale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Locale_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::NewProp_Provider_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Authentication" },
		{ "Comment", "/**\n\x09 * @brief This function retrieves the information required for a game to display the mod.io terms of use to a player\n\x09 * who wishes to create a mod.io account\n\x09 * @param Provider The provider to use to perform the authentication\n\x09 * @param Locale The language to display the terms of use in\n\x09 * @param Callback Callback invoked with the terms of use data once retrieved from the server\n\x09 * @requires initialized-sdk\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 **/" },
		{ "DisplayName", "GetTermsOfUseAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief This function retrieves the information required for a game to display the mod.io terms of use to a player\nwho wishes to create a mod.io account\n@param Provider The provider to use to perform the authentication\n@param Locale The language to display the terms of use in\n@param Callback Callback invoked with the terms of use data once retrieved from the server\n@requires initialized-sdk\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetTermsOfUseAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetTermsOfUseAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics
	{
		struct ModioSubsystem_eventK2_GetUserMediaAvatarAsync_Parms
		{
			EModioAvatarSize AvatarSize;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvatarSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvatarSize_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetUserMediaAvatarAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::NewProp_AvatarSize = { "AvatarSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_GetUserMediaAvatarAsync_Parms, AvatarSize), Z_Construct_UEnum_Modio_EModioAvatarSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::NewProp_AvatarSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::NewProp_AvatarSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::NewProp_AvatarSize_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|User" },
		{ "Comment", "/**\n\x09 * @brief Downloads the avatar of the currently authenticated user. Will only perform a download if there is no\n\x09 * local cache of the avatar or if that cached copy is out-of-date.\n\x09 * @param AvatarSize Parameter specifying the size of avatar image to download\n\x09 * @param Callback Callback providing a status code for the download and an optional path to the downloaded image\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @requires authenticated-user\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @error UserDataError::InvalidUser|No authenticated user\n\x09 **/" },
		{ "DisplayName", "GetUserMediaAsync (Avatar)" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Downloads the avatar of the currently authenticated user. Will only perform a download if there is no\nlocal cache of the avatar or if that cached copy is out-of-date.\n@param AvatarSize Parameter specifying the size of avatar image to download\n@param Callback Callback providing a status code for the download and an optional path to the downloaded image\n@requires initialized-sdk\n@requires no-rate-limiting\n@requires authenticated-user\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@error UserDataError::InvalidUser|No authenticated user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_GetUserMediaAvatarAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_GetUserMediaAvatarAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics
	{
		struct ModioSubsystem_eventK2_InitializeAsync_Parms
		{
			FModioInitializeOptions InitializeOptions;
			FScriptDelegate OnInitComplete;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnInitComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitializeOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::NewProp_OnInitComplete = { "OnInitComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_InitializeAsync_Parms, OnInitComplete), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::NewProp_InitializeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::NewProp_InitializeOptions = { "InitializeOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_InitializeAsync_Parms, InitializeOptions), Z_Construct_UScriptStruct_FModioInitializeOptions, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::NewProp_InitializeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::NewProp_InitializeOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::NewProp_OnInitComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::NewProp_InitializeOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/**\n\x09 * @brief Initializes the SDK for the given user. Loads the state of mods installed on the system as well as the\n\x09 * set of mods the specified user has installed on this device\n\x09 * @param InitializeOptions Parameters to the function packed as a struct where all members needs to be initialized\n\x09 * for the call to succeed\n\x09 * @param OnInitComplete Callback which will be invoked with the result of initialization\n\x09 */" },
		{ "DisplayName", "InitializeAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Initializes the SDK for the given user. Loads the state of mods installed on the system as well as the\nset of mods the specified user has installed on this device\n@param InitializeOptions Parameters to the function packed as a struct where all members needs to be initialized\nfor the call to succeed\n@param OnInitComplete Callback which will be invoked with the result of initialization" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_InitializeAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_InitializeAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics
	{
		struct ModioSubsystem_eventK2_ListAllModsAsync_Parms
		{
			FModioFilterParams Filter;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_ListAllModsAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_ListAllModsAsync_Parms, Filter), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Provides a list of mods for the current game, that match the parameters specified in the filter\n\x09 * @param Filter Modio::FilterParams object containing any filters that should be applied to the query\n\x09 * @param Callback Callback invoked with a status code and an optional ModInfoList providing mod profiles\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 */" },
		{ "DisplayName", "ListAllModsAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Provides a list of mods for the current game, that match the parameters specified in the filter\n@param Filter Modio::FilterParams object containing any filters that should be applied to the query\n@param Callback Callback invoked with a status code and an optional ModInfoList providing mod profiles\n@requires initialized-sdk\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_ListAllModsAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_ListAllModsAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics
	{
		struct ModioSubsystem_eventK2_QueryCurrentModUpdate_Parms
		{
			FModioOptionalModProgressInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_QueryCurrentModUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioOptionalModProgressInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mod Management" },
		{ "Comment", "/**\n\x09 * @brief Provides progress information for a mod installation or update operation if one is currently in progress.\n\x09 * @return Optional ModProgressInfo object containing information regarding the progress of the installation\n\x09 * operation.\n\x09 */" },
		{ "DisplayName", "QueryCurrentModUpdate" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Provides progress information for a mod installation or update operation if one is currently in progress.\n@return Optional ModProgressInfo object containing information regarding the progress of the installation\noperation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_QueryCurrentModUpdate", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_QueryCurrentModUpdate_Parms), Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics
	{
		struct ModioSubsystem_eventK2_QueryUserProfile_Parms
		{
			FModioOptionalUser ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_QueryUserProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioOptionalUser, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|User" },
		{ "Comment", "/**\n\x09 * @brief Fetches the currently authenticated Mod.io user profile if there is one associated with the current\n\x09 * platform user\n\x09 * @return Optional Modio::User object containing profile information\n\x09 **/" },
		{ "DisplayName", "QueryUserProfile" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Fetches the currently authenticated Mod.io user profile if there is one associated with the current\nplatform user\n@return Optional Modio::User object containing profile information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_QueryUserProfile", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_QueryUserProfile_Parms), Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics
	{
		struct ModioSubsystem_eventK2_ReportContentAsync_Parms
		{
			FModioReportParams Report;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Report;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_ReportContentAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_ReportContentAsync_Parms, Report), Z_Construct_UScriptStruct_FModioReportParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::NewProp_Report,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/**\n\x09 * @brief Sends a content report to mod.io. When using this function, please inform your users that if they provide\n\x09 * their contact name or details in the Report parameter, that those may be shared with the person responsible for\n\x09 * the content being reported. For more information on what data in a report will be shared with whom, please see\n\x09 * link:https://mod.io/report/widget[our website's report form] for more information.\n\x09 * @param Report Information about the content being reported and a description of the report.\n\x09 * @param Callback Callback providing a status code to indicate successful submission of the report.\n\x09 * @requires initialized-sdk\n\x09 * @errorcategory NetworkError|Couldn't Connect to mod.io servers\n\x09 * @errorcategory InvalidArgsError|Required information in the report did not pass validation\n\x09 */" },
		{ "DisplayName", "ReportContentAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Sends a content report to mod.io. When using this function, please inform your users that if they provide\ntheir contact name or details in the Report parameter, that those may be shared with the person responsible for\nthe content being reported. For more information on what data in a report will be shared with whom, please see\nlink:https://mod.io/report/widget[our website's report form] for more information.\n@param Report Information about the content being reported and a description of the report.\n@param Callback Callback providing a status code to indicate successful submission of the report.\n@requires initialized-sdk\n@errorcategory NetworkError|Couldn't Connect to mod.io servers\n@errorcategory InvalidArgsError|Required information in the report did not pass validation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_ReportContentAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_ReportContentAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics
	{
		struct ModioSubsystem_eventK2_RequestEmailAuthCodeAsync_Parms
		{
			FModioEmailAddress EmailAddress;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmailAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_RequestEmailAuthCodeAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_RequestEmailAuthCodeAsync_Parms, EmailAddress), Z_Construct_UScriptStruct_FModioEmailAddress, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::NewProp_EmailAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::NewProp_EmailAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Authentication" },
		{ "Comment", "/**\n\x09 * @brief Begins email authentication for the current session by requesting a one-time code be sent to the\n\x09 * specified email address if it is associated with a Mod.io account\n\x09 * @param EmailAddress The email address to send the code to\n\x09 * @param Callback Callback providing a status code indicating the outcome of the request\n\x09 * @requires initialized-sdk\n\x09 * @requires no-rate-limiting\n\x09 * @requires no-authenticated-user\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @error UserAuthError::AlreadyAuthenticated|Authenticated user already signed-in. Call ClearUserDataAsync to\n\x09 * de-authenticate the old user, then Shutdown() and reinitialize the SDK first.\n\x09 **/" },
		{ "DisplayName", "RequestEmailAuthCodeAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Begins email authentication for the current session by requesting a one-time code be sent to the\nspecified email address if it is associated with a Mod.io account\n@param EmailAddress The email address to send the code to\n@param Callback Callback providing a status code indicating the outcome of the request\n@requires initialized-sdk\n@requires no-rate-limiting\n@requires no-authenticated-user\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@error UserAuthError::AlreadyAuthenticated|Authenticated user already signed-in. Call ClearUserDataAsync to\nde-authenticate the old user, then Shutdown() and reinitialize the SDK first." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_RequestEmailAuthCodeAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_RequestEmailAuthCodeAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics
	{
		struct ModioSubsystem_eventK2_ShutdownAsync_Parms
		{
			FScriptDelegate OnShutdownComplete;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnShutdownComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::NewProp_OnShutdownComplete = { "OnShutdownComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_ShutdownAsync_Parms, OnShutdownComplete), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::NewProp_OnShutdownComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/**\n\x09 * @brief Cancels any running internal operations, frees SDK resources, and invokes any pending callbacks with\n\x09 * Modio::GenericError::OperationCanceled . This function will NOT block while the deinitialization occurs.\n\x09 **/" },
		{ "DisplayName", "ShutdownAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Cancels any running internal operations, frees SDK resources, and invokes any pending callbacks with\nModio::GenericError::OperationCanceled . This function will NOT block while the deinitialization occurs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_ShutdownAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_ShutdownAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics
	{
		struct ModioSubsystem_eventK2_SubmitModRatingAsync_Parms
		{
			FModioModID Mod;
			EModioRating Rating;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rating;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rating_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitModRatingAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Rating = { "Rating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitModRatingAsync_Parms, Rating), Z_Construct_UEnum_Modio_EModioRating, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Rating_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Mod = { "Mod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitModRatingAsync_Parms, Mod), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Rating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Rating_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::NewProp_Mod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Submits a rating for a mod on behalf of the current user. Submit a neutral rating to effectively clear a\n\x09 * rating already submitted by a user. Submitting other values will overwrite any existing rating submitted by this\n\x09 * user.\n\x09 * @param Mod The mod the user is rating\n\x09 * @param Rating The rating the user wishes to submit\n\x09 * @requires initialized-sdk\n\x09 * @requires authenticated-user\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @errorcategory EntityNotFoundError|Specified mod could not be found\n\x09 * @error UserDataError::InvalidUser|No authenticated user\n\x09 */" },
		{ "DisplayName", "SubmitModRatingAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Submits a rating for a mod on behalf of the current user. Submit a neutral rating to effectively clear a\nrating already submitted by a user. Submitting other values will overwrite any existing rating submitted by this\nuser.\n@param Mod The mod the user is rating\n@param Rating The rating the user wishes to submit\n@requires initialized-sdk\n@requires authenticated-user\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@errorcategory EntityNotFoundError|Specified mod could not be found\n@error UserDataError::InvalidUser|No authenticated user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_SubmitModRatingAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_SubmitModRatingAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics
	{
		struct ModioSubsystem_eventK2_SubmitNewModAsync_Parms
		{
			FModioModCreationHandle Handle;
			FModioCreateModParams Params;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitNewModAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitNewModAsync_Parms, Params), Z_Construct_UScriptStruct_FModioCreateModParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitNewModAsync_Parms, Handle), Z_Construct_UScriptStruct_FModioModCreationHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods|Submission" },
		{ "Comment", "/**\n\x09 * @brief Requests the creation of a new mod on the server with the specified parameters\n\x09 * @param Handle The ModCreationHandle for this submission. Once this method invokes your callback indicating\n\x09 * success, the ModCreationHandle is invalid for the rest of the session and you should request a new one for the\n\x09 * next submission attempt.\n\x09 * @param Params Information about the new mod to create\n\x09 * @param Callback Callback providing a status code and an optional FModioModID for the newly created mod\n\x09 * @experimental\n\x09 * @requires initialized-sdk\n\x09 * @requires authenticated-user\n\x09 * @requires no-rate-limiting\n\x09 * @errorcategory NetworkError|Couldn't connect to mod.io servers\n\x09 * @error GenericError::SDKNotInitialized|SDK not initialized\n\x09 * @errorcategory InvalidArgsError|Some fields in Params did not pass validation\n\x09 * @error UserDataError::InvalidUser|No authenticated user\n\x09 */" },
		{ "DisplayName", "SubmitNewModAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Requests the creation of a new mod on the server with the specified parameters\n@param Handle The ModCreationHandle for this submission. Once this method invokes your callback indicating\nsuccess, the ModCreationHandle is invalid for the rest of the session and you should request a new one for the\nnext submission attempt.\n@param Params Information about the new mod to create\n@param Callback Callback providing a status code and an optional FModioModID for the newly created mod\n@experimental\n@requires initialized-sdk\n@requires authenticated-user\n@requires no-rate-limiting\n@errorcategory NetworkError|Couldn't connect to mod.io servers\n@error GenericError::SDKNotInitialized|SDK not initialized\n@errorcategory InvalidArgsError|Some fields in Params did not pass validation\n@error UserDataError::InvalidUser|No authenticated user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_SubmitNewModAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_SubmitNewModAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics
	{
		struct ModioSubsystem_eventK2_SubmitNewModFileForMod_Parms
		{
			FModioModID Mod;
			FModioCreateModFileParams Params;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitNewModFileForMod_Parms, Params), Z_Construct_UScriptStruct_FModioCreateModFileParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::NewProp_Mod = { "Mod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubmitNewModFileForMod_Parms, Mod), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::NewProp_Mod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods|Submission" },
		{ "Comment", "/**\n\x09 * @brief Queues the upload of a new mod file release for the specified mod, using the submitted parameters. The\n\x09 * upload's progress can be tracked in the same way as downloads; when completed, a Mod Management Event will be\n\x09 * triggered with the result code for the upload.\n\x09 * @param Mod The ID of the mod you are submitting a file for\n\x09 * @param Params Information about the mod file being created, including the root path of the directory that will be\n\x09 * archived\n\x09 * @experimental\n\x09 * @requires initialized-sdk\n\x09 * @requires authenticated-user\n\x09 * @requires no-rate-limiting\n\x09 * @error UserDataError::InvalidUser|No authenticated user\n\x09 */" },
		{ "DisplayName", "SubmitNewModFileForMod" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Queues the upload of a new mod file release for the specified mod, using the submitted parameters. The\nupload's progress can be tracked in the same way as downloads; when completed, a Mod Management Event will be\ntriggered with the result code for the upload.\n@param Mod The ID of the mod you are submitting a file for\n@param Params Information about the mod file being created, including the root path of the directory that will be\narchived\n@experimental\n@requires initialized-sdk\n@requires authenticated-user\n@requires no-rate-limiting\n@error UserDataError::InvalidUser|No authenticated user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_SubmitNewModFileForMod", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_SubmitNewModFileForMod_Parms), Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics
	{
		struct ModioSubsystem_eventK2_SubscribeToModAsync_Parms
		{
			FModioModID ModToSubscribeTo;
			FScriptDelegate OnSubscribeComplete;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSubscribeComplete;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModToSubscribeTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::NewProp_OnSubscribeComplete = { "OnSubscribeComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubscribeToModAsync_Parms, OnSubscribeComplete), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::NewProp_ModToSubscribeTo = { "ModToSubscribeTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_SubscribeToModAsync_Parms, ModToSubscribeTo), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::NewProp_OnSubscribeComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::NewProp_ModToSubscribeTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Sends a request to the Mod.io server to add the specified mod to the user's list of subscriptions, and\n\x09 * marks the mod for local installation by the SDK\n\x09 * @param ModToSubscribeTo Mod ID of the mod requiring a subscription.\n\x09 * @param OnSubscribeComplete Callback invoked when the subscription request is completed.\n\x09 **/" },
		{ "DisplayName", "SubscribeToModAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Sends a request to the Mod.io server to add the specified mod to the user's list of subscriptions, and\nmarks the mod for local installation by the SDK\n@param ModToSubscribeTo Mod ID of the mod requiring a subscription.\n@param OnSubscribeComplete Callback invoked when the subscription request is completed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_SubscribeToModAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_SubscribeToModAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics
	{
		struct ModioSubsystem_eventK2_UnsubscribeFromModAsync_Parms
		{
			FModioModID ModToUnsubscribeFrom;
			FScriptDelegate OnUnsubscribeComplete;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUnsubscribeComplete;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModToUnsubscribeFrom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::NewProp_OnUnsubscribeComplete = { "OnUnsubscribeComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_UnsubscribeFromModAsync_Parms, OnUnsubscribeComplete), Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::NewProp_ModToUnsubscribeFrom = { "ModToUnsubscribeFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventK2_UnsubscribeFromModAsync_Parms, ModToUnsubscribeFrom), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::NewProp_OnUnsubscribeComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::NewProp_ModToUnsubscribeFrom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @brief Sends a request to the Mod.io server to remove the specified mod from the user's list of subscriptions.\n\x09 * If no other local users are subscribed to the specified mod this function will also mark the mod for\n\x09 * uninstallation by the SDK.\n\x09 * @param ModToUnsubscribeFrom Mod ID of the mod requiring unsubscription.\n\x09 * @param OnUnsubscribeComplete Callback invoked when the unsubscription request is completed.\n\x09 **/" },
		{ "DisplayName", "UnsubscribeFromModAsync" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Sends a request to the Mod.io server to remove the specified mod from the user's list of subscriptions.\nIf no other local users are subscribed to the specified mod this function will also mark the mod for\nuninstallation by the SDK.\n@param ModToUnsubscribeFrom Mod ID of the mod requiring unsubscription.\n@param OnUnsubscribeComplete Callback invoked when the unsubscription request is completed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "K2_UnsubscribeFromModAsync", nullptr, nullptr, sizeof(ModioSubsystem_eventK2_UnsubscribeFromModAsync_Parms), Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics
	{
		struct ModioSubsystem_eventQuerySystemInstallations_Parms
		{
			TMap<FModioModID,FModioModCollectionEntry> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventQuerySystemInstallations_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FModioModCollectionEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mod Management" },
		{ "Comment", "/**\n\x09 * @brief Fetches all mods installed on the system such that a consuming application can present the information in\n\x09 * a UI in order to free up space by uninstalling mods\n\x09 * @return std::map using Mod IDs as keys and ModCollectionEntry objects providing information about mods installed\n\x09 * on the system regardless of which user installed them\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Fetches all mods installed on the system such that a consuming application can present the information in\na UI in order to free up space by uninstalling mods\n@return std::map using Mod IDs as keys and ModCollectionEntry objects providing information about mods installed\non the system regardless of which user installed them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "QuerySystemInstallations", nullptr, nullptr, sizeof(ModioSubsystem_eventQuerySystemInstallations_Parms), Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics
	{
		struct ModioSubsystem_eventQueryUserInstallations_Parms
		{
			bool bIncludeOutdatedMods;
			TMap<FModioModID,FModioModCollectionEntry> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static void NewProp_bIncludeOutdatedMods_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOutdatedMods;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventQueryUserInstallations_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FModioModCollectionEntry, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_bIncludeOutdatedMods_SetBit(void* Obj)
	{
		((ModioSubsystem_eventQueryUserInstallations_Parms*)Obj)->bIncludeOutdatedMods = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_bIncludeOutdatedMods = { "bIncludeOutdatedMods", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioSubsystem_eventQueryUserInstallations_Parms), &Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_bIncludeOutdatedMods_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::NewProp_bIncludeOutdatedMods,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|User" },
		{ "Comment", "/**\n\x09 * @brief Fetches the subset of the user's subscribed mods that are installed and therefore ready for loading\n\x09 * @param bIncludeOutdatedMods Include subscribed mods that are installed but have an updated version on the server\n\x09 * that has not yet been installed\n\x09 * @return TMap<FModioID, FModioModCollectionEntry> providing information about the subscribed\n\x09 * mods\n\x09 **/" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Fetches the subset of the user's subscribed mods that are installed and therefore ready for loading\n@param bIncludeOutdatedMods Include subscribed mods that are installed but have an updated version on the server\nthat has not yet been installed\n@return TMap<FModioID, FModioModCollectionEntry> providing information about the subscribed\nmods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "QueryUserInstallations", nullptr, nullptr, sizeof(ModioSubsystem_eventQueryUserInstallations_Parms), Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics
	{
		struct ModioSubsystem_eventQueryUserSubscriptions_Parms
		{
			TMap<FModioModID,FModioModCollectionEntry> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventQueryUserSubscriptions_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FModioModCollectionEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|User" },
		{ "Comment", "/**\n\x09 * @brief Fetches the local view of the user's subscribed mods, including mods that are subscribed but not\n\x09 * yet installed\n\x09 * @return TMap<FModioID, FModioModCollectionEntry> providing information about the subscribed\n\x09 * mods\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Fetches the local view of the user's subscribed mods, including mods that are subscribed but not\nyet installed\n@return TMap<FModioID, FModioModCollectionEntry> providing information about the subscribed\nmods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "QueryUserSubscriptions", nullptr, nullptr, sizeof(ModioSubsystem_eventQueryUserSubscriptions_Parms), Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/**\n\x09 * @brief Runs any pending SDK work on the calling thread, including invoking any callbacks passed to asynchronous\n\x09 * operations.\n\x09 * NOTE: This should be called while xref:InitializeAsync[] and xref:ShutdownAsync[] are running,\n\x09\x09""as they both utilize the internal event loop for functionality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Runs any pending SDK work on the calling thread, including invoking any callbacks passed to asynchronous\noperations.\nNOTE: This should be called while xref:InitializeAsync[] and xref:ShutdownAsync[] are running,\n               as they both utilize the internal event loop for functionality." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "RunPendingHandlers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics
	{
		struct ModioSubsystem_eventSetLogLevel_Parms
		{
			EModioLogLevel UnrealLogLevel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UnrealLogLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnrealLogLevel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::NewProp_UnrealLogLevel = { "UnrealLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSubsystem_eventSetLogLevel_Parms, UnrealLogLevel), Z_Construct_UEnum_Modio_EModioLogLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::NewProp_UnrealLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::NewProp_UnrealLogLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::NewProp_UnrealLogLevel_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io" },
		{ "Comment", "/**\n\x09 * @brief Sets the global logging level - messages with a log level below the specified value will not be displayed\n\x09 * @note This is a transient function, and won't be stored to disk. So at the next engine start, the log level will\n\x09 * be restored to the one in your FModioRuntimeSettings\n\x09 * @param Level Value indicating which priority of messages should be included in the log output\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Sets the global logging level - messages with a log level below the specified value will not be displayed\n@note This is a transient function, and won't be stored to disk. So at the next engine start, the log level will\nbe restored to the one in your FModioRuntimeSettings\n@param Level Value indicating which priority of messages should be included in the log output" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSubsystem, nullptr, "SetLogLevel", nullptr, nullptr, sizeof(ModioSubsystem_eventSetLogLevel_Parms), Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSubsystem_SetLogLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSubsystem_SetLogLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioSubsystem_NoRegister()
	{
		return UModioSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UModioSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioSubsystem_DisableModManagement, "DisableModManagement" }, // 2432856960
		{ &Z_Construct_UFunction_UModioSubsystem_ForceUninstallModAsync, "ForceUninstallModAsync" }, // 2475751711
		{ &Z_Construct_UFunction_UModioSubsystem_GetLastValidationError, "GetLastValidationError" }, // 2871218840
		{ &Z_Construct_UFunction_UModioSubsystem_IsModManagementBusy, "IsModManagementBusy" }, // 1572470793
		{ &Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserEmailAsync, "K2_AuthenticateUserEmailAsync" }, // 3364583921
		{ &Z_Construct_UFunction_UModioSubsystem_K2_AuthenticateUserExternalAsync, "K2_AuthenticateUserExternalAsync" }, // 1010417293
		{ &Z_Construct_UFunction_UModioSubsystem_K2_ClearUserDataAsync, "K2_ClearUserDataAsync" }, // 1091260623
		{ &Z_Construct_UFunction_UModioSubsystem_K2_EnableModManagement, "K2_EnableModManagement" }, // 775818648
		{ &Z_Construct_UFunction_UModioSubsystem_K2_FetchExternalUpdatesAsync, "K2_FetchExternalUpdatesAsync" }, // 1025282909
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetModCreationHandle, "K2_GetModCreationHandle" }, // 992556869
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetModDependenciesAsync, "K2_GetModDependenciesAsync" }, // 1749837778
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetModInfoAsync, "K2_GetModInfoAsync" }, // 3370189911
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaAvatarAsync, "K2_GetModMediaAvatarAsync" }, // 919513406
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaGalleryImageAsync, "K2_GetModMediaGalleryImageAsync" }, // 2764388458
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetModMediaLogoAsync, "K2_GetModMediaLogoAsync" }, // 452561918
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetModTagOptionsAsync, "K2_GetModTagOptionsAsync" }, // 296413420
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetTermsOfUseAsync, "K2_GetTermsOfUseAsync" }, // 1252171046
		{ &Z_Construct_UFunction_UModioSubsystem_K2_GetUserMediaAvatarAsync, "K2_GetUserMediaAvatarAsync" }, // 689523211
		{ &Z_Construct_UFunction_UModioSubsystem_K2_InitializeAsync, "K2_InitializeAsync" }, // 488529774
		{ &Z_Construct_UFunction_UModioSubsystem_K2_ListAllModsAsync, "K2_ListAllModsAsync" }, // 2269227565
		{ &Z_Construct_UFunction_UModioSubsystem_K2_QueryCurrentModUpdate, "K2_QueryCurrentModUpdate" }, // 801807563
		{ &Z_Construct_UFunction_UModioSubsystem_K2_QueryUserProfile, "K2_QueryUserProfile" }, // 631318454
		{ &Z_Construct_UFunction_UModioSubsystem_K2_ReportContentAsync, "K2_ReportContentAsync" }, // 3391266242
		{ &Z_Construct_UFunction_UModioSubsystem_K2_RequestEmailAuthCodeAsync, "K2_RequestEmailAuthCodeAsync" }, // 19140454
		{ &Z_Construct_UFunction_UModioSubsystem_K2_ShutdownAsync, "K2_ShutdownAsync" }, // 2793207965
		{ &Z_Construct_UFunction_UModioSubsystem_K2_SubmitModRatingAsync, "K2_SubmitModRatingAsync" }, // 2568259024
		{ &Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModAsync, "K2_SubmitNewModAsync" }, // 4251485953
		{ &Z_Construct_UFunction_UModioSubsystem_K2_SubmitNewModFileForMod, "K2_SubmitNewModFileForMod" }, // 579180132
		{ &Z_Construct_UFunction_UModioSubsystem_K2_SubscribeToModAsync, "K2_SubscribeToModAsync" }, // 2913256844
		{ &Z_Construct_UFunction_UModioSubsystem_K2_UnsubscribeFromModAsync, "K2_UnsubscribeFromModAsync" }, // 212600467
		{ &Z_Construct_UFunction_UModioSubsystem_QuerySystemInstallations, "QuerySystemInstallations" }, // 3110734421
		{ &Z_Construct_UFunction_UModioSubsystem_QueryUserInstallations, "QueryUserInstallations" }, // 2817956463
		{ &Z_Construct_UFunction_UModioSubsystem_QueryUserSubscriptions, "QueryUserSubscriptions" }, // 1711569837
		{ &Z_Construct_UFunction_UModioSubsystem_RunPendingHandlers, "RunPendingHandlers" }, // 1788959209
		{ &Z_Construct_UFunction_UModioSubsystem_SetLogLevel, "SetLogLevel" }, // 3448577960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Thin wrapper around the mod.io SDK. This mostly wraps all the functions available in modio/ModioSDK.h that's\n * the public header of the mod.io SDK. It converts mod.io SDK types to a more unreal friendly types and caches some\n * expensive operations so that conversions don't need to be done multiple times\n */" },
		{ "IncludePath", "ModioSubsystem.h" },
		{ "ModuleRelativePath", "Public/ModioSubsystem.h" },
		{ "ToolTip", "@brief Thin wrapper around the mod.io SDK. This mostly wraps all the functions available in modio/ModioSDK.h that's\nthe public header of the mod.io SDK. It converts mod.io SDK types to a more unreal friendly types and caches some\nexpensive operations so that conversions don't need to be done multiple times" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioSubsystem_Statics::ClassParams = {
		&UModioSubsystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioSubsystem, 4010078646);
	template<> MODIO_API UClass* StaticClass<UModioSubsystem>()
	{
		return UModioSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioSubsystem(Z_Construct_UClass_UModioSubsystem, &UModioSubsystem::StaticClass, TEXT("/Script/Modio"), TEXT("UModioSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
