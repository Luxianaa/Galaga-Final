// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/Aliens.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAliens() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AAliens_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AAliens();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAliens::StaticRegisterNativesAAliens()
	{
	}
	UClass* Z_Construct_UClass_AAliens_NoRegister()
	{
		return AAliens::StaticClass();
	}
	struct Z_Construct_UClass_AAliens_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshAlien_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshAlien;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAliens_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAliens_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Aliens.h" },
		{ "ModuleRelativePath", "Aliens.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAliens_Statics::NewProp_meshAlien_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Aliens.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAliens_Statics::NewProp_meshAlien = { "meshAlien", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAliens, meshAlien), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAliens_Statics::NewProp_meshAlien_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAliens_Statics::NewProp_meshAlien_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAliens_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAliens_Statics::NewProp_meshAlien,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAliens_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAliens>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAliens_Statics::ClassParams = {
		&AAliens::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAliens_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAliens_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAliens_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAliens_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAliens()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAliens_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAliens, 554706958);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AAliens>()
	{
		return AAliens::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAliens(Z_Construct_UClass_AAliens, &AAliens::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AAliens"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAliens);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
