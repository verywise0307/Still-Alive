// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/pushingbox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepushingbox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Apushingbox();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Apushingbox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	void Apushingbox::StaticRegisterNativesApushingbox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Apushingbox);
	UClass* Z_Construct_UClass_Apushingbox_NoRegister()
	{
		return Apushingbox::StaticClass();
	}
	struct Z_Construct_UClass_Apushingbox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Apushingbox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apushingbox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "pushingbox.h" },
		{ "ModuleRelativePath", "pushingbox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Apushingbox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Apushingbox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Apushingbox_Statics::ClassParams = {
		&Apushingbox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Apushingbox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Apushingbox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Apushingbox()
	{
		if (!Z_Registration_Info_UClass_Apushingbox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Apushingbox.OuterSingleton, Z_Construct_UClass_Apushingbox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Apushingbox.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Apushingbox>()
	{
		return Apushingbox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Apushingbox);
	Apushingbox::~Apushingbox() {}
	struct Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_pushingbox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_pushingbox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Apushingbox, Apushingbox::StaticClass, TEXT("Apushingbox"), &Z_Registration_Info_UClass_Apushingbox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Apushingbox), 3316776487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_pushingbox_h_2745277349(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_pushingbox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_pushingbox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
