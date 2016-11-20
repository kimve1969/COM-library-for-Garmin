// BodyPackets.cpp : Implementation of CBodyPackets
#include "stdafx.h"
#include "Garmin.h"
#include "BodyPackets.h"

/////////////////////////////////////////////////////////////////////////////
// CBodyPackets

STDMETHODIMP CBodyPackets::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IBodyPackets
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CBodyPackets::FinalConstruct(void)
{
	// TODO: Add your implementation code here
	return S_OK;
}

// Данный метод будет вызван перед деструктором...
STDMETHODIMP_(void) CBodyPackets::FinalRelease()
{
	for(int i=0; i<m_vector.size();i++){
		m_vector.at(i)->Release();
	}
	m_vector.clear();
}

STDMETHODIMP CBodyPackets::Item(long index, IDispatch** ppdisp)
{
	// TODO: Add your implementation code here
	char buff[100];
	
	if(index>=0 && index<m_vector.size()){
		IDispatch* pdisp = m_vector[index];

		pdisp->AddRef();
		*ppdisp = m_vector[index];
	}
	else{
		sprintf(buff,"call Remove(%d) , index must be [0;%d-1]",index, m_vector.size());
		this->Error(buff);
		return E_INVALIDARG;
	}

	return S_OK;
}

STDMETHODIMP CBodyPackets::get_Count(long *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_vector.size();

	return S_OK;
}

STDMETHODIMP CBodyPackets::Add(IDispatch *pnewBodyPacket)
{
	// TODO: Add your implementation code here
	IBodyPacket *pBodyPacket = NULL;
	HRESULT hr = pnewBodyPacket->QueryInterface(IID_IBodyPacket, (void**)&pBodyPacket);
	if(FAILED(hr)){
		this->Error("ERROR: IBodyPackets::Add() - object must be have IBodyPacket interface!");
		return E_INVALIDARG;
	}

	IDispatch* pdisp = NULL;

	hr = pBodyPacket->QueryInterface(IID_IDispatch, (void**)&pdisp);
	if(FAILED(hr)){
		pBodyPacket->Release();
		this->Error("ERROR: IBodyPackets::Add() - object must be have IDispatch interface!");
		return E_INVALIDARG;
	}

	m_vector.push_back(pdisp);

	return S_OK;
}

STDMETHODIMP CBodyPackets::Remove(long index)
{
	// TODO: Add your implementation code here
	char buff[100];

	if(index>=0 && index<m_vector.size()){
		IDispatch* pdisp = m_vector.at(index);

		pdisp->Release();
		m_vector.erase(m_vector.begin()+index);
	}
	else{
		sprintf(buff,"call Remove(%d) , index must be [0;%d-1]",index, m_vector.size());
		this->Error(buff);
		return E_INVALIDARG;
	}

	return S_OK;
}

STDMETHODIMP CBodyPackets::get__NewEnum(LPUNKNOWN *pVal)
{
	// TODO: Add your implementation code here
	int size = m_vector.size();
	VARIANT* pVar = new VARIANT[size];

	for(int i=0; i<size ;i++){
		VariantInit(&pVar[i]);

		pVar[i].vt		 = VT_DISPATCH;
		pVar[i].pdispVal = m_vector[i];
	}

	typedef CComObject< CComEnum< IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _Copy< VARIANT > > > enumVar;

	enumVar* pEnumVar = new enumVar;

	pEnumVar->Init(&pVar[0], &pVar[size], NULL, AtlFlagCopy);

	delete[] pVar;

	HRESULT hr = pEnumVar->QueryInterface(IID_IUnknown, (void**)&pVal);
	if(FAILED(hr)) return hr;

	return S_OK;
}

