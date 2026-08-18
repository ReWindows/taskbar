#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskGroupMovedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OldIndex@TaskGroupMovedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAAIXZ
    unsigned int OldIndex();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskGroupMovedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskGroupMovedEventArgs();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
