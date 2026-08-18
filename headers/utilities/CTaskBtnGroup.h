#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 51 member(s).
class CTaskBtnGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskBtnGroup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanGlom@CTaskBtnGroup@@UEAAHXZ
    virtual int CanGlom();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUnglom@CTaskBtnGroup@@UEAAHXZ
    virtual int CanUnglom();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsTaskGroupTaskItem@CTaskBtnGroup@@UEAAHPEAUITaskItem@@@Z
    virtual int ContainsTaskGroupTaskItem(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CTaskBtnGroup@@UEAA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CTaskBtnGroup@@UEBAKPEBUITaskItem@@@Z
    virtual unsigned long GetFlags(ITaskItem const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlommableTaskItemCount@CTaskBtnGroup@@UEAAHXZ
    virtual int GetGlommableTaskItemCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@CTaskBtnGroup@@UEAAPEAUITaskGroup@@XZ
    virtual ITaskGroup * GetGroup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupProgress@CTaskBtnGroup@@UEAAKPEAW4_TBPSTATE@@@Z
    virtual unsigned long GetGroupProgress(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupType@CTaskBtnGroup@@UEAA?AW4eTBGROUPTYPE@@XZ
    virtual int GetGroupType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CTaskBtnGroup@@UEAAJPEAUITaskItem@@PEAPEAUHICON__@@@Z
    virtual long GetIcon(ITaskItem *, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastItemIndex@CTaskBtnGroup@@UEAAHXZ
    virtual int GetLastItemIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CTaskBtnGroup@@UEAAXHPEAUtagRECT@@@Z
    virtual void GetLocation(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CTaskBtnGroup@@UEAAXPEAUITaskItem@@PEAUtagRECT@@@Z
    virtual void GetLocation(ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@CTaskBtnGroup@@UEAAHXZ
    virtual int GetNumItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumTaskGroupTaskItems@CTaskBtnGroup@@UEAAHXZ
    virtual int GetNumTaskGroupTaskItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrdinalPosition@CTaskBtnGroup@@UEAAHXZ
    virtual int GetOrdinalPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskItem@CTaskBtnGroup@@UEAAPEAUITaskItem@@H@Z
    virtual ITaskItem * GetTaskItem(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipText@CTaskBtnGroup@@UEAAJHPEAGH@Z
    virtual long GetToolTipText(int, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipText@CTaskBtnGroup@@UEAAJPEAGH@Z
    virtual long GetToolTipText(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetX@CTaskBtnGroup@@UEAAHPEAUITaskItem@@@Z
    virtual int GetX(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetY@CTaskBtnGroup@@UEAAHPEAUITaskItem@@@Z
    virtual int GetY(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Glom@CTaskBtnGroup@@UEAAXH@Z
    virtual void Glom(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CTaskBtnGroup@@UEAAHUtagPOINT@@PEAW4eTBGROUPHITLOCATION@@@Z
    virtual int HitTest(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOfTaskItem@CTaskBtnGroup@@UEAAHPEAUITaskItem@@@Z
    virtual int IndexOfTaskItem(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateDirtyItems@CTaskBtnGroup@@UEAAXXZ
    virtual void InvalidateDirtyItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlashing@CTaskBtnGroup@@UEAAHXZ
    virtual int IsFlashing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFlashingChange@CTaskBtnGroup@@UEAAXPEAUITaskItem@@@Z
    virtual void NotifyFlashingChange(ITaskItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskBtnGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealityCheck@CTaskBtnGroup@@UEAAXXZ
    virtual void RealityCheck();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskBtnGroup@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskItem@CTaskBtnGroup@@UEAAHPEAUITaskItem@@@Z
    virtual int RemoveTaskItem(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@CTaskBtnGroup@@UEAAXURect@Foundation@Windows@winrt@@@Z
    virtual void SetBounds(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrdinalPosition@CTaskBtnGroup@@UEAAHH@Z
    virtual int SetOrdinalPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowToolTip@CTaskBtnGroup@@UEAAHPEAUITaskItem@@@Z
    virtual int ShouldShowToolTip(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CTaskBtnGroup@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlags@CTaskBtnGroup@@UEAAXPEAUITaskItem@@KK@Z
    virtual void UpdateFlags(ITaskItem *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGroupType@CTaskBtnGroup@@UEAAXXZ
    virtual void UpdateGroupType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverlayIcon@CTaskBtnGroup@@UEAAJPEAUITaskItem@@PEAUHICON__@@I@Z
    virtual long UpdateOverlayIcon(ITaskItem *, HICON__*, unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskBtnGroup@@AEAA@PEAVCTaskListWnd@@PEAUITaskGroup@@@Z
    CTaskBtnGroup(CTaskListWnd *, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyButton@CTaskBtnGroup@@AEAAXPEAUITaskButton@@H@Z
    void _DestroyButton(ITaskButton *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInsertionIndex@CTaskBtnGroup@@AEAAHPEAUITaskButton@@@Z
    int _GetInsertionIndex(ITaskButton *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskButtonFromTaskItem@CTaskBtnGroup@@AEBAPEAUITaskButton@@PEBUITaskItem@@@Z
    ITaskButton * _GetTaskButtonFromTaskItem(ITaskItem const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskItemForIcon@CTaskBtnGroup@@AEAAPEAUITaskItem@@H@Z
    ITaskItem * _GetTaskItemForIcon(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPinned@CTaskBtnGroup@@AEAAHXZ
    int _IsPinned();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskBtnGroup@@EEAA@XZ
    virtual ~CTaskBtnGroup();
};
