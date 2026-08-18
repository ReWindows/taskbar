#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace Windows::Internal::AssignedAccess {
class AAManagerHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ
    AAManagerHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z
    long GetAssignedAccessConfiguration(::Windows::Internal::AssignedAccess::IAssignedAccessConfiguration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z
    long GetAssignedAccessTypeForUserWithGroup(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z
    long GetAssignedAccessTypeForUserWithoutGroup(unsigned short const *, int *);
};
} // namespace Windows::Internal::AssignedAccess
