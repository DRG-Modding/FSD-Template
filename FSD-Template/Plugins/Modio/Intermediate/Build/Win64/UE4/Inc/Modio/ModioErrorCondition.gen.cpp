// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/GeneratedHeader/Public/ModioErrorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioErrorCondition() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioErrorCondition();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
	static UEnum* EModioErrorCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioErrorCondition, Z_Construct_UPackage__Script_Modio(), TEXT("EModioErrorCondition"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioErrorCondition>()
	{
		return EModioErrorCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioErrorCondition(EModioErrorCondition_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioErrorCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioErrorCondition_Hash() { return 3671851789U; }
	UEnum* Z_Construct_UEnum_Modio_EModioErrorCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioErrorCondition"), 0, Get_Z_Construct_UEnum_Modio_EModioErrorCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioErrorCondition::NoError", (int64)EModioErrorCondition::NoError },
				{ "EModioErrorCondition::NetworkError", (int64)EModioErrorCondition::NetworkError },
				{ "EModioErrorCondition::ConfigurationError", (int64)EModioErrorCondition::ConfigurationError },
				{ "EModioErrorCondition::InvalidArgsError", (int64)EModioErrorCondition::InvalidArgsError },
				{ "EModioErrorCondition::FilesystemError", (int64)EModioErrorCondition::FilesystemError },
				{ "EModioErrorCondition::InternalError", (int64)EModioErrorCondition::InternalError },
				{ "EModioErrorCondition::EntityNotFoundError", (int64)EModioErrorCondition::EntityNotFoundError },
				{ "EModioErrorCondition::UserTermsOfUseError", (int64)EModioErrorCondition::UserTermsOfUseError },
				{ "EModioErrorCondition::SubmitReportError", (int64)EModioErrorCondition::SubmitReportError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ConfigurationError.Name", "EModioErrorCondition::ConfigurationError" },
				{ "ConfigurationError.ToolTip", "When this condition is true, the error code indicates the SDK's configuration is not valid - the game ID or API key are incorrect or the game has been deleted." },
				{ "EntityNotFoundError.Name", "EModioErrorCondition::EntityNotFoundError" },
				{ "EntityNotFoundError.ToolTip", "When this condition is true, the error code indicates that a specified game, mod, media file or mod file was not found." },
				{ "FilesystemError.Name", "EModioErrorCondition::FilesystemError" },
				{ "FilesystemError.ToolTip", "When this condition is true, the error code indicates a permission or IO error when accessing local filesystem data." },
				{ "InternalError.Name", "EModioErrorCondition::InternalError" },
				{ "InternalError.ToolTip", "When this condition is true, the error code represents an internal SDK error - please inform mod.io of the error code value." },
				{ "InvalidArgsError.Name", "EModioErrorCondition::InvalidArgsError" },
				{ "InvalidArgsError.ToolTip", "When this condition is true, the error code indicates the arguments passed to the function have failed validation or were otherwise invalid." },
				{ "ModuleRelativePath", "GeneratedHeader/Public/ModioErrorCondition.h" },
				{ "NetworkError.Name", "EModioErrorCondition::NetworkError" },
				{ "NetworkError.ToolTip", "When this condition is true, the error code represents a connection or HTTP error between the client and the mod.io server." },
				{ "NoError.Name", "EModioErrorCondition::NoError" },
				{ "SubmitReportError.Name", "EModioErrorCondition::SubmitReportError" },
				{ "SubmitReportError.ToolTip", "When this condition is true, the error code indicates that a report for the specified content could not be submitted." },
				{ "UserTermsOfUseError.Name", "EModioErrorCondition::UserTermsOfUseError" },
				{ "UserTermsOfUseError.ToolTip", "When this condition is true, the error code indicates that the user has not yet accepted the mod.io Terms of Use." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioErrorCondition",
				"EModioErrorCondition",
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
