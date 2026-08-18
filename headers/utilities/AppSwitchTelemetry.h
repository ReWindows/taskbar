#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace PerfTrack {
class AppSwitchTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z
    void AppSwitched_(int, unsigned short const *, int, unsigned short const *);
};
} // namespace PerfTrack
