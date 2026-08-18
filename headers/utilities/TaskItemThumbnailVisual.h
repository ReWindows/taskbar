#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskItemThumbnailVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@TaskItemThumbnailVisual@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnailVisual@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUIDuplicateVisual@ComposableShell@Internal@Windows@5@@Z
    TaskItemThumbnailVisual(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnailVisual@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnailVisual();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
