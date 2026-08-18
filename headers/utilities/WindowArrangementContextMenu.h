#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
namespace TrayTelemetry {
class WindowArrangementContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CascadeWindows@WindowArrangementContextMenu@TrayTelemetry@@QEAAXXZ
    void CascadeWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowsStacked@WindowArrangementContextMenu@TrayTelemetry@@QEAAXXZ
    void ShowWindowsStacked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WindowArrangementContextMenu@TrayTelemetry@@QEAAXW4WindowArrangementContextMenuSource@2@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowArrangementContextMenu@TrayTelemetry@@QEAA@XZ
    ~WindowArrangementContextMenu();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WindowArrangementContextMenu@TrayTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WindowArrangementContextMenu@TrayTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TrayTelemetry
