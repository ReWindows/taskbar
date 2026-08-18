#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class CTaskUnknown {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskUnknown@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskUnknown@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskUnknown@@UEAA@XZ
    virtual ~CTaskUnknown();
};
