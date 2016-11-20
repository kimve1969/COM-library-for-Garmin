// D201_Rte_Hdr_Type.cpp : Implementation of CD201_Rte_Hdr_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D201_Rte_Hdr_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD201_Rte_Hdr_Type

STDMETHODIMP CD201_Rte_Hdr_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID201_Rte_Hdr_Type,
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

STDMETHODIMP CD201_Rte_Hdr_Type::_Exchange()
{
	return S_OK;
}

STDMETHODIMP CD201_Rte_Hdr_Type::_CheckDataLength()
{
	int xsize = sizeof(m_gdata);
	//xsize += m_ident.length() + m_comment.length() + m_facility.length() + m_city.length() + m_addr.length() + m_cross_road.length();

	if(xsize>MAX_LENGTH_OF_PACKET){
		this->Error("ERROR: ID201_Rte_Hdr_Type::_CheckDataLength() - exceed max length (255 bytes) of packet!");
		return E_INVALIDARG;
	}
	
	return S_OK;
}