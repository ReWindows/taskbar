#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 9 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskbarFlyout {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarFlyout@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITrayComponentHost@@PEAUHWND__@@W4ZBID@@@Z
    TaskbarFlyout(ITrayComponentHost *, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryActivate@TaskbarFlyout@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void TryActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryChangeZBand@TaskbarFlyout@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXW4ZBID@@@Z
    void TryChangeZBand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visible@TaskbarFlyout@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void Visible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlIsland@TaskbarFlyout@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUXamlExplorerHostWindow@XamlExplorerHost@3Internal@Windows@6@XZ
    WindissectOpaque XamlIsland();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarFlyout@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskbarFlyout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyXamlIslandAsync@TaskbarFlyout@implementation@Shell@UI@WindowsUdk@winrt@@AEAA?AUfire_and_forget@6@XZ
    WindissectOpaque DestroyXamlIslandAsync();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
