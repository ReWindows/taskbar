#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace CTaskBand {
class CTaskItemSite {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskItemSite@CTaskBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskItemSite@CTaskBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskItemSite@CTaskBand@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CTaskBand
