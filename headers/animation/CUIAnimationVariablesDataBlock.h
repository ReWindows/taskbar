#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace CTrayAnimationManager {
class CUIAnimationVariablesDataBlock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@CUIAnimationVariablesDataBlock@CTrayAnimationManager@@QEAAJXZ
    long Freeze();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unfreeze@CUIAnimationVariablesDataBlock@CTrayAnimationManager@@QEAAJXZ
    long Unfreeze();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAnimationVariablesDataBlock@CTrayAnimationManager@@QEAA@XZ
    ~CUIAnimationVariablesDataBlock();
};
} // namespace CTrayAnimationManager
