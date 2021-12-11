// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioModCollectionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModCollectionLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioModCollectionLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioModCollectionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModCollectionEntry();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModInfo();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioModState();
// End Cross Module References
	DEFINE_FUNCTION(UModioModCollectionLibrary::execGetPath)
	{
		P_GET_STRUCT_REF(FModioModCollectionEntry,Z_Param_Out_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioModCollectionLibrary::GetPath(Z_Param_Out_Entry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioModCollectionLibrary::execGetModProfile)
	{
		P_GET_STRUCT_REF(FModioModCollectionEntry,Z_Param_Out_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioModInfo*)Z_Param__Result=UModioModCollectionLibrary::GetModProfile(Z_Param_Out_Entry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioModCollectionLibrary::execGetID)
	{
		P_GET_STRUCT_REF(FModioModCollectionEntry,Z_Param_Out_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioModID*)Z_Param__Result=UModioModCollectionLibrary::GetID(Z_Param_Out_Entry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioModCollectionLibrary::execGetModState)
	{
		P_GET_STRUCT_REF(FModioModCollectionEntry,Z_Param_Out_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EModioModState*)Z_Param__Result=UModioModCollectionLibrary::GetModState(Z_Param_Out_Entry);
		P_NATIVE_END;
	}
	void UModioModCollectionLibrary::StaticRegisterNativesUModioModCollectionLibrary()
	{
		UClass* Class = UModioModCollectionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetID", &UModioModCollectionLibrary::execGetID },
			{ "GetModProfile", &UModioModCollectionLibrary::execGetModProfile },
			{ "GetModState", &UModioModCollectionLibrary::execGetModState },
			{ "GetPath", &UModioModCollectionLibrary::execGetPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics
	{
		struct ModioModCollectionLibrary_eventGetID_Parms
		{
			FModioModCollectionEntry Entry;
			FModioModID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetID_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetID_Parms, Entry), Z_Construct_UScriptStruct_FModioModCollectionEntry, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::NewProp_Entry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::NewProp_Entry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/** @return Mod ID */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModCollectionLibrary.h" },
		{ "ToolTip", "@return Mod ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModCollectionLibrary, nullptr, "GetID", nullptr, nullptr, sizeof(ModioModCollectionLibrary_eventGetID_Parms), Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModCollectionLibrary_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModCollectionLibrary_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics
	{
		struct ModioModCollectionLibrary_eventGetModProfile_Parms
		{
			FModioModCollectionEntry Entry;
			FModioModInfo ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetModProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioModInfo, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetModProfile_Parms, Entry), Z_Construct_UScriptStruct_FModioModCollectionEntry, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_Entry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_Entry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/** @return FModioModInfo containing mod profile data */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModCollectionLibrary.h" },
		{ "ToolTip", "@return FModioModInfo containing mod profile data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModCollectionLibrary, nullptr, "GetModProfile", nullptr, nullptr, sizeof(ModioModCollectionLibrary_eventGetModProfile_Parms), Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics
	{
		struct ModioModCollectionLibrary_eventGetModState_Parms
		{
			FModioModCollectionEntry Entry;
			EModioModState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetModState_Parms, ReturnValue), Z_Construct_UEnum_Modio_EModioModState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetModState_Parms, Entry), Z_Construct_UScriptStruct_FModioModCollectionEntry, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_Entry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_Entry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/** @return EModioModState enum representing current state of the mod */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModCollectionLibrary.h" },
		{ "ToolTip", "@return EModioModState enum representing current state of the mod" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModCollectionLibrary, nullptr, "GetModState", nullptr, nullptr, sizeof(ModioModCollectionLibrary_eventGetModState_Parms), Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModCollectionLibrary_GetModState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModCollectionLibrary_GetModState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics
	{
		struct ModioModCollectionLibrary_eventGetPath_Parms
		{
			FModioModCollectionEntry Entry;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioModCollectionLibrary_eventGetPath_Parms, Entry), Z_Construct_UScriptStruct_FModioModCollectionEntry, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_Entry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_Entry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Mods" },
		{ "Comment", "/**\n\x09 * @return Path to the mod's installation folder on disk\n\x09 * NOTE: If the mod is not yet installed this path may not yet exist. Check\n\x09 * xref:GetModState[] before trying to load files in this location\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModCollectionLibrary.h" },
		{ "ToolTip", "@return Path to the mod's installation folder on disk\nNOTE: If the mod is not yet installed this path may not yet exist. Check\nxref:GetModState[] before trying to load files in this location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioModCollectionLibrary, nullptr, "GetPath", nullptr, nullptr, sizeof(ModioModCollectionLibrary_eventGetPath_Parms), Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioModCollectionLibrary_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioModCollectionLibrary_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioModCollectionLibrary_NoRegister()
	{
		return UModioModCollectionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioModCollectionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioModCollectionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioModCollectionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioModCollectionLibrary_GetID, "GetID" }, // 2020066217
		{ &Z_Construct_UFunction_UModioModCollectionLibrary_GetModProfile, "GetModProfile" }, // 1263564974
		{ &Z_Construct_UFunction_UModioModCollectionLibrary_GetModState, "GetModState" }, // 2496195096
		{ &Z_Construct_UFunction_UModioModCollectionLibrary_GetPath, "GetPath" }, // 3579811911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioModCollectionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioModCollectionLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioModCollectionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioModCollectionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioModCollectionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioModCollectionLibrary_Statics::ClassParams = {
		&UModioModCollectionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioModCollectionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioModCollectionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioModCollectionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioModCollectionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioModCollectionLibrary, 848013768);
	template<> MODIO_API UClass* StaticClass<UModioModCollectionLibrary>()
	{
		return UModioModCollectionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioModCollectionLibrary(Z_Construct_UClass_UModioModCollectionLibrary, &UModioModCollectionLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioModCollectionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioModCollectionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
