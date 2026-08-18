#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 21 member(s).
class CWindowTaskItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeData@CWindowTaskItem@@UEAAJPEAPEAUIBadgeData@@@Z
    virtual long GetBadgeData(IBadgeData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveApp@CWindowTaskItem@@UEAAPEAUIImmersiveApplication@@XZ
    virtual IImmersiveApplication * GetImmersiveApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewWindow@CWindowTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetLivePreviewWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailWindow@CWindowTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetThumbnailWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleText@CWindowTaskItem@@UEAAJPEAGHPEAH@Z
    virtual long GetTitleText(unsigned short *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CWindowTaskItem@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomContextMenu@CWindowTaskItem@@UEAA_NXZ
    virtual bool HasCustomContextMenu();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersive@CWindowTaskItem@@UEAA_NXZ
    virtual bool IsImmersive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskGroupTaskItem@CWindowTaskItem@@UEAA_NXZ
    virtual bool IsTaskGroupTaskItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBadgeData@CWindowTaskItem@@UEAAXPEAUIBadgeData@@@Z
    virtual void SetBadgeData(IBadgeData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLivePreviewWindow@CWindowTaskItem@@UEAAXPEAUHWND__@@@Z
    virtual void SetLivePreviewWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CWindowTaskItem@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastActivatedTime@CWindowTaskItem@@UEAAJXZ
    virtual long UpdateLastActivatedTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMonitor@CWindowTaskItem@@UEAAXPEAUITrayComponentHost@@@Z
    virtual void UpdateMonitor(ITrayComponentHost *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnFlashingChange@CWindowTaskItem@@MEAAX_N@Z
    virtual void v_OnFlashingChange(bool);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowTaskItem@@AEAA@PEAUIMockableApi@@PEAUHWND__@@PEAUIClassicWindowManager@@PEAUIApplicationViewFlashingNotification@@@Z
    CWindowTaskItem(IMockableApi *, HWND__*, IClassicWindowManager *, IApplicationViewFlashingNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompatFlags@CWindowTaskItem@@AEAAXXZ
    void UpdateCompatFlags();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowTaskItem@@EEAA@XZ
    virtual ~CWindowTaskItem();
};
