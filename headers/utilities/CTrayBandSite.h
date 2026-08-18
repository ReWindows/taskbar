#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 30 member(s).
class CTrayBandSite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBand@CTrayBandSite@@UEAAJPEAUIUnknown@@@Z
    virtual long AddBand(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTrayBandSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CTrayBandSite@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumBands@CTrayBandSite@@UEAAJIPEAK@Z
    virtual long EnumBands(unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CTrayBandSite@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandObject@CTrayBandSite@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetBandObject(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandSiteInfo@CTrayBandSite@@UEAAJPEAUtagBANDSITEINFO@@@Z
    virtual long GetBandSiteInfo(tagBANDSITEINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCatBandManager@CTrayBandSite@@QEAAPEAUICatBandManager@@XZ
    ICatBandManager * GetCatBandManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@CTrayBandSite@@QEAAPEAUIContextMenu3@@XZ
    IContextMenu3* GetContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMessage@CTrayBandSite@@QEAAHPEAUHWND__@@I_K_JPEA_J@Z
    int HandleMessage(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CTrayBandSite@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryBand@CTrayBandSite@@UEAAJKPEAPEAUIDeskBand@@PEAKPEAGH@Z
    virtual long QueryBand(unsigned long, IDeskBand * *, unsigned long *, unsigned short *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTrayBandSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CTrayBandSite@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTrayBandSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBand@CTrayBandSite@@UEAAJK@Z
    virtual long RemoveBand(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandSiteInfo@CTrayBandSite@@UEAAJPEBUtagBANDSITEINFO@@@Z
    virtual long SetBandSiteInfo(tagBANDSITEINFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandState@CTrayBandSite@@UEAAJKKK@Z
    virtual long SetBandState(unsigned long, unsigned long, unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTrayBandSite@@IEAA@PEAUITrayComponentHost@@@Z
    CTrayBandSite(ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRequiredBands@CTrayBandSite@@IEAAJXZ
    long _AddRequiredBands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BroadcastExec@CTrayBandSite@@IEAAXPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    void _BroadcastExec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrayBandSite@@MEAA@XZ
    virtual ~CTrayBandSite();
};
