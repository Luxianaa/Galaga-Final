// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/CommandBomber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandBomber() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ACommandBomber_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ACommandBomber();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UICommand_NoRegister();
// End Cross Module References
	void ACommandBomber::StaticRegisterNativesACommandBomber()
	{
	}
	UClass* Z_Construct_UClass_ACommandBomber_NoRegister()
	{
		return ACommandBomber::StaticClass();
	}
	struct Z_Construct_UClass_ACommandBomber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACommandBomber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACommandBomber_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommandBomber.h" },
		{ "ModuleRelativePath", "CommandBomber.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACommandBomber_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UICommand_NoRegister, (int32)VTABLE_OFFSET(ACommandBomber, IICommand), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACommandBomber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACommandBomber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACommandBomber_Statics::ClassParams = {
		&ACommandBomber::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACommandBomber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACommandBomber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACommandBomber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACommandBomber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACommandBomber, 1376172295);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ACommandBomber>()
	{
		return ACommandBomber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACommandBomber(Z_Construct_UClass_ACommandBomber, &ACommandBomber::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ACommandBomber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACommandBomber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
