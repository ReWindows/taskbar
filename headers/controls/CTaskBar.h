#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 25 member(s).
class CTaskBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskBar@@QEAA@PEAUITrayComponentHost@@@Z
    CTaskBar(ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateObject@CTaskBar@@UEAAJAEBU_GUID@@PEAUIUnknown@@0PEAPEAX@Z
    virtual long CreateObject(_GUID const &, IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CTaskBar@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestricted@CTaskBar@@UEAAJPEBU_GUID@@KPEAUtagVARIANT@@PEAK@Z
    virtual long IsRestricted(_GUID const *, unsigned long, tagVARIANT *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPosRectChangeDB@CTaskBar@@UEAAJPEAUtagRECT@@@Z
    virtual long OnPosRectChangeDB(tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTaskBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CTaskBar@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskBar@@UEAA@XZ
    virtual ~CTaskBar();
};
