//************************************************************************
//
// Bitmap.h
//
//************************************************************************

#ifndef _BITMAP_H_INCLUDED_ 
#define _BITMAP_H_INCLUDED_ 

#include <GdiPlus.h>

class cBitmap
{
public:
    cBitmap(void);
    virtual ~cBitmap(void);

    void Shutdown(void);
    void Detach(void);

    HRESULT LoadFromResource(HDC hDC, HINSTANCE hInstance, UINT nResourceID, LPCTSTR sResourceType);
    HRESULT LoadFromFile(HDC hDC, LPCTSTR sFilename);
    HRESULT LoadFromMemory(HDC hDC, LPVOID pBuffer, size_t nBufferSize);

    int GetWidth(void);
    int GetHeight(void);

    HBITMAP GetHBITMAP(void);

    BOOL IsValid() { return NULL != m_pGdiPlusBitmap; }

private:
    Gdiplus::Bitmap* m_pGdiPlusBitmap;
    HBITMAP m_hBM;
    int m_nWidth;
    int m_nHeight;
};


#endif // !_BITMAP_H_INCLUDED_ 

//** end of Bitmap.h *****************************************************
