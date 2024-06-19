// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/WeakState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeakState() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AWeakState_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AWeakState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIHendrixState_NoRegister();
// End Cross Module References
	void AWeakState::StaticRegisterNativesAWeakState()
	{
	}
	UClass* Z_Construct_UClass_AWeakState_NoRegister()
	{
		return AWeakState::StaticClass();
	}
	struct Z_Construct_UClass_AWeakState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeakState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeakState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeakState.h" },
		{ "ModuleRelativePath", "WeakState.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeakState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIHendrixState_NoRegister, (int32)VTABLE_OFFSET(AWeakState, IIHendrixState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeakState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeakState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeakState_Statics::ClassParams = {
		&AWeakState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeakState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeakState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeakState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeakState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeakState, 3590008091);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AWeakState>()
	{
		return AWeakState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeakState(Z_Construct_UClass_AWeakState, &AWeakState::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AWeakState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeakState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
