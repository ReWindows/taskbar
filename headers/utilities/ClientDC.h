#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace Microsoft::WRL::Wrappers {
class ClientDC {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ
    ~ClientDC();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ
    virtual bool InternalClose();
};
} // namespace Microsoft::WRL::Wrappers
