#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
class CImmersiveColor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z
    static unsigned long GetColor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z
    static bool IsColorSchemeChangeMessage(unsigned int, int64_t);
};
