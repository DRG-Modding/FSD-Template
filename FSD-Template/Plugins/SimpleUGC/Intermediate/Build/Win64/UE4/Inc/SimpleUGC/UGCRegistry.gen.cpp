// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCRegistry() {}
// Cross Module References
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCPackage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SIMPLEUGC_API UEnum* Z_Construct_UEnum_SimpleUGC_EPackageSortField();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics
	{
		struct _Script_SimpleUGC_eventUGCRegistryOnPackageMounted_Parms
		{
			bool Sandbox;
		};
		static void NewProp_Sandbox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sandbox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::NewProp_Sandbox_SetBit(void* Obj)
	{
		((_Script_SimpleUGC_eventUGCRegistryOnPackageMounted_Parms*)Obj)->Sandbox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SimpleUGC_eventUGCRegistryOnPackageMounted_Parms), &Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::NewProp_Sandbox_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::NewProp_Sandbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleUGC, nullptr, "UGCRegistryOnPackageMounted__DelegateSignature", nullptr, nullptr, sizeof(_Script_SimpleUGC_eventUGCRegistryOnPackageMounted_Parms), Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUGCRegistry::execApplyAllOverridesInPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyAllOverridesInPackage(Z_Param_Package);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execApplyOverridesForActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyOverridesForActorClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execAreDeprecatedModsInstalled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreDeprecatedModsInstalled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execAreModsInstalled)
	{
		P_GET_ENUM(EUGCApprovalStatus,Z_Param_ApprovalStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreModsInstalled(EUGCApprovalStatus(Z_Param_ApprovalStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execClearOverrideForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOverrideForClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(TSubclassOf<AActor> ,Z_Param_Out_ActorClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorClassesWithReplacementActorComponentsInPackage(Z_Param_Package,Z_Param_Out_ActorClasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetAllClassesInPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_Classes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllClassesInPackage(Z_Param_Package,Z_Param_Out_Classes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetMapsInPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Maps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMapsInPackage(Z_Param_Package,Z_Param_Out_Maps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetOverrideForActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetOverrideForActorClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetPackagesSorted)
	{
		P_GET_ENUM(EPackageSortField,Z_Param_ByField);
		P_GET_UBOOL(Z_Param_Ascending);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUGCPackage*>*)Z_Param__Result=P_THIS->GetPackagesSorted(EPackageSortField(Z_Param_ByField),Z_Param_Ascending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetPackagesWhichDependsOnPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUGCPackage*>*)Z_Param__Result=P_THIS->GetPackagesWhichDependsOnPackage(Z_Param_Package);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execIsModEnabled)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModEnabled(Z_Param_ModId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execIsModInstalled)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModInstalled(Z_Param_ModId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execIsModInstalledByIdOrName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModIdOrName);
		P_GET_UBOOL(Z_Param_IncludeDeprecatedLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModInstalledByIdOrName(Z_Param_ModIdOrName,Z_Param_IncludeDeprecatedLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execIsModInstalledImprecise)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModName);
		P_GET_UBOOL(Z_Param_IncludeDeprecatedLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModInstalledImprecise(Z_Param_ModName,Z_Param_IncludeDeprecatedLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execIsModToBeEnabled)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_ModId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModToBeEnabled(Z_Param_ModId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execMountUGCPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_GET_UBOOL(Z_Param_FromJoining);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MountUGCPackage(Z_Param_Package,Z_Param_FromJoining);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execNumberOfModsInstalled)
	{
		P_GET_ENUM(EUGCApprovalStatus,Z_Param_ApprovalStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumberOfModsInstalled(EUGCApprovalStatus(Z_Param_ApprovalStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execRegisterAssetFromPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterAssetFromPackage(Z_Param_Package);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execRegisterOverrideForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassToOverride);
		P_GET_OBJECT(UClass,Z_Param_OverrideClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterOverrideForClass(Z_Param_ClassToOverride,Z_Param_OverrideClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execResetUGCPackagesManipulatedDuringJoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetUGCPackagesManipulatedDuringJoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execTryGetPackageFromId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUGCPackage**)Z_Param__Result=P_THIS->TryGetPackageFromId(Z_Param_ModId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execUnmountAllNonVerifiedUGCPackages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnmountAllNonVerifiedUGCPackages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execUnmountSandboxUGCPackages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnmountSandboxUGCPackages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execUnmountUGCPackage)
	{
		P_GET_OBJECT(UUGCPackage,Z_Param_Package);
		P_GET_UBOOL(Z_Param_RemoveFromUserSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnmountUGCPackage(Z_Param_Package,Z_Param_RemoveFromUserSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execUnmountUGCPackages)
	{
		P_GET_TARRAY(FString,Z_Param_ExcludingModIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnmountUGCPackages(Z_Param_ExcludingModIds);
		P_NATIVE_END;
	}
	void UUGCRegistry::StaticRegisterNativesUUGCRegistry()
	{
		UClass* Class = UUGCRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAllOverridesInPackage", &UUGCRegistry::execApplyAllOverridesInPackage },
			{ "ApplyOverridesForActorClass", &UUGCRegistry::execApplyOverridesForActorClass },
			{ "AreDeprecatedModsInstalled", &UUGCRegistry::execAreDeprecatedModsInstalled },
			{ "AreModsInstalled", &UUGCRegistry::execAreModsInstalled },
			{ "ClearOverrideForClass", &UUGCRegistry::execClearOverrideForClass },
			{ "GetActorClassesWithReplacementActorComponentsInPackage", &UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage },
			{ "GetAllClassesInPackage", &UUGCRegistry::execGetAllClassesInPackage },
			{ "GetMapsInPackage", &UUGCRegistry::execGetMapsInPackage },
			{ "GetOverrideForActorClass", &UUGCRegistry::execGetOverrideForActorClass },
			{ "GetPackagesSorted", &UUGCRegistry::execGetPackagesSorted },
			{ "GetPackagesWhichDependsOnPackage", &UUGCRegistry::execGetPackagesWhichDependsOnPackage },
			{ "IsModEnabled", &UUGCRegistry::execIsModEnabled },
			{ "IsModInstalled", &UUGCRegistry::execIsModInstalled },
			{ "IsModInstalledByIdOrName", &UUGCRegistry::execIsModInstalledByIdOrName },
			{ "IsModInstalledImprecise", &UUGCRegistry::execIsModInstalledImprecise },
			{ "IsModToBeEnabled", &UUGCRegistry::execIsModToBeEnabled },
			{ "MountUGCPackage", &UUGCRegistry::execMountUGCPackage },
			{ "NumberOfModsInstalled", &UUGCRegistry::execNumberOfModsInstalled },
			{ "RegisterAssetFromPackage", &UUGCRegistry::execRegisterAssetFromPackage },
			{ "RegisterOverrideForClass", &UUGCRegistry::execRegisterOverrideForClass },
			{ "ResetUGCPackagesManipulatedDuringJoin", &UUGCRegistry::execResetUGCPackagesManipulatedDuringJoin },
			{ "TryGetPackageFromId", &UUGCRegistry::execTryGetPackageFromId },
			{ "UnmountAllNonVerifiedUGCPackages", &UUGCRegistry::execUnmountAllNonVerifiedUGCPackages },
			{ "UnmountSandboxUGCPackages", &UUGCRegistry::execUnmountSandboxUGCPackages },
			{ "UnmountUGCPackage", &UUGCRegistry::execUnmountUGCPackage },
			{ "UnmountUGCPackages", &UUGCRegistry::execUnmountUGCPackages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics
	{
		struct UGCRegistry_eventApplyAllOverridesInPackage_Parms
		{
			UUGCPackage* Package;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventApplyAllOverridesInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventApplyAllOverridesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventApplyAllOverridesInPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyAllOverridesInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventApplyAllOverridesInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics
	{
		struct UGCRegistry_eventApplyOverridesForActorClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventApplyOverridesForActorClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventApplyOverridesForActorClass_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventApplyOverridesForActorClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyOverridesForActorClass", nullptr, nullptr, sizeof(UGCRegistry_eventApplyOverridesForActorClass_Parms), Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics
	{
		struct UGCRegistry_eventAreDeprecatedModsInstalled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventAreDeprecatedModsInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventAreDeprecatedModsInstalled_Parms), &Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "AreDeprecatedModsInstalled", nullptr, nullptr, sizeof(UGCRegistry_eventAreDeprecatedModsInstalled_Parms), Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics
	{
		struct UGCRegistry_eventAreModsInstalled_Parms
		{
			EUGCApprovalStatus ApprovalStatus;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ApprovalStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ApprovalStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventAreModsInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventAreModsInstalled_Parms), &Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ApprovalStatus = { "ApprovalStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventAreModsInstalled_Parms, ApprovalStatus), Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ApprovalStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ApprovalStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::NewProp_ApprovalStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "AreModsInstalled", nullptr, nullptr, sizeof(UGCRegistry_eventAreModsInstalled_Parms), Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_AreModsInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_AreModsInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics
	{
		struct UGCRegistry_eventClearOverrideForClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventClearOverrideForClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ClearOverrideForClass", nullptr, nullptr, sizeof(UGCRegistry_eventClearOverrideForClass_Parms), Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics
	{
		struct UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms
		{
			UUGCPackage* Package;
			TArray<TSubclassOf<AActor> > ActorClasses;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClasses_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, ActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetActorClassesWithReplacementActorComponentsInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics
	{
		struct UGCRegistry_eventGetAllClassesInPackage_Parms
		{
			UUGCPackage* Package;
			TArray<UClass*> Classes;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetAllClassesInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventGetAllClassesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetAllClassesInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventGetAllClassesInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics
	{
		struct UGCRegistry_eventGetMapsInPackage_Parms
		{
			UUGCPackage* Package;
			TArray<FName> Maps;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Maps;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Maps_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetMapsInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventGetMapsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetMapsInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventGetMapsInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics
	{
		struct UGCRegistry_eventGetOverrideForActorClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetOverrideForActorClass", nullptr, nullptr, sizeof(UGCRegistry_eventGetOverrideForActorClass_Parms), Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics
	{
		struct UGCRegistry_eventGetPackagesSorted_Parms
		{
			EPackageSortField ByField;
			bool Ascending;
			TArray<UUGCPackage*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_Ascending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ascending;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ByField;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByField_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetPackagesSorted_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_Ascending_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetPackagesSorted_Parms*)Obj)->Ascending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_Ascending = { "Ascending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventGetPackagesSorted_Parms), &Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_Ascending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ByField = { "ByField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetPackagesSorted_Parms, ByField), Z_Construct_UEnum_SimpleUGC_EPackageSortField, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ByField_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_Ascending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ByField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::NewProp_ByField_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetPackagesSorted", nullptr, nullptr, sizeof(UGCRegistry_eventGetPackagesSorted_Parms), Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics
	{
		struct UGCRegistry_eventGetPackagesWhichDependsOnPackage_Parms
		{
			UUGCPackage* Package;
			TArray<UUGCPackage*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetPackagesWhichDependsOnPackage_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetPackagesWhichDependsOnPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetPackagesWhichDependsOnPackage", nullptr, nullptr, sizeof(UGCRegistry_eventGetPackagesWhichDependsOnPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics
	{
		struct UGCRegistry_eventIsModEnabled_Parms
		{
			FString ModId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventIsModEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventIsModEnabled_Parms), &Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ModId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventIsModEnabled_Parms, ModId), METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ModId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ModId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "IsModEnabled", nullptr, nullptr, sizeof(UGCRegistry_eventIsModEnabled_Parms), Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_IsModEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_IsModEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics
	{
		struct UGCRegistry_eventIsModInstalled_Parms
		{
			FString ModId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventIsModInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventIsModInstalled_Parms), &Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ModId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventIsModInstalled_Parms, ModId), METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ModId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ModId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "IsModInstalled", nullptr, nullptr, sizeof(UGCRegistry_eventIsModInstalled_Parms), Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_IsModInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_IsModInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics
	{
		struct UGCRegistry_eventIsModInstalledByIdOrName_Parms
		{
			FString ModIdOrName;
			bool IncludeDeprecatedLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_IncludeDeprecatedLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeDeprecatedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModIdOrName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModIdOrName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventIsModInstalledByIdOrName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventIsModInstalledByIdOrName_Parms), &Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_IncludeDeprecatedLocation_SetBit(void* Obj)
	{
		((UGCRegistry_eventIsModInstalledByIdOrName_Parms*)Obj)->IncludeDeprecatedLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_IncludeDeprecatedLocation = { "IncludeDeprecatedLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventIsModInstalledByIdOrName_Parms), &Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_IncludeDeprecatedLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ModIdOrName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ModIdOrName = { "ModIdOrName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventIsModInstalledByIdOrName_Parms, ModIdOrName), METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ModIdOrName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ModIdOrName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_IncludeDeprecatedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::NewProp_ModIdOrName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "IsModInstalledByIdOrName", nullptr, nullptr, sizeof(UGCRegistry_eventIsModInstalledByIdOrName_Parms), Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics
	{
		struct UGCRegistry_eventIsModInstalledImprecise_Parms
		{
			FString ModName;
			bool IncludeDeprecatedLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_IncludeDeprecatedLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeDeprecatedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventIsModInstalledImprecise_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventIsModInstalledImprecise_Parms), &Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_IncludeDeprecatedLocation_SetBit(void* Obj)
	{
		((UGCRegistry_eventIsModInstalledImprecise_Parms*)Obj)->IncludeDeprecatedLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_IncludeDeprecatedLocation = { "IncludeDeprecatedLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventIsModInstalledImprecise_Parms), &Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_IncludeDeprecatedLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ModName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventIsModInstalledImprecise_Parms, ModName), METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ModName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ModName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_IncludeDeprecatedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::NewProp_ModName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "IsModInstalledImprecise", nullptr, nullptr, sizeof(UGCRegistry_eventIsModInstalledImprecise_Parms), Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics
	{
		struct UGCRegistry_eventIsModToBeEnabled_Parms
		{
			int64 ModId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventIsModToBeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventIsModToBeEnabled_Parms), &Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventIsModToBeEnabled_Parms, ModId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "IsModToBeEnabled", nullptr, nullptr, sizeof(UGCRegistry_eventIsModToBeEnabled_Parms), Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics
	{
		struct UGCRegistry_eventMountUGCPackage_Parms
		{
			UUGCPackage* Package;
			bool FromJoining;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_FromJoining_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromJoining;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventMountUGCPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventMountUGCPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_FromJoining_SetBit(void* Obj)
	{
		((UGCRegistry_eventMountUGCPackage_Parms*)Obj)->FromJoining = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_FromJoining = { "FromJoining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventMountUGCPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_FromJoining_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventMountUGCPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_FromJoining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "MountUGCPackage", nullptr, nullptr, sizeof(UGCRegistry_eventMountUGCPackage_Parms), Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_MountUGCPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_MountUGCPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics
	{
		struct UGCRegistry_eventNumberOfModsInstalled_Parms
		{
			EUGCApprovalStatus ApprovalStatus;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ApprovalStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ApprovalStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventNumberOfModsInstalled_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::NewProp_ApprovalStatus = { "ApprovalStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventNumberOfModsInstalled_Parms, ApprovalStatus), Z_Construct_UEnum_SimpleUGC_EUGCApprovalStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::NewProp_ApprovalStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::NewProp_ApprovalStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::NewProp_ApprovalStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "NumberOfModsInstalled", nullptr, nullptr, sizeof(UGCRegistry_eventNumberOfModsInstalled_Parms), Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics
	{
		struct UGCRegistry_eventRegisterAssetFromPackage_Parms
		{
			UUGCPackage* Package;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventRegisterAssetFromPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "RegisterAssetFromPackage", nullptr, nullptr, sizeof(UGCRegistry_eventRegisterAssetFromPackage_Parms), Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics
	{
		struct UGCRegistry_eventRegisterOverrideForClass_Parms
		{
			TSubclassOf<AActor>  ClassToOverride;
			TSubclassOf<AActor>  OverrideClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OverrideClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass = { "OverrideClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, OverrideClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride = { "ClassToOverride", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, ClassToOverride), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "RegisterOverrideForClass", nullptr, nullptr, sizeof(UGCRegistry_eventRegisterOverrideForClass_Parms), Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ResetUGCPackagesManipulatedDuringJoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics
	{
		struct UGCRegistry_eventTryGetPackageFromId_Parms
		{
			FString ModId;
			UUGCPackage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventTryGetPackageFromId_Parms, ReturnValue), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::NewProp_ModId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventTryGetPackageFromId_Parms, ModId), METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::NewProp_ModId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::NewProp_ModId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::NewProp_ModId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "TryGetPackageFromId", nullptr, nullptr, sizeof(UGCRegistry_eventTryGetPackageFromId_Parms), Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "UnmountAllNonVerifiedUGCPackages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "UnmountSandboxUGCPackages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics
	{
		struct UGCRegistry_eventUnmountUGCPackage_Parms
		{
			UUGCPackage* Package;
			bool RemoveFromUserSettings;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_RemoveFromUserSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveFromUserSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventUnmountUGCPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventUnmountUGCPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_RemoveFromUserSettings_SetBit(void* Obj)
	{
		((UGCRegistry_eventUnmountUGCPackage_Parms*)Obj)->RemoveFromUserSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_RemoveFromUserSettings = { "RemoveFromUserSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventUnmountUGCPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_RemoveFromUserSettings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventUnmountUGCPackage_Parms, Package), Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_RemoveFromUserSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::NewProp_Package,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "UnmountUGCPackage", nullptr, nullptr, sizeof(UGCRegistry_eventUnmountUGCPackage_Parms), Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics
	{
		struct UGCRegistry_eventUnmountUGCPackages_Parms
		{
			TArray<FString> ExcludingModIds;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludingModIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludingModIds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::NewProp_ExcludingModIds = { "ExcludingModIds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventUnmountUGCPackages_Parms, ExcludingModIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::NewProp_ExcludingModIds_Inner = { "ExcludingModIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::NewProp_ExcludingModIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::NewProp_ExcludingModIds_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "UnmountUGCPackages", nullptr, nullptr, sizeof(UGCRegistry_eventUnmountUGCPackages_Parms), Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUGCRegistry_NoRegister()
	{
		return UUGCRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UUGCRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCPackagesUnmountedDuringJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UGCPackagesUnmountedDuringJoin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UGCPackagesUnmountedDuringJoin_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCPackagesInstalledDuringJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UGCPackagesInstalledDuringJoin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UGCPackagesInstalledDuringJoin_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageChange_MetaData[];
#endif
		static void NewProp_PackageChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PackageChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RegisteredOverrides;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCPackages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UGCPackages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UGCPackages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPackageMounted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPackageMounted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGCRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage, "ApplyAllOverridesInPackage" }, // 1797081149
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass, "ApplyOverridesForActorClass" }, // 2219267519
		{ &Z_Construct_UFunction_UUGCRegistry_AreDeprecatedModsInstalled, "AreDeprecatedModsInstalled" }, // 3883829012
		{ &Z_Construct_UFunction_UUGCRegistry_AreModsInstalled, "AreModsInstalled" }, // 2305181557
		{ &Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass, "ClearOverrideForClass" }, // 4127427028
		{ &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage, "GetActorClassesWithReplacementActorComponentsInPackage" }, // 2302346041
		{ &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage, "GetAllClassesInPackage" }, // 956733024
		{ &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage, "GetMapsInPackage" }, // 1284138435
		{ &Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass, "GetOverrideForActorClass" }, // 427769309
		{ &Z_Construct_UFunction_UUGCRegistry_GetPackagesSorted, "GetPackagesSorted" }, // 448526755
		{ &Z_Construct_UFunction_UUGCRegistry_GetPackagesWhichDependsOnPackage, "GetPackagesWhichDependsOnPackage" }, // 2090449660
		{ &Z_Construct_UFunction_UUGCRegistry_IsModEnabled, "IsModEnabled" }, // 1525108291
		{ &Z_Construct_UFunction_UUGCRegistry_IsModInstalled, "IsModInstalled" }, // 3821526624
		{ &Z_Construct_UFunction_UUGCRegistry_IsModInstalledByIdOrName, "IsModInstalledByIdOrName" }, // 1091036108
		{ &Z_Construct_UFunction_UUGCRegistry_IsModInstalledImprecise, "IsModInstalledImprecise" }, // 3646196101
		{ &Z_Construct_UFunction_UUGCRegistry_IsModToBeEnabled, "IsModToBeEnabled" }, // 1758041584
		{ &Z_Construct_UFunction_UUGCRegistry_MountUGCPackage, "MountUGCPackage" }, // 1631445917
		{ &Z_Construct_UFunction_UUGCRegistry_NumberOfModsInstalled, "NumberOfModsInstalled" }, // 758996633
		{ &Z_Construct_UFunction_UUGCRegistry_RegisterAssetFromPackage, "RegisterAssetFromPackage" }, // 4162328943
		{ &Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass, "RegisterOverrideForClass" }, // 2741981363
		{ &Z_Construct_UFunction_UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin, "ResetUGCPackagesManipulatedDuringJoin" }, // 3182243179
		{ &Z_Construct_UFunction_UUGCRegistry_TryGetPackageFromId, "TryGetPackageFromId" }, // 2773283900
		{ &Z_Construct_UFunction_UUGCRegistry_UnmountAllNonVerifiedUGCPackages, "UnmountAllNonVerifiedUGCPackages" }, // 547655513
		{ &Z_Construct_UFunction_UUGCRegistry_UnmountSandboxUGCPackages, "UnmountSandboxUGCPackages" }, // 2849327693
		{ &Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackage, "UnmountUGCPackage" }, // 3124827885
		{ &Z_Construct_UFunction_UUGCRegistry_UnmountUGCPackages, "UnmountUGCPackages" }, // 3385082465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGCRegistry.h" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesUnmountedDuringJoin_MetaData[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesUnmountedDuringJoin = { "UGCPackagesUnmountedDuringJoin", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCRegistry, UGCPackagesUnmountedDuringJoin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesUnmountedDuringJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesUnmountedDuringJoin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesUnmountedDuringJoin_Inner = { "UGCPackagesUnmountedDuringJoin", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesInstalledDuringJoin_MetaData[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesInstalledDuringJoin = { "UGCPackagesInstalledDuringJoin", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCRegistry, UGCPackagesInstalledDuringJoin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesInstalledDuringJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesInstalledDuringJoin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesInstalledDuringJoin_Inner = { "UGCPackagesInstalledDuringJoin", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_PackageChange_MetaData[] = {
		{ "Category", "UGCRegistry" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	void Z_Construct_UClass_UUGCRegistry_Statics::NewProp_PackageChange_SetBit(void* Obj)
	{
		((UUGCRegistry*)Obj)->PackageChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_PackageChange = { "PackageChange", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUGCRegistry), &Z_Construct_UClass_UUGCRegistry_Statics::NewProp_PackageChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_PackageChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_PackageChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData[] = {
		{ "Category", "UGCRegistry" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCRegistry, RegisteredOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp = { "RegisteredOverrides_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData[] = {
		{ "Category", "UGCRegistry" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages = { "UGCPackages", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCRegistry, UGCPackages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner = { "UGCPackages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUGCPackage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_OnPackageMounted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_OnPackageMounted = { "OnPackageMounted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCRegistry, OnPackageMounted), Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_OnPackageMounted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_OnPackageMounted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesUnmountedDuringJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesUnmountedDuringJoin_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesInstalledDuringJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackagesInstalledDuringJoin_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_PackageChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_OnPackageMounted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGCRegistry_Statics::ClassParams = {
		&UUGCRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGCRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGCRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGCRegistry, 3299715352);
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCRegistry>()
	{
		return UUGCRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGCRegistry(Z_Construct_UClass_UUGCRegistry, &UUGCRegistry::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UUGCRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
