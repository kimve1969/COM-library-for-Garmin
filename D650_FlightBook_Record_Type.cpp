// D650_FlightBook_Record_Type.cpp : Implementation of CD650_FlightBook_Record_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D650_FlightBook_Record_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD650_FlightBook_Record_Type

STDMETHODIMP CD650_FlightBook_Record_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID650_FlightBook_Record_Type,
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

STDMETHODIMP CD650_FlightBook_Record_Type::_Exchange()
{
	return S_OK;
}