#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class DPIToPPIHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z
    long DrawThemeTextExPPI(HWND__*, int, unsigned int *, void *, HDC__*, int, int, unsigned short const *, int, unsigned long, tagRECT *, _DTTOPTS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z
    long GetThemeTextExtentPPI(HWND__*, int, unsigned int *, void *, HDC__*, int, int, unsigned short const *, int, unsigned long, _DTTOPTS *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z
    int ScaleByPPI(int, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z
    int ScaleBySpecificDPI(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z
    int ScaleByType(int, int, HWND__*, int, int);
};
