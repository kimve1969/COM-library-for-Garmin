// D700_Position_Type.cpp : Implementation of CD700_Position_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D700_Position_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD700_Position_Type

STDMETHODIMP CD700_Position_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID700_Position_Type,
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


STDMETHODIMP CD700_Position_Type::_Exchange()
{
	return S_OK;
}