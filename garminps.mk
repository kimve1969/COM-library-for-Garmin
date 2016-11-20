
garminps.dll: dlldata.obj garmin_p.obj garmin_i.obj
	link /dll /out:garminps.dll /def:garminps.def /entry:DllMain dlldata.obj garmin_p.obj garmin_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del garminps.dll
	@del garminps.lib
	@del garminps.exp
	@del dlldata.obj
	@del garmin_p.obj
	@del garmin_i.obj
