#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
class HolographicViewHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z
    bool IsApplicationViewHolographic(IApplicationView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveApplicationHolographic@HolographicViewHelpers@@YA_NPEAUIUnknown@@PEAUIImmersiveApplication@@@Z
    bool IsImmersiveApplicationHolographic(IUnknown *, IImmersiveApplication *);
};
