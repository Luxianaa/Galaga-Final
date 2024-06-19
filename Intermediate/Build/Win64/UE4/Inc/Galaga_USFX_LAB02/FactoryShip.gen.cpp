// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/FactoryShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryShip() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AFactoryShip_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AFactoryShip();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIAbsFactory_NoRegister();
// End Cross Module References
	void AFactoryShip::StaticRegisterNativesAFactoryShip()
	{
	}
	UClass* Z_Construct_UClass_AFactoryShip_NoRegister()
	{
		return AFactoryShip::StaticClass();
	}
	struct Z_Construct_UClass_AFactoryShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveEnemiga_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveEnemiga;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactoryShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactoryShip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FactoryShip.h" },
		{ "ModuleRelativePath", "FactoryShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactoryShip_Statics::NewProp_NaveEnemiga_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "FactoryShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFactoryShip_Statics::NewProp_NaveEnemiga = { "NaveEnemiga", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFactoryShip, NaveEnemiga), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFactoryShip_Statics::NewProp_NaveEnemiga_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryShip_Statics::NewProp_NaveEnemiga_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFactoryShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryShip_Statics::NewProp_NaveEnemiga,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFactoryShip_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAbsFactory_NoRegister, (int32)VTABLE_OFFSET(AFactoryShip, IIAbsFactory), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactoryShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactoryShip_Statics::ClassParams = {
		&AFactoryShip::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFactoryShip_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryShip_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFactoryShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactoryShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactoryShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactoryShip, 2572681890);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AFactoryShip>()
	{
		return AFactoryShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactoryShip(Z_Construct_UClass_AFactoryShip, &AFactoryShip::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AFactoryShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
