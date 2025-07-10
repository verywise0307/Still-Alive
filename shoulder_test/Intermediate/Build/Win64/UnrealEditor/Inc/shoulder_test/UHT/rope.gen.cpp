// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/rope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderope() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Arope();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Arope_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	void Arope::StaticRegisterNativesArope()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Arope);
	UClass* Z_Construct_UClass_Arope_NoRegister()
	{
		return Arope::StaticClass();
	}
	struct Z_Construct_UClass_Arope_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Arope_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arope_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "rope.h" },
		{ "ModuleRelativePath", "rope.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Arope_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Arope>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Arope_Statics::ClassParams = {
		&Arope::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Arope_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Arope_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Arope()
	{
		if (!Z_Registration_Info_UClass_Arope.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Arope.OuterSingleton, Z_Construct_UClass_Arope_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Arope.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Arope>()
	{
		return Arope::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Arope);
	Arope::~Arope() {}
	struct Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_rope_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_rope_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Arope, Arope::StaticClass, TEXT("Arope"), &Z_Registration_Info_UClass_Arope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Arope), 272240696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_rope_h_2278068008(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_rope_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shoulder_test_Source_shoulder_test_rope_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
