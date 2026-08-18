#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt::WindowsUdk::UI::StartScreen {
class BadgeProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@BadgeProvider@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUUser@System@Windows@5@@Z
    static GetForUser(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BadgeProvider@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ
    ~BadgeProvider();
};
} // namespace winrt::WindowsUdk::UI::StartScreen
