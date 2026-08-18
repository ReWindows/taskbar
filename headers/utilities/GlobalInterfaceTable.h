#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
class GlobalInterfaceTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revoke@GlobalInterfaceTable@@SAXK@Z
    static void Revoke(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Retrieve@GlobalInterfaceTable@@CAJXZ
    static long s_Retrieve();
};
