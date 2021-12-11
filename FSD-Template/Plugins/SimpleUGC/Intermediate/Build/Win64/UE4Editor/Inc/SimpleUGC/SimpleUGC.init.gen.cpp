// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleUGC_init() {}
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature();
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModManagementStateChanged__DelegateSignature();
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModDownloadExtractProgressFinished__DelegateSignature();
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModioUserAuthenticated__DelegateSignature();
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnLocalUserModsInstalled__DelegateSignature();
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnErrorInstalling__DelegateSignature();
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModDownloadExtractProgress__DelegateSignature();
	SIMPLEUGC_API UFunction* Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModUninstallProgressFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCRegistryOnPackageMounted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModManagementStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModDownloadExtractProgressFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModioUserAuthenticated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnLocalUserModsInstalled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnErrorInstalling__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModDownloadExtractProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleUGC_UGCSubsystemOnModUninstallProgressFinished__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleUGC",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x98800387,
				0x92F6E93D,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
