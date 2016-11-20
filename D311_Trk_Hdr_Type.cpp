// D311_Trk_Hdr_Type.cpp : Implementation of CD311_Trk_Hdr_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D311_Trk_Hdr_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD311_Trk_Hdr_Type

STDMETHODIMP CD311_Trk_Hdr_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID311_Trk_Hdr_Type,
		&IID_IGarminDataType,
		&IID_IBodyPacket
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CD311_Trk_Hdr_Type::_Exchange()
{
	return S_OK;
}