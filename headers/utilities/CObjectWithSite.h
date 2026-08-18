#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class CObjectWithSite {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CObjectWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CObjectWithSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObjectWithSite@@UEAA@XZ
    virtual ~CObjectWithSite();
};
