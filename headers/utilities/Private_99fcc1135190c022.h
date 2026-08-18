#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace BrowserChannels {
class Private {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGKPEBG@Z
    bool ReadExePath(HKEY__*, unsigned short *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z
    bool ReadRegStringValue(HKEY__*, unsigned short const *, unsigned short *, unsigned long);
};
} // namespace BrowserChannels
