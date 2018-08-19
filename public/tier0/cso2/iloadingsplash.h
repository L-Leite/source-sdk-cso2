#pragma once

#include <Windows.h>

abstract_class ICSO2LoadingSplash
{
public:
	virtual ~ICSO2LoadingSplash();

	virtual HANDLE StartLoadingScreenThread( HINSTANCE hInstance ) = 0;
	virtual void Unknown00() = 0; // retn
	virtual void EndLoadingScreenThread() = 0;
	virtual void SetLoadingText( const char* szText ) = 0;
	virtual bool IsShowingLoadingScreen() = 0;
	virtual void SetLoadingProgress( int iProgress ) = 0;
	virtual void InvalidateScreenRect() = 0;
};

PLATFORM_INTERFACE ICSO2LoadingSplash* GetCSO2LoadingSplash();