// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SUBEARTH_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define SUBEARTH_Pickup_generated_h

#define SubEarth_Source_SubEarth_Pickup_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerHandOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerHandOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SubEarth_Source_SubEarth_Pickup_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerHandOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerHandOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SubEarth_Source_SubEarth_Pickup_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPickup(); \
	friend SUBEARTH_API class UClass* Z_Construct_UClass_APickup(); \
	public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubEarth"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SubEarth_Source_SubEarth_Pickup_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAPickup(); \
	friend SUBEARTH_API class UClass* Z_Construct_UClass_APickup(); \
	public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubEarth"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SubEarth_Source_SubEarth_Pickup_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define SubEarth_Source_SubEarth_Pickup_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define SubEarth_Source_SubEarth_Pickup_h_8_PROLOG
#define SubEarth_Source_SubEarth_Pickup_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SubEarth_Source_SubEarth_Pickup_h_11_RPC_WRAPPERS \
	SubEarth_Source_SubEarth_Pickup_h_11_INCLASS \
	SubEarth_Source_SubEarth_Pickup_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SubEarth_Source_SubEarth_Pickup_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SubEarth_Source_SubEarth_Pickup_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SubEarth_Source_SubEarth_Pickup_h_11_INCLASS_NO_PURE_DECLS \
	SubEarth_Source_SubEarth_Pickup_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SubEarth_Source_SubEarth_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
