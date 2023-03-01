// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemData;
#ifdef MYINVENTORY_MyinventoryCharacter_generated_h
#error "MyinventoryCharacter.generated.h already included, missing '#pragma once' in MyinventoryCharacter.h"
#endif
#define MYINVENTORY_MyinventoryCharacter_generated_h

#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_SPARSE_DATA
#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_RPC_WRAPPERS
#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_EVENT_PARMS \
	struct MyinventoryCharacter_eventAddItemToInventory_Parms \
	{ \
		FItemData ItemData; \
	};


#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_CALLBACK_WRAPPERS
#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyinventoryCharacter(); \
	friend struct Z_Construct_UClass_AMyinventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyinventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Myinventory"), NO_API) \
	DECLARE_SERIALIZER(AMyinventoryCharacter)


#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyinventoryCharacter(); \
	friend struct Z_Construct_UClass_AMyinventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyinventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Myinventory"), NO_API) \
	DECLARE_SERIALIZER(AMyinventoryCharacter)


#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyinventoryCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyinventoryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyinventoryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyinventoryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyinventoryCharacter(AMyinventoryCharacter&&); \
	NO_API AMyinventoryCharacter(const AMyinventoryCharacter&); \
public:


#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyinventoryCharacter(AMyinventoryCharacter&&); \
	NO_API AMyinventoryCharacter(const AMyinventoryCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyinventoryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyinventoryCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyinventoryCharacter)


#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_11_PROLOG \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_EVENT_PARMS


#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_SPARSE_DATA \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_RPC_WRAPPERS \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_CALLBACK_WRAPPERS \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_INCLASS \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_SPARSE_DATA \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_CALLBACK_WRAPPERS \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYINVENTORY_API UClass* StaticClass<class AMyinventoryCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Myinventory_5_0_Source_Myinventory_MyinventoryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
