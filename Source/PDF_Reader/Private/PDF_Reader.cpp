// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDF_Reader.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FPDF_ReaderModule"

void FPDF_ReaderModule::StartupModule()
{
#ifdef _WIN64
	const FString BasePluginDir = IPluginManager::Get().FindPlugin("PDF_READER")->GetBaseDir();
	const FString DLL_Path = FPaths::Combine(*BasePluginDir, TEXT("Source/PDF_Reader/ThirdParty/pdfium/Windows/lib/pdfium.dll"));
	PDFium_Handle = FPlatformProcess::GetDllHandle(*DLL_Path);

	if (PDFium_Handle != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("pdfium.dll loaded successfully!"));
	}

	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("pdfium.dll failed to load!"));
	}
#endif
}

void FPDF_ReaderModule::ShutdownModule()
{
#ifdef _WIN64
	FPlatformProcess::FreeDllHandle(PDFium_Handle);
	PDFium_Handle = nullptr;
#endif
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPDF_ReaderModule, PDF_Reader)