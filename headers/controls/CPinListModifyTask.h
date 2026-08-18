#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
namespace CTaskBand {
class CPinListModifyTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CPinListModifyTask@CTaskBand@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPinListModifyTask@CTaskBand@@UEAA@XZ
    virtual ~CPinListModifyTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ThreadProc@CPinListModifyTask@CTaskBand@@AEAAXXZ
    void _ThreadProc();
};
} // namespace CTaskBand
