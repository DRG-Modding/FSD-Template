// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modio/Public/Libraries/ModioSDKLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModioSDKLibrary() {}
// Cross Module References
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EFileSizeUnit();
	UPackage* Z_Construct_UPackage__Script_Modio();
	MODIO_API UClass* Z_Construct_UClass_UModioSDKLibrary_NoRegister();
	MODIO_API UClass* Z_Construct_UClass_UModioSDKLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioApiKey();
	MODIO_API UEnum* Z_Construct_UEnum_Modio_EModioEnvironment();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioGameID();
	MODIO_API UScriptStruct* Z_Construct_UScriptStruct_FModioInitializeOptions();
// End Cross Module References
	static UEnum* EFileSizeUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Modio_EFileSizeUnit, Z_Construct_UPackage__Script_Modio(), TEXT("EFileSizeUnit"));
		}
		return Singleton;
	}
	template<> MODIO_API UEnum* StaticEnum<EFileSizeUnit>()
	{
		return EFileSizeUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFileSizeUnit(EFileSizeUnit_StaticEnum, TEXT("/Script/Modio"), TEXT("EFileSizeUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Modio_EFileSizeUnit_Hash() { return 4282507364U; }
	UEnum* Z_Construct_UEnum_Modio_EFileSizeUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Modio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFileSizeUnit"), 0, Get_Z_Construct_UEnum_Modio_EFileSizeUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Largest", (int64)Largest },
				{ "B", (int64)B },
				{ "KB", (int64)KB },
				{ "MB", (int64)MB },
				{ "GB", (int64)GB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "B.Comment", "// Will take the largest one that becomes a number larger than 1 (i.e, 1300mb becomes 1.23MB)\n" },
				{ "B.Name", "B" },
				{ "B.ToolTip", "Will take the largest one that becomes a number larger than 1 (i.e, 1300mb becomes 1.23MB)" },
				{ "BlueprintType", "true" },
				{ "GB.Name", "GB" },
				{ "KB.Name", "KB" },
				{ "Largest.Name", "Largest" },
				{ "MB.Name", "MB" },
				{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Modio,
				nullptr,
				"EFileSizeUnit",
				"EFileSizeUnit",
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
	DEFINE_FUNCTION(UModioSDKLibrary::execPct_Int64Int64)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Dividend);
		P_GET_PROPERTY(FInt64Property,Z_Param_Divisor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UModioSDKLibrary::Pct_Int64Int64(Z_Param_Dividend,Z_Param_Divisor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execConv_Int64ToText)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bAlwaysSign);
		P_GET_UBOOL(Z_Param_bUseGrouping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumIntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UModioSDKLibrary::Conv_Int64ToText(Z_Param_Value,Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execConv_Int64ToString)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModioSDKLibrary::Conv_Int64ToString(Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execFilesize_ToString)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_FileSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxDecimals);
		P_GET_PROPERTY(FByteProperty,Z_Param_Unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UModioSDKLibrary::Filesize_ToString(Z_Param_FileSize,Z_Param_MaxDecimals,EFileSizeUnit(Z_Param_Unit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execIsValidSecurityCodeFormat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UModioSDKLibrary::IsValidSecurityCodeFormat(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execIsValidEmailAddressFormat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UModioSDKLibrary::IsValidEmailAddressFormat(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execGetProjectInitializeOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioInitializeOptions*)Z_Param__Result=UModioSDKLibrary::GetProjectInitializeOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execGetProjectEnvironment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EModioEnvironment*)Z_Param__Result=UModioSDKLibrary::GetProjectEnvironment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execGetProjectApiKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioApiKey*)Z_Param__Result=UModioSDKLibrary::GetProjectApiKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModioSDKLibrary::execGetProjectGameId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModioGameID*)Z_Param__Result=UModioSDKLibrary::GetProjectGameId();
		P_NATIVE_END;
	}
	void UModioSDKLibrary::StaticRegisterNativesUModioSDKLibrary()
	{
		UClass* Class = UModioSDKLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_Int64ToString", &UModioSDKLibrary::execConv_Int64ToString },
			{ "Conv_Int64ToText", &UModioSDKLibrary::execConv_Int64ToText },
			{ "Filesize_ToString", &UModioSDKLibrary::execFilesize_ToString },
			{ "GetProjectApiKey", &UModioSDKLibrary::execGetProjectApiKey },
			{ "GetProjectEnvironment", &UModioSDKLibrary::execGetProjectEnvironment },
			{ "GetProjectGameId", &UModioSDKLibrary::execGetProjectGameId },
			{ "GetProjectInitializeOptions", &UModioSDKLibrary::execGetProjectInitializeOptions },
			{ "IsValidEmailAddressFormat", &UModioSDKLibrary::execIsValidEmailAddressFormat },
			{ "IsValidSecurityCodeFormat", &UModioSDKLibrary::execIsValidSecurityCodeFormat },
			{ "Pct_Int64Int64", &UModioSDKLibrary::execPct_Int64Int64 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics
	{
		struct ModioSDKLibrary_eventConv_Int64ToString_Parms
		{
			int64 InInt;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_InInt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventConv_Int64ToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventConv_Int64ToString_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::NewProp_InInt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|String" },
		{ "Comment", "/** Converts an integer64 value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (integer64)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Converts an integer64 value to a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "Conv_Int64ToString", nullptr, nullptr, sizeof(ModioSDKLibrary_eventConv_Int64ToString_Parms), Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics
	{
		struct ModioSDKLibrary_eventConv_Int64ToText_Parms
		{
			int64 Value;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventConv_Int64ToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventConv_Int64ToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventConv_Int64ToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((ModioSDKLibrary_eventConv_Int64ToText_Parms*)Obj)->bUseGrouping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping = { "bUseGrouping", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioSDKLibrary_eventConv_Int64ToText_Parms), &Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((ModioSDKLibrary_eventConv_Int64ToText_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign = { "bAlwaysSign", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioSDKLibrary_eventConv_Int64ToText_Parms), &Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventConv_Int64ToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_MinimumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "mod.io|Utilities|Text" },
		{ "Comment", "/**\n\x09 * @brief Converts a passed in integer to text based on formatting options\n\x09 *\n\x09 * @param Value the integer to format\n\x09 * @param bAlwaysSign if true, the sign (+/-) is always present\n\x09 * @param bUseGrouping If true, then the text is divided up in groups with separators based on computer locale\n\x09 * @param MinimumIntegralDigits If the amount of numbers is less than this, then pad out with 0 at start of string\n\x09 * @param MaximumIntegralDigits\n\x09 */" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "ToText (integer64)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "@brief Converts a passed in integer to text based on formatting options\n\n@param Value the integer to format\n@param bAlwaysSign if true, the sign (+/-) is always present\n@param bUseGrouping If true, then the text is divided up in groups with separators based on computer locale\n@param MinimumIntegralDigits If the amount of numbers is less than this, then pad out with 0 at start of string\n@param MaximumIntegralDigits" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "Conv_Int64ToText", nullptr, nullptr, sizeof(ModioSDKLibrary_eventConv_Int64ToText_Parms), Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics
	{
		struct ModioSDKLibrary_eventFilesize_ToString_Parms
		{
			int64 FileSize;
			int32 MaxDecimals;
			TEnumAsByte<EFileSizeUnit> Unit;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Unit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDecimals;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_FileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventFilesize_ToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventFilesize_ToString_Parms, Unit), Z_Construct_UEnum_Modio_EFileSizeUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_MaxDecimals = { "MaxDecimals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventFilesize_ToString_Parms, MaxDecimals), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventFilesize_ToString_Parms, FileSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_Unit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_MaxDecimals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::NewProp_FileSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|String" },
		{ "Comment", "/**\n\x09 * Converts a filesize to a human readable string with the appropriate unit\n\x09 *\n\x09 * @param FileSize - Filesize in bytes\n\x09 * @param MaxDecimals - Maximum amount of decimals to display of the filesize\n\x09 * @param Unit - If Largest, then it tries to display the size in the largest unit that will have a integral\n\x09 * part > 0, else it displays the filesize in the specified unit\n\x09 * @return A text formatted from your specifications\n\x09 */" },
		{ "CompactNodeTitle", "Filesize" },
		{ "CPP_Default_MaxDecimals", "2" },
		{ "CPP_Default_Unit", "Largest" },
		{ "DisplayName", "ToString (Filesize)" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Converts a filesize to a human readable string with the appropriate unit\n\n@param FileSize - Filesize in bytes\n@param MaxDecimals - Maximum amount of decimals to display of the filesize\n@param Unit - If Largest, then it tries to display the size in the largest unit that will have a integral\npart > 0, else it displays the filesize in the specified unit\n@return A text formatted from your specifications" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "Filesize_ToString", nullptr, nullptr, sizeof(ModioSDKLibrary_eventFilesize_ToString_Parms), Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics
	{
		struct ModioSDKLibrary_eventGetProjectApiKey_Parms
		{
			FModioApiKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventGetProjectApiKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioApiKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get hte api key specified in the mod.io project settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Get hte api key specified in the mod.io project settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "GetProjectApiKey", nullptr, nullptr, sizeof(ModioSDKLibrary_eventGetProjectApiKey_Parms), Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics
	{
		struct ModioSDKLibrary_eventGetProjectEnvironment_Parms
		{
			EModioEnvironment ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventGetProjectEnvironment_Parms, ReturnValue), Z_Construct_UEnum_Modio_EModioEnvironment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the environment specified in the mod.io project settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Get the environment specified in the mod.io project settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "GetProjectEnvironment", nullptr, nullptr, sizeof(ModioSDKLibrary_eventGetProjectEnvironment_Parms), Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics
	{
		struct ModioSDKLibrary_eventGetProjectGameId_Parms
		{
			FModioGameID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventGetProjectGameId_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the game id specified in the mod.io project settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Get the game id specified in the mod.io project settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "GetProjectGameId", nullptr, nullptr, sizeof(ModioSDKLibrary_eventGetProjectGameId_Parms), Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics
	{
		struct ModioSDKLibrary_eventGetProjectInitializeOptions_Parms
		{
			FModioInitializeOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventGetProjectInitializeOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FModioInitializeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Get the options needed to initialize the mod.io SDK specified in the project settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Get the options needed to initialize the mod.io SDK specified in the project settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "GetProjectInitializeOptions", nullptr, nullptr, sizeof(ModioSDKLibrary_eventGetProjectInitializeOptions_Parms), Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics
	{
		struct ModioSDKLibrary_eventIsValidEmailAddressFormat_Parms
		{
			FString String;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModioSDKLibrary_eventIsValidEmailAddressFormat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioSDKLibrary_eventIsValidEmailAddressFormat_Parms), &Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventIsValidEmailAddressFormat_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Does a basic validation if the email address supplied has a valid form\n\x09 * @return true if the email address has a valid format\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Does a basic validation if the email address supplied has a valid form\n@return true if the email address has a valid format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "IsValidEmailAddressFormat", nullptr, nullptr, sizeof(ModioSDKLibrary_eventIsValidEmailAddressFormat_Parms), Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics
	{
		struct ModioSDKLibrary_eventIsValidSecurityCodeFormat_Parms
		{
			FString String;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModioSDKLibrary_eventIsValidSecurityCodeFormat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModioSDKLibrary_eventIsValidSecurityCodeFormat_Parms), &Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventIsValidSecurityCodeFormat_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Utilities" },
		{ "Comment", "/**\n\x09 * Checks if the string has the same format as the mod.io security code\n\x09 * @return true if the security code has a valid format\n\x09 */" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "Checks if the string has the same format as the mod.io security code\n@return true if the security code has a valid format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "IsValidSecurityCodeFormat", nullptr, nullptr, sizeof(ModioSDKLibrary_eventIsValidSecurityCodeFormat_Parms), Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics
	{
		struct ModioSDKLibrary_eventPct_Int64Int64_Parms
		{
			int64 Dividend;
			int64 Divisor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Divisor;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Dividend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventPct_Int64Int64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::NewProp_Divisor = { "Divisor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventPct_Int64Int64_Parms, Divisor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::NewProp_Dividend = { "Dividend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModioSDKLibrary_eventPct_Int64Int64_Parms, Dividend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::NewProp_Divisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::NewProp_Dividend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::Function_MetaDataParams[] = {
		{ "Category", "mod.io|Math|integer64" },
		{ "Comment", "/** @brief Dividend/Divisor and return the floating point result with no checks **/" },
		{ "CompactNodeTitle", "Percent" },
		{ "DisplayName", "Get Percent (integer64/integer64)" },
		{ "Keywords", "/ % percent pct" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
		{ "ToolTip", "@brief Dividend/Divisor and return the floating point result with no checks *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModioSDKLibrary, nullptr, "Pct_Int64Int64", nullptr, nullptr, sizeof(ModioSDKLibrary_eventPct_Int64Int64_Parms), Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModioSDKLibrary_NoRegister()
	{
		return UModioSDKLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModioSDKLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModioSDKLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Modio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModioSDKLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToString, "Conv_Int64ToString" }, // 262478120
		{ &Z_Construct_UFunction_UModioSDKLibrary_Conv_Int64ToText, "Conv_Int64ToText" }, // 1857666107
		{ &Z_Construct_UFunction_UModioSDKLibrary_Filesize_ToString, "Filesize_ToString" }, // 2852693706
		{ &Z_Construct_UFunction_UModioSDKLibrary_GetProjectApiKey, "GetProjectApiKey" }, // 3610523048
		{ &Z_Construct_UFunction_UModioSDKLibrary_GetProjectEnvironment, "GetProjectEnvironment" }, // 1383730002
		{ &Z_Construct_UFunction_UModioSDKLibrary_GetProjectGameId, "GetProjectGameId" }, // 4169971225
		{ &Z_Construct_UFunction_UModioSDKLibrary_GetProjectInitializeOptions, "GetProjectInitializeOptions" }, // 3165171944
		{ &Z_Construct_UFunction_UModioSDKLibrary_IsValidEmailAddressFormat, "IsValidEmailAddressFormat" }, // 2715029652
		{ &Z_Construct_UFunction_UModioSDKLibrary_IsValidSecurityCodeFormat, "IsValidSecurityCodeFormat" }, // 3905582916
		{ &Z_Construct_UFunction_UModioSDKLibrary_Pct_Int64Int64, "Pct_Int64Int64" }, // 1593078791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModioSDKLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/ModioSDKLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/ModioSDKLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModioSDKLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModioSDKLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModioSDKLibrary_Statics::ClassParams = {
		&UModioSDKLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModioSDKLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModioSDKLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModioSDKLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModioSDKLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModioSDKLibrary, 1850906720);
	template<> MODIO_API UClass* StaticClass<UModioSDKLibrary>()
	{
		return UModioSDKLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModioSDKLibrary(Z_Construct_UClass_UModioSDKLibrary, &UModioSDKLibrary::StaticClass, TEXT("/Script/Modio"), TEXT("UModioSDKLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModioSDKLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
