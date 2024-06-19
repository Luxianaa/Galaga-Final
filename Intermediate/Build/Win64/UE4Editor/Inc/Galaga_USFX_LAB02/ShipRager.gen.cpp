// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/ShipRager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipRager() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AShipRager_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AShipRager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AFacadeShip_NoRegister();
// End Cross Module References
	void AShipRager::StaticRegisterNativesAShipRager()
	{
	}
	UClass* Z_Construct_UClass_AShipRager_NoRegister()
	{
		return AShipRager::StaticClass();
	}
	struct Z_Construct_UClass_AShipRager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RageMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RageMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacadeShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FacadeShip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShipRager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipRager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShipRager.h" },
		{ "ModuleRelativePath", "ShipRager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipRager_Statics::NewProp_RageMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipRager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipRager_Statics::NewProp_RageMesh = { "RageMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipRager, RageMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipRager_Statics::NewProp_RageMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipRager_Statics::NewProp_RageMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipRager_Statics::NewProp_FacadeShip_MetaData[] = {
		{ "Category", "fACADE" },
		{ "ModuleRelativePath", "ShipRager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipRager_Statics::NewProp_FacadeShip = { "FacadeShip", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipRager, FacadeShip), Z_Construct_UClass_AFacadeShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipRager_Statics::NewProp_FacadeShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipRager_Statics::NewProp_FacadeShip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShipRager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipRager_Statics::NewProp_RageMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipRager_Statics::NewProp_FacadeShip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShipRager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipRager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShipRager_Statics::ClassParams = {
		&AShipRager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShipRager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShipRager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShipRager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShipRager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShipRager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShipRager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShipRager, 1595890270);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AShipRager>()
	{
		return AShipRager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipRager(Z_Construct_UClass_AShipRager, &AShipRager::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AShipRager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipRager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
