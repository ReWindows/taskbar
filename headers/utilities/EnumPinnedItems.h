#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace TaskbandTelemetry {
class EnumPinnedItems {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@EnumPinnedItems@TaskbandTelemetry@@QEAAX_N0@Z
    void StartActivity(bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnumPinnedItems@TaskbandTelemetry@@QEAA@XZ
    ~EnumPinnedItems();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EnumPinnedItems@TaskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EnumPinnedItems@TaskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbandTelemetry
