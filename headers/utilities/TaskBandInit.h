#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
namespace ExplorerTelemetry {
class TaskBandInit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskBandInit@ExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskBandInit_AppUsageTrackerCreated@TaskBandInit@ExplorerTelemetry@@QEAAXXZ
    void TaskBandInit_AppUsageTrackerCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskBandInit_IconAndBadgeContainerCreated@TaskBandInit@ExplorerTelemetry@@QEAAXXZ
    void TaskBandInit_IconAndBadgeContainerCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskBandInit_ImmersiveShellControllerCreated@TaskBandInit@ExplorerTelemetry@@QEAAXXZ
    void TaskBandInit_ImmersiveShellControllerCreated();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskBandInit@ExplorerTelemetry@@QEAA@XZ
    ~TaskBandInit();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskBandInit@ExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskBandInit@ExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ExplorerTelemetry
