// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordSDK/Public/DiscordSDKInterface_Win64.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordSDKInterface_Win64() {}
// Cross Module References
	DISCORDSDK_API UClass* Z_Construct_UClass_UDiscordSDKInterface_Win64_NoRegister();
	DISCORDSDK_API UClass* Z_Construct_UClass_UDiscordSDKInterface_Win64();
	DISCORDSDK_API UClass* Z_Construct_UClass_UDiscordSDKInterface();
	UPackage* Z_Construct_UPackage__Script_DiscordSDK();
// End Cross Module References
	void UDiscordSDKInterface_Win64::StaticRegisterNativesUDiscordSDKInterface_Win64()
	{
	}
	UClass* Z_Construct_UClass_UDiscordSDKInterface_Win64_NoRegister()
	{
		return UDiscordSDKInterface_Win64::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordSDKInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DiscordSDKInterface_Win64.h" },
		{ "ModuleRelativePath", "Public/DiscordSDKInterface_Win64.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordSDKInterface_Win64>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics::ClassParams = {
		&UDiscordSDKInterface_Win64::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordSDKInterface_Win64()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordSDKInterface_Win64_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordSDKInterface_Win64, 2011816582);
	template<> DISCORDSDK_API UClass* StaticClass<UDiscordSDKInterface_Win64>()
	{
		return UDiscordSDKInterface_Win64::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordSDKInterface_Win64(Z_Construct_UClass_UDiscordSDKInterface_Win64, &UDiscordSDKInterface_Win64::StaticClass, TEXT("/Script/DiscordSDK"), TEXT("UDiscordSDKInterface_Win64"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordSDKInterface_Win64);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
