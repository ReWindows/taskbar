#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
class TrayDPIHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPIForMonitor@TrayDPIHelpers@@YAIPEAUHMONITOR__@@@Z
    unsigned int GetDPIForMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPIForMonitorWindow@TrayDPIHelpers@@YAIPEAUHWND__@@@Z
    unsigned int GetDPIForMonitorWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeMargins@TrayDPIHelpers@@YAJPEAXPEAUHDC__@@HHHPEBUtagRECT@@PEAU_MARGINS@@I@Z
    long GetThemeMargins(void *, HDC__*, int, int, int, tagRECT const *, _MARGINS *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleByDPI@TrayDPIHelpers@@YAXPEAU_MARGINS@@IW4ScaleModifier@1@@Z
    void ScaleByDPI(_MARGINS *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleByDPI@TrayDPIHelpers@@YAHHIW4ScaleModifier@1@@Z
    int ScaleByDPI(int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleByPerMonitorDPI@TrayDPIHelpers@@YAHHPEAUHMONITOR__@@@Z
    int ScaleByPerMonitorDPI(int, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleBySystemDPI@TrayDPIHelpers@@YAHH@Z
    int ScaleBySystemDPI(int);
};
