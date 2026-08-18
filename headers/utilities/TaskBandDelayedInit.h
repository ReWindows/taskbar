#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
namespace ExplorerTelemetry {
class TaskBandDelayedInit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskBandDelayedInit@ExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskBandDelayedInit_EnumImmersive@TaskBandDelayedInit@ExplorerTelemetry@@QEAAXXZ
    void TaskBandDelayedInit_EnumImmersive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskBandDelayedInit_EnumPinnedItems@TaskBandDelayedInit@ExplorerTelemetry@@QEAAXXZ
    void TaskBandDelayedInit_EnumPinnedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskBandDelayedInit_EnumWindows@TaskBandDelayedInit@ExplorerTelemetry@@QEAAXXZ
    void TaskBandDelayedInit_EnumWindows();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskBandDelayedInit@ExplorerTelemetry@@QEAA@XZ
    ~TaskBandDelayedInit();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskBandDelayedInit@ExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskBandDelayedInit@ExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ExplorerTelemetry
