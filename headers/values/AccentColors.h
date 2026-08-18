#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
class AccentColors {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccentColor@AccentColors@@SAJW4AccentIndex@@PEAK@Z
    static long GetAccentColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccentVariants@AccentColors@@SAXKMMM_NQEAK@Z
    static void GetAccentVariants(unsigned long, float, float, float, bool, unsigned long * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorChoices@AccentColors@@SAJPEAHQEAK@Z
    static long GetColorChoices(int *, unsigned long * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHistory@AccentColors@@SAJK_N@Z
    static long UpdateHistory(unsigned long, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateCurrentAccentPalette@AccentColors@@CAJK@Z
    static long PopulateCurrentAccentPalette(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccentColorInternal@AccentColors@@CAJKPEAUHKEY__@@_N@Z
    static long SetAccentColorInternal(unsigned long, HKEY__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsKnownColor@AccentColors@@CA_NK_N@Z
    static bool _IsKnownColor(unsigned long, bool);
};
