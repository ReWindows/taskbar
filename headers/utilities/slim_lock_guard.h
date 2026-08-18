#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt {
class slim_lock_guard {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z
    slim_lock_guard(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1slim_lock_guard@winrt@@QEAA@XZ
    ~slim_lock_guard();
};
} // namespace winrt
