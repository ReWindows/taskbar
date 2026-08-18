#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class InstallProgress {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertState@InstallProgress@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4LifecycleState@StartScreen@456@W478456@@Z
    int ConvertState(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InstallProgress@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@W4ProgressKind@2345@W4LifecycleState@StartScreen@345@N@Z
    InstallProgress(int, int, double);
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
