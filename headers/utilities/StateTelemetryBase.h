#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace StateCapture {
class StateTelemetryBase {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryBoolEnabled@StateTelemetryBase@StateCapture@@KA_NPEBG0_N@Z
    static bool GetRegistryBoolEnabled(unsigned short const *, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryDWORD@StateTelemetryBase@StateCapture@@KAKPEBG0K@Z
    static unsigned long GetRegistryDWORD(unsigned short const *, unsigned short const *, unsigned long);
};
} // namespace StateCapture
