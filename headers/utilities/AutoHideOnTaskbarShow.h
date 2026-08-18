#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
namespace AutoHideTelemetry::TaskbarAutoHideTelemetry {
class AutoHideOnTaskbarShow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHideStart@AutoHideOnTaskbarShow@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAAXW4ShellMode@TrayCommon@@PEAUHMONITOR__@@W4TrayUnhideFlags@5@W4UnhideRequest@5@@Z
    void AutoHideStart(int, HMONITOR__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AutoHideOnTaskbarShow@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAAXW4ShellMode@TrayCommon@@PEAUHMONITOR__@@@Z
    void StartActivity(int, HMONITOR__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoHideOnTaskbarShow@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAA@XZ
    ~AutoHideOnTaskbarShow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AutoHideOnTaskbarShow@TaskbarAutoHideTelemetry@AutoHideTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AutoHideOnTaskbarShow@TaskbarAutoHideTelemetry@AutoHideTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AutoHideTelemetry::TaskbarAutoHideTelemetry
