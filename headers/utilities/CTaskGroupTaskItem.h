#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 36 member(s).
class CTaskGroupTaskItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskGroupTaskItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibilityName@CTaskGroupTaskItem@@UEAAJPEAPEAG@Z
    virtual long GetAccessibilityName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeData@CTaskGroupTaskItem@@UEAAJPEAPEAUIBadgeData@@@Z
    virtual long GetBadgeData(IBadgeData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveApp@CTaskGroupTaskItem@@UEAAPEAUIImmersiveApplication@@XZ
    virtual IImmersiveApplication * GetImmersiveApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewWindow@CTaskGroupTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetLivePreviewWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryWindow@CTaskGroupTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetPrimaryWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwitchItem@CTaskGroupTaskItem@@UEAA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@XZ
    virtual WindissectOpaque GetSwitchItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskGroup@CTaskGroupTaskItem@@UEAA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@XZ
    virtual WindissectOpaque GetTaskGroup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailWindow@CTaskGroupTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetThumbnailWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleText@CTaskGroupTaskItem@@UEAAJPEAGHPEAH@Z
    virtual long GetTitleText(unsigned short *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CTaskGroupTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomContextMenu@CTaskGroupTaskItem@@UEAA_NXZ
    virtual bool HasCustomContextMenu();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersive@CTaskGroupTaskItem@@UEAA_NXZ
    virtual bool IsImmersive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskGroupTaskItem@CTaskGroupTaskItem@@UEAA_NXZ
    virtual bool IsTaskGroupTaskItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisibleOnCurrentVirtualDesktop@CTaskGroupTaskItem@@UEAA_NXZ
    virtual bool IsVisibleOnCurrentVirtualDesktop();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskGroupTaskItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskGroupTaskItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBadgeData@CTaskGroupTaskItem@@UEAAXPEAUIBadgeData@@@Z
    virtual void SetBadgeData(IBadgeData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLivePreviewWindow@CTaskGroupTaskItem@@UEAAXPEAUHWND__@@@Z
    virtual void SetLivePreviewWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CTaskGroupTaskItem@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastActivatedTime@CTaskGroupTaskItem@@UEAAJXZ
    virtual long UpdateLastActivatedTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMonitor@CTaskGroupTaskItem@@UEAAXPEAUITrayComponentHost@@@Z
    virtual void UpdateMonitor(ITrayComponentHost *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnFlashingChange@CTaskGroupTaskItem@@MEAAX_N@Z
    virtual void v_OnFlashingChange(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskGroupTaskItem@@MEAA@XZ
    virtual ~CTaskGroupTaskItem();
};
