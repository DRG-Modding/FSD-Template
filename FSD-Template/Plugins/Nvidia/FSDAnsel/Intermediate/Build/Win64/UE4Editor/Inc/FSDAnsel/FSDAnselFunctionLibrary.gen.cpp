// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDAnsel/Public/FSDAnselFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSDAnselFunctionLibrary() {}
// Cross Module References
	FSDANSEL_API UClass* Z_Construct_UClass_UFSDAnselFunctionLibrary_NoRegister();
	FSDANSEL_API UClass* Z_Construct_UClass_UFSDAnselFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FSDAnsel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FSDANSEL_API UEnum* Z_Construct_UEnum_FSDAnsel_EUIControlEffectTarget();
// End Cross Module References
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execConstrainCameraByDistance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_NewCameraLocation);
		P_GET_STRUCT(FVector,Z_Param_PreviousCameraLocation);
		P_GET_STRUCT(FVector,Z_Param_OriginalCameraLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCameraLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::ConstrainCameraByDistance(Z_Param_WorldContextObject,Z_Param_NewCameraLocation,Z_Param_PreviousCameraLocation,Z_Param_OriginalCameraLocation,Z_Param_Out_OutCameraLocation,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execConstrainCameraByGeometry)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_NewCameraLocation);
		P_GET_STRUCT(FVector,Z_Param_PreviousCameraLocation);
		P_GET_STRUCT(FVector,Z_Param_OriginalCameraLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCameraLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::ConstrainCameraByGeometry(Z_Param_WorldContextObject,Z_Param_NewCameraLocation,Z_Param_PreviousCameraLocation,Z_Param_OriginalCameraLocation,Z_Param_Out_OutCameraLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execIsPhotographyAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFSDAnselFunctionLibrary::IsPhotographyAllowed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execIsPhotographyAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFSDAnselFunctionLibrary::IsPhotographyAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetAutoPause)
	{
		P_GET_UBOOL(Z_Param_bShouldAutoPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetAutoPause(Z_Param_bShouldAutoPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetAutoPostprocess)
	{
		P_GET_UBOOL(Z_Param_bShouldAutoPostprocess);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetAutoPostprocess(Z_Param_bShouldAutoPostprocess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetCameraConstraintCameraSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CameraSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetCameraConstraintCameraSize(Z_Param_CameraSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetCameraConstraintDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxCameraDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetCameraConstraintDistance(Z_Param_MaxCameraDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetCameraMovementSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TranslationSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetCameraMovementSpeed(Z_Param_TranslationSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetIsPhotographyAllowed)
	{
		P_GET_UBOOL(Z_Param_bIsPhotographyAllowed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetIsPhotographyAllowed(Z_Param_bIsPhotographyAllowed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetSettleFrames)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSettleFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetSettleFrames(Z_Param_NumSettleFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execSetUIControlVisibility)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param_UIControlTarget);
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::SetUIControlVisibility(Z_Param_WorldContextObject,EUIControlEffectTarget(Z_Param_UIControlTarget),Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execStartPhotographySession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::StartPhotographySession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFSDAnselFunctionLibrary::execStopPhotographySession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFSDAnselFunctionLibrary::StopPhotographySession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UFSDAnselFunctionLibrary::StaticRegisterNativesUFSDAnselFunctionLibrary()
	{
		UClass* Class = UFSDAnselFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstrainCameraByDistance", &UFSDAnselFunctionLibrary::execConstrainCameraByDistance },
			{ "ConstrainCameraByGeometry", &UFSDAnselFunctionLibrary::execConstrainCameraByGeometry },
			{ "IsPhotographyAllowed", &UFSDAnselFunctionLibrary::execIsPhotographyAllowed },
			{ "IsPhotographyAvailable", &UFSDAnselFunctionLibrary::execIsPhotographyAvailable },
			{ "SetAutoPause", &UFSDAnselFunctionLibrary::execSetAutoPause },
			{ "SetAutoPostprocess", &UFSDAnselFunctionLibrary::execSetAutoPostprocess },
			{ "SetCameraConstraintCameraSize", &UFSDAnselFunctionLibrary::execSetCameraConstraintCameraSize },
			{ "SetCameraConstraintDistance", &UFSDAnselFunctionLibrary::execSetCameraConstraintDistance },
			{ "SetCameraMovementSpeed", &UFSDAnselFunctionLibrary::execSetCameraMovementSpeed },
			{ "SetIsPhotographyAllowed", &UFSDAnselFunctionLibrary::execSetIsPhotographyAllowed },
			{ "SetSettleFrames", &UFSDAnselFunctionLibrary::execSetSettleFrames },
			{ "SetUIControlVisibility", &UFSDAnselFunctionLibrary::execSetUIControlVisibility },
			{ "StartPhotographySession", &UFSDAnselFunctionLibrary::execStartPhotographySession },
			{ "StopPhotographySession", &UFSDAnselFunctionLibrary::execStopPhotographySession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics
	{
		struct FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms
		{
			UObject* WorldContextObject;
			FVector NewCameraLocation;
			FVector PreviousCameraLocation;
			FVector OriginalCameraLocation;
			FVector OutCameraLocation;
			float MaxDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCameraLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_OutCameraLocation = { "OutCameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms, OutCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_OriginalCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_OriginalCameraLocation = { "OriginalCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms, OriginalCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_OriginalCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_OriginalCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_PreviousCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_PreviousCameraLocation = { "PreviousCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms, PreviousCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_PreviousCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_PreviousCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_NewCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_NewCameraLocation = { "NewCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms, NewCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_NewCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_NewCameraLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_OutCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_OriginalCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_PreviousCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_NewCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "ConstrainCameraByDistance", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventConstrainCameraByDistance_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics
	{
		struct FSDAnselFunctionLibrary_eventConstrainCameraByGeometry_Parms
		{
			UObject* WorldContextObject;
			FVector NewCameraLocation;
			FVector PreviousCameraLocation;
			FVector OriginalCameraLocation;
			FVector OutCameraLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCameraLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_OutCameraLocation = { "OutCameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByGeometry_Parms, OutCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_OriginalCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_OriginalCameraLocation = { "OriginalCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByGeometry_Parms, OriginalCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_OriginalCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_OriginalCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_PreviousCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_PreviousCameraLocation = { "PreviousCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByGeometry_Parms, PreviousCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_PreviousCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_PreviousCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_NewCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_NewCameraLocation = { "NewCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByGeometry_Parms, NewCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_NewCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_NewCameraLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventConstrainCameraByGeometry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_OutCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_OriginalCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_PreviousCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_NewCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "ConstrainCameraByGeometry", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventConstrainCameraByGeometry_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics
	{
		struct FSDAnselFunctionLibrary_eventIsPhotographyAllowed_Parms
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
	void Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FSDAnselFunctionLibrary_eventIsPhotographyAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSDAnselFunctionLibrary_eventIsPhotographyAllowed_Parms), &Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "IsPhotographyAllowed", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventIsPhotographyAllowed_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics
	{
		struct FSDAnselFunctionLibrary_eventIsPhotographyAvailable_Parms
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
	void Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FSDAnselFunctionLibrary_eventIsPhotographyAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSDAnselFunctionLibrary_eventIsPhotographyAvailable_Parms), &Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "IsPhotographyAvailable", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventIsPhotographyAvailable_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetAutoPause_Parms
		{
			bool bShouldAutoPause;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoPause_MetaData[];
#endif
		static void NewProp_bShouldAutoPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::NewProp_bShouldAutoPause_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::NewProp_bShouldAutoPause_SetBit(void* Obj)
	{
		((FSDAnselFunctionLibrary_eventSetAutoPause_Parms*)Obj)->bShouldAutoPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::NewProp_bShouldAutoPause = { "bShouldAutoPause", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSDAnselFunctionLibrary_eventSetAutoPause_Parms), &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::NewProp_bShouldAutoPause_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::NewProp_bShouldAutoPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::NewProp_bShouldAutoPause_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::NewProp_bShouldAutoPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetAutoPause", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetAutoPause_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetAutoPostprocess_Parms
		{
			bool bShouldAutoPostprocess;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoPostprocess_MetaData[];
#endif
		static void NewProp_bShouldAutoPostprocess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoPostprocess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::NewProp_bShouldAutoPostprocess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::NewProp_bShouldAutoPostprocess_SetBit(void* Obj)
	{
		((FSDAnselFunctionLibrary_eventSetAutoPostprocess_Parms*)Obj)->bShouldAutoPostprocess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::NewProp_bShouldAutoPostprocess = { "bShouldAutoPostprocess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSDAnselFunctionLibrary_eventSetAutoPostprocess_Parms), &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::NewProp_bShouldAutoPostprocess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::NewProp_bShouldAutoPostprocess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::NewProp_bShouldAutoPostprocess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::NewProp_bShouldAutoPostprocess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetAutoPostprocess", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetAutoPostprocess_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetCameraConstraintCameraSize_Parms
		{
			float CameraSize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::NewProp_CameraSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::NewProp_CameraSize = { "CameraSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventSetCameraConstraintCameraSize_Parms, CameraSize), METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::NewProp_CameraSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::NewProp_CameraSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::NewProp_CameraSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetCameraConstraintCameraSize", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetCameraConstraintCameraSize_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetCameraConstraintDistance_Parms
		{
			float MaxCameraDistance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::NewProp_MaxCameraDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventSetCameraConstraintDistance_Parms, MaxCameraDistance), METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::NewProp_MaxCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::NewProp_MaxCameraDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::NewProp_MaxCameraDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetCameraConstraintDistance", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetCameraConstraintDistance_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetCameraMovementSpeed_Parms
		{
			float TranslationSpeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::NewProp_TranslationSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::NewProp_TranslationSpeed = { "TranslationSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventSetCameraMovementSpeed_Parms, TranslationSpeed), METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::NewProp_TranslationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::NewProp_TranslationSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::NewProp_TranslationSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetCameraMovementSpeed", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetCameraMovementSpeed_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetIsPhotographyAllowed_Parms
		{
			bool bIsPhotographyAllowed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPhotographyAllowed_MetaData[];
#endif
		static void NewProp_bIsPhotographyAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPhotographyAllowed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::NewProp_bIsPhotographyAllowed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::NewProp_bIsPhotographyAllowed_SetBit(void* Obj)
	{
		((FSDAnselFunctionLibrary_eventSetIsPhotographyAllowed_Parms*)Obj)->bIsPhotographyAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::NewProp_bIsPhotographyAllowed = { "bIsPhotographyAllowed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSDAnselFunctionLibrary_eventSetIsPhotographyAllowed_Parms), &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::NewProp_bIsPhotographyAllowed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::NewProp_bIsPhotographyAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::NewProp_bIsPhotographyAllowed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::NewProp_bIsPhotographyAllowed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetIsPhotographyAllowed", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetIsPhotographyAllowed_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetSettleFrames_Parms
		{
			int32 NumSettleFrames;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSettleFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSettleFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::NewProp_NumSettleFrames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::NewProp_NumSettleFrames = { "NumSettleFrames", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventSetSettleFrames_Parms, NumSettleFrames), METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::NewProp_NumSettleFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::NewProp_NumSettleFrames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::NewProp_NumSettleFrames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetSettleFrames", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetSettleFrames_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics
	{
		struct FSDAnselFunctionLibrary_eventSetUIControlVisibility_Parms
		{
			UObject* WorldContextObject;
			TEnumAsByte<EUIControlEffectTarget> UIControlTarget;
			bool bIsVisible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIControlTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UIControlTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FSDAnselFunctionLibrary_eventSetUIControlVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSDAnselFunctionLibrary_eventSetUIControlVisibility_Parms), &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_UIControlTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_UIControlTarget = { "UIControlTarget", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventSetUIControlVisibility_Parms, UIControlTarget), Z_Construct_UEnum_FSDAnsel_EUIControlEffectTarget, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_UIControlTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_UIControlTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventSetUIControlVisibility_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_UIControlTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "SetUIControlVisibility", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventSetUIControlVisibility_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics
	{
		struct FSDAnselFunctionLibrary_eventStartPhotographySession_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventStartPhotographySession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "StartPhotographySession", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventStartPhotographySession_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics
	{
		struct FSDAnselFunctionLibrary_eventStopPhotographySession_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDAnselFunctionLibrary_eventStopPhotographySession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSDAnselFunctionLibrary, nullptr, "StopPhotographySession", nullptr, nullptr, sizeof(FSDAnselFunctionLibrary_eventStopPhotographySession_Parms), Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFSDAnselFunctionLibrary_NoRegister()
	{
		return UFSDAnselFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FSDAnsel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByDistance, "ConstrainCameraByDistance" }, // 2898026188
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_ConstrainCameraByGeometry, "ConstrainCameraByGeometry" }, // 1846358122
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAllowed, "IsPhotographyAllowed" }, // 2739763558
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_IsPhotographyAvailable, "IsPhotographyAvailable" }, // 1814091080
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPause, "SetAutoPause" }, // 4067138178
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetAutoPostprocess, "SetAutoPostprocess" }, // 3468316336
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize, "SetCameraConstraintCameraSize" }, // 3973128323
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraConstraintDistance, "SetCameraConstraintDistance" }, // 2821655220
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetCameraMovementSpeed, "SetCameraMovementSpeed" }, // 2701004011
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetIsPhotographyAllowed, "SetIsPhotographyAllowed" }, // 4082825190
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetSettleFrames, "SetSettleFrames" }, // 3693593688
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_SetUIControlVisibility, "SetUIControlVisibility" }, // 437181309
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_StartPhotographySession, "StartPhotographySession" }, // 4262501278
		{ &Z_Construct_UFunction_UFSDAnselFunctionLibrary_StopPhotographySession, "StopPhotographySession" }, // 3267164953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FSDAnselFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/FSDAnselFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSDAnselFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::ClassParams = {
		&UFSDAnselFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSDAnselFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSDAnselFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSDAnselFunctionLibrary, 196876853);
	template<> FSDANSEL_API UClass* StaticClass<UFSDAnselFunctionLibrary>()
	{
		return UFSDAnselFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSDAnselFunctionLibrary(Z_Construct_UClass_UFSDAnselFunctionLibrary, &UFSDAnselFunctionLibrary::StaticClass, TEXT("/Script/FSDAnsel"), TEXT("UFSDAnselFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSDAnselFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
