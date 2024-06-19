// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/IAbsFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAbsFactory() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIAbsFactory_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIAbsFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void UIAbsFactory::StaticRegisterNativesUIAbsFactory()
	{
	}
	UClass* Z_Construct_UClass_UIAbsFactory_NoRegister()
	{
		return UIAbsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UIAbsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAbsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAbsFactory_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IAbsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAbsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAbsFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAbsFactory_Statics::ClassParams = {
		&UIAbsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAbsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAbsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAbsFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAbsFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAbsFactory, 870635820);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<UIAbsFactory>()
	{
		return UIAbsFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAbsFactory(Z_Construct_UClass_UIAbsFactory, &UIAbsFactory::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("UIAbsFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAbsFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
