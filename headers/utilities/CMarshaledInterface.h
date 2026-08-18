#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
class CMarshaledInterface {
public:
    class CMarshalStream;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMarshaledInterface@@QEAA@XZ
    ~CMarshaledInterface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z
    long _Unmarshal(_GUID const &, void * *, bool);
};
