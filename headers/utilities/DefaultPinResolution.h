#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
namespace TaskbarDefaultPinningProvider {
class DefaultPinResolution {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DefaultPinResolution@TaskbarDefaultPinningProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultPinResolution@TaskbarDefaultPinningProvider@@QEAA@XZ
    ~DefaultPinResolution();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DefaultPinResolution@TaskbarDefaultPinningProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DefaultPinResolution@TaskbarDefaultPinningProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarDefaultPinningProvider
