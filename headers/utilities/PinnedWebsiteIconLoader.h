#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
class PinnedWebsiteIconLoader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PinnedWebsiteIconLoader@@QEAAJPEAUITrayComponentHost@@PEAUIPinnedWebsiteIconLoadData@@PEAUIIconLoaderNotifications2@@@Z
    long RuntimeClassInitialize(ITrayComponentHost *, IPinnedWebsiteIconLoadData *, IIconLoaderNotifications2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadIconSync@PinnedWebsiteIconLoader@@SAJKPEBU_ITEMIDLIST_ABSOLUTE@@AEBUtagSIZE@@1PEAPEAUHICON__@@@Z
    static long s_LoadIconSync(unsigned long, _ITEMIDLIST_ABSOLUTE const *, tagSIZE const &, tagSIZE const &, HICON__* *);
};
