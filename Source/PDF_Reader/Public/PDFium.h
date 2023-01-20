// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

THIRD_PARTY_INCLUDES_START
#include "fpdfview.h"
THIRD_PARTY_INCLUDES_END

/**
 * 
 */
class PDF_READER_API PDFium
{
public:
	PDFium();
	~PDFium();

	static int32 PDF_PageCount(FPDF_DOCUMENT Document);

};
