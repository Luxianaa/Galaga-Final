// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/StrategyDeluxe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyDeluxe() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AStrategyDeluxe_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AStrategyDeluxe();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIStrategyPawn_NoRegister();
// End Cross Module References
	void AStrategyDeluxe::StaticRegisterNativesAStrategyDeluxe()
	{
	}
	UClass* Z_Construct_UClass_AStrategyDeluxe_NoRegister()
	{
		return AStrategyDeluxe::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyDeluxe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyDeluxe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyDeluxe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyDeluxe.h" },
		{ "ModuleRelativePath", "StrategyDeluxe.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyDeluxe_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategyPawn_NoRegister, (int32)VTABLE_OFFSET(AStrategyDeluxe, IIStrategyPawn), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyDeluxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyDeluxe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyDeluxe_Statics::ClassParams = {
		&AStrategyDeluxe::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStrategyDeluxe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyDeluxe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyDeluxe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyDeluxe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyDeluxe, 3957892060);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AStrategyDeluxe>()
	{
		return AStrategyDeluxe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyDeluxe(Z_Construct_UClass_AStrategyDeluxe, &AStrategyDeluxe::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AStrategyDeluxe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyDeluxe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
