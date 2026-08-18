#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
class CCachedSTAObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCachedSTAObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedSTAObject@@QEAA@XZ
    CCachedSTAObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostInitialize@CCachedSTAObject@@UEAAJJKK@Z
    virtual long PostInitialize(long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostUninitialize@CCachedSTAObject@@UEAAJK@Z
    virtual long PostUninitialize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreInitialize@CCachedSTAObject@@UEAAJKK@Z
    virtual long PreInitialize(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreUninitialize@CCachedSTAObject@@UEAAJK@Z
    virtual long PreUninitialize(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCachedSTAObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCachedSTAObject@@UEAAKXZ
    virtual unsigned long Release();
};
