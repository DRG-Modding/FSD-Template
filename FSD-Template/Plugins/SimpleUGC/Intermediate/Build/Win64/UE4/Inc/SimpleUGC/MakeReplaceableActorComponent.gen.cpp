// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/MakeReplaceableActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMakeReplaceableActorComponent() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UMakeReplaceableActorComponent_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UMakeReplaceableActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMakeReplaceableActorComponent::StaticRegisterNativesUMakeReplaceableActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UMakeReplaceableActorComponent_NoRegister()
	{
		return UMakeReplaceableActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMakeReplaceableActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleReplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CompatibleReplacement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MakeReplaceableActorComponent.h" },
		{ "ModuleRelativePath", "Public/MakeReplaceableActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement_MetaData[] = {
		{ "Category", "MakeReplaceableActorComponent" },
		{ "ModuleRelativePath", "Public/MakeReplaceableActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement = { "CompatibleReplacement", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMakeReplaceableActorComponent, CompatibleReplacement), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::NewProp_CompatibleReplacement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMakeReplaceableActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::ClassParams = {
		&UMakeReplaceableActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMakeReplaceableActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMakeReplaceableActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMakeReplaceableActorComponent, 3307717177);
	template<> SIMPLEUGC_API UClass* StaticClass<UMakeReplaceableActorComponent>()
	{
		return UMakeReplaceableActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMakeReplaceableActorComponent(Z_Construct_UClass_UMakeReplaceableActorComponent, &UMakeReplaceableActorComponent::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UMakeReplaceableActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMakeReplaceableActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
