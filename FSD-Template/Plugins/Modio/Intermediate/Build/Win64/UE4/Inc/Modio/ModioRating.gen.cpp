// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioRating.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioRating() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioRating();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
	static UEnum* EModioRating_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioRating, Z_Construct_UPackage__Script_Modio(), TEXT("EModioRating"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioRating>()
	{
		return EModioRating_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioRating(EModioRating_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioRating"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioRating_Hash() { return 2714314064U; }
	UEnum* Z_Construct_UEnum_Modio_EModioRating()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioRating"), 0, Get_Z_Construct_UEnum_Modio_EModioRating_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioRating::Neutral", (int64)EModioRating::Neutral },
				{ "EModioRating::Positive", (int64)EModioRating::Positive },
				{ "EModioRating::Negative", (int64)EModioRating::Negative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Types/ModioRating.h" },
				{ "Negative.Name", "EModioRating::Negative" },
				{ "Neutral.Name", "EModioRating::Neutral" },
				{ "Positive.Name", "EModioRating::Positive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioRating",
				"EModioRating",
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
