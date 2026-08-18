#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 9 member(s).
class AIXPolicyHelper {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDeviceITManaged@AIXPolicyHelper@@YA?AW4IsDeviceITManagedFlags@1@XZ
    int GetIsDeviceITManaged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastOperationKind@AIXPolicyHelper@@YA?AW4LastOperationKind@@XZ
    int GetLastOperationKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NW4AllowedOnDeviceByPolicyFlags@@@Z
    bool IsAllowedOnDeviceByPolicy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeviceITManaged@AIXPolicyHelper@@YA_NXZ
    bool IsDeviceITManaged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEduSku@AIXPolicyHelper@@YA_NXZ
    bool IsEduSku();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnterpriseSKU@AIXPolicyHelper@@YA_NXZ
    bool IsEnterpriseSKU();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLCUVersionChanged@AIXPolicyHelper@@YA_NXZ
    bool IsLCUVersionChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOOBEComplete@AIXPolicyHelper@@YA_NXZ
    bool IsOOBEComplete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPushButtonResetInProgress@AIXPolicyHelper@@YA_NXZ
    bool IsPushButtonResetInProgress();
};
