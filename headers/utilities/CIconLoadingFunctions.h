#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
class CIconLoadingFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z
    virtual long ConvertIconToBitmap(HICON__*, tagSIZE const &, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassLongPtrW@CIconLoadingFunctions@@UEAA_KPEAUHWND__@@H@Z
    virtual uint64_t GetClassLongPtrW(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidIcon@CIconLoadingFunctions@@UEAA_NPEAUHICON__@@@Z
    virtual bool IsValidIcon(HICON__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadIconW@CIconLoadingFunctions@@UEAAPEAUHICON__@@PEAUHINSTANCE__@@PEBG@Z
    virtual HICON__* LoadIconW(HINSTANCE__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageCallbackW@CIconLoadingFunctions@@UEAAHPEAUHWND__@@I_K_JP6AX0I12@Z1@Z
    virtual int SendMessageCallbackW(HWND__*, unsigned int, uint64_t, int64_t, void ( *)(HWND__*, unsigned int, uint64_t, int64_t), uint64_t);
};
