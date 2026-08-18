#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class CWRLObjectWithGITSite {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWRLObjectWithGITSite@@QEAA@XZ
    CWRLObjectWithGITSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWRLObjectWithGITSite@@IEAA@XZ
    ~CWRLObjectWithGITSite();
};
