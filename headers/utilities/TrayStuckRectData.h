#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class TrayStuckRectData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPIAdjustedStuckWidths@TrayStuckRectData@@QEBA?AUtagSIZE@@I@Z
    tagSIZE GetDPIAdjustedStuckWidths(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettings@TrayStuckRectData@@QEAA_NPEAUITrayComponentHost@@PEBG@Z
    bool LoadSettings(ITrayComponentHost *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveSettings@TrayStuckRectData@@QEAAXPEAUITrayComponentHost@@PEBG@Z
    void SaveSettings(ITrayComponentHost *, unsigned short const *);
};
