#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 11 member(s).
class CObjectFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CObjectFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLivePreviewWindow@CObjectFactory@@UEAAJPEAUIImmersiveApplication@@_NAEBUtagRECT@@2PEAUHINSTANCE__@@PEAPEAUILivePreviewWindow@@@Z
    virtual long CreateLivePreviewWindow(IImmersiveApplication *, bool, tagRECT const &, tagRECT const &, HINSTANCE__*, ILivePreviewWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecondaryTaskListWndSite@CObjectFactory@@UEAAJPEAUITaskListUI@@PEAUHMONITOR__@@PEBGPEAUITrayComponentHost@@PEAPEAUITaskListWndSite@@@Z
    virtual long CreateSecondaryTaskListWndSite(ITaskListUI *, HMONITOR__*, unsigned short const *, ITrayComponentHost *, ITaskListWndSite * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTaskBtnGroup@CObjectFactory@@UEAAJPEAVCTaskListWnd@@PEAUITaskGroup@@PEAPEAUITaskBtnGroup@@@Z
    virtual long CreateTaskBtnGroup(CTaskListWnd *, ITaskGroup *, ITaskBtnGroup * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CObjectFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CObjectFactory@@UEAAKXZ
    virtual unsigned long Release();
};
