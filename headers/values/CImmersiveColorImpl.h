#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 14 member(s).
class CImmersiveColorImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireColorMutex@CImmersiveColorImpl@@SAJXZ
    static long AcquireColorMutex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@CImmersiveColorImpl@@SAJXZ
    static long EnsureInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorFromPreferenceImpl@CImmersiveColorImpl@@SAKPEBUIMMERSIVE_COLOR_PREFERENCE@@W4IMMERSIVE_COLOR_TYPE@@_NW4IMMERSIVE_HC_CACHE_MODE@@@Z
    static unsigned long GetColorFromPreferenceImpl(IMMERSIVE_COLOR_PREFERENCE const *, int, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorPreferenceImpl@CImmersiveColorImpl@@SAJPEAUIMMERSIVE_COLOR_PREFERENCE@@_N1@Z
    static long GetColorPreferenceImpl(IMMERSIVE_COLOR_PREFERENCE *, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPolicyColors@CImmersiveColorImpl@@SAJPEAK0@Z
    static long GetGroupPolicyColors(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseColorMutex@CImmersiveColorImpl@@SAXXZ
    static void ReleaseColorMutex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetACLOnSharedObjectsforUser@CImmersiveColorImpl@@SAJPEBG@Z
    static long SetACLOnSharedObjectsforUser(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorPreferenceHelper@CImmersiveColorImpl@@SAJPEBUIMMERSIVE_COLOR_PREFERENCE@@_N1@Z
    static long SetColorPreferenceHelper(IMMERSIVE_COLOR_PREFERENCE const *, bool, bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorPreferenceFromRegistry@CImmersiveColorImpl@@CAJPEAUIMMERSIVE_COLOR_PREFERENCE@@@Z
    static long GetColorPreferenceFromRegistry(IMMERSIVE_COLOR_PREFERENCE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColorPreferenceFromRegistry@CImmersiveColorImpl@@CAJPEAUIMMERSIVE_COLOR_PREFERENCE@@@Z
    static long GetDefaultColorPreferenceFromRegistry(IMMERSIVE_COLOR_PREFERENCE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPolicyDefault@CImmersiveColorImpl@@CAJPEBGPEAK@Z
    static long GetGroupPolicyDefault(unsigned short const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkedColorType@CImmersiveColorImpl@@CA?AW4IMMERSIVE_COLOR_TYPE@@W42@@Z
    static int GetLinkedColorType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveHSLRuleColor@CImmersiveColorImpl@@CAKKKW4IMMERSIVE_COLOR_TYPE@@@Z
    static unsigned long ResolveHSLRuleColor(unsigned long, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorPreferenceToRegistry@CImmersiveColorImpl@@CAJPEBUIMMERSIVE_COLOR_PREFERENCE@@@Z
    static long SetColorPreferenceToRegistry(IMMERSIVE_COLOR_PREFERENCE const *);
};
