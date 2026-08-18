#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class MeetAndChatHelpers {
public:
    class details;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDeviceRestrictionsForTFLApply@MeetAndChatHelpers@@YA_NXZ
    bool DoDeviceRestrictionsForTFLApply();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChinaCTAPolicyEnabled@MeetAndChatHelpers@@YA_NXZ
    bool IsChinaCTAPolicyEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSKUAllowedFromWin10UpgradeForTFLPrePin@MeetAndChatHelpers@@YA_NXZ
    bool IsSKUAllowedFromWin10UpgradeForTFLPrePin();
};
