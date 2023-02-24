// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Myinventory/MyinventoryGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyinventoryGameMode() {}
// Cross Module References
	MYINVENTORY_API UClass* Z_Construct_UClass_AMyinventoryGameMode_NoRegister();
	MYINVENTORY_API UClass* Z_Construct_UClass_AMyinventoryGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Myinventory();
// End Cross Module References
	void AMyinventoryGameMode::StaticRegisterNativesAMyinventoryGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyinventoryGameMode_NoRegister()
	{
		return AMyinventoryGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyinventoryGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyinventoryGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Myinventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyinventoryGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyinventoryGameMode.h" },
		{ "ModuleRelativePath", "MyinventoryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyinventoryGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyinventoryGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyinventoryGameMode_Statics::ClassParams = {
		&AMyinventoryGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyinventoryGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyinventoryGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyinventoryGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyinventoryGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyinventoryGameMode, 3444626231);
	template<> MYINVENTORY_API UClass* StaticClass<AMyinventoryGameMode>()
	{
		return AMyinventoryGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyinventoryGameMode(Z_Construct_UClass_AMyinventoryGameMode, &AMyinventoryGameMode::StaticClass, TEXT("/Script/Myinventory"), TEXT("AMyinventoryGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyinventoryGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
