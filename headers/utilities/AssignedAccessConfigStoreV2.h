#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace Windows::Internal::AssignedAccess {
class AssignedAccessConfigStoreV2 {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAAKXZ
    virtual unsigned long GetVersion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ
    virtual bool IsGlobalProfileConfiguredInStore();
};
} // namespace Windows::Internal::AssignedAccess
