// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/MotherDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotherDirector() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AMotherDirector_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AMotherDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void AMotherDirector::StaticRegisterNativesAMotherDirector()
	{
	}
	UClass* Z_Construct_UClass_AMotherDirector_NoRegister()
	{
		return AMotherDirector::StaticClass();
	}
	struct Z_Construct_UClass_AMotherDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotherDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotherDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotherDirector.h" },
		{ "ModuleRelativePath", "MotherDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotherDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotherDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotherDirector_Statics::ClassParams = {
		&AMotherDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotherDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotherDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotherDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotherDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotherDirector, 2290995325);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AMotherDirector>()
	{
		return AMotherDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotherDirector(Z_Construct_UClass_AMotherDirector, &AMotherDirector::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AMotherDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotherDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
