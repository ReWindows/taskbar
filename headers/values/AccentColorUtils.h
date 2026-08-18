#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class AccentColorUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HSLtoRGB@AccentColorUtils@@YAXMMMPEAK@Z
    void HSLtoRGB(float, float, float, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HSLtoRGB@AccentColorUtils@@YAXMMMPEAM00@Z
    void HSLtoRGB(float, float, float, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RGBFromHue@AccentColorUtils@@YAMMMM@Z
    float RGBFromHue(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RGBtoHSL@AccentColorUtils@@YAXKPEAM00@Z
    void RGBtoHSL(unsigned long, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RGBtoHSL@AccentColorUtils@@YAXMMMPEAM00@Z
    void RGBtoHSL(float, float, float, float *, float *, float *);
};
