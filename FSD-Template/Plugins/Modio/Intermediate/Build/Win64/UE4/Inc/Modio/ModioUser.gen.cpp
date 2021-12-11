// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioUser() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalUser();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioUser();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioUserID();
// End Cross Module References
class UScriptStruct* FModioOptionalUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalUser_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalUser, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalUser"), sizeof(FModioOptionalUser), Get_Z_Construct_UScriptStruct_FModioOptionalUser_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalUser>()
{
	return FModioOptionalUser::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalUser(FModioOptionalUser::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalUser"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalUser
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalUser()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalUser")),new UScriptStruct::TCppStructOps<FModioOptionalUser>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalUser;
	struct Z_Construct_UScriptStruct_FModioOptionalUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalUser>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalUser",
		sizeof(FModioOptionalUser),
		alignof(FModioOptionalUser),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalUser_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalUser"), sizeof(FModioOptionalUser), Get_Z_Construct_UScriptStruct_FModioOptionalUser_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalUser_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalUser_Hash() { return 2045304602U; }
class UScriptStruct* FModioUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioUser_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioUser, Z_Construct_UPackage__Script_Modio(), TEXT("ModioUser"), sizeof(FModioUser), Get_Z_Construct_UScriptStruct_FModioUser_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioUser>()
{
	return FModioUser::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioUser(FModioUser::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioUser"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioUser
{
	FScriptStruct_Modio_StaticRegisterNativesFModioUser()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioUser")),new UScriptStruct::TCppStructOps<FModioUser>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioUser;
	struct Z_Construct_UScriptStruct_FModioUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief Object representing a mod.io user profile **/" },
		{ "ModuleRelativePath", "Public/Types/ModioUser.h" },
		{ "ToolTip", "@brief Object representing a mod.io user profile *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioUser>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_ProfileUrl_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** @brief URL of the user's mod.io profile */" },
		{ "ModuleRelativePath", "Public/Types/ModioUser.h" },
		{ "ToolTip", "@brief URL of the user's mod.io profile" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_ProfileUrl = { "ProfileUrl", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioUser, ProfileUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_ProfileUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_ProfileUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_DateOnline_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** @brief Unix timestamp the user was last online */" },
		{ "ModuleRelativePath", "Public/Types/ModioUser.h" },
		{ "ToolTip", "@brief Unix timestamp the user was last online" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_DateOnline = { "DateOnline", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioUser, DateOnline), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_DateOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_DateOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** @brief Username of the user */" },
		{ "ModuleRelativePath", "Public/Types/ModioUser.h" },
		{ "ToolTip", "@brief Username of the user" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioUser, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** @brief Unique id for the user */" },
		{ "ModuleRelativePath", "Public/Types/ModioUser.h" },
		{ "ToolTip", "@brief Unique id for the user" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioUser, UserId), Z_Construct_UScriptStruct_FModioUserID, METADATA_PARAMS(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_ProfileUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_DateOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioUser_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioUser",
		sizeof(FModioUser),
		alignof(FModioUser),
		Z_Construct_UScriptStruct_FModioUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioUser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioUser_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioUser"), sizeof(FModioUser), Get_Z_Construct_UScriptStruct_FModioUser_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioUser_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioUser_Hash() { return 1079978828U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
