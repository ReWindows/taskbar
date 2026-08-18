#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
namespace Windows::Internal::AssignedAccess {
class AssignedAccessConfigStoreV0 {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@UEAA@XZ
    virtual ~AssignedAccessConfigStoreV0();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NXZ
    virtual bool DoesGroupConfigExistInStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z
    virtual bool DoesProfileExistInStore(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAAKXZ
    virtual unsigned long GetVersion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NXZ
    virtual bool IsGlobalProfileConfiguredInStore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@Z
    bool IsValidProfile(HKEY__*);
};
} // namespace Windows::Internal::AssignedAccess
