// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYINVENTORY_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MYINVENTORY_Item_generated_h

#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_SPARSE_DATA
#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_RPC_WRAPPERS
#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Myinventory"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	virtual UObject* _getUObject() const override { return const_cast<AItem*>(this); }


#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Myinventory"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	virtual UObject* _getUObject() const override { return const_cast<AItem*>(this); }


#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_12_PROLOG
#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_SPARSE_DATA \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_RPC_WRAPPERS \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_INCLASS \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_SPARSE_DATA \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_INCLASS_NO_PURE_DECLS \
	FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYINVENTORY_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Myinventory_5_0_Source_Myinventory_Public_Actors_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
