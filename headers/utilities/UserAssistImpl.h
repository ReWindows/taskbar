#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class UserAssistImpl {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z
    long GetCachedUserAssist(IShellUserAssist * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist2@@@Z
    long GetCachedUserAssist(IShellUserAssist2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z
    IShellUserAssist * GetUserAssistWorker(_GUID const &);
};
