// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/ISetMotherShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISetMotherShip() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UISetMotherShip_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UISetMotherShip();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void UISetMotherShip::StaticRegisterNativesUISetMotherShip()
	{
	}
	UClass* Z_Construct_UClass_UISetMotherShip_NoRegister()
	{
		return UISetMotherShip::StaticClass();
	}
	struct Z_Construct_UClass_UISetMotherShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISetMotherShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISetMotherShip_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ISetMotherShip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISetMotherShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISetMotherShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UISetMotherShip_Statics::ClassParams = {
		&UISetMotherShip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UISetMotherShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISetMotherShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISetMotherShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UISetMotherShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UISetMotherShip, 1609125418);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<UISetMotherShip>()
	{
		return UISetMotherShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UISetMotherShip(Z_Construct_UClass_UISetMotherShip, &UISetMotherShip::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("UISetMotherShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISetMotherShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
