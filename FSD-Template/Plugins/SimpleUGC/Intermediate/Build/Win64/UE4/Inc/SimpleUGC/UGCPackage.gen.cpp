// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCPackage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCPackage() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCPackage_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCPackage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus();
// End Cross Module References
	DEFINE_FUNCTION(UUGCPackage::execGetIdAsInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetIdAsInt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCPackage::execGetIdAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIdAsString();
		P_NATIVE_END;
	}
	void UUGCPackage::StaticRegisterNativesUUGCPackage()
	{
		UClass* Class = UUGCPackage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIdAsInt", &UUGCPackage::execGetIdAsInt },
			{ "GetIdAsString", &UUGCPackage::execGetIdAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics
	{
		struct UGCPackage_eventGetIdAsInt_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCPackage_eventGetIdAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCPackage, nullptr, "GetIdAsInt", nullptr, nullptr, sizeof(UGCPackage_eventGetIdAsInt_Parms), Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCPackage_GetIdAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCPackage_GetIdAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics
	{
		struct UGCPackage_eventGetIdAsString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCPackage_eventGetIdAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCPackage, nullptr, "GetIdAsString", nullptr, nullptr, sizeof(UGCPackage_eventGetIdAsString_Parms), Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCPackage_GetIdAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCPackage_GetIdAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUGCPackage_NoRegister()
	{
		return UUGCPackage::StaticClass();
	}
	struct Z_Construct_UClass_UUGCPackage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePackedForLatestVersion_MetaData[];
#endif
		static void NewProp_OverridePackedForLatestVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverridePackedForLatestVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagedForLatestVersion_MetaData[];
#endif
		static void NewProp_PackagedForLatestVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PackagedForLatestVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependencyRemoved_MetaData[];
#endif
		static void NewProp_DependencyRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DependencyRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowStatusForAudioCosmetic_MetaData[];
#endif
		static void NewProp_ShowStatusForAudioCosmetic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowStatusForAudioCosmetic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeprecatedLocation_MetaData[];
#endif
		static void NewProp_DeprecatedLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeprecatedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountingToBeApplied_MetaData[];
#endif
		static void NewProp_MountingToBeApplied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MountingToBeApplied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMounted_MetaData[];
#endif
		static void NewProp_IsMounted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMounted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthorURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakFileAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PakFileAssets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakFileAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakFileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakFileLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCPackage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGCPackage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCPackage_GetIdAsInt, "GetIdAsInt" }, // 2564274059
		{ &Z_Construct_UFunction_UUGCPackage_GetIdAsString, "GetIdAsString" }, // 919506153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGCPackage.h" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_LastUpdated_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_LastUpdated = { "LastUpdated", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, LastUpdated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_LastUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_LastUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_OverridePackedForLatestVersion_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	void Z_Construct_UClass_UUGCPackage_Statics::NewProp_OverridePackedForLatestVersion_SetBit(void* Obj)
	{
		((UUGCPackage*)Obj)->OverridePackedForLatestVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_OverridePackedForLatestVersion = { "OverridePackedForLatestVersion", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCPackage), &Z_Construct_UClass_UUGCPackage_Statics::NewProp_OverridePackedForLatestVersion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_OverridePackedForLatestVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_OverridePackedForLatestVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_PackagedForLatestVersion_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	void Z_Construct_UClass_UUGCPackage_Statics::NewProp_PackagedForLatestVersion_SetBit(void* Obj)
	{
		((UUGCPackage*)Obj)->PackagedForLatestVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_PackagedForLatestVersion = { "PackagedForLatestVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCPackage), &Z_Construct_UClass_UUGCPackage_Statics::NewProp_PackagedForLatestVersion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_PackagedForLatestVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_PackagedForLatestVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_DependencyRemoved_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	void Z_Construct_UClass_UUGCPackage_Statics::NewProp_DependencyRemoved_SetBit(void* Obj)
	{
		((UUGCPackage*)Obj)->DependencyRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_DependencyRemoved = { "DependencyRemoved", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCPackage), &Z_Construct_UClass_UUGCPackage_Statics::NewProp_DependencyRemoved_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_DependencyRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_DependencyRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_Dependencies_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Dependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Dependencies_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_ShowStatusForAudioCosmetic_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	void Z_Construct_UClass_UUGCPackage_Statics::NewProp_ShowStatusForAudioCosmetic_SetBit(void* Obj)
	{
		((UUGCPackage*)Obj)->ShowStatusForAudioCosmetic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_ShowStatusForAudioCosmetic = { "ShowStatusForAudioCosmetic", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCPackage), &Z_Construct_UClass_UUGCPackage_Statics::NewProp_ShowStatusForAudioCosmetic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_ShowStatusForAudioCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_ShowStatusForAudioCosmetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_DeprecatedLocation_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	void Z_Construct_UClass_UUGCPackage_Statics::NewProp_DeprecatedLocation_SetBit(void* Obj)
	{
		((UUGCPackage*)Obj)->DeprecatedLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_DeprecatedLocation = { "DeprecatedLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCPackage), &Z_Construct_UClass_UUGCPackage_Statics::NewProp_DeprecatedLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_DeprecatedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_DeprecatedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_MountingToBeApplied_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	void Z_Construct_UClass_UUGCPackage_Statics::NewProp_MountingToBeApplied_SetBit(void* Obj)
	{
		((UUGCPackage*)Obj)->MountingToBeApplied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_MountingToBeApplied = { "MountingToBeApplied", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCPackage), &Z_Construct_UClass_UUGCPackage_Statics::NewProp_MountingToBeApplied_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_MountingToBeApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_MountingToBeApplied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_IsMounted_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	void Z_Construct_UClass_UUGCPackage_Statics::NewProp_IsMounted_SetBit(void* Obj)
	{
		((UUGCPackage*)Obj)->IsMounted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_IsMounted = { "IsMounted", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCPackage), &Z_Construct_UClass_UUGCPackage_Statics::NewProp_IsMounted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_IsMounted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_IsMounted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, Description), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_AuthorURL_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_AuthorURL = { "AuthorURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, AuthorURL), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_AuthorURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_AuthorURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, Author), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileAssets_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileAssets = { "PakFileAssets", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, PakFileAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileAssets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileAssets_Inner = { "PakFileAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileLocation_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileLocation = { "PakFileLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, PakFileLocation), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModPath_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModPath = { "ModPath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, ModPath), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, Status), Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus, METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, Categories), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Categories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModURL_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModURL = { "ModURL", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, ModURL), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, Version), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCPackage_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "UGCPackage" },
		{ "ModuleRelativePath", "Public/UGCPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUGCPackage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCPackage, Name), METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_LastUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_OverridePackedForLatestVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_PackagedForLatestVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_DependencyRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Dependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_ShowStatusForAudioCosmetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_DeprecatedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_MountingToBeApplied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_IsMounted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_AuthorURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Author,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_PakFileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_ModURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCPackage_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCPackage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCPackage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGCPackage_Statics::ClassParams = {
		&UUGCPackage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGCPackage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCPackage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCPackage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCPackage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGCPackage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGCPackage, 3661163510);
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCPackage>()
	{
		return UUGCPackage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGCPackage(Z_Construct_UClass_UUGCPackage, &UUGCPackage::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UUGCPackage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCPackage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
