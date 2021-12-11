// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModCreationHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModCreationHandle() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModCreationHandle();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
class UScriptStruct* FModioModCreationHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModCreationHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModCreationHandle, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModCreationHandle"), sizeof(FModioModCreationHandle), Get_Z_Construct_UScriptStruct_FModioModCreationHandle_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModCreationHandle>()
{
	return FModioModCreationHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModCreationHandle(FModioModCreationHandle::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModCreationHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModCreationHandle
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModCreationHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModCreationHandle")),new UScriptStruct::TCppStructOps<FModioModCreationHandle>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModCreationHandle;
	struct Z_Construct_UScriptStruct_FModioModCreationHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModCreationHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioModCreationHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModCreationHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModCreationHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModCreationHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModCreationHandle",
		sizeof(FModioModCreationHandle),
		alignof(FModioModCreationHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModCreationHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModCreationHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModCreationHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModCreationHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModCreationHandle"), sizeof(FModioModCreationHandle), Get_Z_Construct_UScriptStruct_FModioModCreationHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModCreationHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModCreationHandle_Hash() { return 2949628547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
