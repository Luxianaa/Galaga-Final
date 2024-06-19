// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/ShieldMotherShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldMotherShip() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AShieldMotherShip_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AShieldMotherShip();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AMotherShip_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIBuilderMotherShip_NoRegister();
// End Cross Module References
	void AShieldMotherShip::StaticRegisterNativesAShieldMotherShip()
	{
	}
	UClass* Z_Construct_UClass_AShieldMotherShip_NoRegister()
	{
		return AShieldMotherShip::StaticClass();
	}
	struct Z_Construct_UClass_AShieldMotherShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotherShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotherShip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShieldMotherShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldMotherShip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShieldMotherShip.h" },
		{ "ModuleRelativePath", "ShieldMotherShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldMotherShip_Statics::NewProp_MotherShip_MetaData[] = {
		{ "Category", "MotherShip" },
		{ "ModuleRelativePath", "ShieldMotherShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldMotherShip_Statics::NewProp_MotherShip = { "MotherShip", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShieldMotherShip, MotherShip), Z_Construct_UClass_AMotherShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShieldMotherShip_Statics::NewProp_MotherShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShieldMotherShip_Statics::NewProp_MotherShip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldMotherShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldMotherShip_Statics::NewProp_MotherShip,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShieldMotherShip_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuilderMotherShip_NoRegister, (int32)VTABLE_OFFSET(AShieldMotherShip, IIBuilderMotherShip), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShieldMotherShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldMotherShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShieldMotherShip_Statics::ClassParams = {
		&AShieldMotherShip::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShieldMotherShip_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShieldMotherShip_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShieldMotherShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShieldMotherShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShieldMotherShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShieldMotherShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShieldMotherShip, 2104784928);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AShieldMotherShip>()
	{
		return AShieldMotherShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShieldMotherShip(Z_Construct_UClass_AShieldMotherShip, &AShieldMotherShip::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AShieldMotherShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldMotherShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
