#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 86 member(s).
class CSecondaryTray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveZbandChanged@CSecondaryTray@@UEAAJKK@Z
    virtual long ActiveZbandChanged(unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSecondaryTray@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSize@CSecondaryTray@@UEAAXH@Z
    virtual void CheckSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CSecondaryTray@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CSecondaryTray@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDPI@CSecondaryTray@@UEAAIXZ
    virtual unsigned int GetMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearl@CSecondaryTray@@UEAAJPEAPEAVCPearl@@@Z
    virtual long GetPearl(CPearl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CSecondaryTray@@UEAAXPEAK@Z
    virtual void GetStuckPlace(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRect@CSecondaryTray@@UEAAXPEAUtagRECT@@@Z
    virtual void GetStuckRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayWindow@CSecondaryTray@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTrayWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayChange@CSecondaryTray@@UEAAXXZ
    virtual void HandleDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGamingFullScreenChanged@CSecondaryTray@@UEAAX_N@Z
    virtual void HandleGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHoverUIVisibilityChange@CSecondaryTray@@UEAAX_N@Z
    virtual void HandleHoverUIVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveInvoke@CSecondaryTray@@UEAAXXZ
    virtual void HandleImmersiveInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CSecondaryTray@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewVisibilityChange@CSecondaryTray@@UEAAX_N@Z
    virtual void HandleJumpViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CSecondaryTray@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleShellModeChanged@CSecondaryTray@@UEAAXXZ
    virtual void HandleShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CSecondaryTray@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CSecondaryTray@@UEAAXPEAUHMONITOR__@@@Z
    virtual void Hide(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestForSizeableBorder@CSecondaryTray@@UEAAHHH@Z
    virtual int HitTestForSizeableBorder(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CSecondaryTray@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitModelAndHost@CSecondaryTray@@UEAAXUTaskbarModel@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void InitModelAndHost(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoHidden@CSecondaryTray@@UEAAHXZ
    virtual int IsAutoHidden();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopVisibleOnTrayMonitor@CSecondaryTray@@UEAA_NXZ
    virtual bool IsDesktopVisibleOnTrayMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSizeMove@CSecondaryTray@@UEAAHXZ
    virtual int IsInSizeMove();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSecondaryTray@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSettings@CSecondaryTray@@UEAAXXZ
    virtual void RefreshSettings();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSecondaryTray@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResendStuckPlace@CSecondaryTray@@UEAAXXZ
    virtual void ResendStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CSecondaryTray@@UEAAXPEAUHMONITOR__@@PEBG@Z
    virtual void SetMonitor(HMONITOR__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStuckPlace@CSecondaryTray@@UEAAXK@Z
    virtual void SetStuckPlace(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CSecondaryTray@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CSecondaryTray@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unhide@CSecondaryTray@@UEAAXW4UnhideRequest@TrayCommon@@@Z
    virtual void Unhide(int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondaryTray@@AEAA@PEAUITrayComponentHost@@@Z
    CSecondaryTray(ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeAsync@CSecondaryTray@@AEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque UninitializeAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarVisibility@CSecondaryTray@@AEAAXXZ
    void UpdateTaskbarVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustStuckWidths@CSecondaryTray@@AEAAXAEBUtagRECT@@PEAUtagSIZE@@_N@Z
    void _AdjustStuckWidths(tagRECT const &, tagSIZE *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoHide@CSecondaryTray@@AEAAX_N@Z
    void _AutoHide(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcDragPlace@CSecondaryTray@@AEAAIUtagPOINT@@@Z
    unsigned int _CalcDragPlace(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloakUntilNextRender@CSecondaryTray@@AEAAXXZ
    void _CloakUntilNextRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeHiddenRect@CSecondaryTray@@AEAAXPEAUtagRECT@@@Z
    void _ComputeHiddenRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSecondaryTray@CSecondaryTray@@AEAAJPEAUITaskListUI@@PEAUHMONITOR__@@PEBG@Z
    long _CreateSecondaryTray(ITaskListUI *, HMONITOR__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayRect@CSecondaryTray@@AEAAHPEAUtagRECT@@@Z
    int _GetDisplayRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetModeChangeFlags@CSecondaryTray@@AEAA?AW4ModeChangeFlags@ImmersiveTray@@XZ
    int _GetModeChangeFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleImmersiveInvoke@CSecondaryTray@@AEAA_NW4ImmersiveInvokeFlags@ImmersiveTray@@@Z
    bool _HandleImmersiveInvoke(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTrayFlyoutVisibilityChange@CSecondaryTray@@AEAAX_N@Z
    void _HandleTrayFlyoutVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImmersiveResize@CSecondaryTray@@AEAAX_N@Z
    void _ImmersiveResize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsActive@CSecondaryTray@@AEAA_NXZ
    bool _IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSettings@CSecondaryTray@@AEAAJXZ
    long _LoadSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAppBarCallback@CSecondaryTray@@AEAAXI_J@Z
    void _OnAppBarCallback(unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEnterSizeMove@CSecondaryTray@@AEAAXXZ
    void _OnEnterSizeMove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMoving@CSecondaryTray@@AEAAX_KPEAUtagRECT@@@Z
    void _OnMoving(uint64_t, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNCHitTest@CSecondaryTray@@AEAA_J_J@Z
    int64_t _OnNCHitTest(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPaint@CSecondaryTray@@AEAAXPEAUHDC__@@@Z
    void _OnPaint(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSettingChange@CSecondaryTray@@AEAAX_J@Z
    void _OnSettingChange(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSizing@CSecondaryTray@@AEAAXPEAUtagRECT@@H@Z
    void _OnSizing(tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnThemeChanged@CSecondaryTray@@AEAAXXZ
    void _OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CSecondaryTray@@AEAAX_K@Z
    void _OnTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowPosChanging@CSecondaryTray@@AEAAXPEAUtagWINDOWPOS@@@Z
    void _OnWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionAppBar@CSecondaryTray@@AEAAXI@Z
    void _PositionAppBar(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateMessageToChildWindows@CSecondaryTray@@AEAAXI_K_J@Z
    void _PropagateMessageToChildWindows(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetZorder@CSecondaryTray@@AEAAXH@Z
    void _ResetZorder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResizeAndPositionChildControls@CSecondaryTray@@AEAAXPEAUtagWINDOWPOS@@@Z
    void _ResizeAndPositionChildControls(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveTrayLocation@CSecondaryTray@@AEAAXXZ
    void _SaveTrayLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMonitorDeviceID@CSecondaryTray@@AEAAXPEBG@Z
    void _SetMonitorDeviceID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SnapshotStuckRectSize@CSecondaryTray@@AEAAXXZ
    void _SnapshotStuckRectSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unhide@CSecondaryTray@@AEAAXW4TrayUnhideFlags@TrayCommon@@W4UnhideRequest@3@@Z
    void _Unhide(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAutoHideBar@CSecondaryTray@@AEAAXXZ
    void _UpdateAutoHideBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateChildControls_SetAutoHide@CSecondaryTray@@AEAAXI@Z
    void _UpdateChildControls_SetAutoHide(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCloakState@CSecondaryTray@@AEAAX_N@Z
    void _UpdateCloakState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateStuckRects@CSecondaryTray@@AEAAXXZ
    void _UpdateStuckRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CSecondaryTray@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSecondaryTray@@EEAA@XZ
    virtual ~CSecondaryTray();
};
