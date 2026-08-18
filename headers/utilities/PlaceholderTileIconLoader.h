#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class PlaceholderTileIconLoader {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoOptions@PlaceholderTileIconLoader@@YA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@MUtagSIZE@@@Z
    WindissectOpaque GetLogoOptions(float, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPlaceholderIconSync@PlaceholderTileIconLoader@@YAJUTile@StartScreen@UI@WindowsUdk@winrt@@MPEAPEAUHICON__@@UtagSIZE@@@Z
    long LoadPlaceholderIconSync(WindissectOpaque, float, HICON__* *, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPlaceholderTileIconAsync@PlaceholderTileIconLoader@@YAJPEAUITrayComponentHost@@PEAUIPlaceholderIconLoadData@@PEAUIIconLoaderNotifications2@@UTile@StartScreen@UI@WindowsUdk@winrt@@@Z
    long LoadPlaceholderTileIconAsync(ITrayComponentHost *, IPlaceholderIconLoadData *, IIconLoaderNotifications2*, WindissectOpaque);
};
