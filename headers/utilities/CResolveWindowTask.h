#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace CTaskBand {
class CResolveWindowTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CResolveWindowTask@CTaskBand@@UEAAJXZ
    virtual long InternalResumeRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveWindow@CResolveWindowTask@CTaskBand@@AEAAXXZ
    void _ResolveWindow();
};
} // namespace CTaskBand
