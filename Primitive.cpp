// Primitive.cpp : Implementation of CPrimitive
#include "stdafx.h"
#include "Garmin.h"
#include "Primitive.h"

/////////////////////////////////////////////////////////////////////////////
// CPrimitive

STDMETHODIMP CPrimitive::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IPrimitive
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CPrimitive::FinalConstruct(void)
{
	// TODO: Add your implementation code here
	return S_OK;
}

// Данный метод будет вызван перед деструктором...
STDMETHODIMP_(void) CPrimitive::FinalRelease()
{
	m_vector.clear();
}

STDMETHODIMP CPrimitive::Add(VARIANT Val)
{
	// TODO: Add your implementation code here
	BYTE byte;
	switch(Val.vt){
	case VT_UI1:
		byte = Val.bVal;
		break;
	case VT_I2:
		byte = static_cast<BYTE>(Val.iVal);
		break;
	case VT_I4:
		byte = static_cast<BYTE>(Val.lVal);
		break;
	default:
		return DISP_E_TYPEMISMATCH;
	}
	
	m_vector.push_back(byte);

	return S_OK;
}

STDMETHODIMP CPrimitive::Clear()
{
	// TODO: Add your implementation code here
	m_vector.clear();

	return S_OK;
}

STDMETHODIMP CPrimitive::get_Count(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	VariantInit(pVal);

	pVal->vt	= VT_I4;	
	pVal->bVal	= m_vector.size();

	return S_OK;
}

STDMETHODIMP CPrimitive::Item(long Indx, VARIANT *pVal)
{
	// TODO: Add your implementation code here
	VariantInit(pVal);

	if(Indx>=0 && Indx<m_vector.size()){
		pVal->vt	= VT_UI2;
		pVal->bVal	= m_vector[Indx];
	}
	else{
		return E_FAIL;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_gfloat(float *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0.0;
	}
	else{
		BYTE bytes[sizeof(float)]={0};
		memset(bytes, 0, sizeof(bytes));

		float *p = (float*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_gfloat(float newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(float);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_gdouble(double *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0.0;
	}
	else{
		BYTE bytes[sizeof(double)]={0};
		memset(bytes, 0, sizeof(bytes));

		double *p = (double*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_gdouble(double newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(double);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_glong(long *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0;
	}
	else{
		BYTE bytes[sizeof(long)]={0};
		memset(bytes, 0, sizeof(bytes));

		long *p = (long*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_glong(long newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(long); i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_gint(short *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0;
	}
	else{
		BYTE bytes[sizeof(short)]={0};
		memset(bytes, 0, sizeof(bytes));

		short *p = (short*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_gint(short newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(short);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_gword(unsigned short *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0.0;
	}
	else{
		BYTE bytes[sizeof(unsigned short)]={0};
		memset(bytes, 0, sizeof(bytes));

		unsigned short *p = (unsigned short*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_gword(unsigned short newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(unsigned short);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_glongword(unsigned long *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0;
	}
	else{
		BYTE bytes[sizeof(unsigned long)]={0};
		memset(bytes, 0, sizeof(bytes));

		unsigned long *p = (unsigned long*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_glongword(unsigned long newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(unsigned long);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}


STDMETHODIMP CPrimitive::get_gsemicircles(long *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0;
	}
	else{
		BYTE bytes[sizeof(long)]={0};
		memset(bytes, 0, sizeof(bytes));

		long *p = (long*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_gsemicircles(long newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(long);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_gradians(double *pVal)
{
	// TODO: Add your implementation code here
	if(m_vector.size()==0){
		*pVal = 0.0;
	}
	else{
		BYTE bytes[sizeof(double)]={0};
		memset(bytes, 0, sizeof(bytes));

		double *p = (double*)&bytes[0];

		for(int i=0; i<m_vector.size() && i<sizeof(bytes) ; i++){
			bytes[i] = m_vector[i];
		}

		*pVal = *p;
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::put_gradians(double newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(double);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}

STDMETHODIMP CPrimitive::get_gdegrees_from_semicircles(double *pVal)
{
	// TODO: Add your implementation code here
	long temp;

	HRESULT hr = this->get_gsemicircles(&temp);
	if(FAILED(hr)) return hr;

	*pVal = temp * (180.0 / 2147483648);

	return S_OK;
}

STDMETHODIMP CPrimitive::get_gdegrees_from_radians(double *pVal)
{
	// TODO: Add your implementation code here
	double temp;

	HRESULT hr = this->get_gradians(&temp);
	if(FAILED(hr)) return hr;

	*pVal = temp * (180.0 / 3.1415926535897932384626433832795);

	return S_OK;
}

STDMETHODIMP CPrimitive::put_gdegrees(double newVal)
{
	// TODO: Add your implementation code here
	m_vector.clear();

	BYTE *p = (BYTE*)&newVal;
	for(int i=0; i<sizeof(double);i++){
		m_vector.push_back(*(p+i));
	}

	return S_OK;
}
