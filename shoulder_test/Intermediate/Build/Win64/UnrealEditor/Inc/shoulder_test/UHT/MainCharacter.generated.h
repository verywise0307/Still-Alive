// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SHOULDER_TEST_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define SHOULDER_TEST_MainCharacter_generated_h

#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_SPARSE_DATA
#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_ACCESSORS
#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/shoulder_test"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/shoulder_test"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	NO_API virtual ~AMainCharacter();


#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_11_PROLOG
#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_SPARSE_DATA \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_RPC_WRAPPERS \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_ACCESSORS \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_INCLASS \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_SPARSE_DATA \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_ACCESSORS \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOULDER_TEST_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
