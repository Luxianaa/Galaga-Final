// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/StrategyCrazy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyCrazy() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AStrategyCrazy_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AStrategyCrazy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIStrategy_NoRegister();
// End Cross Module References
	void AStrategyCrazy::StaticRegisterNativesAStrategyCrazy()
	{
	}
	UClass* Z_Construct_UClass_AStrategyCrazy_NoRegister()
	{
		return AStrategyCrazy::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyCrazy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyCrazy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyCrazy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyCrazy.h" },
		{ "ModuleRelativePath", "StrategyCrazy.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyCrazy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyCrazy, IIStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyCrazy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyCrazy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyCrazy_Statics::ClassParams = {
		&AStrategyCrazy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategyCrazy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyCrazy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyCrazy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyCrazy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyCrazy, 2294568591);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AStrategyCrazy>()
	{
		return AStrategyCrazy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyCrazy(Z_Construct_UClass_AStrategyCrazy, &AStrategyCrazy::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AStrategyCrazy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyCrazy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
