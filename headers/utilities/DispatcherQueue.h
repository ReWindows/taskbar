#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt::Windows::System {
class DispatcherQueue {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ
    static GetForCurrentThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DispatcherQueue@System@Windows@winrt@@QEAA@XZ
    ~DispatcherQueue();
};
} // namespace winrt::Windows::System
