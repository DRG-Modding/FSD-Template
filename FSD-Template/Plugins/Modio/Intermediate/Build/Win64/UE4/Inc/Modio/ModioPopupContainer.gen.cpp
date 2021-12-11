// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/UI/ModioPopupContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioPopupContainer() {}
// Cross Module References
	MODIO_API UClass* Z_Construct_UClass_UModioPopupContainer_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioPopupContainer();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UClass* Z_Construct_UClass_UModioPopupBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UModioPopupContainer::execPopPopup)
	{
		P_GET_OBJECT(UClass,Z_Param_PopupClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModioPopupBase**)Z_Param__Result=P_THIS->PopPopup(Z_Param_PopupClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioPopupContainer::execPushPopup)
	{
		P_GET_OBJECT(UClass,Z_Param_PopupClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModioPopupBase**)Z_Param__Result=P_THIS->PushPopup_Implementation(Z_Param_PopupClass);
		P_NATIVE_END;
	}
	static FName NAME_UModioPopupContainer_PushPopup = FName(TEXT("PushPopup"));
	UModioPopupBase* UModioPopupContainer::PushPopup(TSubclassOf<UModioPopupBase>  PopupClass)
	{
		ModioPopupContainer_eventPushPopup_Parms Parms;
		Parms.PopupClass=PopupClass;
		ProcessEvent(FindFunctionChecked(NAME_UModioPopupContainer_PushPopup),&Parms);
		return Parms.ReturnValue;
	}
	void UModioPopupContainer::StaticRegisterNativesUModioPopupContainer()
	{
		UClass* Class = UModioPopupContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PopPopup", &UModioPopupContainer::execPopPopup },
			{ "PushPopup", &UModioPopupContainer::execPushPopup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics
	{
		struct ModioPopupContainer_eventPopPopup_Parms
		{
			TSubclassOf<UModioPopupBase>  PopupClass;
			UModioPopupBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PopupClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioPopupContainer_eventPopPopup_Parms, ReturnValue), Z_Construct_UClass_UModioPopupBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::NewProp_PopupClass = { "PopupClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioPopupContainer_eventPopPopup_Parms, PopupClass), Z_Construct_UClass_UModioPopupBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::NewProp_PopupClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Widget" },
		{ "Comment", "/**\n\x09 * @brief Pops a topmost item on the popup stack\n\x09 * @param PopupClass - The class we want to pop, null if we just want to pop the topmost on the stack\n\x09 * @return the next popup on the stack\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/ModioPopupContainer.h" },
		{ "ToolTip", "@brief Pops a topmost item on the popup stack\n@param PopupClass - The class we want to pop, null if we just want to pop the topmost on the stack\n@return the next popup on the stack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioPopupContainer, nullptr, "PopPopup", nullptr, nullptr, sizeof(ModioPopupContainer_eventPopPopup_Parms), Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioPopupContainer_PopPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioPopupContainer_PopPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PopupClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioPopupContainer_eventPushPopup_Parms, ReturnValue), Z_Construct_UClass_UModioPopupBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::NewProp_PopupClass = { "PopupClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioPopupContainer_eventPushPopup_Parms, PopupClass), Z_Construct_UClass_UModioPopupBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::NewProp_PopupClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Widget" },
		{ "Comment", "/**\n\x09 * Push a new popup on the stack and returns a new instance of it\n\x09 * Override this function to do your custom handling of displaying the popup\n\x09 * @param PopupClass - will warn on null and not do anything, else we will return a instance\n\x09 * of a popup of that class\n\x09 */" },
		{ "DeterminesOutputType", "PopupClass" },
		{ "ModuleRelativePath", "Public/UI/ModioPopupContainer.h" },
		{ "ToolTip", "Push a new popup on the stack and returns a new instance of it\nOverride this function to do your custom handling of displaying the popup\n@param PopupClass - will warn on null and not do anything, else we will return a instance\nof a popup of that class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioPopupContainer, nullptr, "PushPopup", nullptr, nullptr, sizeof(ModioPopupContainer_eventPushPopup_Parms), Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioPopupContainer_PushPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioPopupContainer_PushPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioPopupContainer_NoRegister()
	{
		return UModioPopupContainer::StaticClass();
	}
	struct Z_Construct_UClass_UModioPopupContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PopupCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopupCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PopupStack;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopupStack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioPopupContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioPopupContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioPopupContainer_PopPopup, "PopPopup" }, // 2174258211
		{ &Z_Construct_UFunction_UModioPopupContainer_PushPopup, "PushPopup" }, // 3770256054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioPopupContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Caching widget for popup items. Tries to reuse existing widget to not tax the\n * garbage collector if one has already been created\n */" },
		{ "IncludePath", "UI/ModioPopupContainer.h" },
		{ "ModuleRelativePath", "Public/UI/ModioPopupContainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Caching widget for popup items. Tries to reuse existing widget to not tax the\ngarbage collector if one has already been created" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ModioPopupContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupCache = { "PopupCache", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioPopupContainer, PopupCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupCache_Inner = { "PopupCache", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UModioPopupBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupStack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ModioPopupContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupStack = { "PopupStack", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModioPopupContainer, PopupStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupStack_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupStack_Inner = { "PopupStack", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UModioPopupBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModioPopupContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModioPopupContainer_Statics::NewProp_PopupStack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioPopupContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioPopupContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioPopupContainer_Statics::ClassParams = {
		&UModioPopupContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModioPopupContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModioPopupContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModioPopupContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioPopupContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioPopupContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioPopupContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioPopupContainer, 1841993572);
	template<> MODIO_API UClass* StaticClass<UModioPopupContainer>()
	{
		return UModioPopupContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioPopupContainer(Z_Construct_UClass_UModioPopupContainer, &UModioPopupContainer::StaticClass, TEXT("/Script/Modio"), TEXT("UModioPopupContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioPopupContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
