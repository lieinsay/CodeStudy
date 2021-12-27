// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODESTUDY_CodeStudyCharacter_generated_h
#error "CodeStudyCharacter.generated.h already included, missing '#pragma once' in CodeStudyCharacter.h"
#endif
#define CODESTUDY_CodeStudyCharacter_generated_h

#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_SPARSE_DATA
#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_RPC_WRAPPERS
#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodeStudyCharacter(); \
	friend struct Z_Construct_UClass_ACodeStudyCharacter_Statics; \
public: \
	DECLARE_CLASS(ACodeStudyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeStudy"), NO_API) \
	DECLARE_SERIALIZER(ACodeStudyCharacter)


#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACodeStudyCharacter(); \
	friend struct Z_Construct_UClass_ACodeStudyCharacter_Statics; \
public: \
	DECLARE_CLASS(ACodeStudyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeStudy"), NO_API) \
	DECLARE_SERIALIZER(ACodeStudyCharacter)


#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodeStudyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodeStudyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeStudyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeStudyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeStudyCharacter(ACodeStudyCharacter&&); \
	NO_API ACodeStudyCharacter(const ACodeStudyCharacter&); \
public:


#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeStudyCharacter(ACodeStudyCharacter&&); \
	NO_API ACodeStudyCharacter(const ACodeStudyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeStudyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeStudyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACodeStudyCharacter)


#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACodeStudyCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACodeStudyCharacter, FollowCamera); }


#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_9_PROLOG
#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_SPARSE_DATA \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_RPC_WRAPPERS \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_INCLASS \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_SPARSE_DATA \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CodeStudy_Source_CodeStudy_CodeStudyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODESTUDY_API UClass* StaticClass<class ACodeStudyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CodeStudy_Source_CodeStudy_CodeStudyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
