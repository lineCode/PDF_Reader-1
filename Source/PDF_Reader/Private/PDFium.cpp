// Fill out your copyright notice in the Description page of Project Settings.


#include "PDFium.h"

PDFium::PDFium()
{
}

PDFium::~PDFium()
{
}

int32 PDFium::PDF_PageCount(FPDF_DOCUMENT Document)
{
	if (!Document)
	{
		return 0;
	}

	return FPDF_GetPageCount(Document);
}