#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
class CTrayDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTrayDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CTrayDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CTrayDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CTrayDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CTrayDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTrayDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTrayDropTarget@@UEAAKXZ
    virtual unsigned long Release();
};
