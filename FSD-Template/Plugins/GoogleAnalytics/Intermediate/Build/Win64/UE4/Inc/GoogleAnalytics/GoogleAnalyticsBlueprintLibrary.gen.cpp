// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleAnalytics/Public/GoogleAnalyticsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleAnalyticsBlueprintLibrary() {}
// Cross Module References
	GOOGLEANALYTICS_API UClass* Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_NoRegister();
	GOOGLEANALYTICS_API UClass* Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GoogleAnalytics();
	GOOGLEANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMetric();
	GOOGLEANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDimension();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleAnalyticsBlueprintLibrary::execGetTrackingId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGoogleAnalyticsBlueprintLibrary::GetTrackingId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleAnalyticsBlueprintLibrary::execRecordGoogleEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventCategory);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventAction);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventLabel);
		P_GET_PROPERTY(FIntProperty,Z_Param_EventValue);
		P_GET_TARRAY(FCustomDimension,Z_Param_CustomDimensions);
		P_GET_TARRAY(FCustomMetric,Z_Param_CustomMetrics);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleAnalyticsBlueprintLibrary::RecordGoogleEvent(Z_Param_EventCategory,Z_Param_EventAction,Z_Param_EventLabel,Z_Param_EventValue,Z_Param_CustomDimensions,Z_Param_CustomMetrics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleAnalyticsBlueprintLibrary::execRecordGoogleScreen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenName);
		P_GET_TARRAY(FCustomDimension,Z_Param_CustomDimensions);
		P_GET_TARRAY(FCustomMetric,Z_Param_CustomMetrics);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleAnalyticsBlueprintLibrary::RecordGoogleScreen(Z_Param_ScreenName,Z_Param_CustomDimensions,Z_Param_CustomMetrics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleAnalyticsBlueprintLibrary::execRecordGoogleSocialInteraction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SocialNetwork);
		P_GET_PROPERTY(FStrProperty,Z_Param_SocialAction);
		P_GET_PROPERTY(FStrProperty,Z_Param_SocialTarget);
		P_GET_TARRAY(FCustomDimension,Z_Param_CustomDimensions);
		P_GET_TARRAY(FCustomMetric,Z_Param_CustomMetrics);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleAnalyticsBlueprintLibrary::RecordGoogleSocialInteraction(Z_Param_SocialNetwork,Z_Param_SocialAction,Z_Param_SocialTarget,Z_Param_CustomDimensions,Z_Param_CustomMetrics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleAnalyticsBlueprintLibrary::execRecordGoogleUserTiming)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TimingCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimingValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_TimingName);
		P_GET_TARRAY(FCustomDimension,Z_Param_CustomDimensions);
		P_GET_TARRAY(FCustomMetric,Z_Param_CustomMetrics);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleAnalyticsBlueprintLibrary::RecordGoogleUserTiming(Z_Param_TimingCategory,Z_Param_TimingValue,Z_Param_TimingName,Z_Param_CustomDimensions,Z_Param_CustomMetrics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleAnalyticsBlueprintLibrary::execSetAnonymizeIP)
	{
		P_GET_UBOOL(Z_Param_Anonymize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleAnalyticsBlueprintLibrary::SetAnonymizeIP(Z_Param_Anonymize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleAnalyticsBlueprintLibrary::execSetTrackingId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TrackingId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleAnalyticsBlueprintLibrary::SetTrackingId(Z_Param_TrackingId);
		P_NATIVE_END;
	}
	void UGoogleAnalyticsBlueprintLibrary::StaticRegisterNativesUGoogleAnalyticsBlueprintLibrary()
	{
		UClass* Class = UGoogleAnalyticsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrackingId", &UGoogleAnalyticsBlueprintLibrary::execGetTrackingId },
			{ "RecordGoogleEvent", &UGoogleAnalyticsBlueprintLibrary::execRecordGoogleEvent },
			{ "RecordGoogleScreen", &UGoogleAnalyticsBlueprintLibrary::execRecordGoogleScreen },
			{ "RecordGoogleSocialInteraction", &UGoogleAnalyticsBlueprintLibrary::execRecordGoogleSocialInteraction },
			{ "RecordGoogleUserTiming", &UGoogleAnalyticsBlueprintLibrary::execRecordGoogleUserTiming },
			{ "SetAnonymizeIP", &UGoogleAnalyticsBlueprintLibrary::execSetAnonymizeIP },
			{ "SetTrackingId", &UGoogleAnalyticsBlueprintLibrary::execSetTrackingId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics
	{
		struct GoogleAnalyticsBlueprintLibrary_eventGetTrackingId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventGetTrackingId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, nullptr, "GetTrackingId", nullptr, nullptr, sizeof(GoogleAnalyticsBlueprintLibrary_eventGetTrackingId_Parms), Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics
	{
		struct GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms
		{
			FString EventCategory;
			FString EventAction;
			FString EventLabel;
			int32 EventValue;
			TArray<FCustomDimension> CustomDimensions;
			TArray<FCustomMetric> CustomMetrics;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomMetrics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomMetrics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomDimensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDimensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomMetrics = { "CustomMetrics", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms, CustomMetrics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomMetrics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomMetrics_Inner = { "CustomMetrics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomMetric, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomDimensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomDimensions = { "CustomDimensions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms, CustomDimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomDimensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomDimensions_Inner = { "CustomDimensions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomDimension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventValue = { "EventValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms, EventValue), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventLabel = { "EventLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms, EventLabel), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventAction = { "EventAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms, EventAction), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventCategory = { "EventCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms, EventCategory), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomMetrics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_CustomDimensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::NewProp_EventCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, nullptr, "RecordGoogleEvent", nullptr, nullptr, sizeof(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleEvent_Parms), Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics
	{
		struct GoogleAnalyticsBlueprintLibrary_eventRecordGoogleScreen_Parms
		{
			FString ScreenName;
			TArray<FCustomDimension> CustomDimensions;
			TArray<FCustomMetric> CustomMetrics;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomMetrics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomMetrics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomDimensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDimensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomMetrics = { "CustomMetrics", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleScreen_Parms, CustomMetrics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomMetrics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomMetrics_Inner = { "CustomMetrics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomMetric, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomDimensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomDimensions = { "CustomDimensions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleScreen_Parms, CustomDimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomDimensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomDimensions_Inner = { "CustomDimensions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomDimension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_ScreenName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_ScreenName = { "ScreenName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleScreen_Parms, ScreenName), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_ScreenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_ScreenName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomMetrics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_CustomDimensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::NewProp_ScreenName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, nullptr, "RecordGoogleScreen", nullptr, nullptr, sizeof(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleScreen_Parms), Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics
	{
		struct GoogleAnalyticsBlueprintLibrary_eventRecordGoogleSocialInteraction_Parms
		{
			FString SocialNetwork;
			FString SocialAction;
			FString SocialTarget;
			TArray<FCustomDimension> CustomDimensions;
			TArray<FCustomMetric> CustomMetrics;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomMetrics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomMetrics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomDimensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDimensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SocialTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SocialAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialNetwork_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SocialNetwork;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomMetrics = { "CustomMetrics", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleSocialInteraction_Parms, CustomMetrics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomMetrics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomMetrics_Inner = { "CustomMetrics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomMetric, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomDimensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomDimensions = { "CustomDimensions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleSocialInteraction_Parms, CustomDimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomDimensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomDimensions_Inner = { "CustomDimensions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomDimension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialTarget = { "SocialTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleSocialInteraction_Parms, SocialTarget), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialAction = { "SocialAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleSocialInteraction_Parms, SocialAction), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialNetwork_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialNetwork = { "SocialNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleSocialInteraction_Parms, SocialNetwork), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialNetwork_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomMetrics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_CustomDimensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::NewProp_SocialNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, nullptr, "RecordGoogleSocialInteraction", nullptr, nullptr, sizeof(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleSocialInteraction_Parms), Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics
	{
		struct GoogleAnalyticsBlueprintLibrary_eventRecordGoogleUserTiming_Parms
		{
			FString TimingCategory;
			int32 TimingValue;
			FString TimingName;
			TArray<FCustomDimension> CustomDimensions;
			TArray<FCustomMetric> CustomMetrics;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomMetrics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomMetrics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomDimensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDimensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimingValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimingCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomMetrics = { "CustomMetrics", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleUserTiming_Parms, CustomMetrics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomMetrics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomMetrics_Inner = { "CustomMetrics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomMetric, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomDimensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomDimensions = { "CustomDimensions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleUserTiming_Parms, CustomDimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomDimensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomDimensions_Inner = { "CustomDimensions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomDimension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingName = { "TimingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleUserTiming_Parms, TimingName), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingValue = { "TimingValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleUserTiming_Parms, TimingValue), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingCategory = { "TimingCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleUserTiming_Parms, TimingCategory), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomMetrics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_CustomDimensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::NewProp_TimingCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, nullptr, "RecordGoogleUserTiming", nullptr, nullptr, sizeof(GoogleAnalyticsBlueprintLibrary_eventRecordGoogleUserTiming_Parms), Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics
	{
		struct GoogleAnalyticsBlueprintLibrary_eventSetAnonymizeIP_Parms
		{
			bool Anonymize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anonymize_MetaData[];
#endif
		static void NewProp_Anonymize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Anonymize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::NewProp_Anonymize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::NewProp_Anonymize_SetBit(void* Obj)
	{
		((GoogleAnalyticsBlueprintLibrary_eventSetAnonymizeIP_Parms*)Obj)->Anonymize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::NewProp_Anonymize = { "Anonymize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GoogleAnalyticsBlueprintLibrary_eventSetAnonymizeIP_Parms), &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::NewProp_Anonymize_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::NewProp_Anonymize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::NewProp_Anonymize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::NewProp_Anonymize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, nullptr, "SetAnonymizeIP", nullptr, nullptr, sizeof(GoogleAnalyticsBlueprintLibrary_eventSetAnonymizeIP_Parms), Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics
	{
		struct GoogleAnalyticsBlueprintLibrary_eventSetTrackingId_Parms
		{
			FString TrackingId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::NewProp_TrackingId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::NewProp_TrackingId = { "TrackingId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleAnalyticsBlueprintLibrary_eventSetTrackingId_Parms, TrackingId), METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::NewProp_TrackingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::NewProp_TrackingId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::NewProp_TrackingId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, nullptr, "SetTrackingId", nullptr, nullptr, sizeof(GoogleAnalyticsBlueprintLibrary_eventSetTrackingId_Parms), Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_NoRegister()
	{
		return UGoogleAnalyticsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_GetTrackingId, "GetTrackingId" }, // 3326094056
		{ &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent, "RecordGoogleEvent" }, // 2774403625
		{ &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen, "RecordGoogleScreen" }, // 3211697675
		{ &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction, "RecordGoogleSocialInteraction" }, // 3942191857
		{ &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming, "RecordGoogleUserTiming" }, // 1132222176
		{ &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP, "SetAnonymizeIP" }, // 3887131928
		{ &Z_Construct_UFunction_UGoogleAnalyticsBlueprintLibrary_SetTrackingId, "SetTrackingId" }, // 1418294836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GoogleAnalyticsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/GoogleAnalyticsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleAnalyticsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::ClassParams = {
		&UGoogleAnalyticsBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoogleAnalyticsBlueprintLibrary, 1086283477);
	template<> GOOGLEANALYTICS_API UClass* StaticClass<UGoogleAnalyticsBlueprintLibrary>()
	{
		return UGoogleAnalyticsBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoogleAnalyticsBlueprintLibrary(Z_Construct_UClass_UGoogleAnalyticsBlueprintLibrary, &UGoogleAnalyticsBlueprintLibrary::StaticClass, TEXT("/Script/GoogleAnalytics"), TEXT("UGoogleAnalyticsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleAnalyticsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
