// D301_Trk_Point_Type.cpp : Implementation of CD301_Trk_Point_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D301_Trk_Point_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD301_Trk_Point_Type

STDMETHODIMP CD301_Trk_Point_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID301_Trk_Point_Type,
		&IID_IGarminDataType,
		&IID_IDXXX_Trk_Point_Type,
		&IID_IBodyPacket
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CD301_Trk_Point_Type::_Exchange()
{
	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::get_lat(long *pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::put_lat(long newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::get_lon(long *pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::put_lon(long newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::get_time(unsigned long *pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::put_time(unsigned long newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::get_alt(float *pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::put_alt(float newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::get_dpth(float *pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::put_dpth(float newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::get_new_trk(BOOL *pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CD301_Trk_Point_Type::put_new_trk(BOOL newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}
