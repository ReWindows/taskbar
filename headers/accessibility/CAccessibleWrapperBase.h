#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 44 member(s).
class CAccessibleWrapperBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAccessibleWrapperBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAccessibleWrapperBase@@QEAA@PEAUIAccessible@@@Z
    CAccessibleWrapperBase(IAccessible *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CAccessibleWrapperBase@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CAccessibleWrapperBase@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CAccessibleWrapperBase@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CAccessibleWrapperBase@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CAccessibleWrapperBase@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CAccessibleWrapperBase@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CAccessibleWrapperBase@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CAccessibleWrapperBase@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAccessibleWrapperBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAccessibleWrapperBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAccessibleWrapperBase@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CAccessibleWrapperBase@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accDoDefaultAction@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@@Z
    virtual long accDoDefaultAction(tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accHitTest@CAccessibleWrapperBase@@UEAAJJJPEAUtagVARIANT@@@Z
    virtual long accHitTest(long, long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accLocation@CAccessibleWrapperBase@@UEAAJPEAJ000UtagVARIANT@@@Z
    virtual long accLocation(long *, long *, long *, long *, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accNavigate@CAccessibleWrapperBase@@UEAAJJUtagVARIANT@@PEAU2@@Z
    virtual long accNavigate(long, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accSelect@CAccessibleWrapperBase@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChild@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAPEAUIDispatch@@@Z
    virtual long get_accChild(tagVARIANT, IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChildCount@CAccessibleWrapperBase@@UEAAJPEAJ@Z
    virtual long get_accChildCount(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDefaultAction@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDefaultAction(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDescription@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDescription(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accFocus@CAccessibleWrapperBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelp@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accHelp(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelpTopic@CAccessibleWrapperBase@@UEAAJPEAPEAGUtagVARIANT@@PEAJ@Z
    virtual long get_accHelpTopic(unsigned short * *, tagVARIANT, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accKeyboardShortcut@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accParent@CAccessibleWrapperBase@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accRole@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accSelection@CAccessibleWrapperBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accSelection(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accValue@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accValue(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_accName@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accName(tagVARIANT, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_accValue@CAccessibleWrapperBase@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accValue(tagVARIANT, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccessibleWrapperBase@@UEAA@XZ
    virtual ~CAccessibleWrapperBase();
};
