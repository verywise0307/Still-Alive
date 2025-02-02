// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/cattower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecattower() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Acattower();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Acattower_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	void Acattower::StaticRegisterNativesAcattower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Acattower);
	UClass* Z_Construct_UClass_Acattower_NoRegister()
	{
		return Acattower::StaticClass();
	}
	struct Z_Construct_UClass_Acattower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acattower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acattower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "cattower.h" },
		{ "ModuleRelativePath", "cattower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acattower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acattower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Acattower_Statics::ClassParams = {
		&Acattower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Acattower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acattower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acattower()
	{
		if (!Z_Registration_Info_UClass_Acattower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Acattower.OuterSingleton, Z_Construct_UClass_Acattower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Acattower.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Acattower>()
	{
		return Acattower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acattower);
	Acattower::~Acattower() {}
	struct Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_cattower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_cattower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Acattower, Acattower::StaticClass, TEXT("Acattower"), &Z_Registration_Info_UClass_Acattower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Acattower), 1775579730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_cattower_h_2301767274(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_cattower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_cattower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
