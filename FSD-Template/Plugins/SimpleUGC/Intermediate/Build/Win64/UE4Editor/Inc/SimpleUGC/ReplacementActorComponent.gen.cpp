// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/ReplacementActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplacementActorComponent() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UReplacementActorComponent_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UReplacementActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UReplacementActorComponent::StaticRegisterNativesUReplacementActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UReplacementActorComponent_NoRegister()
	{
		return UReplacementActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReplacementActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClassesToReplace_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorClassesToReplace;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassesToReplace_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplacementActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReplacementActorComponent.h" },
		{ "ModuleRelativePath", "Public/ReplacementActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_MetaData[] = {
		{ "Category", "ReplacementActorComponent" },
		{ "ModuleRelativePath", "Public/ReplacementActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace = { "ActorClassesToReplace", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplacementActorComponent, ActorClassesToReplace), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_Inner = { "ActorClassesToReplace", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplacementActorComponent_Statics::NewProp_ActorClassesToReplace_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplacementActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplacementActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplacementActorComponent_Statics::ClassParams = {
		&UReplacementActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplacementActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplacementActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplacementActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplacementActorComponent, 145868982);
	template<> SIMPLEUGC_API UClass* StaticClass<UReplacementActorComponent>()
	{
		return UReplacementActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplacementActorComponent(Z_Construct_UClass_UReplacementActorComponent, &UReplacementActorComponent::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UReplacementActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplacementActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
