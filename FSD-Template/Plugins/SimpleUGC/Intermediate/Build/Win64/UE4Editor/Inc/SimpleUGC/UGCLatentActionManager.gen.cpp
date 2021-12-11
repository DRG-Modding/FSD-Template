// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCLatentActionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCLatentActionManager() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCLatentActionManager_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCLatentActionManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	void UUGCLatentActionManager::StaticRegisterNativesUUGCLatentActionManager()
	{
	}
	UClass* Z_Construct_UClass_UUGCLatentActionManager_NoRegister()
	{
		return UUGCLatentActionManager::StaticClass();
	}
	struct Z_Construct_UClass_UUGCLatentActionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCLatentActionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCLatentActionManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UGCLatentActionManager.h" },
		{ "ModuleRelativePath", "Public/UGCLatentActionManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCLatentActionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCLatentActionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGCLatentActionManager_Statics::ClassParams = {
		&UUGCLatentActionManager::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCLatentActionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCLatentActionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCLatentActionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGCLatentActionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGCLatentActionManager, 744309628);
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCLatentActionManager>()
	{
		return UUGCLatentActionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGCLatentActionManager(Z_Construct_UClass_UUGCLatentActionManager, &UUGCLatentActionManager::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UUGCLatentActionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCLatentActionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
