// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_MyGameGameMode_generated_h
#error "MyGameGameMode.generated.h already included, missing '#pragma once' in MyGameGameMode.h"
#endif
#define MYGAME_MyGameGameMode_generated_h

#define MyGame_Source_MyGame_MyGameGameMode_h_9_RPC_WRAPPERS
#define MyGame_Source_MyGame_MyGameGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define MyGame_Source_MyGame_MyGameGameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyGameGameMode(); \
	friend MYGAME_API class UClass* Z_Construct_UClass_AMyGameGameMode(); \
	public: \
	DECLARE_CLASS(AMyGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyGame"), MYGAME_API) \
	DECLARE_SERIALIZER(AMyGameGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyGame_Source_MyGame_MyGameGameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAMyGameGameMode(); \
	friend MYGAME_API class UClass* Z_Construct_UClass_AMyGameGameMode(); \
	public: \
	DECLARE_CLASS(AMyGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyGame"), MYGAME_API) \
	DECLARE_SERIALIZER(AMyGameGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyGame_Source_MyGame_MyGameGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYGAME_API AMyGameGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYGAME_API, AMyGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYGAME_API AMyGameGameMode(AMyGameGameMode&&); \
	MYGAME_API AMyGameGameMode(const AMyGameGameMode&); \
public:


#define MyGame_Source_MyGame_MyGameGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYGAME_API AMyGameGameMode(AMyGameGameMode&&); \
	MYGAME_API AMyGameGameMode(const AMyGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYGAME_API, AMyGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameGameMode)


#define MyGame_Source_MyGame_MyGameGameMode_h_9_PRIVATE_PROPERTY_OFFSET
#define MyGame_Source_MyGame_MyGameGameMode_h_6_PROLOG
#define MyGame_Source_MyGame_MyGameGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyGame_Source_MyGame_MyGameGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	MyGame_Source_MyGame_MyGameGameMode_h_9_RPC_WRAPPERS \
	MyGame_Source_MyGame_MyGameGameMode_h_9_INCLASS \
	MyGame_Source_MyGame_MyGameGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyGame_Source_MyGame_MyGameGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyGame_Source_MyGame_MyGameGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	MyGame_Source_MyGame_MyGameGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	MyGame_Source_MyGame_MyGameGameMode_h_9_INCLASS_NO_PURE_DECLS \
	MyGame_Source_MyGame_MyGameGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyGame_Source_MyGame_MyGameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS