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
#ifdef DEMOGAME1_OverlapActor_generated_h
#error "OverlapActor.generated.h already included, missing '#pragma once' in OverlapActor.h"
#endif
#define DEMOGAME1_OverlapActor_generated_h

#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_SPARSE_DATA
#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComponentHit); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComponentHit); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOverlapActor(); \
	friend struct Z_Construct_UClass_AOverlapActor_Statics; \
public: \
	DECLARE_CLASS(AOverlapActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoGame1"), NO_API) \
	DECLARE_SERIALIZER(AOverlapActor)


#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOverlapActor(); \
	friend struct Z_Construct_UClass_AOverlapActor_Statics; \
public: \
	DECLARE_CLASS(AOverlapActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoGame1"), NO_API) \
	DECLARE_SERIALIZER(AOverlapActor)


#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOverlapActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOverlapActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOverlapActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOverlapActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOverlapActor(AOverlapActor&&); \
	NO_API AOverlapActor(const AOverlapActor&); \
public:


#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOverlapActor(AOverlapActor&&); \
	NO_API AOverlapActor(const AOverlapActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOverlapActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOverlapActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOverlapActor)


#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_PRIVATE_PROPERTY_OFFSET
#define DemoGame1_Source_DemoGame1_OverlapActor_h_9_PROLOG
#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_PRIVATE_PROPERTY_OFFSET \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_SPARSE_DATA \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_RPC_WRAPPERS \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_INCLASS \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemoGame1_Source_DemoGame1_OverlapActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_PRIVATE_PROPERTY_OFFSET \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_SPARSE_DATA \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_INCLASS_NO_PURE_DECLS \
	DemoGame1_Source_DemoGame1_OverlapActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOGAME1_API UClass* StaticClass<class AOverlapActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemoGame1_Source_DemoGame1_OverlapActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
