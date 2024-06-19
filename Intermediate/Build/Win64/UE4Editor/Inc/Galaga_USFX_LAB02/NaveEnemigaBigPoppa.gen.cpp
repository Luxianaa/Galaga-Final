// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/NaveEnemigaBigPoppa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaBigPoppa() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaBigPoppa_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemigaBigPoppa();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void ANaveEnemigaBigPoppa::StaticRegisterNativesANaveEnemigaBigPoppa()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaBigPoppa_NoRegister()
	{
		return ANaveEnemigaBigPoppa::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaBigPoppa.h" },
		{ "ModuleRelativePath", "NaveEnemigaBigPoppa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaBigPoppa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics::ClassParams = {
		&ANaveEnemigaBigPoppa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaBigPoppa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaBigPoppa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaBigPoppa, 1263687445);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ANaveEnemigaBigPoppa>()
	{
		return ANaveEnemigaBigPoppa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaBigPoppa(Z_Construct_UClass_ANaveEnemigaBigPoppa, &ANaveEnemigaBigPoppa::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ANaveEnemigaBigPoppa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaBigPoppa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
