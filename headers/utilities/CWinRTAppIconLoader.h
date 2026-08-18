#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
class CWinRTAppIconLoader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUITrayComponentHost@@PEAUIWinRTIconLoadData@@PEAUIIconLoaderNotifications2@@@Z
    long RuntimeClassInitialize(ITrayComponentHost *, IWinRTIconLoadData *, IIconLoaderNotifications2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadIconSync@CWinRTAppIconLoader@@SAJKPEBGAEBUtagSIZE@@11IPEAPEAUHICON__@@@Z
    static long s_LoadIconSync(unsigned long, unsigned short const *, tagSIZE const &, tagSIZE const &, tagSIZE const &, unsigned int, HICON__* *);
};
