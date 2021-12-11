// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/EUGCApprovalStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUGCApprovalStatus() {}
// Cross Module References
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	static UEnum* EUGCApprovalStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus, Z_Construct_UPackage__Script_SimpleUGC(), TEXT("EUGCApprovalStatus"));
		}
		return Singleton;
	}
	template<> SIMPLEUGC_API UEnum* StaticEnum<EUGCApprovalStatus>()
	{
		return EUGCApprovalStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUGCApprovalStatus(EUGCApprovalStatus_StaticEnum, TEXT("/Script/SimpleUGC"), TEXT("EUGCApprovalStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus_Hash() { return 3287549873U; }
	UEnum* Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleUGC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUGCApprovalStatus"), 0, Get_Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUGCApprovalStatus::Fully", (int64)EUGCApprovalStatus::Fully },
				{ "EUGCApprovalStatus::Progression", (int64)EUGCApprovalStatus::Progression },
				{ "EUGCApprovalStatus::Sandbox", (int64)EUGCApprovalStatus::Sandbox },
				{ "EUGCApprovalStatus::All", (int64)EUGCApprovalStatus::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EUGCApprovalStatus::All" },
				{ "BlueprintType", "true" },
				{ "Fully.Name", "EUGCApprovalStatus::Fully" },
				{ "ModuleRelativePath", "Public/EUGCApprovalStatus.h" },
				{ "Progression.Name", "EUGCApprovalStatus::Progression" },
				{ "Sandbox.Name", "EUGCApprovalStatus::Sandbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleUGC,
				nullptr,
				"EUGCApprovalStatus",
				"EUGCApprovalStatus",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
