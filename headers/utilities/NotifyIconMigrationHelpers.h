#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class NotifyIconMigrationHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeString@NotifyIconMigrationHelpers@@YAPEBGPEBGPEAGI@Z
    unsigned short const * DecodeString(unsigned short const *, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdentityCached@NotifyIconMigrationHelpers@@YA_NAEBUTNPersistStreamData@@@Z
    bool IsIdentityCached(TNPersistStreamData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateFromLegacySystrayIfNeeded@NotifyIconMigrationHelpers@@YAXPEAUHKEY__@@@Z
    void MigrateFromLegacySystrayIfNeeded(HKEY__*);
};
