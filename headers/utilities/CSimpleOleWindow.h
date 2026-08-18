#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 11 member(s).
class CSimpleOleWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpleOleWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpleOleWindow@@QEAA@PEAUHWND__@@@Z
    CSimpleOleWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CSimpleOleWindow@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClient@CSimpleOleWindow@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetClient(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSimpleOleWindow@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPosRectChangeDB@CSimpleOleWindow@@UEAAJPEAUtagRECT@@@Z
    virtual long OnPosRectChangeDB(tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpleOleWindow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpleOleWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClient@CSimpleOleWindow@@UEAAJPEAUIUnknown@@@Z
    virtual long SetClient(IUnknown *);
};
