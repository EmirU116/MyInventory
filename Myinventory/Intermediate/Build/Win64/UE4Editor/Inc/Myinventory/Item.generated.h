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

#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_SPARSE_DATA
#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_RPC_WRAPPERS
#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Myinventory"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	virtual UObject* _getUObject() const override { return const_cast<AItem*>(this); }


#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Myinventory"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	virtual UObject* _getUObject() const override { return const_cast<AItem*>(this); }


#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_STANDARD_CONSTRUCTORS \
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


#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemMesh() { return STRUCT_OFFSET(AItem, ItemMesh); }


#define Myinventory_Source_Myinventory_Public_Actors_Item_h_10_PROLOG
#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_SPARSE_DATA \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_RPC_WRAPPERS \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_INCLASS \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Myinventory_Source_Myinventory_Public_Actors_Item_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_SPARSE_DATA \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_INCLASS_NO_PURE_DECLS \
	Myinventory_Source_Myinventory_Public_Actors_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYINVENTORY_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Myinventory_Source_Myinventory_Public_Actors_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
