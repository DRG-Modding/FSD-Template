// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioReportParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioReportParams() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioReportType();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioReportParams();
// End Cross Module References
	static UEnum* EModioReportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioReportType, Z_Construct_UPackage__Script_Modio(), TEXT("EModioReportType"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioReportType>()
	{
		return EModioReportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioReportType(EModioReportType_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioReportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioReportType_Hash() { return 4211257203U; }
	UEnum* Z_Construct_UEnum_Modio_EModioReportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioReportType"), 0, Get_Z_Construct_UEnum_Modio_EModioReportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioReportType::Generic", (int64)EModioReportType::Generic },
				{ "EModioReportType::DMCA", (int64)EModioReportType::DMCA },
				{ "EModioReportType::NotWorking", (int64)EModioReportType::NotWorking },
				{ "EModioReportType::RudeContent", (int64)EModioReportType::RudeContent },
				{ "EModioReportType::IllegalContent", (int64)EModioReportType::IllegalContent },
				{ "EModioReportType::StolenContent", (int64)EModioReportType::StolenContent },
				{ "EModioReportType::FalseInformation", (int64)EModioReportType::FalseInformation },
				{ "EModioReportType::Other", (int64)EModioReportType::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DMCA.Name", "EModioReportType::DMCA" },
				{ "FalseInformation.Name", "EModioReportType::FalseInformation" },
				{ "Generic.Name", "EModioReportType::Generic" },
				{ "IllegalContent.Name", "EModioReportType::IllegalContent" },
				{ "ModuleRelativePath", "Public/Types/ModioReportParams.h" },
				{ "NotWorking.Name", "EModioReportType::NotWorking" },
				{ "Other.Name", "EModioReportType::Other" },
				{ "RudeContent.Name", "EModioReportType::RudeContent" },
				{ "StolenContent.Name", "EModioReportType::StolenContent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioReportType",
				"EModioReportType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FModioReportParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioReportParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioReportParams, Z_Construct_UPackage__Script_Modio(), TEXT("ModioReportParams"), sizeof(FModioReportParams), Get_Z_Construct_UScriptStruct_FModioReportParams_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioReportParams>()
{
	return FModioReportParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioReportParams(FModioReportParams::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioReportParams"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioReportParams
{
	FScriptStruct_Modio_StaticRegisterNativesFModioReportParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioReportParams")),new UScriptStruct::TCppStructOps<FModioReportParams>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioReportParams;
	struct Z_Construct_UScriptStruct_FModioReportParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioReportParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioReportParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioReportParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioReportParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioReportParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioReportParams",
		sizeof(FModioReportParams),
		alignof(FModioReportParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioReportParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioReportParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioReportParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioReportParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioReportParams"), sizeof(FModioReportParams), Get_Z_Construct_UScriptStruct_FModioReportParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioReportParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioReportParams_Hash() { return 2344247277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
