#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
class RtlNameValueArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@RtlNameValueArray@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@RtlNameValueArray@@QEAAXXZ
    void Free();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@RtlNameValueArray@@QEBAPEBG_K@Z
    unsigned short const * GetValue(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z
    long Insert(unsigned short const *, unsigned short const *, unsigned short const *, uint64_t);
};
