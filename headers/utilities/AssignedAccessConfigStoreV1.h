#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
namespace Windows::Internal::AssignedAccess {
class AssignedAccessConfigStoreV1 {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ
    virtual ~AssignedAccessConfigStoreV1();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ
    virtual bool Initialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ
    virtual bool DoesGroupConfigExistInStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z
    virtual bool DoesProfileExistInStore(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAAKXZ
    virtual unsigned long GetVersion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ
    virtual bool IsGlobalProfileConfiguredInStore();
};
} // namespace Windows::Internal::AssignedAccess
