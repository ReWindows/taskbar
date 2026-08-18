#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
namespace StateCapture {
class ShellStateTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalStateCapture_@ShellStateTelemetry@StateCapture@@QEAAXW4TelemetryStateCaptureType@2@@Z
    void GlobalStateCapture_(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryDWORDAndSetFlag@ShellStateTelemetry@StateCapture@@CAKPEBG0KPEAII@Z
    static unsigned long GetRegistryDWORDAndSetFlag(unsigned short const *, unsigned short const *, unsigned long, unsigned int *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryStringAndSetFlag@ShellStateTelemetry@StateCapture@@CA_NPEBG0PEAGKPEAII@Z
    static bool GetRegistryStringAndSetFlag(unsigned short const *, unsigned short const *, unsigned short *, unsigned long, unsigned int *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenSaverValue@ShellStateTelemetry@StateCapture@@CA_NPEBGPEAGKPEAW4GlobalStateValues@2@2W432@@Z
    static bool GetScreenSaverValue(unsigned short const *, unsigned short *, unsigned long, int *, int *, int);
};
} // namespace StateCapture
