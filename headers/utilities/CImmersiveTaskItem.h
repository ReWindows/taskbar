#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 34 member(s).
class CImmersiveTaskItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImmersiveTaskItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindow@CImmersiveTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetAppWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeData@CImmersiveTaskItem@@UEAAJPEAPEAUIBadgeData@@@Z
    virtual long GetBadgeData(IBadgeData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveApp@CImmersiveTaskItem@@UEAAPEAUIImmersiveApplication@@XZ
    virtual IImmersiveApplication * GetImmersiveApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewWindow@CImmersiveTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetLivePreviewWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailWindow@CImmersiveTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetThumbnailWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleText@CImmersiveTaskItem@@UEAAJPEAGHPEAH@Z
    virtual long GetTitleText(unsigned short *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CImmersiveTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomContextMenu@CImmersiveTaskItem@@UEAA_NXZ
    virtual bool HasCustomContextMenu();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersive@CImmersiveTaskItem@@UEAA_NXZ
    virtual bool IsImmersive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskGroupTaskItem@CImmersiveTaskItem@@UEAA_NXZ
    virtual bool IsTaskGroupTaskItem();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImmersiveTaskItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImmersiveTaskItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBadgeData@CImmersiveTaskItem@@UEAAXPEAUIBadgeData@@@Z
    virtual void SetBadgeData(IBadgeData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLivePreviewWindow@CImmersiveTaskItem@@UEAAXPEAUHWND__@@@Z
    virtual void SetLivePreviewWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CImmersiveTaskItem@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastActivatedTime@CImmersiveTaskItem@@UEAAJXZ
    virtual long UpdateLastActivatedTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMonitor@CImmersiveTaskItem@@UEAAXPEAUITrayComponentHost@@@Z
    virtual void UpdateMonitor(ITrayComponentHost *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveTaskItem@@IEAA@PEAUIMockableApi@@PEAUIImmersiveApplication@@PEAUIApplicationViewFlashingNotification@@@Z
    CImmersiveTaskItem(IMockableApi *, IImmersiveApplication *, IApplicationViewFlashingNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindow@CImmersiveTaskItem@@IEAAPEAUHWND__@@_N@Z
    HWND__* _GetWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnFlashingChange@CImmersiveTaskItem@@MEAAX_N@Z
    virtual void v_OnFlashingChange(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveTaskItem@@MEAA@XZ
    virtual ~CImmersiveTaskItem();
};
