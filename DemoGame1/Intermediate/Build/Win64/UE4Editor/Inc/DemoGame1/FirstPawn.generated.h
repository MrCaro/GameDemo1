// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMOGAME1_FirstPawn_generated_h
#error "FirstPawn.generated.h already included, missing '#pragma once' in FirstPawn.h"
#endif
#define DEMOGAME1_FirstPawn_generated_h

#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_SPARSE_DATA
#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_RPC_WRAPPERS
#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPawn(); \
	friend struct Z_Construct_UClass_AFirstPawn_Statics; \
public: \
	DECLARE_CLASS(AFirstPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoGame1"), NO_API) \
	DECLARE_SERIALIZER(AFirstPawn)


#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPawn(); \
	friend struct Z_Construct_UClass_AFirstPawn_Statics; \
public: \
	DECLARE_CLASS(AFirstPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoGame1"), NO_API) \
	DECLARE_SERIALIZER(AFirstPawn)


#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPawn(AFirstPawn&&); \
	NO_API AFirstPawn(const AFirstPawn&); \
public:


#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPawn(AFirstPawn&&); \
	NO_API AFirstPawn(const AFirstPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPawn)


#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AFirstPawn, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFirstPawn, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFirstPawn, FollowCamera); }


#define DemoGame1_Source_DemoGame1_FirstPawn_h_9_PROLOG
#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_SPARSE_DATA \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_RPC_WRAPPERS \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_INCLASS \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemoGame1_Source_DemoGame1_FirstPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_SPARSE_DATA \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_INCLASS_NO_PURE_DECLS \
	DemoGame1_Source_DemoGame1_FirstPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOGAME1_API UClass* StaticClass<class AFirstPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemoGame1_Source_DemoGame1_FirstPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
