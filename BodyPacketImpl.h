// BodyPacket.h : Declaration of the CBodyPacket

#ifndef __BODYPACKETIMPL_H_
#define __BODYPACKETIMPL_H_

#include "resource.h"       // main symbols
#include "garmin.h"
#include <vector>

using namespace std;

typedef vector<BYTE> BYTEVECTOR;

class ATL_NO_VTABLE CBodyPacketImpl : 	
	public IDispatchImpl<IBodyPacket, &IID_IBodyPacket, &LIBID_GARMINLib>,
	public IHelperBodyPacket
{
public:
	CBodyPacketImpl()
	{
		m_PacketID	= 0;
		m_bStatus	= TRUE;
		m_Mode		= ACCESS_RW;
	}

	virtual ~CBodyPacketImpl()
	{
		m_PacketData.clear();
	}

// IBodyPacket
public:
	STDMETHOD(SetNAKPacket)(/*[in]*/ VARIANT varPacketID);
	STDMETHOD(SetACKPacket)(/*[in]*/ VARIANT varPacketID);
	STDMETHOD(get_NAK)(/*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(get_ACK)(/*[out, retval]*/ VARIANT *pVal);

	STDMETHOD(Clear)();
	STDMETHOD(Item)(/*[in]*/ VARIANT varIndx, /*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(Add)(VARIANT Val);
	STDMETHOD(get_PacketID)(/*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(put_PacketID)(/*[in]*/ VARIANT newVal);
	STDMETHOD(get_Count)(/*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(get_Status)(/*[out, retval]*/ VARIANT *pVal);

// IHelperBodyPacket
	STDMETHOD(SetStatus)(BOOL bStat);
	STDMETHOD(SetAccess)(BODYPACKET_ACCESS bpacc);
	STDMETHOD(GetCRC)(VARIANT *pVal);

	STDMETHOD(_Import)(/*[in]*/ long xsize, /*[in, size_is(xsize)]*/ byte arr[]);
	STDMETHOD(_Export)(/*[out]*/ long* xsize, /*[out, size_is(,*xsize)]*/ byte** arr);

private:
	STDMETHOD(_CheckAccess)(BODYPACKET_USE_MODE _mode);

	BOOL				m_bStatus;
	BYTE				m_PacketID;
	BYTEVECTOR			m_PacketData;
	BODYPACKET_ACCESS	m_Mode;
};

#endif //__BODYPACKETIMPL_H_
