#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
class NotifyIconRegistryHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRandom64BitInteger@NotifyIconRegistryHelpers@@YA_KXZ
    uint64_t GetRandom64BitInteger();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBool@NotifyIconRegistryHelpers@@YAXPEAUHKEY__@@PEBG_N@Z
    void WriteBool(HKEY__*, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteGuid@NotifyIconRegistryHelpers@@YAXPEAUHKEY__@@PEBGAEBU_GUID@@@Z
    void WriteGuid(HKEY__*, unsigned short const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteString@NotifyIconRegistryHelpers@@YAXPEAUHKEY__@@PEBG1@Z
    void WriteString(HKEY__*, unsigned short const *, unsigned short const *);
};
