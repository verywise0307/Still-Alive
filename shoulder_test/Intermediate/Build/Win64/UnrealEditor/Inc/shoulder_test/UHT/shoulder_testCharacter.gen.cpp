// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shoulder_test/shoulder_testCharacter.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshoulder_testCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Ashoulder_testCharacter();
	SHOULDER_TEST_API UClass* Z_Construct_UClass_Ashoulder_testCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_shoulder_test();
// End Cross Module References
	DEFINE_FUNCTION(Ashoulder_testCharacter::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ashoulder_testCharacter::execOnBeginOverlap)
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
	void Ashoulder_testCharacter::StaticRegisterNativesAshoulder_testCharacter()
	{
		UClass* Class = Ashoulder_testCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &Ashoulder_testCharacter::execOnBeginOverlap },
			{ "OnEndOverlap", &Ashoulder_testCharacter::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics
	{
		struct shoulder_testCharacter_eventOnBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((shoulder_testCharacter_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(shoulder_testCharacter_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ashoulder_testCharacter, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::shoulder_testCharacter_eventOnBeginOverlap_Parms), Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics
	{
		struct shoulder_testCharacter_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(shoulder_testCharacter_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ashoulder_testCharacter, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::shoulder_testCharacter_eventOnEndOverlap_Parms), Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ashoulder_testCharacter);
	UClass* Z_Construct_UClass_Ashoulder_testCharacter_NoRegister()
	{
		return Ashoulder_testCharacter::StaticClass();
	}
	struct Z_Construct_UClass_Ashoulder_testCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sidescroll_MetaData[];
#endif
		static void NewProp_sidescroll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sidescroll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stage3direaction_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stage3direaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canpush_MetaData[];
#endif
		static void NewProp_canpush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canpush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pushkey_MetaData[];
#endif
		static void NewProp_pushkey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_pushkey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ispushing_MetaData[];
#endif
		static void NewProp_ispushing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ispushing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canclimb_MetaData[];
#endif
		static void NewProp_canclimb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canclimb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_climbing_MetaData[];
#endif
		static void NewProp_climbing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_climbing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_climbingdown_MetaData[];
#endif
		static void NewProp_climbingdown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_climbingdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fighting_MetaData[];
#endif
		static void NewProp_fighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weapon_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pcattack_MetaData[];
#endif
		static void NewProp_pcattack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_pcattack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_swordhit_MetaData[];
#endif
		static void NewProp_swordhit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_swordhit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weapon_count_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_weapon_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_catnip_count_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_catnip_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_iscrouching_MetaData[];
#endif
		static void NewProp_iscrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_iscrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canhang_MetaData[];
#endif
		static void NewProp_canhang_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canhang;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hanging_MetaData[];
#endif
		static void NewProp_hanging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hanging;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ashoulder_testCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_shoulder_test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Ashoulder_testCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Ashoulder_testCharacter_OnBeginOverlap, "OnBeginOverlap" }, // 2229694824
		{ &Z_Construct_UFunction_Ashoulder_testCharacter_OnEndOverlap, "OnEndOverlap" }, // 3280371793
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "shoulder_testCharacter.h" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_sidescroll_MetaData[] = {
		{ "Category", "variable" },
		{ "Comment", "//\xc8\xbe\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "\xc8\xbe\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_sidescroll_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->sidescroll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_sidescroll = { "sidescroll", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_sidescroll_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_sidescroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_sidescroll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_stage3direaction_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_stage3direaction = { "stage3direaction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, stage3direaction), METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_stage3direaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_stage3direaction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canpush_MetaData[] = {
		{ "Category", "variable" },
		{ "Comment", "//\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\n" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canpush_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->canpush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canpush = { "canpush", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canpush_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canpush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canpush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pushkey_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pushkey_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->pushkey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pushkey = { "pushkey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pushkey_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pushkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pushkey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_ispushing_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_ispushing_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->ispushing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_ispushing = { "ispushing", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_ispushing_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_ispushing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_ispushing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canclimb_MetaData[] = {
		{ "Category", "variable" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\n" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canclimb_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->canclimb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canclimb = { "canclimb", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canclimb_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canclimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canclimb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbing_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbing_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->climbing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbing = { "climbing", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbingdown_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbingdown_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->climbingdown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbingdown = { "climbingdown", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbingdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbingdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbingdown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_fighting_MetaData[] = {
		{ "Category", "variable" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\n" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_fighting_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->fighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_fighting = { "fighting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_fighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_fighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_fighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, weapon), METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pcattack_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pcattack_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->pcattack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pcattack = { "pcattack", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pcattack_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pcattack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pcattack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_swordhit_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_swordhit_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->swordhit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_swordhit = { "swordhit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_swordhit_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_swordhit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_swordhit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_count_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_count = { "weapon_count", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, weapon_count), METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_catnip_count_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_catnip_count = { "catnip_count", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ashoulder_testCharacter, catnip_count), METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_catnip_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_catnip_count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_iscrouching_MetaData[] = {
		{ "Category", "variable" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_iscrouching_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->iscrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_iscrouching = { "iscrouching", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_iscrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_iscrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_iscrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canhang_MetaData[] = {
		{ "Category", "variable" },
		{ "Comment", "//\xef\xbf\xbd\xc5\xb4\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc5\xb4\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canhang_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->canhang = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canhang = { "canhang", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canhang_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canhang_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canhang_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_hanging_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "shoulder_testCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_hanging_SetBit(void* Obj)
	{
		((Ashoulder_testCharacter*)Obj)->hanging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_hanging = { "hanging", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ashoulder_testCharacter), &Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_hanging_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_hanging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_hanging_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ashoulder_testCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_sidescroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_stage3direaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canpush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pushkey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_ispushing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canclimb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_climbingdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_fighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_pcattack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_swordhit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_weapon_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_catnip_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_iscrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_canhang,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ashoulder_testCharacter_Statics::NewProp_hanging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ashoulder_testCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ashoulder_testCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ashoulder_testCharacter_Statics::ClassParams = {
		&Ashoulder_testCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Ashoulder_testCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ashoulder_testCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ashoulder_testCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ashoulder_testCharacter()
	{
		if (!Z_Registration_Info_UClass_Ashoulder_testCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ashoulder_testCharacter.OuterSingleton, Z_Construct_UClass_Ashoulder_testCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ashoulder_testCharacter.OuterSingleton;
	}
	template<> SHOULDER_TEST_API UClass* StaticClass<Ashoulder_testCharacter>()
	{
		return Ashoulder_testCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ashoulder_testCharacter);
	Ashoulder_testCharacter::~Ashoulder_testCharacter() {}
	struct Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_shoulder_testCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_shoulder_testCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ashoulder_testCharacter, Ashoulder_testCharacter::StaticClass, TEXT("Ashoulder_testCharacter"), &Z_Registration_Info_UClass_Ashoulder_testCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ashoulder_testCharacter), 3188778307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_shoulder_testCharacter_h_1600295478(TEXT("/Script/shoulder_test"),
		Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_shoulder_testCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_yena_meowment_shoulder_test_Source_shoulder_test_shoulder_testCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
