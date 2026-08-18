#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
class PinnedWebsiteIconLoadData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutPidl@PinnedWebsiteIconLoadData@@UEAAPEBU_ITEMIDLIST_ABSOLUTE@@XZ
    virtual _ITEMIDLIST_ABSOLUTE const * GetShortcutPidl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameRequest@PinnedWebsiteIconLoadData@@UEAA_NPEAUIIconLoadData@@W4RequestMatchType@@@Z
    virtual bool IsSameRequest(IIconLoadData *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PinnedWebsiteIconLoadData@@QEAA@XZ
    PinnedWebsiteIconLoadData();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PinnedWebsiteIconLoadData@@UEAA@XZ
    virtual ~PinnedWebsiteIconLoadData();
};
