#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
class EnterpriseFeatureControl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureEnabled@EnterpriseFeatureControl@@SA_NK@Z
    static bool IsFeatureEnabled(unsigned long);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeatureStatusCache@EnterpriseFeatureControl@@CAJKPEA_N0@Z
    static long GetFeatureStatusCache(unsigned long, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedRegistryLocation@EnterpriseFeatureControl@@CAJPEBG0PEAPEAG@Z
    static long GetPersistedRegistryLocation(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessEnvName@EnterpriseFeatureControl@@CAJKPEAPEAG@Z
    static long GetProcessEnvName(unsigned long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPolicyState@EnterpriseFeatureControl@@CAJPEA_N@Z
    static long ReadPolicyState(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSkuUpdateManagementGroup@EnterpriseFeatureControl@@CAJPEA_N@Z
    static long ReadSkuUpdateManagementGroup(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegQueryDwordValue@EnterpriseFeatureControl@@CAJPEAUHKEY__@@PEBG1PEAK@Z
    static long RegQueryDwordValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFeatureStatusCache@EnterpriseFeatureControl@@CAJKAEA_N@Z
    static long SetFeatureStatusCache(unsigned long, bool &);
};
