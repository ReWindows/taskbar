#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt::WindowsUdk::UI::StartScreen {
class TileCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUserAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUUser@System@Windows@5@AEBUTileCollectionCreateOptions@2345@@Z
    static CreateForUserAsync(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileCollection@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ
    ~TileCollection();
};
} // namespace winrt::WindowsUdk::UI::StartScreen
