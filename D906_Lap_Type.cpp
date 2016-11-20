// D906_Lap_Type.cpp : Implementation of CD906_Lap_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D906_Lap_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD906_Lap_Type

STDMETHODIMP CD906_Lap_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID906_Lap_Type,
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

STDMETHODIMP CD906_Lap_Type::_Exchange()
{
	return S_OK;
}