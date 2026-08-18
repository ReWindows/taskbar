#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
class CPearlAccessibleWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?accDoDefaultAction@CPearlAccessibleWrapper@@UEAAJUtagVARIANT@@@Z
    virtual long accDoDefaultAction(tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accKeyboardShortcut@CPearlAccessibleWrapper@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accRole@CPearlAccessibleWrapper@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@CPearlAccessibleWrapper@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSelf@CPearlAccessibleWrapper@@AEBA_NPEAUtagVARIANT@@@Z
    bool _IsSelf(tagVARIANT *) const;
};
