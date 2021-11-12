// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netshoot/Private/OBJText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOBJText() {}
// Cross Module References
	NETSHOOT_API UClass* Z_Construct_UClass_AOBJText_NoRegister();
	NETSHOOT_API UClass* Z_Construct_UClass_AOBJText();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Netshoot();
// End Cross Module References
	void AOBJText::StaticRegisterNativesAOBJText()
	{
	}
	UClass* Z_Construct_UClass_AOBJText_NoRegister()
	{
		return AOBJText::StaticClass();
	}
	struct Z_Construct_UClass_AOBJText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOBJText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netshoot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOBJText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OBJText.h" },
		{ "ModuleRelativePath", "Private/OBJText.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOBJText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOBJText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOBJText_Statics::ClassParams = {
		&AOBJText::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOBJText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOBJText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOBJText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOBJText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOBJText, 92642991);
	template<> NETSHOOT_API UClass* StaticClass<AOBJText>()
	{
		return AOBJText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOBJText(Z_Construct_UClass_AOBJText, &AOBJText::StaticClass, TEXT("/Script/Netshoot"), TEXT("AOBJText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOBJText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
