// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/Propellants.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropellants() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_APropellants_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_APropellants();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APropellants::StaticRegisterNativesAPropellants()
	{
	}
	UClass* Z_Construct_UClass_APropellants_NoRegister()
	{
		return APropellants::StaticClass();
	}
	struct Z_Construct_UClass_APropellants_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshPrope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshPrope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APropellants_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropellants_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Propellants.h" },
		{ "ModuleRelativePath", "Propellants.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropellants_Statics::NewProp_MeshPrope_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Propellants.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APropellants_Statics::NewProp_MeshPrope = { "MeshPrope", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APropellants, MeshPrope), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APropellants_Statics::NewProp_MeshPrope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APropellants_Statics::NewProp_MeshPrope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APropellants_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropellants_Statics::NewProp_MeshPrope,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APropellants_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APropellants>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APropellants_Statics::ClassParams = {
		&APropellants::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APropellants_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APropellants_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APropellants_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APropellants_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APropellants()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APropellants_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APropellants, 3498897361);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<APropellants>()
	{
		return APropellants::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APropellants(Z_Construct_UClass_APropellants, &APropellants::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("APropellants"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APropellants);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
