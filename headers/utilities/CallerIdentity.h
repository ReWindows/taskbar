#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z
    long FindApplication(IUnknown *, HWND__*, IImmersiveApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApplication@CallerIdentity@@YAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z
    long FindApplication(HWND__*, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z
    long GetPackageFullNameFromAppId(unsigned short const *, unsigned short * *);
};
