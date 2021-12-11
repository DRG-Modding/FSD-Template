// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordSDK/Public/DiscordSDKInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordSDKInterface() {}
// Cross Module References
	DISCORDSDK_API UFunction* Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordSDK();
	DISCORDSDK_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserDataSDK();
	DISCORDSDK_API UClass* Z_Construct_UClass_UDiscordSDKInterface_NoRegister();
	DISCORDSDK_API UClass* Z_Construct_UClass_UDiscordSDKInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics
	{
		struct _Script_DiscordSDK_eventDiscordSDKInterfaceOnJoinRequest_Parms
		{
			FDiscordUserDataSDK joinRequest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_joinRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::NewProp_joinRequest = { "joinRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordSDK_eventDiscordSDKInterfaceOnJoinRequest_Parms, joinRequest), Z_Construct_UScriptStruct_FDiscordUserDataSDK, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::NewProp_joinRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordSDKInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordSDK, nullptr, "DiscordSDKInterfaceOnJoinRequest__DelegateSignature", nullptr, nullptr, sizeof(_Script_DiscordSDK_eventDiscordSDKInterfaceOnJoinRequest_Parms), Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDiscordSDKInterface::execAcceptInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptInvite(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordSDKInterface::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordSDKInterface**)Z_Param__Result=UDiscordSDKInterface::Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordSDKInterface::execIgnoreInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IgnoreInvite(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordSDKInterface::execRejectInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RejectInvite(Z_Param_UserId);
		P_NATIVE_END;
	}
	void UDiscordSDKInterface::StaticRegisterNativesUDiscordSDKInterface()
	{
		UClass* Class = UDiscordSDKInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptInvite", &UDiscordSDKInterface::execAcceptInvite },
			{ "Get", &UDiscordSDKInterface::execGet },
			{ "IgnoreInvite", &UDiscordSDKInterface::execIgnoreInvite },
			{ "RejectInvite", &UDiscordSDKInterface::execRejectInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics
	{
		struct DiscordSDKInterface_eventAcceptInvite_Parms
		{
			FString UserId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordSDKInterface_eventAcceptInvite_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordSDKInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordSDKInterface, nullptr, "AcceptInvite", nullptr, nullptr, sizeof(DiscordSDKInterface_eventAcceptInvite_Parms), Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics
	{
		struct DiscordSDKInterface_eventGet_Parms
		{
			UDiscordSDKInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordSDKInterface_eventGet_Parms, ReturnValue), Z_Construct_UClass_UDiscordSDKInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordSDKInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordSDKInterface, nullptr, "Get", nullptr, nullptr, sizeof(DiscordSDKInterface_eventGet_Parms), Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordSDKInterface_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordSDKInterface_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics
	{
		struct DiscordSDKInterface_eventIgnoreInvite_Parms
		{
			FString UserId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordSDKInterface_eventIgnoreInvite_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordSDKInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordSDKInterface, nullptr, "IgnoreInvite", nullptr, nullptr, sizeof(DiscordSDKInterface_eventIgnoreInvite_Parms), Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics
	{
		struct DiscordSDKInterface_eventRejectInvite_Parms
		{
			FString UserId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordSDKInterface_eventRejectInvite_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordSDKInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordSDKInterface, nullptr, "RejectInvite", nullptr, nullptr, sizeof(DiscordSDKInterface_eventRejectInvite_Parms), Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordSDKInterface_NoRegister()
	{
		return UDiscordSDKInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordSDKInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJoinRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordSDKInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordSDKInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordSDKInterface_AcceptInvite, "AcceptInvite" }, // 4003299940
		{ &Z_Construct_UFunction_UDiscordSDKInterface_Get, "Get" }, // 2957116030
		{ &Z_Construct_UFunction_UDiscordSDKInterface_IgnoreInvite, "IgnoreInvite" }, // 145264178
		{ &Z_Construct_UFunction_UDiscordSDKInterface_RejectInvite, "RejectInvite" }, // 2543886407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSDKInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordSDKInterface.h" },
		{ "ModuleRelativePath", "Public/DiscordSDKInterface.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSDKInterface_Statics::NewProp_OnJoinRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/DiscordSDKInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordSDKInterface_Statics::NewProp_OnJoinRequest = { "OnJoinRequest", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSDKInterface, OnJoinRequest), Z_Construct_UDelegateFunction_DiscordSDK_DiscordSDKInterfaceOnJoinRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordSDKInterface_Statics::NewProp_OnJoinRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSDKInterface_Statics::NewProp_OnJoinRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordSDKInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSDKInterface_Statics::NewProp_OnJoinRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordSDKInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordSDKInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordSDKInterface_Statics::ClassParams = {
		&UDiscordSDKInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordSDKInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSDKInterface_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordSDKInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSDKInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordSDKInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordSDKInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordSDKInterface, 2976999468);
	template<> DISCORDSDK_API UClass* StaticClass<UDiscordSDKInterface>()
	{
		return UDiscordSDKInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordSDKInterface(Z_Construct_UClass_UDiscordSDKInterface, &UDiscordSDKInterface::StaticClass, TEXT("/Script/DiscordSDK"), TEXT("UDiscordSDKInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordSDKInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
