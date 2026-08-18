#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 15 member(s).
class CLivePreviewWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLivePreviewWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLivePreviewWindow@@SAJPEAUIImmersiveApplication@@_NAEBUtagRECT@@2PEAUHINSTANCE__@@PEAPEAUILivePreviewWindow@@@Z
    static long CreateInstance(IImmersiveApplication *, bool, tagRECT const &, tagRECT const &, HINSTANCE__*, ILivePreviewWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveApp@CLivePreviewWindow@@UEAAJPEAPEAUIImmersiveApplication@@@Z
    virtual long GetImmersiveApp(IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewHWND@CLivePreviewWindow@@UEAAPEAUHWND__@@PEAUtagRECT@@@Z
    virtual HWND__* GetLivePreviewHWND(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualByApp@CLivePreviewWindow@@UEAA_NPEAUIImmersiveApplication@@@Z
    virtual bool IsEqualByApp(IImmersiveApplication *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLivePreviewWindow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLivePreviewWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLivePreviewWindow@@UEAA@XZ
    virtual ~CLivePreviewWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitThumbnailWindow@CLivePreviewWindow@@AEAAXAEBUtagRECT@@0PEAUHINSTANCE__@@@Z
    void _InitThumbnailWindow(tagRECT const &, tagRECT const &, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CLivePreviewWindow@@AEAAJAEBUtagRECT@@0PEAUHINSTANCE__@@@Z
    long _Initialize(tagRECT const &, tagRECT const &, HINSTANCE__*);
};
