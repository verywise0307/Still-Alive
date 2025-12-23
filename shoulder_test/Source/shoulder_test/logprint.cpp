// Fill out your copyright notice in the Description page of Project Settings.


#include "logprint.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "UObject/UnrealType.h"

void Ulogprint::Shutdown()
{
	Super::Shutdown();

	UObject* RawGI = this;
	UClass* GIClass = RawGI->GetClass();

	static const FName LogVarName(TEXT("fulllog"));
	FStrProperty* StrProp = FindFProperty<FStrProperty>(GIClass, LogVarName);

	
	/*
	if (StrProp)
	{
		FString LogText = StrProp->GetPropertyValue_InContainer(RawGI);

		FString SavePath = FPaths::ProjectDir() / TEXT("Logoutput.txt");

		FString SaveDir = FPaths::GetPath(SavePath);
		IFileManager::Get().MakeDirectory(*SaveDir, true);

		FFileHelper::SaveStringToFile(
			LogText + LINE_TERMINATOR,
			*SavePath,
			FFileHelper::EEncodingOptions::AutoDetect,
			&IFileManager::Get(),
			FILEWRITE_Append
		);
	}*/
	
}
