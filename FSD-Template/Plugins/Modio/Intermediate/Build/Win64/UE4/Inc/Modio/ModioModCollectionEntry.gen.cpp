// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModCollectionEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModCollectionEntry() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioModState();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModCollectionEntry();
// End Cross Module References
	static UEnum* EModioModState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioModState, Z_Construct_UPackage__Script_Modio(), TEXT("EModioModState"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioModState>()
	{
		return EModioModState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioModState(EModioModState_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioModState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioModState_Hash() { return 4254924664U; }
	UEnum* Z_Construct_UEnum_Modio_EModioModState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioModState"), 0, Get_Z_Construct_UEnum_Modio_EModioModState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioModState::InstallationPending", (int64)EModioModState::InstallationPending },
				{ "EModioModState::Installed", (int64)EModioModState::Installed },
				{ "EModioModState::UpdatePending", (int64)EModioModState::UpdatePending },
				{ "EModioModState::Downloading", (int64)EModioModState::Downloading },
				{ "EModioModState::Extracting", (int64)EModioModState::Extracting },
				{ "EModioModState::UninstallPending", (int64)EModioModState::UninstallPending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Enum representing the current state of a mod\n" },
				{ "Downloading.Comment", "// saved as installed\n" },
				{ "Downloading.Name", "EModioModState::Downloading" },
				{ "Downloading.ToolTip", "saved as installed" },
				{ "Extracting.Comment", "// installing - dont save\n" },
				{ "Extracting.Name", "EModioModState::Extracting" },
				{ "Extracting.ToolTip", "installing - dont save" },
				{ "InstallationPending.Name", "EModioModState::InstallationPending" },
				{ "Installed.Comment", "// dont save\n" },
				{ "Installed.Name", "EModioModState::Installed" },
				{ "Installed.ToolTip", "dont save" },
				{ "ModuleRelativePath", "Public/Types/ModioModCollectionEntry.h" },
				{ "ToolTip", "@brief Enum representing the current state of a mod" },
				{ "UninstallPending.Comment", "// installing- don't save\n" },
				{ "UninstallPending.Name", "EModioModState::UninstallPending" },
				{ "UninstallPending.ToolTip", "installing- don't save" },
				{ "UpdatePending.Name", "EModioModState::UpdatePending" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioModState",
				"EModioModState",
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
class UScriptStruct* FModioModCollectionEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModCollectionEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModCollectionEntry, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModCollectionEntry"), sizeof(FModioModCollectionEntry), Get_Z_Construct_UScriptStruct_FModioModCollectionEntry_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModCollectionEntry>()
{
	return FModioModCollectionEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModCollectionEntry(FModioModCollectionEntry::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModCollectionEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModCollectionEntry
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModCollectionEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModCollectionEntry")),new UScriptStruct::TCppStructOps<FModioModCollectionEntry>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModCollectionEntry;
	struct Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Class representing a mod which is installed locally */" },
		{ "ModuleRelativePath", "Public/Types/ModioModCollectionEntry.h" },
		{ "ToolTip", "@brief Class representing a mod which is installed locally" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModCollectionEntry>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModCollectionEntry",
		sizeof(FModioModCollectionEntry),
		alignof(FModioModCollectionEntry),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModCollectionEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModCollectionEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModCollectionEntry"), sizeof(FModioModCollectionEntry), Get_Z_Construct_UScriptStruct_FModioModCollectionEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModCollectionEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModCollectionEntry_Hash() { return 3131990373U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
