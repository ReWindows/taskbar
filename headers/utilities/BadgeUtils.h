#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class BadgeUtils {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleStringForBadgeData@BadgeUtils@@YAJPEAUIBadgeData@@PEAUIResourceMap@@PEAPEAG@Z
    long GetAccessibleStringForBadgeData(IBadgeData *, IResourceMap *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleStringForGlyphBadge@BadgeUtils@@YAJW4BadgeType@BadgingData@@PEAUIResourceMap@@PEAPEAG@Z
    long GetAccessibleStringForGlyphBadge(int, IResourceMap *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleStringForNumericBadge@BadgeUtils@@YAJIPEAPEAG@Z
    long GetAccessibleStringForNumericBadge(unsigned int, unsigned short * *);
};
