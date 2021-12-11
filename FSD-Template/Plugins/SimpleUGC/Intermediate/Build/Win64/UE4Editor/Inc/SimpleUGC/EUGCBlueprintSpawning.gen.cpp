// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/EUGCBlueprintSpawning.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUGCBlueprintSpawning() {}
// Cross Module References
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EUGCBlueprintSpawning();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	static UEnum* EUGCBlueprintSpawning_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleUGC_EUGCBlueprintSpawning, Z_Construct_UPackage__Script_SimpleUGC(), TEXT("EUGCBlueprintSpawning"));
		}
		return Singleton;
	}
	template<> SIMPLEUGC_API UEnum* StaticEnum<EUGCBlueprintSpawning>()
	{
		return EUGCBlueprintSpawning_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUGCBlueprintSpawning(EUGCBlueprintSpawning_StaticEnum, TEXT("/Script/SimpleUGC"), TEXT("EUGCBlueprintSpawning"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleUGC_EUGCBlueprintSpawning_Hash() { return 2177769996U; }
	UEnum* Z_Construct_UEnum_SimpleUGC_EUGCBlueprintSpawning()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleUGC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUGCBlueprintSpawning"), 0, Get_Z_Construct_UEnum_SimpleUGC_EUGCBlueprintSpawning_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUGCBlueprintSpawning::Spacerig", (int64)EUGCBlueprintSpawning::Spacerig },
				{ "EUGCBlueprintSpawning::Cave", (int64)EUGCBlueprintSpawning::Cave },
				{ "EUGCBlueprintSpawning::Other", (int64)EUGCBlueprintSpawning::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cave.Name", "EUGCBlueprintSpawning::Cave" },
				{ "ModuleRelativePath", "Public/EUGCBlueprintSpawning.h" },
				{ "Other.Name", "EUGCBlueprintSpawning::Other" },
				{ "Spacerig.Name", "EUGCBlueprintSpawning::Spacerig" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleUGC,
				nullptr,
				"EUGCBlueprintSpawning",
				"EUGCBlueprintSpawning",
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
