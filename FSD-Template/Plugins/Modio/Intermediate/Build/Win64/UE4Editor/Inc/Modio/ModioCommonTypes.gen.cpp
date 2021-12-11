// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioCommonTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioCommonTypes() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLanguage();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLogLevel();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioGallerySize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioAvatarSize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLogoSize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioPortal();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioEnvironment();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAuthCode();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAddress();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioApiKey();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioUserID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFileMetadataID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioGameID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
// End Cross Module References
	static UEnum* EModioLanguage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioLanguage, Z_Construct_UPackage__Script_Modio(), TEXT("EModioLanguage"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioLanguage>()
	{
		return EModioLanguage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioLanguage(EModioLanguage_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioLanguage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioLanguage_Hash() { return 3139170214U; }
	UEnum* Z_Construct_UEnum_Modio_EModioLanguage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioLanguage"), 0, Get_Z_Construct_UEnum_Modio_EModioLanguage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioLanguage::English", (int64)EModioLanguage::English },
				{ "EModioLanguage::Bulgarian", (int64)EModioLanguage::Bulgarian },
				{ "EModioLanguage::French", (int64)EModioLanguage::French },
				{ "EModioLanguage::German", (int64)EModioLanguage::German },
				{ "EModioLanguage::Italian", (int64)EModioLanguage::Italian },
				{ "EModioLanguage::Polish", (int64)EModioLanguage::Polish },
				{ "EModioLanguage::Portuguese", (int64)EModioLanguage::Portuguese },
				{ "EModioLanguage::Hungarian", (int64)EModioLanguage::Hungarian },
				{ "EModioLanguage::Japanese", (int64)EModioLanguage::Japanese },
				{ "EModioLanguage::Korean", (int64)EModioLanguage::Korean },
				{ "EModioLanguage::Russian", (int64)EModioLanguage::Russian },
				{ "EModioLanguage::Spanish", (int64)EModioLanguage::Spanish },
				{ "EModioLanguage::Thai", (int64)EModioLanguage::Thai },
				{ "EModioLanguage::ChineseSimplified", (int64)EModioLanguage::ChineseSimplified },
				{ "EModioLanguage::ChineseTraditional", (int64)EModioLanguage::ChineseTraditional },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bulgarian.Name", "EModioLanguage::Bulgarian" },
				{ "ChineseSimplified.Name", "EModioLanguage::ChineseSimplified" },
				{ "ChineseTraditional.Name", "EModioLanguage::ChineseTraditional" },
				{ "Comment", "/** @brief Enum representing the languages mod.io support responses in */" },
				{ "English.Name", "EModioLanguage::English" },
				{ "French.Name", "EModioLanguage::French" },
				{ "German.Name", "EModioLanguage::German" },
				{ "Hungarian.Name", "EModioLanguage::Hungarian" },
				{ "Italian.Name", "EModioLanguage::Italian" },
				{ "Japanese.Name", "EModioLanguage::Japanese" },
				{ "Korean.Name", "EModioLanguage::Korean" },
				{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
				{ "Polish.Name", "EModioLanguage::Polish" },
				{ "Portuguese.Name", "EModioLanguage::Portuguese" },
				{ "Russian.Name", "EModioLanguage::Russian" },
				{ "Spanish.Name", "EModioLanguage::Spanish" },
				{ "Thai.Name", "EModioLanguage::Thai" },
				{ "ToolTip", "@brief Enum representing the languages mod.io support responses in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioLanguage",
				"EModioLanguage",
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
	static UEnum* EModioLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioLogLevel, Z_Construct_UPackage__Script_Modio(), TEXT("EModioLogLevel"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioLogLevel>()
	{
		return EModioLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioLogLevel(EModioLogLevel_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioLogLevel_Hash() { return 2276034061U; }
	UEnum* Z_Construct_UEnum_Modio_EModioLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioLogLevel"), 0, Get_Z_Construct_UEnum_Modio_EModioLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioLogLevel::Trace", (int64)EModioLogLevel::Trace },
				{ "EModioLogLevel::Info", (int64)EModioLogLevel::Info },
				{ "EModioLogLevel::Warning", (int64)EModioLogLevel::Warning },
				{ "EModioLogLevel::Error", (int64)EModioLogLevel::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Degree of severity for the log output */" },
				{ "Error.Comment", "// Only errors\n" },
				{ "Error.Name", "EModioLogLevel::Error" },
				{ "Error.ToolTip", "Only errors" },
				{ "Info.Comment", "// Informational output containing status messages\n" },
				{ "Info.Name", "EModioLogLevel::Info" },
				{ "Info.ToolTip", "Informational output containing status messages" },
				{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
				{ "ToolTip", "@brief Degree of severity for the log output" },
				{ "Trace.Comment", "// Detailed low-level debugging output. Not intended for general use\n" },
				{ "Trace.Name", "EModioLogLevel::Trace" },
				{ "Trace.ToolTip", "Detailed low-level debugging output. Not intended for general use" },
				{ "Warning.Comment", "// Warnings about incorrect plugin usage, timeouts\n" },
				{ "Warning.Name", "EModioLogLevel::Warning" },
				{ "Warning.ToolTip", "Warnings about incorrect plugin usage, timeouts" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioLogLevel",
				"EModioLogLevel",
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
	static UEnum* EModioGallerySize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioGallerySize, Z_Construct_UPackage__Script_Modio(), TEXT("EModioGallerySize"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioGallerySize>()
	{
		return EModioGallerySize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioGallerySize(EModioGallerySize_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioGallerySize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioGallerySize_Hash() { return 2397730585U; }
	UEnum* Z_Construct_UEnum_Modio_EModioGallerySize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioGallerySize"), 0, Get_Z_Construct_UEnum_Modio_EModioGallerySize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioGallerySize::Original", (int64)EModioGallerySize::Original },
				{ "EModioGallerySize::Thumb320", (int64)EModioGallerySize::Thumb320 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** */" },
				{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
				{ "Original.Comment", "/** */// Original Size\n" },
				{ "Original.Name", "EModioGallerySize::Original" },
				{ "Original.ToolTip", "// Original Size" },
				{ "Thumb320.Comment", "// 320x180px Thumbnail\n" },
				{ "Thumb320.Name", "EModioGallerySize::Thumb320" },
				{ "Thumb320.ToolTip", "320x180px Thumbnail" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioGallerySize",
				"EModioGallerySize",
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
	static UEnum* EModioAvatarSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioAvatarSize, Z_Construct_UPackage__Script_Modio(), TEXT("EModioAvatarSize"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioAvatarSize>()
	{
		return EModioAvatarSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioAvatarSize(EModioAvatarSize_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioAvatarSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioAvatarSize_Hash() { return 2616774315U; }
	UEnum* Z_Construct_UEnum_Modio_EModioAvatarSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioAvatarSize"), 0, Get_Z_Construct_UEnum_Modio_EModioAvatarSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioAvatarSize::Original", (int64)EModioAvatarSize::Original },
				{ "EModioAvatarSize::Thumb50", (int64)EModioAvatarSize::Thumb50 },
				{ "EModioAvatarSize::Thumb100", (int64)EModioAvatarSize::Thumb100 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Enum representing avatar image sizes */" },
				{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
				{ "Original.Comment", "// Original Size\n" },
				{ "Original.Name", "EModioAvatarSize::Original" },
				{ "Original.ToolTip", "Original Size" },
				{ "Thumb100.Comment", "// 100x100px Thumbnail\n" },
				{ "Thumb100.Name", "EModioAvatarSize::Thumb100" },
				{ "Thumb100.ToolTip", "100x100px Thumbnail" },
				{ "Thumb50.Comment", "// 50x50px Thumbnail\n" },
				{ "Thumb50.Name", "EModioAvatarSize::Thumb50" },
				{ "Thumb50.ToolTip", "50x50px Thumbnail" },
				{ "ToolTip", "@brief Enum representing avatar image sizes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioAvatarSize",
				"EModioAvatarSize",
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
	static UEnum* EModioLogoSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioLogoSize, Z_Construct_UPackage__Script_Modio(), TEXT("EModioLogoSize"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioLogoSize>()
	{
		return EModioLogoSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioLogoSize(EModioLogoSize_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioLogoSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioLogoSize_Hash() { return 324971059U; }
	UEnum* Z_Construct_UEnum_Modio_EModioLogoSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioLogoSize"), 0, Get_Z_Construct_UEnum_Modio_EModioLogoSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioLogoSize::Original", (int64)EModioLogoSize::Original },
				{ "EModioLogoSize::Thumb320", (int64)EModioLogoSize::Thumb320 },
				{ "EModioLogoSize::Thumb640", (int64)EModioLogoSize::Thumb640 },
				{ "EModioLogoSize::Thumb1280", (int64)EModioLogoSize::Thumb1280 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Enum representing mod logo sizes */" },
				{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
				{ "Original.Comment", "// Original Size\n" },
				{ "Original.Name", "EModioLogoSize::Original" },
				{ "Original.ToolTip", "Original Size" },
				{ "Thumb1280.Comment", "// 1280x720px\n" },
				{ "Thumb1280.Name", "EModioLogoSize::Thumb1280" },
				{ "Thumb1280.ToolTip", "1280x720px" },
				{ "Thumb320.Comment", "// 320x180px\n" },
				{ "Thumb320.Name", "EModioLogoSize::Thumb320" },
				{ "Thumb320.ToolTip", "320x180px" },
				{ "Thumb640.Comment", "// 640x360px\n" },
				{ "Thumb640.Name", "EModioLogoSize::Thumb640" },
				{ "Thumb640.ToolTip", "640x360px" },
				{ "ToolTip", "@brief Enum representing mod logo sizes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioLogoSize",
				"EModioLogoSize",
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
	static UEnum* EModioPortal_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioPortal, Z_Construct_UPackage__Script_Modio(), TEXT("EModioPortal"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioPortal>()
	{
		return EModioPortal_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioPortal(EModioPortal_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioPortal"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioPortal_Hash() { return 3869263463U; }
	UEnum* Z_Construct_UEnum_Modio_EModioPortal()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioPortal"), 0, Get_Z_Construct_UEnum_Modio_EModioPortal_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioPortal::None", (int64)EModioPortal::None },
				{ "EModioPortal::Apple", (int64)EModioPortal::Apple },
				{ "EModioPortal::EpicGamesStore", (int64)EModioPortal::EpicGamesStore },
				{ "EModioPortal::GOG", (int64)EModioPortal::GOG },
				{ "EModioPortal::Google", (int64)EModioPortal::Google },
				{ "EModioPortal::Itchio", (int64)EModioPortal::Itchio },
				{ "EModioPortal::Nintendo", (int64)EModioPortal::Nintendo },
				{ "EModioPortal::PSN", (int64)EModioPortal::PSN },
				{ "EModioPortal::Steam", (int64)EModioPortal::Steam },
				{ "EModioPortal::XboxLive", (int64)EModioPortal::XboxLive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Apple.Name", "EModioPortal::Apple" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Enum representing the store or service your game is being distributed through */" },
				{ "EpicGamesStore.Name", "EModioPortal::EpicGamesStore" },
				{ "GOG.Name", "EModioPortal::GOG" },
				{ "Google.Name", "EModioPortal::Google" },
				{ "Itchio.Name", "EModioPortal::Itchio" },
				{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
				{ "Nintendo.Name", "EModioPortal::Nintendo" },
				{ "None.Name", "EModioPortal::None" },
				{ "PSN.Name", "EModioPortal::PSN" },
				{ "Steam.Name", "EModioPortal::Steam" },
				{ "ToolTip", "@brief Enum representing the store or service your game is being distributed through" },
				{ "XboxLive.Name", "EModioPortal::XboxLive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioPortal",
				"EModioPortal",
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
	static UEnum* EModioEnvironment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioEnvironment, Z_Construct_UPackage__Script_Modio(), TEXT("EModioEnvironment"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioEnvironment>()
	{
		return EModioEnvironment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioEnvironment(EModioEnvironment_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioEnvironment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioEnvironment_Hash() { return 934070785U; }
	UEnum* Z_Construct_UEnum_Modio_EModioEnvironment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioEnvironment"), 0, Get_Z_Construct_UEnum_Modio_EModioEnvironment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioEnvironment::Test", (int64)EModioEnvironment::Test },
				{ "EModioEnvironment::Live", (int64)EModioEnvironment::Live },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Enum representing what environment your game is deployed in */" },
				{ "Live.Comment", "// Live/Public environment\n" },
				{ "Live.Name", "EModioEnvironment::Live" },
				{ "Live.ToolTip", "Live/Public environment" },
				{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
				{ "Test.Comment", "// Test/Private environment\n" },
				{ "Test.Name", "EModioEnvironment::Test" },
				{ "Test.ToolTip", "Test/Private environment" },
				{ "ToolTip", "@brief Enum representing what environment your game is deployed in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioEnvironment",
				"EModioEnvironment",
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
class UScriptStruct* FModioEmailAuthCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioEmailAuthCode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioEmailAuthCode, Z_Construct_UPackage__Script_Modio(), TEXT("ModioEmailAuthCode"), sizeof(FModioEmailAuthCode), Get_Z_Construct_UScriptStruct_FModioEmailAuthCode_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioEmailAuthCode>()
{
	return FModioEmailAuthCode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioEmailAuthCode(FModioEmailAuthCode::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioEmailAuthCode"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioEmailAuthCode
{
	FScriptStruct_Modio_StaticRegisterNativesFModioEmailAuthCode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioEmailAuthCode")),new UScriptStruct::TCppStructOps<FModioEmailAuthCode>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioEmailAuthCode;
	struct Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Strong type for email auth code */" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
		{ "ToolTip", "@brief Strong type for email auth code" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioEmailAuthCode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioEmailAuthCode",
		sizeof(FModioEmailAuthCode),
		alignof(FModioEmailAuthCode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAuthCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioEmailAuthCode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioEmailAuthCode"), sizeof(FModioEmailAuthCode), Get_Z_Construct_UScriptStruct_FModioEmailAuthCode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioEmailAuthCode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioEmailAuthCode_Hash() { return 193809144U; }
class UScriptStruct* FModioEmailAddress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioEmailAddress_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioEmailAddress, Z_Construct_UPackage__Script_Modio(), TEXT("ModioEmailAddress"), sizeof(FModioEmailAddress), Get_Z_Construct_UScriptStruct_FModioEmailAddress_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioEmailAddress>()
{
	return FModioEmailAddress::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioEmailAddress(FModioEmailAddress::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioEmailAddress"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioEmailAddress
{
	FScriptStruct_Modio_StaticRegisterNativesFModioEmailAddress()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioEmailAddress")),new UScriptStruct::TCppStructOps<FModioEmailAddress>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioEmailAddress;
	struct Z_Construct_UScriptStruct_FModioEmailAddress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioEmailAddress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Strong type for email address */" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
		{ "ToolTip", "@brief Strong type for email address" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioEmailAddress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioEmailAddress>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioEmailAddress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioEmailAddress",
		sizeof(FModioEmailAddress),
		alignof(FModioEmailAddress),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioEmailAddress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioEmailAddress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioEmailAddress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioEmailAddress_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioEmailAddress"), sizeof(FModioEmailAddress), Get_Z_Construct_UScriptStruct_FModioEmailAddress_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioEmailAddress_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioEmailAddress_Hash() { return 1039048705U; }
class UScriptStruct* FModioApiKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioApiKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioApiKey, Z_Construct_UPackage__Script_Modio(), TEXT("ModioApiKey"), sizeof(FModioApiKey), Get_Z_Construct_UScriptStruct_FModioApiKey_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioApiKey>()
{
	return FModioApiKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioApiKey(FModioApiKey::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioApiKey"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioApiKey
{
	FScriptStruct_Modio_StaticRegisterNativesFModioApiKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioApiKey")),new UScriptStruct::TCppStructOps<FModioApiKey>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioApiKey;
	struct Z_Construct_UScriptStruct_FModioApiKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioApiKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Strong type for Api Keys */" },
		{ "HasNativeMake", "Modio.ModioCommonTypesLibrary.MakeApiKey" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
		{ "ToolTip", "@brief Strong type for Api Keys" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioApiKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioApiKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioApiKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioApiKey",
		sizeof(FModioApiKey),
		alignof(FModioApiKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioApiKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioApiKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioApiKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioApiKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioApiKey"), sizeof(FModioApiKey), Get_Z_Construct_UScriptStruct_FModioApiKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioApiKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioApiKey_Hash() { return 852449325U; }
class UScriptStruct* FModioUserID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioUserID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioUserID, Z_Construct_UPackage__Script_Modio(), TEXT("ModioUserID"), sizeof(FModioUserID), Get_Z_Construct_UScriptStruct_FModioUserID_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioUserID>()
{
	return FModioUserID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioUserID(FModioUserID::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioUserID"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioUserID
{
	FScriptStruct_Modio_StaticRegisterNativesFModioUserID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioUserID")),new UScriptStruct::TCppStructOps<FModioUserID>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioUserID;
	struct Z_Construct_UScriptStruct_FModioUserID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioUserID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Strong type for User IDs */" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
		{ "ToolTip", "@brief Strong type for User IDs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioUserID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioUserID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioUserID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioUserID",
		sizeof(FModioUserID),
		alignof(FModioUserID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioUserID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioUserID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioUserID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioUserID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioUserID"), sizeof(FModioUserID), Get_Z_Construct_UScriptStruct_FModioUserID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioUserID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioUserID_Hash() { return 3910247479U; }
class UScriptStruct* FModioFileMetadataID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioFileMetadataID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioFileMetadataID, Z_Construct_UPackage__Script_Modio(), TEXT("ModioFileMetadataID"), sizeof(FModioFileMetadataID), Get_Z_Construct_UScriptStruct_FModioFileMetadataID_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioFileMetadataID>()
{
	return FModioFileMetadataID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioFileMetadataID(FModioFileMetadataID::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioFileMetadataID"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioFileMetadataID
{
	FScriptStruct_Modio_StaticRegisterNativesFModioFileMetadataID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioFileMetadataID")),new UScriptStruct::TCppStructOps<FModioFileMetadataID>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioFileMetadataID;
	struct Z_Construct_UScriptStruct_FModioFileMetadataID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadataID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Strong type for File Metadata IDs */" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
		{ "ToolTip", "@brief Strong type for File Metadata IDs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioFileMetadataID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioFileMetadataID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioFileMetadataID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioFileMetadataID",
		sizeof(FModioFileMetadataID),
		alignof(FModioFileMetadataID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadataID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadataID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioFileMetadataID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioFileMetadataID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioFileMetadataID"), sizeof(FModioFileMetadataID), Get_Z_Construct_UScriptStruct_FModioFileMetadataID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioFileMetadataID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioFileMetadataID_Hash() { return 2778289059U; }
class UScriptStruct* FModioGameID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioGameID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioGameID, Z_Construct_UPackage__Script_Modio(), TEXT("ModioGameID"), sizeof(FModioGameID), Get_Z_Construct_UScriptStruct_FModioGameID_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioGameID>()
{
	return FModioGameID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioGameID(FModioGameID::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioGameID"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioGameID
{
	FScriptStruct_Modio_StaticRegisterNativesFModioGameID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioGameID")),new UScriptStruct::TCppStructOps<FModioGameID>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioGameID;
	struct Z_Construct_UScriptStruct_FModioGameID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioGameID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Strong type for Game IDs */" },
		{ "HasNativeMake", "Modio.ModioCommonTypesLibrary.MakeGameId" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
		{ "ToolTip", "@brief Strong type for Game IDs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioGameID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioGameID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioGameID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioGameID",
		sizeof(FModioGameID),
		alignof(FModioGameID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioGameID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioGameID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioGameID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioGameID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioGameID"), sizeof(FModioGameID), Get_Z_Construct_UScriptStruct_FModioGameID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioGameID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioGameID_Hash() { return 167649069U; }
class UScriptStruct* FModioOptionalModID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalModID, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalModID"), sizeof(FModioOptionalModID), Get_Z_Construct_UScriptStruct_FModioOptionalModID_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalModID>()
{
	return FModioOptionalModID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalModID(FModioOptionalModID::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalModID"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModID
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalModID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalModID")),new UScriptStruct::TCppStructOps<FModioOptionalModID>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalModID;
	struct Z_Construct_UScriptStruct_FModioOptionalModID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalModID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalModID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalModID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalModID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalModID",
		sizeof(FModioOptionalModID),
		alignof(FModioOptionalModID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalModID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalModID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalModID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalModID"), sizeof(FModioOptionalModID), Get_Z_Construct_UScriptStruct_FModioOptionalModID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalModID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalModID_Hash() { return 1805950280U; }
class UScriptStruct* FModioModID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModID, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModID"), sizeof(FModioModID), Get_Z_Construct_UScriptStruct_FModioModID_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModID>()
{
	return FModioModID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModID(FModioModID::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModID"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModID
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModID")),new UScriptStruct::TCppStructOps<FModioModID>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModID;
	struct Z_Construct_UScriptStruct_FModioModID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Strong type for Mod IDs */" },
		{ "ModuleRelativePath", "Public/Types/ModioCommonTypes.h" },
		{ "ToolTip", "@brief Strong type for Mod IDs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModID",
		sizeof(FModioModID),
		alignof(FModioModID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModID"), sizeof(FModioModID), Get_Z_Construct_UScriptStruct_FModioModID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModID_Hash() { return 1039101061U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
