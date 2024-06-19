// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/IStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStrategy() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIStrategy_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void UIStrategy::StaticRegisterNativesUIStrategy()
	{
	}
	UClass* Z_Construct_UClass_UIStrategy_NoRegister()
	{
		return UIStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UIStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIStrategy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIStrategy_Statics::ClassParams = {
		&UIStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIStrategy, 912230909);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<UIStrategy>()
	{
		return UIStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIStrategy(Z_Construct_UClass_UIStrategy, &UIStrategy::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("UIStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
