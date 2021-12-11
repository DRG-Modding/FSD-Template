// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/EPackageSortField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPackageSortField() {}
// Cross Module References
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EPackageSortField();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	static UEnum* EPackageSortField_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleUGC_EPackageSortField, Z_Construct_UPackage__Script_SimpleUGC(), TEXT("EPackageSortField"));
		}
		return Singleton;
	}
	template<> SIMPLEUGC_API UEnum* StaticEnum<EPackageSortField>()
	{
		return EPackageSortField_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPackageSortField(EPackageSortField_StaticEnum, TEXT("/Script/SimpleUGC"), TEXT("EPackageSortField"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleUGC_EPackageSortField_Hash() { return 1385276208U; }
	UEnum* Z_Construct_UEnum_SimpleUGC_EPackageSortField()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleUGC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPackageSortField"), 0, Get_Z_Construct_UEnum_SimpleUGC_EPackageSortField_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPackageSortField::None", (int64)EPackageSortField::None },
				{ "EPackageSortField::Name", (int64)EPackageSortField::Name },
				{ "EPackageSortField::Status", (int64)EPackageSortField::Status },
				{ "EPackageSortField::Author", (int64)EPackageSortField::Author },
				{ "EPackageSortField::Mounted", (int64)EPackageSortField::Mounted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Author.Name", "EPackageSortField::Author" },
				{ "ModuleRelativePath", "Public/EPackageSortField.h" },
				{ "Mounted.Name", "EPackageSortField::Mounted" },
				{ "Name.Name", "EPackageSortField::Name" },
				{ "None.Name", "EPackageSortField::None" },
				{ "Status.Name", "EPackageSortField::Status" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleUGC,
				nullptr,
				"EPackageSortField",
				"EPackageSortField",
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
