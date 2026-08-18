#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
namespace TaskbandTelemetry {
class TaskbarExternalDragItemPinning {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskbarExternalDragItemPinning@TaskbandTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarExternalDragItemPinning@TaskbandTelemetry@@QEAA@XZ
    ~TaskbarExternalDragItemPinning();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskbarExternalDragItemPinning@TaskbandTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskbarExternalDragItemPinning@TaskbandTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbandTelemetry
