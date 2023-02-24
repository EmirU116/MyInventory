// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYINVENTORY_InteractableInterface_generated_h
#error "InteractableInterface.generated.h already included, missing '#pragma once' in InteractableInterface.h"
#endif
#define MYINVENTORY_InteractableInterface_generated_h

#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_SPARSE_DATA
#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_RPC_WRAPPERS
#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYINVENTORY_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYINVENTORY_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYINVENTORY_API UInteractableInterface(UInteractableInterface&&); \
	MYINVENTORY_API UInteractableInterface(const UInteractableInterface&); \
public:


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYINVENTORY_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYINVENTORY_API UInteractableInterface(UInteractableInterface&&); \
	MYINVENTORY_API UInteractableInterface(const UInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYINVENTORY_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface)


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInterface(); \
	friend struct Z_Construct_UClass_UInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Myinventory"), MYINVENTORY_API) \
	DECLARE_SERIALIZER(UInteractableInterface)


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_10_PROLOG
#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_SPARSE_DATA \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_RPC_WRAPPERS \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Myinventory_Source_Myinventory_Public_InteractableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_SPARSE_DATA \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Myinventory_Source_Myinventory_Public_InteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYINVENTORY_API UClass* StaticClass<class UInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Myinventory_Source_Myinventory_Public_InteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
