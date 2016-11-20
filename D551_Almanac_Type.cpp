// D551_Almanac_Type.cpp : Implementation of CD551_Almanac_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D551_Almanac_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD551_Almanac_Type

STDMETHODIMP CD551_Almanac_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID551_Almanac_Type,
		&IID_IGarminDataType,
		&IID_IDXXX_Almanac_Type,
		&IID_IBodyPacket
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CD551_Almanac_Type::_Exchange()
{
	return S_OK;
}
