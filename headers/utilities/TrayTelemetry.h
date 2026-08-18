#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 13 member(s).
class TrayTelemetry {
public:
    class WindowArrangementContextMenu;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextMenuTaskbarSettings@TrayTelemetry@@SAXXZ
    static void ContextMenuTaskbarSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TrayTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogColorThemeChangedEvent_@TrayTelemetry@@QEBAXHHPEBG_N@Z
    void LogColorThemeChangedEvent_(int, int, unsigned short const *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryTrayMonitor_@TrayTelemetry@@QEBAXW4MonitorSwitchDerivation@1@QEAUHMONITOR__@@PEBUtagMONITORINFOEXW@@1@Z
    void SetPrimaryTrayMonitor_(int, HMONITOR__* const, tagMONITORINFOEXW const *, HMONITOR__* const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeWindowsComplete@TrayTelemetry@@SAXXZ
    static void SizeWindowsComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrayStuckRectChanged_@TrayTelemetry@@QEAAXPEBUtagRECT@@IUtagSIZE@@PEAUHMONITOR__@@_N@Z
    void TrayStuckRectChanged_(tagRECT const *, unsigned int, tagSIZE, HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTrayRects_@TrayTelemetry@@QEBAXW4TrayStuckUpdateType@1@PEBUtagRECT@@@Z
    void UpdateTrayRects_(int, tagRECT const *) const;
};
