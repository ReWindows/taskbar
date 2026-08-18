#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace CoCreateInstanceAsSystemTelemetry {
class CoCreateInstanceAsSystem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoCreateInstanceAsSystem@CoCreateInstanceAsSystemTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoCreateInstanceAsSystem@CoCreateInstanceAsSystemTelemetry@@QEAA@XZ
    ~CoCreateInstanceAsSystem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoCreateInstanceAsSystem@CoCreateInstanceAsSystemTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoCreateInstanceAsSystem@CoCreateInstanceAsSystemTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoCreateInstanceAsSystemTelemetry
