#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace Microsoft::WRL::Wrappers {
class CompatibleDC {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z
    CompatibleDC(HDC__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ
    ~CompatibleDC();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ
    virtual bool InternalClose();
};
} // namespace Microsoft::WRL::Wrappers
