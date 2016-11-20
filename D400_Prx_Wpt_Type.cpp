// D400_Prx_Wpt_Type.cpp : Implementation of CD400_Prx_Wpt_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D400_Prx_Wpt_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD400_Prx_Wpt_Type

STDMETHODIMP CD400_Prx_Wpt_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID400_Prx_Wpt_Type,
		&IID_IGarminDataType,
		&IID_IDXXX_Prx_Wpt_Type,
		&IID_IBodyPacket
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CD400_Prx_Wpt_Type::_Exchange()
{
	return S_OK;
}
