// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_AMVRGE/UE4_AMVRGEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4_AMVRGEGameModeBase() {}
// Cross Module References
	UE4_AMVRGE_API UClass* Z_Construct_UClass_AUE4_AMVRGEGameModeBase_NoRegister();
	UE4_AMVRGE_API UClass* Z_Construct_UClass_AUE4_AMVRGEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4_AMVRGE();
// End Cross Module References
	void AUE4_AMVRGEGameModeBase::StaticRegisterNativesAUE4_AMVRGEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE4_AMVRGEGameModeBase_NoRegister()
	{
		return AUE4_AMVRGEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_AMVRGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4_AMVRGEGameModeBase.h" },
		{ "ModuleRelativePath", "UE4_AMVRGEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4_AMVRGEGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics::ClassParams = {
		&AUE4_AMVRGEGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4_AMVRGEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4_AMVRGEGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4_AMVRGEGameModeBase, 2874554504);
	template<> UE4_AMVRGE_API UClass* StaticClass<AUE4_AMVRGEGameModeBase>()
	{
		return AUE4_AMVRGEGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4_AMVRGEGameModeBase(Z_Construct_UClass_AUE4_AMVRGEGameModeBase, &AUE4_AMVRGEGameModeBase::StaticClass, TEXT("/Script/UE4_AMVRGE"), TEXT("AUE4_AMVRGEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4_AMVRGEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
