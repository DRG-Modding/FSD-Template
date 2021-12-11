// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDAnsel/Public/EUIControlEffectTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUIControlEffectTarget() {}
// Cross Module References
	FSDANSEL_API UEnum* Z_Construct_UEnum_FSDAnsel_EUIControlEffectTarget();
	UPackage* Z_Construct_UPackage__Script_FSDAnsel();
// End Cross Module References
	static UEnum* EUIControlEffectTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FSDAnsel_EUIControlEffectTarget, Z_Construct_UPackage__Script_FSDAnsel(), TEXT("EUIControlEffectTarget"));
		}
		return Singleton;
	}
	template<> FSDANSEL_API UEnum* StaticEnum<EUIControlEffectTarget>()
	{
		return EUIControlEffectTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUIControlEffectTarget(EUIControlEffectTarget_StaticEnum, TEXT("/Script/FSDAnsel"), TEXT("EUIControlEffectTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FSDAnsel_EUIControlEffectTarget_Hash() { return 12002348U; }
	UEnum* Z_Construct_UEnum_FSDAnsel_EUIControlEffectTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FSDAnsel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUIControlEffectTarget"), 0, Get_Z_Construct_UEnum_FSDAnsel_EUIControlEffectTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Bloom", (int64)Bloom },
				{ "DepthOfField", (int64)DepthOfField },
				{ "ChromaticAberration", (int64)ChromaticAberration },
				{ "MotionBlur", (int64)MotionBlur },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bloom.Name", "Bloom" },
				{ "ChromaticAberration.Name", "ChromaticAberration" },
				{ "DepthOfField.Name", "DepthOfField" },
				{ "ModuleRelativePath", "Public/EUIControlEffectTarget.h" },
				{ "MotionBlur.Name", "MotionBlur" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FSDAnsel,
				nullptr,
				"EUIControlEffectTarget",
				"EUIControlEffectTarget",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
