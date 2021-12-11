// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioModManagementEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioModManagementEvent() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioModManagementEventType();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModManagementEvent();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioErrorCode();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModID();
// End Cross Module References
	static UEnum* EModioModManagementEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EModioModManagementEventType, Z_Construct_UPackage__Script_Modio(), TEXT("EModioModManagementEventType"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EModioModManagementEventType>()
	{
		return EModioModManagementEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModioModManagementEventType(EModioModManagementEventType_StaticEnum, TEXT("/Script/Modio"), TEXT("EModioModManagementEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EModioModManagementEventType_Hash() { return 2361532960U; }
	UEnum* Z_Construct_UEnum_Modio_EModioModManagementEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModioModManagementEventType"), 0, Get_Z_Construct_UEnum_Modio_EModioModManagementEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModioModManagementEventType::Installed", (int64)EModioModManagementEventType::Installed },
				{ "EModioModManagementEventType::Uninstalled", (int64)EModioModManagementEventType::Uninstalled },
				{ "EModioModManagementEventType::Updated", (int64)EModioModManagementEventType::Updated },
				{ "EModioModManagementEventType::Uploaded", (int64)EModioModManagementEventType::Uploaded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief What type of event occurred */" },
				{ "Installed.Name", "EModioModManagementEventType::Installed" },
				{ "ModuleRelativePath", "Public/Types/ModioModManagementEvent.h" },
				{ "ToolTip", "@brief What type of event occurred" },
				{ "Uninstalled.Comment", "/** Mod installation to local storage */" },
				{ "Uninstalled.Name", "EModioModManagementEventType::Uninstalled" },
				{ "Uninstalled.ToolTip", "Mod installation to local storage" },
				{ "Updated.Comment", "/** Mod uninstallation from local storage*/" },
				{ "Updated.Name", "EModioModManagementEventType::Updated" },
				{ "Updated.ToolTip", "Mod uninstallation from local storage" },
				{ "Uploaded.Comment", "/** Mod local installation updated to latest version*/" },
				{ "Uploaded.Name", "EModioModManagementEventType::Uploaded" },
				{ "Uploaded.ToolTip", "Mod local installation updated to latest version" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EModioModManagementEventType",
				"EModioModManagementEventType",
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
class UScriptStruct* FModioModManagementEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioModManagementEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioModManagementEvent, Z_Construct_UPackage__Script_Modio(), TEXT("ModioModManagementEvent"), sizeof(FModioModManagementEvent), Get_Z_Construct_UScriptStruct_FModioModManagementEvent_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioModManagementEvent>()
{
	return FModioModManagementEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioModManagementEvent(FModioModManagementEvent::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioModManagementEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioModManagementEvent
{
	FScriptStruct_Modio_StaticRegisterNativesFModioModManagementEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioModManagementEvent")),new UScriptStruct::TCppStructOps<FModioModManagementEvent>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioModManagementEvent;
	struct Z_Construct_UScriptStruct_FModioModManagementEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Simple struct representing the outcome of a mod management operation */" },
		{ "ModuleRelativePath", "Public/Types/ModioModManagementEvent.h" },
		{ "ToolTip", "@brief Simple struct representing the outcome of a mod management operation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioModManagementEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "ModManagementEvent" },
		{ "Comment", "/** @brief Empty if operation completed successfully, truthy/contains error code if operation failed */" },
		{ "ModuleRelativePath", "Public/Types/ModioModManagementEvent.h" },
		{ "ToolTip", "@brief Empty if operation completed successfully, truthy/contains error code if operation failed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModManagementEvent, Status), Z_Construct_UScriptStruct_FModioErrorCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "ModManagementEvent" },
		{ "Comment", "/** @brief What type of event occurred */" },
		{ "ModuleRelativePath", "Public/Types/ModioModManagementEvent.h" },
		{ "ToolTip", "@brief What type of event occurred" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModManagementEvent, Event), Z_Construct_UEnum_Modio_EModioModManagementEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ModManagementEvent" },
		{ "Comment", "/** @brief ID for the mod that the event occurred on */" },
		{ "ModuleRelativePath", "Public/Types/ModioModManagementEvent.h" },
		{ "ToolTip", "@brief ID for the mod that the event occurred on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioModManagementEvent, ID), Z_Construct_UScriptStruct_FModioModID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioModManagementEvent",
		sizeof(FModioModManagementEvent),
		alignof(FModioModManagementEvent),
		Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioModManagementEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioModManagementEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioModManagementEvent"), sizeof(FModioModManagementEvent), Get_Z_Construct_UScriptStruct_FModioModManagementEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioModManagementEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioModManagementEvent_Hash() { return 575172669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
