// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Myinventory/Public/Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruct() {}
// Cross Module References
	MYINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_Myinventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYINVENTORY_API UClass* Z_Construct_UClass_AItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, Z_Construct_UPackage__Script_Myinventory(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> MYINVENTORY_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemCost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_itemClass_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Struct.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemData, itemClass), Z_Construct_UClass_AItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_itemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_itemClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemImage_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Struct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemData, ItemImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCost_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Struct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCost = { "ItemCost", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemData, ItemCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCost,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Myinventory,
		nullptr,
		&NewStructOps,
		"ItemData",
		sizeof(FItemData),
		alignof(FItemData),
		Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Myinventory_5_0_Source_Myinventory_Public_Struct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Myinventory_5_0_Source_Myinventory_Public_Struct_h_Statics::ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 3539743293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Myinventory_5_0_Source_Myinventory_Public_Struct_h_1461270408(TEXT("/Script/Myinventory"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Myinventory_5_0_Source_Myinventory_Public_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Myinventory_5_0_Source_Myinventory_Public_Struct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
