// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstLearn/FirstLearnGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstLearnGameModeBase() {}
// Cross Module References
	FIRSTLEARN_API UClass* Z_Construct_UClass_AFirstLearnGameModeBase_NoRegister();
	FIRSTLEARN_API UClass* Z_Construct_UClass_AFirstLearnGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstLearn();
// End Cross Module References
	void AFirstLearnGameModeBase::StaticRegisterNativesAFirstLearnGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstLearnGameModeBase);
	UClass* Z_Construct_UClass_AFirstLearnGameModeBase_NoRegister()
	{
		return AFirstLearnGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstLearnGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstLearnGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstLearn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstLearnGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstLearnGameModeBase.h" },
		{ "ModuleRelativePath", "FirstLearnGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstLearnGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstLearnGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstLearnGameModeBase_Statics::ClassParams = {
		&AFirstLearnGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFirstLearnGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstLearnGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstLearnGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFirstLearnGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstLearnGameModeBase.OuterSingleton, Z_Construct_UClass_AFirstLearnGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstLearnGameModeBase.OuterSingleton;
	}
	template<> FIRSTLEARN_API UClass* StaticClass<AFirstLearnGameModeBase>()
	{
		return AFirstLearnGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstLearnGameModeBase);
	struct Z_CompiledInDeferFile_FID_FirstLearn_Source_FirstLearn_FirstLearnGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstLearn_Source_FirstLearn_FirstLearnGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstLearnGameModeBase, AFirstLearnGameModeBase::StaticClass, TEXT("AFirstLearnGameModeBase"), &Z_Registration_Info_UClass_AFirstLearnGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstLearnGameModeBase), 3922914323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstLearn_Source_FirstLearn_FirstLearnGameModeBase_h_2905102020(TEXT("/Script/FirstLearn"),
		Z_CompiledInDeferFile_FID_FirstLearn_Source_FirstLearn_FirstLearnGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstLearn_Source_FirstLearn_FirstLearnGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
