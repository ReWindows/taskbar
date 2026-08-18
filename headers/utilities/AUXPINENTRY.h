#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 10 member(s).
class AUXPINENTRY {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AUXPINENTRY@@QEAA@AEBU0@@Z
    AUXPINENTRY(AUXPINENTRY const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdList@AUXPINENTRY@@QEBAPEAU_ITEMIDLIST_ABSOLUTE@@_NPEA_N@Z
    _ITEMIDLIST_ABSOLUTE * GetIdList(bool, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandled@AUXPINENTRY@@QEBA_NXZ
    bool IsHandled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@AUXPINENTRY@@QEBA_NPEAUIPinnedList2@@@Z
    bool IsPinned(IPinnedList2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Match@AUXPINENTRY@@QEBA_NPEBG@Z
    bool Match(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetHandled@AUXPINENTRY@@QEBAXXZ
    void ResetHandled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPin@AUXPINENTRY@@QEBA_NPEAUIPinnedList2@@@Z
    bool ShouldPin(IPinnedList2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetHandled@AUXPINENTRY@@QEBAXXZ
    void TrySetHandled() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AUXPINENTRY@@QEAA@XZ
    ~AUXPINENTRY();
};
