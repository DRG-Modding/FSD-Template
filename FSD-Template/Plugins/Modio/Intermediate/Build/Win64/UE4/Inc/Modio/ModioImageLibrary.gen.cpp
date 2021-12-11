// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioImageLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioImageLibrary() {}
// Cross Module References
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Modio();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioImageLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioImageLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioAvatarSize();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioGallerySize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLogoSize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioImageState();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioImage();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics
	{
		struct _Script_Modio_eventOnLoadImageDelegate_Parms
		{
			UTexture2DDynamic* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Modio_eventOnLoadImageDelegate_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Modio, nullptr, "OnLoadImageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Modio_eventOnLoadImageDelegate_Parms), Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UModioImageLibrary::execGetGallerySize)
	{
		P_GET_OBJECT(UTexture,Z_Param_GalleryImage);
		P_GET_ENUM(EModioGallerySize,Z_Param_GallerySize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UModioImageLibrary::GetGallerySize(Z_Param_GalleryImage,EModioGallerySize(Z_Param_GallerySize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioImageLibrary::execGetAvatarSize)
	{
		P_GET_OBJECT(UTexture,Z_Param_Avatar);
		P_GET_ENUM(EModioAvatarSize,Z_Param_AvatarSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UModioImageLibrary::GetAvatarSize(Z_Param_Avatar,EModioAvatarSize(Z_Param_AvatarSize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioImageLibrary::execGetLogoSize)
	{
		P_GET_OBJECT(UTexture,Z_Param_Logo);
		P_GET_ENUM(EModioLogoSize,Z_Param_LogoSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UModioImageLibrary::GetLogoSize(Z_Param_Logo,EModioLogoSize(Z_Param_LogoSize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioImageLibrary::execGetState)
	{
		P_GET_STRUCT_REF(FModioImage,Z_Param_Out_Image);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EModioImageState*)Z_Param__Result=UModioImageLibrary::GetState(Z_Param_Out_Image);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioImageLibrary::execLoadAsync)
	{
		P_GET_STRUCT_REF(FModioImage,Z_Param_Out_Image);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnImageLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UModioImageLibrary::LoadAsync(Z_Param_Out_Image,FOnLoadImageDelegate(Z_Param_OnImageLoaded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioImageLibrary::execGetTexture)
	{
		P_GET_STRUCT_REF(FModioImage,Z_Param_Out_Image);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2DDynamic**)Z_Param__Result=UModioImageLibrary::GetTexture(Z_Param_Out_Image);
		P_NATIVE_END;
	}
	void UModioImageLibrary::StaticRegisterNativesUModioImageLibrary()
	{
		UClass* Class = UModioImageLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatarSize", &UModioImageLibrary::execGetAvatarSize },
			{ "GetGallerySize", &UModioImageLibrary::execGetGallerySize },
			{ "GetLogoSize", &UModioImageLibrary::execGetLogoSize },
			{ "GetState", &UModioImageLibrary::execGetState },
			{ "GetTexture", &UModioImageLibrary::execGetTexture },
			{ "LoadAsync", &UModioImageLibrary::execLoadAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics
	{
		struct ModioImageLibrary_eventGetAvatarSize_Parms
		{
			UTexture* Avatar;
			EModioAvatarSize AvatarSize;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvatarSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvatarSize_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetAvatarSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_AvatarSize = { "AvatarSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetAvatarSize_Parms, AvatarSize), Z_Construct_UEnum_Modio_EModioAvatarSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_AvatarSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetAvatarSize_Parms, Avatar), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_AvatarSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_AvatarSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::NewProp_Avatar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Image" },
		{ "Comment", "/**\n\x09 * If a avatar size is EModioAvatarSize::Original, then the size of the Logo returned,\n\x09 * else, the thumbnail size a avatar is returned\n\x09 * @param Avatar If null and EModioAvatarSize::Original is passed, then (0, 0) is returned\n\x09 * @param AvatarSize The size of the avatar we want to return\n\x09 *\n\x09 * @return Dimensions of the avatar if displayed in a 1:1 pixel ratio\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
		{ "ToolTip", "If a avatar size is EModioAvatarSize::Original, then the size of the Logo returned,\nelse, the thumbnail size a avatar is returned\n@param Avatar If null and EModioAvatarSize::Original is passed, then (0, 0) is returned\n@param AvatarSize The size of the avatar we want to return\n\n@return Dimensions of the avatar if displayed in a 1:1 pixel ratio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioImageLibrary, nullptr, "GetAvatarSize", nullptr, nullptr, sizeof(ModioImageLibrary_eventGetAvatarSize_Parms), Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics
	{
		struct ModioImageLibrary_eventGetGallerySize_Parms
		{
			UTexture* GalleryImage;
			EModioGallerySize GallerySize;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GallerySize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GallerySize_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GalleryImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetGallerySize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_GallerySize = { "GallerySize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetGallerySize_Parms, GallerySize), Z_Construct_UEnum_Modio_EModioGallerySize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_GallerySize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_GalleryImage = { "GalleryImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetGallerySize_Parms, GalleryImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_GallerySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_GallerySize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::NewProp_GalleryImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Image" },
		{ "Comment", "/**\n\x09 * If a gallery image size is EModioGallerySize::Original, then the size of the gallery image returned,\n\x09 * else, the thumbnail size a gallery image is returned\n\x09 * @param GalleryImage If null and EModioGallerySize::Original is passed, then (0, 0) is returned\n\x09 * @param GallerySize The size of the gallery image we want to return\n\x09 *\n\x09 * @return Dimensions of the gallery image if displayed in a 1:1 pixel ratio\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
		{ "ToolTip", "If a gallery image size is EModioGallerySize::Original, then the size of the gallery image returned,\nelse, the thumbnail size a gallery image is returned\n@param GalleryImage If null and EModioGallerySize::Original is passed, then (0, 0) is returned\n@param GallerySize The size of the gallery image we want to return\n\n@return Dimensions of the gallery image if displayed in a 1:1 pixel ratio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioImageLibrary, nullptr, "GetGallerySize", nullptr, nullptr, sizeof(ModioImageLibrary_eventGetGallerySize_Parms), Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioImageLibrary_GetGallerySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioImageLibrary_GetGallerySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics
	{
		struct ModioImageLibrary_eventGetLogoSize_Parms
		{
			UTexture* Logo;
			EModioLogoSize LogoSize;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogoSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogoSize_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Logo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetLogoSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_LogoSize = { "LogoSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetLogoSize_Parms, LogoSize), Z_Construct_UEnum_Modio_EModioLogoSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_LogoSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_Logo = { "Logo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetLogoSize_Parms, Logo), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_LogoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_LogoSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::NewProp_Logo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Image" },
		{ "Comment", "/**\n\x09 * If a logo size is EModioLogoSize::Original, then the size of the Logo returned,\n\x09 * else, the thumbnail size a logo is returned\n\x09 * @param Logo If null and EModioLogoSize::Original is passed, then (0, 0) is returned\n\x09 * @param LogoSize The size of the logo we want to return\n\x09 *\n\x09 * @return Dimensions of the logo if displayed in a 1:1 pixel ratio\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
		{ "ToolTip", "If a logo size is EModioLogoSize::Original, then the size of the Logo returned,\nelse, the thumbnail size a logo is returned\n@param Logo If null and EModioLogoSize::Original is passed, then (0, 0) is returned\n@param LogoSize The size of the logo we want to return\n\n@return Dimensions of the logo if displayed in a 1:1 pixel ratio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioImageLibrary, nullptr, "GetLogoSize", nullptr, nullptr, sizeof(ModioImageLibrary_eventGetLogoSize_Parms), Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioImageLibrary_GetLogoSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioImageLibrary_GetLogoSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioImageLibrary_GetState_Statics
	{
		struct ModioImageLibrary_eventGetState_Parms
		{
			FModioImage Image;
			EModioImageState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_Modio_EModioImageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetState_Parms, Image), Z_Construct_UScriptStruct_FModioImage, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Image" },
		{ "Comment", "/** Get the current state of the image */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
		{ "ToolTip", "Get the current state of the image" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioImageLibrary, nullptr, "GetState", nullptr, nullptr, sizeof(ModioImageLibrary_eventGetState_Parms), Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioImageLibrary_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioImageLibrary_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics
	{
		struct ModioImageLibrary_eventGetTexture_Parms
		{
			FModioImage Image;
			UTexture2DDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventGetTexture_Parms, Image), Z_Construct_UScriptStruct_FModioImage, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Image" },
		{ "Comment", "/** Get the texture if if has been loaded by any FModioImage instance */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
		{ "ToolTip", "Get the texture if if has been loaded by any FModioImage instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioImageLibrary, nullptr, "GetTexture", nullptr, nullptr, sizeof(ModioImageLibrary_eventGetTexture_Parms), Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioImageLibrary_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioImageLibrary_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics
	{
		struct ModioImageLibrary_eventLoadAsync_Parms
		{
			FModioImage Image;
			FScriptDelegate OnImageLoaded;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnImageLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::NewProp_OnImageLoaded = { "OnImageLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventLoadAsync_Parms, OnImageLoaded), Z_Construct_UDelegateFunction_Modio_OnLoadImageDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioImageLibrary_eventLoadAsync_Parms, Image), Z_Construct_UScriptStruct_FModioImage, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::NewProp_OnImageLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Image" },
		{ "Comment", "/** Load the texture into memory async, if it's already in memory, then we will return immediately */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
		{ "ToolTip", "Load the texture into memory async, if it's already in memory, then we will return immediately" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioImageLibrary, nullptr, "LoadAsync", nullptr, nullptr, sizeof(ModioImageLibrary_eventLoadAsync_Parms), Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioImageLibrary_LoadAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioImageLibrary_LoadAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioImageLibrary_NoRegister()
	{
		return UModioImageLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioImageLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioImageLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioImageLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioImageLibrary_GetAvatarSize, "GetAvatarSize" }, // 2093570873
		{ &Z_Construct_UFunction_UModioImageLibrary_GetGallerySize, "GetGallerySize" }, // 771896437
		{ &Z_Construct_UFunction_UModioImageLibrary_GetLogoSize, "GetLogoSize" }, // 294690643
		{ &Z_Construct_UFunction_UModioImageLibrary_GetState, "GetState" }, // 2259097951
		{ &Z_Construct_UFunction_UModioImageLibrary_GetTexture, "GetTexture" }, // 3827284014
		{ &Z_Construct_UFunction_UModioImageLibrary_LoadAsync, "LoadAsync" }, // 848215681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioImageLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioImageLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioImageLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioImageLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioImageLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioImageLibrary_Statics::ClassParams = {
		&UModioImageLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioImageLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioImageLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioImageLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioImageLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioImageLibrary, 1268658534);
	template<> MODIO_API UClass* StaticClass<UModioImageLibrary>()
	{
		return UModioImageLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioImageLibrary(Z_Construct_UClass_UModioImageLibrary, &UModioImageLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioImageLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioImageLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
