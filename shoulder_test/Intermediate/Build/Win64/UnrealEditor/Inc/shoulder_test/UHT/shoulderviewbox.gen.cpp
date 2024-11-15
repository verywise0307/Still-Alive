// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/shoulderviewbox.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshoulderviewbox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Ashoulderviewbox();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Ashoulderviewbox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	DEFINE_FUNCTION(Ashoulderviewbox::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void Ashoulderviewbox::StaticRegisterNativesAshoulderviewbox()
	{
		UClass* Class = Ashoulderviewbox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &Ashoulderviewbox::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics
	{
		struct shoulderviewbox_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulderviewbox_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulderviewbox_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulderviewbox_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulderviewbox_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((shoulderviewbox_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(shoulderviewbox_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulderviewbox_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "shoulderviewbox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ashoulderviewbox, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::shoulderviewbox_eventOnBeginOverlap_Parms), Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ashoulderviewbox);
	UClass* Z_Construct_UClass_Ashoulderviewbox_NoRegister()
	{
		return Ashoulderviewbox::StaticClass();
	}
	struct Z_Construct_UClass_Ashoulderviewbox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ashoulderviewbox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Ashoulderviewbox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Ashoulderviewbox_OnBeginOverlap, "OnBeginOverlap" }, // 1802736222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulderviewbox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "shoulderviewbox.h" },
		{ "ModuleRelativePath", "shoulderviewbox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VictoryBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "shoulderviewbox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulderviewbox, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_RootScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VictoryBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "shoulderviewbox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulderviewbox, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_CollisionBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ashoulderviewbox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulderviewbox_Statics::NewProp_CollisionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ashoulderviewbox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ashoulderviewbox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ashoulderviewbox_Statics::ClassParams = {
		&Ashoulderviewbox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Ashoulderviewbox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulderviewbox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ashoulderviewbox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulderviewbox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ashoulderviewbox()
	{
		if (!Z_Registration_Info_UClass_Ashoulderviewbox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ashoulderviewbox.OuterSingleton, Z_Construct_UClass_Ashoulderviewbox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ashoulderviewbox.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Ashoulderviewbox>()
	{
		return Ashoulderviewbox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ashoulderviewbox);
	Ashoulderviewbox::~Ashoulderviewbox() {}
	struct Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulderviewbox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulderviewbox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ashoulderviewbox, Ashoulderviewbox::StaticClass, TEXT("Ashoulderviewbox"), &Z_Registration_Info_UClass_Ashoulderviewbox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ashoulderviewbox), 3641494739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulderviewbox_h_1400285328(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulderviewbox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yena_Desktop_Still_Alive_shoulder_test_Source_shoulder_test_shoulderviewbox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
