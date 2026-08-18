#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace TaskbandTelemetry {
class ProcessPinnedItem {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessPinnedItem@TaskbandTelemetry@@QEAA@XZ
    ~ProcessPinnedItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProcessPinnedItem@TaskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProcessPinnedItem@TaskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbandTelemetry
