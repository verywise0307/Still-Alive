// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/ladder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeladder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Aladder();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Aladder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	void Aladder::StaticRegisterNativesAladder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aladder);
	UClass* Z_Construct_UClass_Aladder_NoRegister()
	{
		return Aladder::StaticClass();
	}
	struct Z_Construct_UClass_Aladder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aladder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aladder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ladder.h" },
		{ "ModuleRelativePath", "ladder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aladder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aladder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aladder_Statics::ClassParams = {
		&Aladder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aladder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aladder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aladder()
	{
		if (!Z_Registration_Info_UClass_Aladder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aladder.OuterSingleton, Z_Construct_UClass_Aladder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aladder.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Aladder>()
	{
		return Aladder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aladder);
	Aladder::~Aladder() {}
	struct Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_ladder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_ladder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aladder, Aladder::StaticClass, TEXT("Aladder"), &Z_Registration_Info_UClass_Aladder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aladder), 3275358079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_ladder_h_3897752479(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_ladder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_ladder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
