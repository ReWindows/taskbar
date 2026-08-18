#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class WindowsStoreHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinStoreApp@WindowsStoreHelpers@@YA_NXZ
    bool CanPinStoreApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStoreAppID@WindowsStoreHelpers@@YA_NPEBG@Z
    bool IsStoreAppID(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStorePidl@WindowsStoreHelpers@@YA_NPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    bool IsStorePidl(_ITEMIDLIST_ABSOLUTE *);
};
