// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/shoulder_testGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshoulder_testGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Ashoulder_testGameMode();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Ashoulder_testGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	void Ashoulder_testGameMode::StaticRegisterNativesAshoulder_testGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ashoulder_testGameMode);
	UClass* Z_Construct_UClass_Ashoulder_testGameMode_NoRegister()
	{
		return Ashoulder_testGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Ashoulder_testGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ashoulder_testGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "shoulder_testGameMode.h" },
		{ "ModuleRelativePath", "shoulder_testGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ashoulder_testGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ashoulder_testGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ashoulder_testGameMode_Statics::ClassParams = {
		&Ashoulder_testGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ashoulder_testGameMode()
	{
		if (!Z_Registration_Info_UClass_Ashoulder_testGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ashoulder_testGameMode.OuterSingleton, Z_Construct_UClass_Ashoulder_testGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ashoulder_testGameMode.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Ashoulder_testGameMode>()
	{
		return Ashoulder_testGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ashoulder_testGameMode);
	Ashoulder_testGameMode::~Ashoulder_testGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulder_testGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulder_testGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ashoulder_testGameMode, Ashoulder_testGameMode::StaticClass, TEXT("Ashoulder_testGameMode"), &Z_Registration_Info_UClass_Ashoulder_testGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ashoulder_testGameMode), 2877515223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulder_testGameMode_h_70415917(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulder_testGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulder_testGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
