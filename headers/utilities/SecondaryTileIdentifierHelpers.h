#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class SecondaryTileIdentifierHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z
    long GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileNotificationIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG@Z
    long GetTileNotificationIdFromFullyQualifiedTileIdentifier(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z
    bool IsFullyQualifiedTileIdentifier(unsigned short const *);
};
