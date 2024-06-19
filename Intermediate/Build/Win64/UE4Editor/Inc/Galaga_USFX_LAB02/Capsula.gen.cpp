// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/Capsula.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsula() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ACapsula_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ACapsula();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIHandleCapsules_NoRegister();
// End Cross Module References
	void ACapsula::StaticRegisterNativesACapsula()
	{
	}
	UClass* Z_Construct_UClass_ACapsula_NoRegister()
	{
		return ACapsula::StaticClass();
	}
	struct Z_Construct_UClass_ACapsula_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaCapsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaCapsula;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsula_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Capsula.h" },
		{ "ModuleRelativePath", "Capsula.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsula_Statics::NewProp_mallaCapsula_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "//FString TipoCapsula;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Capsula.h" },
		{ "ToolTip", "FString TipoCapsula;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsula_Statics::NewProp_mallaCapsula = { "mallaCapsula", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsula, mallaCapsula), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::NewProp_mallaCapsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::NewProp_mallaCapsula_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapsula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsula_Statics::NewProp_mallaCapsula,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACapsula_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIHandleCapsules_NoRegister, (int32)VTABLE_OFFSET(ACapsula, IIHandleCapsules), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsula_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsula>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsula_Statics::ClassParams = {
		&ACapsula::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACapsula_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsula_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsula_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsula()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsula_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsula, 3117194706);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ACapsula>()
	{
		return ACapsula::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsula(Z_Construct_UClass_ACapsula, &ACapsula::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ACapsula"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsula);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
