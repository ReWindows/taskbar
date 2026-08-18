#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 11 member(s).
class CEnumTaskItems {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumTaskItems@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumTaskItems@@UEAAJPEAPEAUITaskItem@@@Z
    virtual long Next(ITaskItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumTaskItems@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumTaskItems@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumTaskItems@@UEAAJXZ
    virtual long Reset();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumTaskItems@@EEAA@XZ
    virtual ~CEnumTaskItems();
};
