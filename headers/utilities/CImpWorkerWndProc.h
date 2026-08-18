#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class CImpWorkerWndProc {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImpWorkerWndProc@@MEAA@XZ
    virtual ~CImpWorkerWndProc();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ
    void ReleaseWndRef();
};
