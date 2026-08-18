#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class CTCoAllocPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z
    static long Alloc(void *, unsigned long, uint64_t, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z
    static long Realloc(void *, unsigned long, void *, uint64_t, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z
    static uint64_t _CoTaskMemSize(void *);
};
