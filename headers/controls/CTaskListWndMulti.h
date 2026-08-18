#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 163 member(s).
class CTaskListWndMulti {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOverflowFlyout@CTaskListWndMulti@@UEAAXXZ
    virtual void ActivateOverflowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTask@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long ActivateTask(ITaskGroup *, ITaskItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskListWndMulti@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllWindowsMinimized@CTaskListWndMulti@@UEAA_NXZ
    virtual bool AreAllWindowsMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSize@CTaskListWndMulti@@UEAAJXZ
    virtual long AutoSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTaskbarForNavigate@CTaskListWndMulti@@UEAAJPEAUITaskListUI@@HPEAPEAU2@@Z
    virtual long ComputeTaskbarForNavigate(ITaskListUI *, int, ITaskListUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPinnedItems@CTaskListWndMulti@@UEAAHXZ
    virtual int ContainsPinnedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlyout@CTaskListWndMulti@@UEAA?AUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@W4TaskbarFlyoutKind@3456@@Z
    virtual WindissectOpaque CreateFlyout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllSecondaryUI@CTaskListWndMulti@@UEAAXXZ
    virtual void DismissAllSecondaryUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissJumpView@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@@Z
    virtual long DismissJumpView(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOverflowFlyoutAsync@CTaskListWndMulti@@UEAA?AUfire_and_forget@winrt@@XZ
    virtual WindissectOpaque DismissOverflowFlyoutAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissPopupMenu@CTaskListWndMulti@@UEAAJXZ
    virtual long DismissPopupMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessageToTaskbarHosts@CTaskListWndMulti@@UEAA_NPEBUtagMSG@@@Z
    virtual bool DispatchMessageToTaskbarHosts(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDesktopSwitch@CTaskListWndMulti@@UEAAXXZ
    virtual void ForceDesktopSwitch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDesktopSwitchOnMonitor@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void ForceDesktopSwitchOnMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonGroupCount@CTaskListWndMulti@@UEAAHXZ
    virtual int GetButtonGroupCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHeight@CTaskListWndMulti@@UEAAHPEAH@Z
    virtual int GetButtonHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonMargin@CTaskListWndMulti@@UEAAXPEAH0@Z
    virtual void GetButtonMargin(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTheme@CTaskListWndMulti@@UEAA?AW4COLORTHEME@@XZ
    virtual int GetColorTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTaskOrder@CTaskListWndMulti@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetCurrentTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupProgess@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAKPEAW4_TBPSTATE@@@Z
    virtual long GetGroupProgess(ITaskGroup *, unsigned long *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@CTaskListWndMulti@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAPEAUHICON__@@@Z
    virtual long GetIcon(ITaskGroup *, ITaskItem *, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForGroupAndItem@CTaskListWndMulti@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual WindissectOpaque GetIconForGroupAndItem(ITaskGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForWindow@CTaskListWndMulti@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUHWND__@@@Z
    virtual WindissectOpaque GetIconForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAutoHiddenFromMonitor@CTaskListWndMulti@@UEAAHPEAUHMONITOR__@@@Z
    virtual int GetIsAutoHiddenFromMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinRect@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetMinRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CTaskListWndMulti@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDPI@CTaskListWndMulti@@UEAAIXZ
    virtual unsigned int GetMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumRows@CTaskListWndMulti@@UEAAHXZ
    virtual int GetNumRows();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconDescription@CTaskListWndMulti@@UEAA?AUhstring@winrt@@PEAUITaskGroup@@@Z
    virtual WindissectOpaque GetOverlayIconDescription(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDropTarget@CTaskListWndMulti@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPrimaryDropTarget(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeTaskOrder@CTaskListWndMulti@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetRelativeTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CTaskListWndMulti@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CTaskListWndMulti@@UEAAKXZ
    virtual unsigned long GetStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRectFromMonitor@CTaskListWndMulti@@UEAAJPEAUHMONITOR__@@PEAUtagRECT@@@Z
    virtual long GetStuckRectFromMonitor(HMONITOR__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskButtonGroupInfo@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAI1PEA_N@Z
    virtual long GetTaskButtonGroupInfo(ITaskGroup *, unsigned int *, unsigned int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListWndSite@CTaskListWndMulti@@UEAAJPEAPEAUITaskListWndSite@@@Z
    virtual long GetTaskListWndSite(ITaskListWndSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarIconRect@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetTaskbarIconRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayHWND@CTaskListWndMulti@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTrayHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayMonitorRect@CTaskListWndMulti@@UEAAJPEAUtagRECT@@@Z
    virtual long GetTrayMonitorRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowCount@CTaskListWndMulti@@UEAAHXZ
    virtual int GetWindowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@W4TaskGroupProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void GroupChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleAccelerator@CTaskListWndMulti@@UEAAJPEAUtagMSG@@@Z
    virtual long HandleAccelerator(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleClick@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayChange@CTaskListWndMulti@@UEAAXXZ
    virtual void HandleDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayNameChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleDisplayNameChanged(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExtendedUIClick@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleExtendedUIClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGamingFullScreenChanged@CTaskListWndMulti@@UEAAX_N@Z
    virtual void HandleGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveInvokeOnMonitor@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void HandleImmersiveInvokeOnMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleShellModeChanged@CTaskListWndMulti@@UEAAXXZ
    virtual void HandleShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupPinned@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupPinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupUnpinned@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupUnpinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CTaskListWndMulti@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWinNumHotKey@CTaskListWndMulti@@UEAAJFG@Z
    virtual long HandleWinNumHotKey(short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveAppHidden@CTaskListWndMulti@@UEAAXXZ
    virtual void ImmersiveAppHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskListWndMulti@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void ImmersiveShow(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InclusionRealityCheck@CTaskListWndMulti@@UEAAXXZ
    virtual void InclusionRealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTaskListWndMulti@@UEAAJPEAUITaskItemFilter@@PEAUHMONITOR__@@PEBGPEAUITrayComponentHost@@@Z
    virtual long Initialize(ITaskItemFilter *, HMONITOR__*, unsigned short const *, ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnyTrayInSizeMove@CTaskListWndMulti@@UEAAHXZ
    virtual int IsAnyTrayInSizeMove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtendedUIVisible@CTaskListWndMulti@@UEAAHXZ
    virtual int IsExtendedUIVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupExpanded@CTaskListWndMulti@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsGroupExpanded(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoverOverExtendedUI@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsHoverOverExtendedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnPrimaryTaskband@CTaskListWndMulti@@UEAAHXZ
    virtual int IsOnPrimaryTaskband();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutFocused@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsOverflowFlyoutFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutVisible@CTaskListWndMulti@@UEAAHXZ
    virtual int IsOverflowFlyoutVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CTaskListWndMulti@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsPinned(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestingAttention@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEA_N@Z
    virtual long IsRequestingAttention(ITaskGroup *, ITaskItem *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingJumplistForHover@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsShowingJumplistForHover();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskAllowed@CTaskListWndMulti@@UEAA_NPEAUITaskItem@@@Z
    virtual bool IsTaskAllowed(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransparent@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsTransparent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrayWindow@CTaskListWndMulti@@UEAAJPEAUHWND__@@@Z
    virtual long IsTrayWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowSharing@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsWindowSharing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemThumbnailChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemThumbnailProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemThumbnailChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCloudDataReceived@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifyCloudDataReceived();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDashboardPayloadChanged@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifyDashboardPayloadChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIsWindowSharingChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void NotifyIsWindowSharingChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySystemMenu@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifySystemMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVirtualDesktopChanging@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifyVirtualDesktopChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PermitAutoHide@CTaskListWndMulti@@UEAAHXZ
    virtual int PermitAutoHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessJumpViewCloseWindow@CTaskListWndMulti@@UEAAXPEAUHWND__@@PEAUITaskGroup@@PEAUHMONITOR__@@@Z
    virtual void ProcessJumpViewCloseWindow(HWND__*, ITaskGroup *, HMONITOR__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskListWndMulti@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTaskListWndMulti@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealityCheck@CTaskListWndMulti@@UEAAXXZ
    virtual void RealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawExtendedTask@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long RedrawExtendedTask(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawTask@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@K@Z
    virtual long RedrawTask(ITaskGroup *, ITaskItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshTaskFilter@CTaskListWndMulti@@UEAAXXZ
    virtual void RefreshTaskFilter();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskListWndMulti@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHighlightForAllButtons@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void RemoveHighlightForAllButtons(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderTaskGroup@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@0@Z
    virtual long ReorderTaskGroup(ITaskGroup *, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResendSecondaryStuckPlace@CTaskListWndMulti@@UEAAXXZ
    virtual void ResendSecondaryStuckPlace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAnimationState@CTaskListWndMulti@@UEAAXXZ
    virtual void ResetAnimationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryTaskbarLoaded@CTaskListWndMulti@@UEAAXPEAUITaskListUI@@_N@Z
    virtual void SecondaryTaskbarLoaded(ITaskListUI *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageW@CTaskListWndMulti@@UEAAXI_K_J@Z
    virtual void SendMessageW(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@CTaskListWndMulti@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivatingTaskFlag@CTaskListWndMulti@@UEAAXXZ
    virtual void SetActivatingTaskFlag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrag@CTaskListWndMulti@@UEAAJH@Z
    virtual long SetDrag(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsGroupExpanded@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@_N@Z
    virtual void SetIsGroupExpanded(ITaskGroup *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@PEBG@Z
    virtual void SetMonitor(HMONITOR__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedraw@CTaskListWndMulti@@UEAA?AUSetRedrawState@@H@Z
    virtual SetRedrawState SetRedraw(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeTaskOrder@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@H@Z
    virtual void SetRelativeTaskOrder(ITaskGroup *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryStuckPlace@CTaskListWndMulti@@UEAAXK@Z
    virtual void SetSecondaryStuckPlace(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTaskListWndMulti@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskFilter@CTaskListWndMulti@@UEAAXPEAUITaskItemFilter@@@Z
    virtual void SetTaskFilter(ITaskItemFilter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarIconRect@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@AEBUtagRECT@@@Z
    virtual long SetTaskbarIconRect(ITaskGroup *, tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemVisualState@Shell@UI@WindowsUdk@winrt@@@Z
    virtual long SetVisualState(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChanged@CTaskListWndMulti@@UEAAJXZ
    virtual long SettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CTaskListWndMulti@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowJumpView@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@_N@Z
    virtual long ShowJumpView(ITaskGroup *, ITaskItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLegacyExtendedUIForKeyboardFocus@CTaskListWndMulti@@UEAAXAEBUTaskGroup@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ShowLegacyExtendedUIForKeyboardFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CTaskListWndMulti@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StuckTrayMonitorChanged@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void StuckTrayMonitorChanged(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CTaskListWndMulti@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocus@CTaskListWndMulti@@UEAAXH@Z
    virtual void TakeFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskActiveTabUpdated@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@1@Z
    virtual long TaskActiveTabUpdated(ITaskGroup *, ITaskItem *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskCreated@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskCreated(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskDestroyed@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskDestroyed(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskInclusionChanged@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskInclusionChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskProgressUpdate@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskProgressUpdate(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveGroup@CTaskListWndMulti@@UEAA_NPEAUITaskGroup@@I@Z
    virtual bool TryMoveGroup(ITaskGroup *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveKeyboardFocusToFlyout@CTaskListWndMulti@@UEAAXXZ
    virtual void TryMoveKeyboardFocusToFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPromotePlaceholder@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void TryPromotePlaceholder(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverlayIcon@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUHICON__@@I@Z
    virtual long UpdateOverlayIcon(ITaskGroup *, ITaskItem *, HICON__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryTraySizing@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdatePrimaryTraySizing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryUIPositions@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdateSecondaryUIPositions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskBandTheme@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdateTaskBandTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@CTaskListWndMulti@@UEAAJXZ
    virtual long UpdateTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdateVisualTaskOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@H@Z
    virtual void UpdateVisualTaskOrder(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowStateChanged@CTaskListWndMulti@@UEAAXXZ
    virtual void WindowStateChanged();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskListWndMulti@@IEAA@PEAUIObjectFactory@@PEAUITaskItemFilterFactory@@PEAUITrayComponentHost@@@Z
    CTaskListWndMulti(IObjectFactory *, ITaskItemFilterFactory *, ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSecondaryTaskListWnd@CTaskListWndMulti@@IEAAXPEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SecondaryTaskbarInitialization@TaskbarTip@@U12@@details@tip2@@@tip2@@PEBG@Z
    void _CreateSecondaryTaskListWnd(HMONITOR__*, WindissectOpaque, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumDisplayMonitors@CTaskListWndMulti@@IEAAXXZ
    void _EnumDisplayMonitors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPendingSecondaryTaskListWnd@CTaskListWndMulti@@IEAAPEAUITaskListUI@@PEAUHMONITOR__@@@Z
    ITaskListUI * _GetPendingSecondaryTaskListWnd(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSecondaryTaskListWnd@CTaskListWndMulti@@IEAAPEAUITaskListUI@@PEAUHMONITOR__@@PEBUtagRECT@@PEBG@Z
    ITaskListUI * _GetSecondaryTaskListWnd(HMONITOR__*, tagRECT const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskListWnd@CTaskListWndMulti@@IEAAPEAUITaskListUI@@PEAUHMONITOR__@@@Z
    ITaskListUI * _GetTaskListWnd(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshFilter@CTaskListWndMulti@@IEAAXPEAUITaskListUI@@_N@Z
    void _RefreshFilter(ITaskListUI *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MonitorEnumProc@CTaskListWndMulti@@KAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int s_MonitorEnumProc(HMONITOR__*, HDC__*, tagRECT *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskListWndMulti@@MEAA@XZ
    virtual ~CTaskListWndMulti();
};
