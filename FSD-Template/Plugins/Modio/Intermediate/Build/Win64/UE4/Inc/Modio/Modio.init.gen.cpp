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
void EmptyLinkFunctionForGeneratedCodeModio_init() {}
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioYoutubeURLList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioSketchfabURLList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModInfoList();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioModTagOptions();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Modio()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UScriptStruct_FModioYoutubeURLList,
				(UObject* (*)())Z_Construct_UScriptStruct_FModioSketchfabURLList,
				(UObject* (*)())Z_Construct_UScriptStruct_FModioModInfoList,
				(UObject* (*)())Z_Construct_UScriptStruct_FModioModTagOptions,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnErrorOnlyDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnModManagementDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnGetModInfoDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnGetMediaDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnGetModTagOptionsDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnGetTermsOfUseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnGetModDependenciesDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Modio_OnSubmitNewModDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Modio",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6D671C1F,
				0x6C226B39,
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
