// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDRawInput/Public/RegisteredDeviceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegisteredDeviceInfo() {}
// Cross Module References
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_FSDRawInput();
// End Cross Module References
class UScriptStruct* FRegisteredDeviceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FSDRAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisteredDeviceInfo, Z_Construct_UPackage__Script_FSDRawInput(), TEXT("RegisteredDeviceInfo"), sizeof(FRegisteredDeviceInfo), Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Hash());
	}
	return Singleton;
}
template<> FSDRAWINPUT_API UScriptStruct* StaticStruct<FRegisteredDeviceInfo>()
{
	return FRegisteredDeviceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRegisteredDeviceInfo(FRegisteredDeviceInfo::StaticStruct, TEXT("/Script/FSDRawInput"), TEXT("RegisteredDeviceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FSDRawInput_StaticRegisterNativesFRegisteredDeviceInfo
{
	FScriptStruct_FSDRawInput_StaticRegisterNativesFRegisteredDeviceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RegisteredDeviceInfo")),new UScriptStruct::TCppStructOps<FRegisteredDeviceInfo>);
	}
} ScriptStruct_FSDRawInput_StaticRegisterNativesFRegisteredDeviceInfo;
	struct Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VendorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RegisteredDeviceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisteredDeviceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "RegisteredDeviceInfo" },
		{ "ModuleRelativePath", "Public/RegisteredDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisteredDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "RegisteredDeviceInfo" },
		{ "ModuleRelativePath", "Public/RegisteredDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisteredDeviceInfo, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData[] = {
		{ "Category", "RegisteredDeviceInfo" },
		{ "ModuleRelativePath", "Public/RegisteredDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID = { "VendorID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisteredDeviceInfo, VendorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData[] = {
		{ "Category", "RegisteredDeviceInfo" },
		{ "ModuleRelativePath", "Public/RegisteredDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegisteredDeviceInfo, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FSDRawInput,
		nullptr,
		&NewStructOps,
		"RegisteredDeviceInfo",
		sizeof(FRegisteredDeviceInfo),
		alignof(FRegisteredDeviceInfo),
		Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegisteredDeviceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FSDRawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RegisteredDeviceInfo"), sizeof(FRegisteredDeviceInfo), Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Hash() { return 1474287183U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
