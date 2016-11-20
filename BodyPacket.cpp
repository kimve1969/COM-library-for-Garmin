// BodyPacket.cpp : Implementation of CBodyPacket
#include "stdafx.h"
#include "Garmin.h"
#include "BodyPacket.h"

/////////////////////////////////////////////////////////////////////////////
// CBodyPacket

STDMETHODIMP CBodyPacket::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IBodyPacket,
		&IID_IHelperBodyPacket
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CBodyPacket::FinalConstruct(void)
{
	// TODO: Add your implementation code here
	return S_OK;
}

STDMETHODIMP_(void) CBodyPacket::FinalRelease()
{
}

