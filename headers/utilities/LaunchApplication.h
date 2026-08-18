#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace TaskbandTelemetry {
class LaunchApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchApplication@TaskbandTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchApplication@TaskbandTelemetry@@QEAA@XZ
    ~LaunchApplication();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchApplication@TaskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchApplication@TaskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbandTelemetry
