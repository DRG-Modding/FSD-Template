// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioFileMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioFileMetadata() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioVirusStatus();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioVirusScanStatus();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFileMetadata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFileMetadataID();
// End Cross Module References
	static UEnum* EModioVirusStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioVirusStatus, Z_Construct_UPackage__Script_Modio(), TEXT("EModioVirusStatus"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioVirusStatus>()
	{
		return EModioVirusStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioVirusStatus(EModioVirusStatus_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioVirusStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioVirusStatus_Hash() { return 1453759757U; }
	UEnum* Z_Construct_UEnum_Modio_EModioVirusStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioVirusStatus"), 0, Get_Z_Construct_UEnum_Modio_EModioVirusStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioVirusStatus::NoThreat", (int64)EModioVirusStatus::NoThreat },
				{ "EModioVirusStatus::Malicious", (int64)EModioVirusStatus::Malicious },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief If the file has been found to be malicious or not */" },
				{ "Malicious.Name", "EModioVirusStatus::Malicious" },
				{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
				{ "NoThreat.Name", "EModioVirusStatus::NoThreat" },
				{ "ToolTip", "@brief If the file has been found to be malicious or not" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioVirusStatus",
				"EModioVirusStatus",
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
	static UEnum* EModioVirusScanStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioVirusScanStatus, Z_Construct_UPackage__Script_Modio(), TEXT("EModioVirusScanStatus"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioVirusScanStatus>()
	{
		return EModioVirusScanStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioVirusScanStatus(EModioVirusScanStatus_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioVirusScanStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioVirusScanStatus_Hash() { return 821429647U; }
	UEnum* Z_Construct_UEnum_Modio_EModioVirusScanStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioVirusScanStatus"), 0, Get_Z_Construct_UEnum_Modio_EModioVirusScanStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioVirusScanStatus::NotScanned", (int64)EModioVirusScanStatus::NotScanned },
				{ "EModioVirusScanStatus::ScanComplete", (int64)EModioVirusScanStatus::ScanComplete },
				{ "EModioVirusScanStatus::InProgress", (int64)EModioVirusScanStatus::InProgress },
				{ "EModioVirusScanStatus::TooLargeToScan", (int64)EModioVirusScanStatus::TooLargeToScan },
				{ "EModioVirusScanStatus::FileNotFound", (int64)EModioVirusScanStatus::FileNotFound },
				{ "EModioVirusScanStatus::ErrorScanning", (int64)EModioVirusScanStatus::ErrorScanning },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Current state of the scanned file */" },
				{ "ErrorScanning.Name", "EModioVirusScanStatus::ErrorScanning" },
				{ "FileNotFound.Name", "EModioVirusScanStatus::FileNotFound" },
				{ "InProgress.Name", "EModioVirusScanStatus::InProgress" },
				{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
				{ "NotScanned.Name", "EModioVirusScanStatus::NotScanned" },
				{ "ScanComplete.Name", "EModioVirusScanStatus::ScanComplete" },
				{ "TooLargeToScan.Name", "EModioVirusScanStatus::TooLargeToScan" },
				{ "ToolTip", "@brief Current state of the scanned file" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioVirusScanStatus",
				"EModioVirusScanStatus",
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
class UScriptStruct* FModioFileMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioFileMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioFileMetadata, Z_Construct_UPackage__Script_Modio(), TEXT("ModioFileMetadata"), sizeof(FModioFileMetadata), Get_Z_Construct_UScriptStruct_FModioFileMetadata_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioFileMetadata>()
{
	return FModioFileMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioFileMetadata(FModioFileMetadata::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioFileMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioFileMetadata
{
	FScriptStruct_Modio_StaticRegisterNativesFModioFileMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioFileMetadata")),new UScriptStruct::TCppStructOps<FModioFileMetadata>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioFileMetadata;
	struct Z_Construct_UScriptStruct_FModioFileMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetadataBlob_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetadataBlob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changelog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Changelog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filesize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Filesize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVirusStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentVirusStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentVirusStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVirusScanStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentVirusScanStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentVirusScanStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetadataId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetadataId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Metadata for a release archive for a mod */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Metadata for a release archive for a mod" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioFileMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataBlob_MetaData[] = {
		{ "Category", "FileMetadata|Metadata" },
		{ "Comment", "/** @brief Metadata stored by the game developer for this file. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Metadata stored by the game developer for this file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataBlob = { "MetadataBlob", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, MetadataBlob), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataBlob_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataBlob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Changelog_MetaData[] = {
		{ "Category", "FileMetadata|Version" },
		{ "Comment", "/** @brief Changelog for the file. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Changelog for the file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Changelog = { "Changelog", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, Changelog), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Changelog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Changelog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "FileMetadata|Version" },
		{ "Comment", "/** @brief Release version this file represents. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Release version this file represents." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "FileMetadata|File" },
		{ "Comment", "/** @brief Filename including extension. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Filename including extension." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filesize_MetaData[] = {
		{ "Category", "FileMetadata|File" },
		{ "Comment", "/** @brief Size of the file in bytes. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Size of the file in bytes." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filesize = { "Filesize", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, Filesize), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filesize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filesize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusStatus_MetaData[] = {
		{ "Category", "FileMetadata|Virus" },
		{ "Comment", "/** @brief Was a virus detected? */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Was a virus detected?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusStatus = { "CurrentVirusStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, CurrentVirusStatus), Z_Construct_UEnum_Modio_EModioVirusStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusScanStatus_MetaData[] = {
		{ "Category", "FileMetadata|Virus" },
		{ "Comment", "/**\n\x09 * @brief Current virus scan status of the file. For newly added files that have yet to be scanned this field\n\x09 * will change frequently until a scan is complete\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Current virus scan status of the file. For newly added files that have yet to be scanned this field\nwill change frequently until a scan is complete" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusScanStatus = { "CurrentVirusScanStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, CurrentVirusScanStatus), Z_Construct_UEnum_Modio_EModioVirusScanStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusScanStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusScanStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusScanStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_DateAdded_MetaData[] = {
		{ "Category", "FileMetadata" },
		{ "Comment", "/** @brief Unix timestamp of date file was added. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Unix timestamp of date file was added." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_DateAdded = { "DateAdded", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, DateAdded), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_DateAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_DateAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_ModId_MetaData[] = {
		{ "Category", "FileMetadata" },
		{ "Comment", "/** @brief Unique mod id. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Unique mod id." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, ModId), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_ModId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_ModId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataId_MetaData[] = {
		{ "Category", "FileMetadata" },
		{ "Comment", "/** @brief Unique modfile id. */" },
		{ "ModuleRelativePath", "Public/Types/ModioFileMetadata.h" },
		{ "ToolTip", "@brief Unique modfile id." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataId = { "MetadataId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioFileMetadata, MetadataId), Z_Construct_UScriptStruct_FModioFileMetadataID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioFileMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataBlob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Changelog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_Filesize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusScanStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_CurrentVirusScanStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_DateAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_ModId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioFileMetadata_Statics::NewProp_MetadataId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioFileMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioFileMetadata",
		sizeof(FModioFileMetadata),
		alignof(FModioFileMetadata),
		Z_Construct_UScriptStruct_FModioFileMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioFileMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioFileMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioFileMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioFileMetadata"), sizeof(FModioFileMetadata), Get_Z_Construct_UScriptStruct_FModioFileMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioFileMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioFileMetadata_Hash() { return 774563778U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
