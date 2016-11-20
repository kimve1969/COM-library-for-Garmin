// D500_Almanac_Type.cpp : Implementation of CD500_Almanac_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D500_Almanac_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD500_Almanac_Type

STDMETHODIMP CD500_Almanac_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID500_Almanac_Type,
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

STDMETHODIMP CD500_Almanac_Type::_Exchange()
{
	return S_OK;
}
