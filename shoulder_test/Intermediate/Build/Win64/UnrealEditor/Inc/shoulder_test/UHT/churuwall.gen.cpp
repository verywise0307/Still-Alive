// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/churuwall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodechuruwall() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Achuruwall();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Achuruwall_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	void Achuruwall::StaticRegisterNativesAchuruwall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Achuruwall);
	UClass* Z_Construct_UClass_Achuruwall_NoRegister()
	{
		return Achuruwall::StaticClass();
	}
	struct Z_Construct_UClass_Achuruwall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Achuruwall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Achuruwall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "churuwall.h" },
		{ "ModuleRelativePath", "churuwall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Achuruwall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Achuruwall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Achuruwall_Statics::ClassParams = {
		&Achuruwall::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Achuruwall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Achuruwall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Achuruwall()
	{
		if (!Z_Registration_Info_UClass_Achuruwall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Achuruwall.OuterSingleton, Z_Construct_UClass_Achuruwall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Achuruwall.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Achuruwall>()
	{
		return Achuruwall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Achuruwall);
	Achuruwall::~Achuruwall() {}
	struct Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_churuwall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_churuwall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Achuruwall, Achuruwall::StaticClass, TEXT("Achuruwall"), &Z_Registration_Info_UClass_Achuruwall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Achuruwall), 2039564081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_churuwall_h_1406997463(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_churuwall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_churuwall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
