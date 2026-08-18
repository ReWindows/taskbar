#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
class ExplorerUsageTracking {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackEvent@ExplorerUsageTracking@@SAXPEBG0@Z
    static void TrackEvent(unsigned short const *, unsigned short const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExplorerUsageTracking@@AEAA@XZ
    ExplorerUsageTracking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackEventPrivate@ExplorerUsageTracking@@AEAAXPEBG0@Z
    void TrackEventPrivate(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitialize@ExplorerUsageTracking@@AEAA_NXZ
    bool TryInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializePrivate@ExplorerUsageTracking@@AEAAXXZ
    void UninitializePrivate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExplorerUsageTracking@@AEAA@XZ
    ~ExplorerUsageTracking();
};
