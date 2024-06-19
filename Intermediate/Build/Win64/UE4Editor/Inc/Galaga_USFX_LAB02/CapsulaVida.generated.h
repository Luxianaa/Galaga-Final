// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFX_LAB02_CapsulaVida_generated_h
#error "CapsulaVida.generated.h already included, missing '#pragma once' in CapsulaVida.h"
#endif
#define GALAGA_USFX_LAB02_CapsulaVida_generated_h

#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_SPARSE_DATA
#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapsulaVida(); \
	friend struct Z_Construct_UClass_ACapsulaVida_Statics; \
public: \
	DECLARE_CLASS(ACapsulaVida, ACapsula, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(ACapsulaVida)


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACapsulaVida(); \
	friend struct Z_Construct_UClass_ACapsulaVida_Statics; \
public: \
	DECLARE_CLASS(ACapsulaVida, ACapsula, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(ACapsulaVida)


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapsulaVida(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapsulaVida) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapsulaVida); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapsulaVida); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapsulaVida(ACapsulaVida&&); \
	NO_API ACapsulaVida(const ACapsulaVida&); \
public:


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapsulaVida(ACapsulaVida&&); \
	NO_API ACapsulaVida(const ACapsulaVida&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapsulaVida); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapsulaVida); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapsulaVida)


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACapsulaVida, ProjectileMovement); }


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_13_PROLOG
#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_SPARSE_DATA \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_RPC_WRAPPERS \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_INCLASS \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_SPARSE_DATA \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_LAB02_API UClass* StaticClass<class ACapsulaVida>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_LAB02_New_Source_Galaga_USFX_LAB02_CapsulaVida_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
