// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/CrazyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrazyState() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ACrazyState_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ACrazyState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIHendrixState_NoRegister();
// End Cross Module References
	void ACrazyState::StaticRegisterNativesACrazyState()
	{
	}
	UClass* Z_Construct_UClass_ACrazyState_NoRegister()
	{
		return ACrazyState::StaticClass();
	}
	struct Z_Construct_UClass_ACrazyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrazyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrazyState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrazyState.h" },
		{ "ModuleRelativePath", "CrazyState.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACrazyState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIHendrixState_NoRegister, (int32)VTABLE_OFFSET(ACrazyState, IIHendrixState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrazyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrazyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrazyState_Statics::ClassParams = {
		&ACrazyState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACrazyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrazyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrazyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrazyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrazyState, 1097405420);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ACrazyState>()
	{
		return ACrazyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrazyState(Z_Construct_UClass_ACrazyState, &ACrazyState::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ACrazyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrazyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
