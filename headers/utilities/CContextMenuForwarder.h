#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 41 member(s).
class CContextMenuForwarder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContextMenuForwarder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuForwarder@@QEAA@PEAUIUnknown@@@Z
    CContextMenuForwarder(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CContextMenuForwarder@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuRestrictions@CContextMenuForwarder@@UEAAJW4DEFAULT_FOLDER_MENU_RESTRICTIONS@@PEAW42@@Z
    virtual long GetMenuRestrictions(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CContextMenuForwarder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CContextMenuForwarder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CContextMenuForwarder@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CContextMenuForwarder@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuForwarder@@UEAAJPEAUHWND__@@PEAUIContextMenuCB@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@IPEBQEFBU_ITEMID_CHILD@@PEAUIUnknown@@IPEBQEAUHKEY__@@@Z
    virtual long Initialize(HWND__*, IContextMenuCB *, _ITEMIDLIST_ABSOLUTE const *, IShellFolder *, unsigned int, _ITEMID_CHILD & volatile * const *, IUnknown *, unsigned int, HKEY__* const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuForwarder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CContextMenuForwarder@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CContextMenuForwarder@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContextMenuForwarder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CContextMenuForwarder@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContextMenuForwarder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandlerClsid@CContextMenuForwarder@@UEAAJAEBU_GUID@@@Z
    virtual long SetHandlerClsid(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvokeVerbs@CContextMenuForwarder@@UEAAJQEBQEBGI@Z
    virtual long SetInvokeVerbs(unsigned short const * const * const, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuRestrictions@CContextMenuForwarder@@UEAAJW4DEFAULT_FOLDER_MENU_RESTRICTIONS@@@Z
    virtual long SetMenuRestrictions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CContextMenuForwarder@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CContextMenuForwarder@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuForwarder@@MEAA@XZ
    virtual ~CContextMenuForwarder();
};
