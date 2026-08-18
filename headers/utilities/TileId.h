#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace winrt::WindowsUdk::UI::StartScreen {
class TileId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromAppResolverId@TileId@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z
    static FromAppResolverId(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromAppUserModelId@TileId@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z
    static FromAppUserModelId(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileId@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ
    ~TileId();
};
} // namespace winrt::WindowsUdk::UI::StartScreen
