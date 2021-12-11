// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSDRawInput/Public/RawInputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputFunctionLibrary() {}
// Cross Module References
	FSDRAWINPUT_API UClass* Z_Construct_UClass_URawInputFunctionLibrary_NoRegister();
	FSDRAWINPUT_API UClass* Z_Construct_UClass_URawInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FSDRawInput();
	FSDRAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredDeviceInfo();
// End Cross Module References
	DEFINE_FUNCTION(URawInputFunctionLibrary::execGetRegisteredDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRegisteredDeviceInfo>*)Z_Param__Result=URawInputFunctionLibrary::GetRegisteredDevices();
		P_NATIVE_END;
	}
	void URawInputFunctionLibrary::StaticRegisterNativesURawInputFunctionLibrary()
	{
		UClass* Class = URawInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRegisteredDevices", &URawInputFunctionLibrary::execGetRegisteredDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics
	{
		struct RawInputFunctionLibrary_eventGetRegisteredDevices_Parms
		{
			TArray<FRegisteredDeviceInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RawInputFunctionLibrary_eventGetRegisteredDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRegisteredDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URawInputFunctionLibrary, nullptr, "GetRegisteredDevices", nullptr, nullptr, sizeof(RawInputFunctionLibrary_eventGetRegisteredDevices_Parms), Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URawInputFunctionLibrary_NoRegister()
	{
		return URawInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URawInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URawInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FSDRawInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URawInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices, "GetRegisteredDevices" }, // 416966977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RawInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URawInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URawInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URawInputFunctionLibrary_Statics::ClassParams = {
		&URawInputFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URawInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URawInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URawInputFunctionLibrary, 2279400230);
	template<> FSDRAWINPUT_API UClass* StaticClass<URawInputFunctionLibrary>()
	{
		return URawInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URawInputFunctionLibrary(Z_Construct_UClass_URawInputFunctionLibrary, &URawInputFunctionLibrary::StaticClass, TEXT("/Script/FSDRawInput"), TEXT("URawInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URawInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
