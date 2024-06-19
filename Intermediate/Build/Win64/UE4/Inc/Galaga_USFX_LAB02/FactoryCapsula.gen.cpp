// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/FactoryCapsula.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryCapsula() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AFactoryCapsula_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AFactoryCapsula();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ACapsula_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFactoryCapsula::execGenerarCapsulas)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tipoCapsula);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_ZeroRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACapsula**)Z_Param__Result=AFactoryCapsula::GenerarCapsulas(Z_Param_tipoCapsula,Z_Param_World,Z_Param_SpawnLocation,Z_Param_ZeroRotator);
		P_NATIVE_END;
	}
	void AFactoryCapsula::StaticRegisterNativesAFactoryCapsula()
	{
		UClass* Class = AFactoryCapsula::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerarCapsulas", &AFactoryCapsula::execGenerarCapsulas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics
	{
		struct FactoryCapsula_eventGenerarCapsulas_Parms
		{
			FString tipoCapsula;
			UWorld* World;
			FVector SpawnLocation;
			FRotator ZeroRotator;
			ACapsula* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tipoCapsula;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZeroRotator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_tipoCapsula = { "tipoCapsula", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactoryCapsula_eventGenerarCapsulas_Parms, tipoCapsula), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactoryCapsula_eventGenerarCapsulas_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactoryCapsula_eventGenerarCapsulas_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_ZeroRotator = { "ZeroRotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactoryCapsula_eventGenerarCapsulas_Parms, ZeroRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactoryCapsula_eventGenerarCapsulas_Parms, ReturnValue), Z_Construct_UClass_ACapsula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_tipoCapsula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_ZeroRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::Function_MetaDataParams[] = {
		{ "Category", "FabricaCapsulas" },
		{ "ModuleRelativePath", "FactoryCapsula.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFactoryCapsula, nullptr, "GenerarCapsulas", nullptr, nullptr, sizeof(FactoryCapsula_eventGenerarCapsulas_Parms), Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFactoryCapsula_NoRegister()
	{
		return AFactoryCapsula::StaticClass();
	}
	struct Z_Construct_UClass_AFactoryCapsula_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactoryCapsula_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFactoryCapsula_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFactoryCapsula_GenerarCapsulas, "GenerarCapsulas" }, // 359017841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactoryCapsula_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FactoryCapsula.h" },
		{ "ModuleRelativePath", "FactoryCapsula.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactoryCapsula_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryCapsula>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactoryCapsula_Statics::ClassParams = {
		&AFactoryCapsula::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFactoryCapsula_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryCapsula_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactoryCapsula()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactoryCapsula_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactoryCapsula, 1057773302);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AFactoryCapsula>()
	{
		return AFactoryCapsula::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactoryCapsula(Z_Construct_UClass_AFactoryCapsula, &AFactoryCapsula::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AFactoryCapsula"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryCapsula);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
