#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 14 member(s).
namespace ImmersiveIconsLoggingTelemetry {
class LoadIconW {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ
    ~LoadIconW();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ImmersiveIconsLoggingTelemetry
