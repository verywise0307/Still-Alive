// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/churuswamp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodechuruswamp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Achuruswamp();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Achuruswamp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	void Achuruswamp::StaticRegisterNativesAchuruswamp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Achuruswamp);
	UClass* Z_Construct_UClass_Achuruswamp_NoRegister()
	{
		return Achuruswamp::StaticClass();
	}
	struct Z_Construct_UClass_Achuruswamp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Achuruswamp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Achuruswamp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "churuswamp.h" },
		{ "ModuleRelativePath", "churuswamp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Achuruswamp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Achuruswamp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Achuruswamp_Statics::ClassParams = {
		&Achuruswamp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Achuruswamp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Achuruswamp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Achuruswamp()
	{
		if (!Z_Registration_Info_UClass_Achuruswamp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Achuruswamp.OuterSingleton, Z_Construct_UClass_Achuruswamp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Achuruswamp.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Achuruswamp>()
	{
		return Achuruswamp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Achuruswamp);
	Achuruswamp::~Achuruswamp() {}
	struct Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_churuswamp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_churuswamp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Achuruswamp, Achuruswamp::StaticClass, TEXT("Achuruswamp"), &Z_Registration_Info_UClass_Achuruswamp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Achuruswamp), 4196006978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_churuswamp_h_666697650(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_churuswamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_churuswamp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
