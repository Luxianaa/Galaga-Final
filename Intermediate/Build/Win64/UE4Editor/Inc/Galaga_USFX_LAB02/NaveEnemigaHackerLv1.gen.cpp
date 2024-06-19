// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/NaveEnemigaHackerLv1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaHackerLv1() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaHackerLv1_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaHackerLv1();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaHacker();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void ANaveEnemigaHackerLv1::StaticRegisterNativesANaveEnemigaHackerLv1()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaHackerLv1_NoRegister()
	{
		return ANaveEnemigaHackerLv1::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaHacker,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaHackerLv1.h" },
		{ "ModuleRelativePath", "NaveEnemigaHackerLv1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaHackerLv1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics::ClassParams = {
		&ANaveEnemigaHackerLv1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaHackerLv1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaHackerLv1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaHackerLv1, 626605986);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ANaveEnemigaHackerLv1>()
	{
		return ANaveEnemigaHackerLv1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaHackerLv1(Z_Construct_UClass_ANaveEnemigaHackerLv1, &ANaveEnemigaHackerLv1::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ANaveEnemigaHackerLv1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaHackerLv1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
