// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSteamSessions_init() {}
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AdvancedSteamSessions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions()
	{
		if (!Z_Registration_Info_UPackage__Script_AdvancedSteamSessions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvancedSteamSessions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x22063D5E,
				0xE97EE167,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AdvancedSteamSessions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AdvancedSteamSessions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AdvancedSteamSessions(Z_Construct_UPackage__Script_AdvancedSteamSessions, TEXT("/Script/AdvancedSteamSessions"), Z_Registration_Info_UPackage__Script_AdvancedSteamSessions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x22063D5E, 0xE97EE167));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
