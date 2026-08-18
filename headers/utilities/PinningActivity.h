#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
namespace TaskbarPinningTelemetry {
class PinningActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinDragDrop@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ
    void PinDragDrop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinManagerNotSet@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ
    void PinManagerNotSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLER@@@Z
    void PinnedListRemoved(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ
    ~PinningActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PinningActivity@TaskbarPinningTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarPinningTelemetry
