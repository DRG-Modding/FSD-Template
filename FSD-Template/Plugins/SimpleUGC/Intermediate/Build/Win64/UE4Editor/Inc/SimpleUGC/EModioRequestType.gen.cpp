// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/EModioRequestType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEModioRequestType() {}
// Cross Module References
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EModioRequestType();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	static UEnum* EModioRequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleUGC_EModioRequestType, Z_Construct_UPackage__Script_SimpleUGC(), TEXT("EModioRequestType"));
		}
		return Singleton;
	}
	template<> SIMPLEUGC_API UEnum* StaticEnum<EModioRequestType>()
	{
		return EModioRequestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioRequestType(EModioRequestType_StaticEnum, TEXT("/Script/SimpleUGC"), TEXT("EModioRequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleUGC_EModioRequestType_Hash() { return 2746559210U; }
	UEnum* Z_Construct_UEnum_SimpleUGC_EModioRequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleUGC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioRequestType"), 0, Get_Z_Construct_UEnum_SimpleUGC_EModioRequestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioRequestType::InitializeLocalInstallation", (int64)EModioRequestType::InitializeLocalInstallation },
				{ "EModioRequestType::Authentication", (int64)EModioRequestType::Authentication },
				{ "EModioRequestType::K2_Authentication", (int64)EModioRequestType::K2_Authentication },
				{ "EModioRequestType::TermsOfUse", (int64)EModioRequestType::TermsOfUse },
				{ "EModioRequestType::FetchModUpdates", (int64)EModioRequestType::FetchModUpdates },
				{ "EModioRequestType::ModMetaData", (int64)EModioRequestType::ModMetaData },
				{ "EModioRequestType::Thumbnail", (int64)EModioRequestType::Thumbnail },
				{ "EModioRequestType::HostHiddenModsInstalled", (int64)EModioRequestType::HostHiddenModsInstalled },
				{ "EModioRequestType::Subscribe", (int64)EModioRequestType::Subscribe },
				{ "EModioRequestType::ModDependencySubscribe", (int64)EModioRequestType::ModDependencySubscribe },
				{ "EModioRequestType::ModDependencyList", (int64)EModioRequestType::ModDependencyList },
				{ "EModioRequestType::ModDependencyAdd", (int64)EModioRequestType::ModDependencyAdd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Authentication.Name", "EModioRequestType::Authentication" },
				{ "FetchModUpdates.Name", "EModioRequestType::FetchModUpdates" },
				{ "HostHiddenModsInstalled.Name", "EModioRequestType::HostHiddenModsInstalled" },
				{ "InitializeLocalInstallation.Name", "EModioRequestType::InitializeLocalInstallation" },
				{ "K2_Authentication.Name", "EModioRequestType::K2_Authentication" },
				{ "ModDependencyAdd.Name", "EModioRequestType::ModDependencyAdd" },
				{ "ModDependencyList.Name", "EModioRequestType::ModDependencyList" },
				{ "ModDependencySubscribe.Name", "EModioRequestType::ModDependencySubscribe" },
				{ "ModMetaData.Name", "EModioRequestType::ModMetaData" },
				{ "ModuleRelativePath", "Public/EModioRequestType.h" },
				{ "Subscribe.Name", "EModioRequestType::Subscribe" },
				{ "TermsOfUse.Name", "EModioRequestType::TermsOfUse" },
				{ "Thumbnail.Name", "EModioRequestType::Thumbnail" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleUGC,
				nullptr,
				"EModioRequestType",
				"EModioRequestType",
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
