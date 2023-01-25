// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PDF_ReaderBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
* 
*	PDFium Binaries
*	https://github.com/bblanchon/pdfium-binaries/releases
*/
UCLASS()
class UPDF_ReaderBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
		
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Open PDF Library", Keywords = "pdf, pdfium, library, lib, open"), Category = "PDF_Reader|System")
	static void PDF_LibInit();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close PDF Library", Keywords = "pdf, pdfium, library, lib, close"), Category = "PDF_Reader|System")
	static void PDF_LibClose();
		
	/**
	* If you want to view a PDF file from online, you need to convert it to byte array (Low Entry HTTP plugin can do that) and attach it to respective input.
	* If you want to view local PDF file, use "Platform File Name" instead normalized file name as standart for Unreal Engine. Also you need to attach an "empty array" to InBytes.
	* @param InPath Use platform file name in here.
	* @param Sampling Default value is "1". It generates textures as its default resolution. But "2" gives better result
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get PDF as Texture", Keywords = "pdf, pdfium, read, texture, image"), Category = "PDF_Reader|Read")
	static bool PDF_Read(TMap<UTexture2D*, FVector2D>& OutPages, bool bUseDebug, FString InPath, TArray<uint8> InBytes, FString InPDF_Pass, double Sampling = 1.0);
	
};
