// D800_Pvt_Data_Type.cpp : Implementation of CD800_Pvt_Data_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D800_Pvt_Data_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD800_Pvt_Data_Type

STDMETHODIMP CD800_Pvt_Data_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID800_Pvt_Data_Type,
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

STDMETHODIMP CD800_Pvt_Data_Type::_Exchange()
{
	return S_OK;
}