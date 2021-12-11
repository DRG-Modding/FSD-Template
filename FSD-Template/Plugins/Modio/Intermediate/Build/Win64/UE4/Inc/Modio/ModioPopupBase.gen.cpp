// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/UI/ModioPopupBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioPopupBase() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioPopupBase_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioPopupBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Modio();
// End Cross Module References
	void UModioPopupBase::StaticRegisterNativesUModioPopupBase()
	{
	}
	UClass* Z_Construct_UClass_UModioPopupBase_NoRegister()
	{
		return UModioPopupBase::StaticClass();
	}
	struct Z_Construct_UClass_UModioPopupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioPopupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioPopupBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ModioPopupBase.h" },
		{ "ModuleRelativePath", "Public/UI/ModioPopupBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioPopupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioPopupBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioPopupBase_Statics::ClassParams = {
		&UModioPopupBase::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioPopupBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioPopupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioPopupBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioPopupBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioPopupBase, 2215154756);
	template<> MODIO_API UClass* StaticClass<UModioPopupBase>()
	{
		return UModioPopupBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioPopupBase(Z_Construct_UClass_UModioPopupBase, &UModioPopupBase::StaticClass, TEXT("/Script/Modio"), TEXT("UModioPopupBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioPopupBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
