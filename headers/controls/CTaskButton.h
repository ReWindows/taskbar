#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 17 member(s).
class CTaskButton {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskButton@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearOwner@CTaskButton@@UEAAXXZ
    virtual void ClearOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableShowToolTip@CTaskButton@@UEAAXH@Z
    virtual void EnableShowToolTip(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CTaskButton@@UEAAKXZ
    virtual unsigned long GetFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskItem@CTaskButton@@UEAAPEAUITaskItem@@XZ
    virtual ITaskItem * GetTaskItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFlashingChange@CTaskButton@@UEAAXXZ
    virtual void NotifyFlashingChange();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskButton@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskButton@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowToolTip@CTaskButton@@UEAAHXZ
    virtual int ShouldShowToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlags@CTaskButton@@UEAAXKK@Z
    virtual void UpdateFlags(unsigned long, unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskButton@@IEAA@PEAVCTaskBtnGroup@@PEAUITaskItem@@@Z
    CTaskButton(CTaskBtnGroup *, ITaskItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskButton@@MEAA@XZ
    virtual ~CTaskButton();
};
