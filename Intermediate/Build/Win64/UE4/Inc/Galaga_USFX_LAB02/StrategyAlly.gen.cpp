// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/StrategyAlly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyAlly() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AStrategyAlly_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AStrategyAlly();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIStrategy_NoRegister();
// End Cross Module References
	void AStrategyAlly::StaticRegisterNativesAStrategyAlly()
	{
	}
	UClass* Z_Construct_UClass_AStrategyAlly_NoRegister()
	{
		return AStrategyAlly::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyAlly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyAlly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyAlly_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyAlly.h" },
		{ "ModuleRelativePath", "StrategyAlly.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyAlly_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyAlly, IIStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyAlly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyAlly>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyAlly_Statics::ClassParams = {
		&AStrategyAlly::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategyAlly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyAlly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyAlly()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyAlly_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyAlly, 4225011980);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AStrategyAlly>()
	{
		return AStrategyAlly::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyAlly(Z_Construct_UClass_AStrategyAlly, &AStrategyAlly::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AStrategyAlly"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyAlly);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
