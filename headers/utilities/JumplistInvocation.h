#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
namespace TaskbandTelemetry {
class JumplistInvocation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumplistInvocation@TaskbandTelemetry@@QEAA@$$QEAV01@@Z
    JumplistInvocation(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@JumplistInvocation@TaskbandTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@JumplistInvocation@TaskbandTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumplistInvocation@TaskbandTelemetry@@QEAA@XZ
    ~JumplistInvocation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@JumplistInvocation@TaskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@JumplistInvocation@TaskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbandTelemetry
