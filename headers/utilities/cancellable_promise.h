#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt {
class cancellable_promise {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?cancel@cancellable_promise@winrt@@QEAAXXZ
    void cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?revoke_canceller@cancellable_promise@winrt@@QEAAXXZ
    void revoke_canceller();
};
} // namespace winrt
