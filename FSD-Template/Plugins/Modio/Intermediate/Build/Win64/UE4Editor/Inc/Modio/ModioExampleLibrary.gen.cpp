// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/UI/ModioExampleLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioExampleLibrary() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioExampleLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioExampleLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioAvatarSize();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioLogoSize();
	MODIO_API UFunction* Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioFilterParams();
// End Cross Module References
	DEFINE_FUNCTION(UModioExampleLibrary::execListUserSubscriptionAsync)
	{
		P_GET_STRUCT_REF(FModioFilterParams,Z_Param_Out_FilterParams);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UModioExampleLibrary::ListUserSubscriptionAsync(Z_Param_Out_FilterParams,FOnListAllModsDelegate(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioExampleLibrary::execGetLogoFullSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EModioLogoSize*)Z_Param__Result=UModioExampleLibrary::GetLogoFullSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioExampleLibrary::execGetLogoThumbnailSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EModioLogoSize*)Z_Param__Result=UModioExampleLibrary::GetLogoThumbnailSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioExampleLibrary::execGetAvatarThumbnailSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EModioAvatarSize*)Z_Param__Result=UModioExampleLibrary::GetAvatarThumbnailSize();
		P_NATIVE_END;
	}
	void UModioExampleLibrary::StaticRegisterNativesUModioExampleLibrary()
	{
		UClass* Class = UModioExampleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatarThumbnailSize", &UModioExampleLibrary::execGetAvatarThumbnailSize },
			{ "GetLogoFullSize", &UModioExampleLibrary::execGetLogoFullSize },
			{ "GetLogoThumbnailSize", &UModioExampleLibrary::execGetLogoThumbnailSize },
			{ "ListUserSubscriptionAsync", &UModioExampleLibrary::execListUserSubscriptionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics
	{
		struct ModioExampleLibrary_eventGetAvatarThumbnailSize_Parms
		{
			EModioAvatarSize ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioExampleLibrary_eventGetAvatarThumbnailSize_Parms, ReturnValue), Z_Construct_UEnum_Modio_EModioAvatarSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Example|Project" },
		{ "Comment", "/** Get the project specified avatar thumbnail size */" },
		{ "ModuleRelativePath", "Public/UI/ModioExampleLibrary.h" },
		{ "ToolTip", "Get the project specified avatar thumbnail size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioExampleLibrary, nullptr, "GetAvatarThumbnailSize", nullptr, nullptr, sizeof(ModioExampleLibrary_eventGetAvatarThumbnailSize_Parms), Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics
	{
		struct ModioExampleLibrary_eventGetLogoFullSize_Parms
		{
			EModioLogoSize ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioExampleLibrary_eventGetLogoFullSize_Parms, ReturnValue), Z_Construct_UEnum_Modio_EModioLogoSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Example|Project" },
		{ "Comment", "/** Get the project specified logo full size */" },
		{ "ModuleRelativePath", "Public/UI/ModioExampleLibrary.h" },
		{ "ToolTip", "Get the project specified logo full size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioExampleLibrary, nullptr, "GetLogoFullSize", nullptr, nullptr, sizeof(ModioExampleLibrary_eventGetLogoFullSize_Parms), Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics
	{
		struct ModioExampleLibrary_eventGetLogoThumbnailSize_Parms
		{
			EModioLogoSize ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioExampleLibrary_eventGetLogoThumbnailSize_Parms, ReturnValue), Z_Construct_UEnum_Modio_EModioLogoSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Example|Project" },
		{ "Comment", "/** Get the project specified logo thumbnail size */" },
		{ "ModuleRelativePath", "Public/UI/ModioExampleLibrary.h" },
		{ "ToolTip", "Get the project specified logo thumbnail size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioExampleLibrary, nullptr, "GetLogoThumbnailSize", nullptr, nullptr, sizeof(ModioExampleLibrary_eventGetLogoThumbnailSize_Parms), Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics
	{
		struct ModioExampleLibrary_eventListUserSubscriptionAsync_Parms
		{
			FModioFilterParams FilterParams;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilterParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioExampleLibrary_eventListUserSubscriptionAsync_Parms, Callback), Z_Construct_UDelegateFunction_Modio_OnListAllModsDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::NewProp_FilterParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::NewProp_FilterParams = { "FilterParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioExampleLibrary_eventListUserSubscriptionAsync_Parms, FilterParams), Z_Construct_UScriptStruct_FModioFilterParams, METADATA_PARAMS(Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::NewProp_FilterParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::NewProp_FilterParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::NewProp_FilterParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Example|UserSubscription" },
		{ "Comment", "/**\n\x09 * @brief Runs a filter over the user's subscription list\n\x09 * @param FilterParams Supports the following operations:\n\x09 * @param Callback Called when mod list has been processed\n\x09 **/" },
		{ "ModuleRelativePath", "Public/UI/ModioExampleLibrary.h" },
		{ "ToolTip", "@brief Runs a filter over the user's subscription list\n@param FilterParams Supports the following operations:\n@param Callback Called when mod list has been processed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioExampleLibrary, nullptr, "ListUserSubscriptionAsync", nullptr, nullptr, sizeof(ModioExampleLibrary_eventListUserSubscriptionAsync_Parms), Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioExampleLibrary_NoRegister()
	{
		return UModioExampleLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioExampleLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioExampleLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioExampleLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioExampleLibrary_GetAvatarThumbnailSize, "GetAvatarThumbnailSize" }, // 4056761297
		{ &Z_Construct_UFunction_UModioExampleLibrary_GetLogoFullSize, "GetLogoFullSize" }, // 2268317847
		{ &Z_Construct_UFunction_UModioExampleLibrary_GetLogoThumbnailSize, "GetLogoThumbnailSize" }, // 2082493533
		{ &Z_Construct_UFunction_UModioExampleLibrary_ListUserSubscriptionAsync, "ListUserSubscriptionAsync" }, // 3011791414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioExampleLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// clang-format on\n" },
		{ "IncludePath", "UI/ModioExampleLibrary.h" },
		{ "ModuleRelativePath", "Public/UI/ModioExampleLibrary.h" },
		{ "ToolTip", "clang-format on" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioExampleLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioExampleLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioExampleLibrary_Statics::ClassParams = {
		&UModioExampleLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioExampleLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioExampleLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioExampleLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioExampleLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioExampleLibrary, 2091289823);
	template<> MODIO_API UClass* StaticClass<UModioExampleLibrary>()
	{
		return UModioExampleLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioExampleLibrary(Z_Construct_UClass_UModioExampleLibrary, &UModioExampleLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioExampleLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioExampleLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
