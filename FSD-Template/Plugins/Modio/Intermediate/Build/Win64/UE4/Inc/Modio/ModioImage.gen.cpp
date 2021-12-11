// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Types/ModioImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioImage() {}
// Cross Module References
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalImage();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioImage();
// End Cross Module References
class UScriptStruct* FModioOptionalImage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioOptionalImage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioOptionalImage, Z_Construct_UPackage__Script_Modio(), TEXT("ModioOptionalImage"), sizeof(FModioOptionalImage), Get_Z_Construct_UScriptStruct_FModioOptionalImage_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioOptionalImage>()
{
	return FModioOptionalImage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioOptionalImage(FModioOptionalImage::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioOptionalImage"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioOptionalImage
{
	FScriptStruct_Modio_StaticRegisterNativesFModioOptionalImage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioOptionalImage")),new UScriptStruct::TCppStructOps<FModioOptionalImage>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioOptionalImage;
	struct Z_Construct_UScriptStruct_FModioOptionalImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioOptionalImage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/ModioImage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioOptionalImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioOptionalImage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioOptionalImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioOptionalImage",
		sizeof(FModioOptionalImage),
		alignof(FModioOptionalImage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioOptionalImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioOptionalImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioOptionalImage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioOptionalImage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioOptionalImage"), sizeof(FModioOptionalImage), Get_Z_Construct_UScriptStruct_FModioOptionalImage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioOptionalImage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioOptionalImage_Hash() { return 3622506660U; }
class UScriptStruct* FModioImage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODIO_API uint32 Get_Z_Construct_UScriptStruct_FModioImage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModioImage, Z_Construct_UPackage__Script_Modio(), TEXT("ModioImage"), sizeof(FModioImage), Get_Z_Construct_UScriptStruct_FModioImage_Hash());
	}
	return Singleton;
}
template<> MODIO_API UScriptStruct* StaticStruct<FModioImage>()
{
	return FModioImage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModioImage(FModioImage::StaticStruct, TEXT("/Script/Modio"), TEXT("ModioImage"), false, nullptr, nullptr);
static struct FScriptStruct_Modio_StaticRegisterNativesFModioImage
{
	FScriptStruct_Modio_StaticRegisterNativesFModioImage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModioImage")),new UScriptStruct::TCppStructOps<FModioImage>);
	}
} ScriptStruct_Modio_StaticRegisterNativesFModioImage;
	struct Z_Construct_UScriptStruct_FModioImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioImage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @brief wrapper for images that's returned by the api */" },
		{ "ModuleRelativePath", "Public/Types/ModioImage.h" },
		{ "ToolTip", "@brief wrapper for images that's returned by the api" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModioImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModioImage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModioImage_Statics::NewProp_ImagePath_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The path on disc to the image */" },
		{ "ModuleRelativePath", "Public/Types/ModioImage.h" },
		{ "ToolTip", "The path on disc to the image" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModioImage_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModioImage, ImagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FModioImage_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioImage_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModioImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModioImage_Statics::NewProp_ImagePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModioImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
		nullptr,
		&NewStructOps,
		"ModioImage",
		sizeof(FModioImage),
		alignof(FModioImage),
		Z_Construct_UScriptStruct_FModioImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModioImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModioImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModioImage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModioImage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModioImage"), sizeof(FModioImage), Get_Z_Construct_UScriptStruct_FModioImage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModioImage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModioImage_Hash() { return 992357842U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
