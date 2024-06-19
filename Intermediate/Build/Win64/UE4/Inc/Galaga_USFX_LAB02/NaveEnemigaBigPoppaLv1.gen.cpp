// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/NaveEnemigaBigPoppaLv1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaBigPoppaLv1() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaBigPoppaLv1();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaBigPoppa();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void ANaveEnemigaBigPoppaLv1::StaticRegisterNativesANaveEnemigaBigPoppaLv1()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_NoRegister()
	{
		return ANaveEnemigaBigPoppaLv1::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaBigPoppa,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaBigPoppaLv1.h" },
		{ "ModuleRelativePath", "NaveEnemigaBigPoppaLv1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaBigPoppaLv1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics::ClassParams = {
		&ANaveEnemigaBigPoppaLv1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaBigPoppaLv1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaBigPoppaLv1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaBigPoppaLv1, 297573327);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ANaveEnemigaBigPoppaLv1>()
	{
		return ANaveEnemigaBigPoppaLv1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaBigPoppaLv1(Z_Construct_UClass_ANaveEnemigaBigPoppaLv1, &ANaveEnemigaBigPoppaLv1::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ANaveEnemigaBigPoppaLv1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaBigPoppaLv1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
