#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
namespace AutoHideTelemetry::TaskbarAutoHideTelemetry {
class AutoHideOnTaskbarHide {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHideStop@AutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAAXW4HideStopReason@3@PEAUHMONITOR__@@_N@Z
    void AutoHideStop(int, HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHideStopMouseHover@AutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAAXPEAUHMONITOR__@@PEAUtagPOINT@@PEAUtagRECT@@_N@Z
    void AutoHideStopMouseHover(HMONITOR__*, tagPOINT *, tagRECT *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHideStopTrayActive@AutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAAXPEAUHMONITOR__@@PEAUHWND__@@@Z
    void AutoHideStopTrayActive(HMONITOR__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAAXW4ShellMode@TrayCommon@@PEAUHMONITOR__@@@Z
    void StartActivity(int, HMONITOR__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAA@XZ
    ~AutoHideOnTaskbarHide();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AutoHideTelemetry::TaskbarAutoHideTelemetry
