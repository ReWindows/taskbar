#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 202 member(s).
class CTaskListWnd {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOverflowFlyout@CTaskListWnd@@UEAAXXZ
    virtual void ActivateOverflowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTask@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long ActivateTask(ITaskGroup *, ITaskItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskListWnd@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllWindowsMinimized@CTaskListWnd@@UEAA_NXZ
    virtual bool AreAllWindowsMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSize@CTaskListWnd@@UEAAJXZ
    virtual long AutoSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseItem@CTaskListWnd@@UEAAXPEAUITaskItem@@@Z
    virtual void CloseItem(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPinnedItems@CTaskListWnd@@UEAAHXZ
    virtual int ContainsPinnedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlyout@CTaskListWnd@@UEAA?AUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@W4TaskbarFlyoutKind@3456@@Z
    virtual WindissectOpaque CreateFlyout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableToolTip@CTaskListWnd@@UEAAXH@Z
    virtual void DisableToolTip(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllSecondaryUI@CTaskListWnd@@UEAAXXZ
    virtual void DismissAllSecondaryUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissJumpView@CTaskListWnd@@UEAAJPEAUITaskGroup@@@Z
    virtual long DismissJumpView(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOverflowFlyoutAsync@CTaskListWnd@@UEAA?AUfire_and_forget@winrt@@XZ
    virtual WindissectOpaque DismissOverflowFlyoutAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissPopupMenu@CTaskListWnd@@UEAAJXZ
    virtual long DismissPopupMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessageToTaskbarHosts@CTaskListWnd@@UEAA_NPEBUtagMSG@@@Z
    virtual bool DispatchMessageToTaskbarHosts(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CTaskListWnd@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CTaskListWnd@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CTaskListWnd@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CTaskListWnd@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDesktopSwitch@CTaskListWnd@@UEAAXXZ
    virtual void ForceDesktopSwitch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonGroupCount@CTaskListWnd@@UEAAHXZ
    virtual int GetButtonGroupCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHeight@CTaskListWnd@@UEAAHPEAH@Z
    virtual int GetButtonHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonMargin@CTaskListWnd@@UEAAXPEAH0@Z
    virtual void GetButtonMargin(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTheme@CTaskListWnd@@UEAA?AW4COLORTHEME@@XZ
    virtual int GetColorTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTaskOrder@CTaskListWnd@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetCurrentTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupLocation@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@HPEAUtagRECT@@@Z
    virtual long GetGroupLocation(ITaskGroup *, ITaskItem *, int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupProgess@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAKPEAW4_TBPSTATE@@@Z
    virtual long GetGroupProgess(ITaskGroup *, unsigned long *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@CTaskListWnd@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHost@CTaskListWnd@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetHost(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAPEAUHICON__@@@Z
    virtual long GetIcon(ITaskGroup *, ITaskItem *, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForGroupAndItem@CTaskListWnd@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual WindissectOpaque GetIconForGroupAndItem(ITaskGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForWindow@CTaskListWnd@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUHWND__@@@Z
    virtual WindissectOpaque GetIconForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconId@CTaskListWnd@@UEAAHPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual int GetIconId(ITaskGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinRect@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetMinRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CTaskListWnd@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDPI@CTaskListWnd@@UEAAIXZ
    virtual unsigned int GetMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumRows@CTaskListWnd@@UEAAHXZ
    virtual int GetNumRows();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconDescription@CTaskListWnd@@UEAA?AUhstring@winrt@@PEAUITaskGroup@@@Z
    virtual WindissectOpaque GetOverlayIconDescription(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeTaskOrder@CTaskListWnd@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetRelativeTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CTaskListWnd@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CTaskListWnd@@UEAAKXZ
    virtual unsigned long GetStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskButtonGroupInfo@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAI1PEA_N@Z
    virtual long GetTaskButtonGroupInfo(ITaskGroup *, unsigned int *, unsigned int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListWndSite@CTaskListWnd@@UEAAJPEAPEAUITaskListWndSite@@@Z
    virtual long GetTaskListWndSite(ITaskListWndSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarIconRect@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetTaskbarIconRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayHWND@CTaskListWnd@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTrayHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayMonitorRect@CTaskListWnd@@UEAAJPEAUtagRECT@@@Z
    virtual long GetTrayMonitorRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CTaskListWnd@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowCount@CTaskListWnd@@UEAAHXZ
    virtual int GetWindowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@W4TaskGroupProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void GroupChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleAccelerator@CTaskListWnd@@UEAAJPEAUtagMSG@@@Z
    virtual long HandleAccelerator(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleClick@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayChange@CTaskListWnd@@UEAAXXZ
    virtual void HandleDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayNameChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleDisplayNameChanged(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExtendedUIClick@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleExtendedUIClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CTaskListWnd@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CTaskListWnd@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupPinned@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupPinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupUnpinned@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupUnpinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CTaskListWnd@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWinNumHotKey@CTaskListWnd@@UEAAJFG@Z
    virtual long HandleWinNumHotKey(short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveAppHidden@CTaskListWnd@@UEAAXXZ
    virtual void ImmersiveAppHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskListWnd@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InclusionRealityCheck@CTaskListWnd@@UEAAXXZ
    virtual void InclusionRealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTaskListWnd@@UEAAJPEAUITaskItemFilter@@PEAUHMONITOR__@@PEBGPEAUITrayComponentHost@@@Z
    virtual long Initialize(ITaskItemFilter *, HMONITOR__*, unsigned short const *, ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContextMenuActive@CTaskListWnd@@UEAAHXZ
    virtual int IsContextMenuActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtendedUIVisible@CTaskListWnd@@UEAAHXZ
    virtual int IsExtendedUIVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupExpanded@CTaskListWnd@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsGroupExpanded(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoverOverExtendedUI@CTaskListWnd@@UEAA_NXZ
    virtual bool IsHoverOverExtendedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLivePreviewActive@CTaskListWnd@@UEAAHXZ
    virtual int IsLivePreviewActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnPrimaryTaskband@CTaskListWnd@@UEAAHXZ
    virtual int IsOnPrimaryTaskband();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutFocused@CTaskListWnd@@UEAA_NXZ
    virtual bool IsOverflowFlyoutFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutVisible@CTaskListWnd@@UEAAHXZ
    virtual int IsOverflowFlyoutVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CTaskListWnd@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsPinned(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestingAttention@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEA_N@Z
    virtual long IsRequestingAttention(ITaskGroup *, ITaskItem *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingJumplistForHover@CTaskListWnd@@UEAA_NXZ
    virtual bool IsShowingJumplistForHover();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskAllowed@CTaskListWnd@@UEAA_NPEAUITaskItem@@@Z
    virtual bool IsTaskAllowed(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskExtendedUI@CTaskListWnd@@UEAAHPEAUITaskBtnGroup@@PEAUITaskItem@@@Z
    virtual int IsTaskExtendedUI(ITaskBtnGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskTopLevelUI@CTaskListWnd@@UEAAHPEAUITaskItem@@@Z
    virtual int IsTaskTopLevelUI(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransparent@CTaskListWnd@@UEAA_NXZ
    virtual bool IsTransparent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowSharing@CTaskListWnd@@UEAA_NXZ
    virtual bool IsWindowSharing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemThumbnailChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemThumbnailProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemThumbnailChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCloudDataReceived@CTaskListWnd@@UEAAXXZ
    virtual void NotifyCloudDataReceived();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDashboardPayloadChanged@CTaskListWnd@@UEAAXXZ
    virtual void NotifyDashboardPayloadChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIsWindowSharingChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void NotifyIsWindowSharingChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySystemMenu@CTaskListWnd@@UEAAXXZ
    virtual void NotifySystemMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVirtualDesktopChanging@CTaskListWnd@@UEAAXXZ
    virtual void NotifyVirtualDesktopChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenu@CTaskListWnd@@UEAAXUtagPOINT@@PEAUHWND__@@_NPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void OnContextMenu(tagPOINT, HWND__*, bool, ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuAsync@CTaskListWnd@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@PEAUHWND__@@_NPEAUITaskGroup@@PEAUITaskItem@@@Z
    WindissectOpaque OnContextMenuAsync(tagPOINT, HWND__*, bool, ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PermitAutoHide@CTaskListWnd@@UEAAHXZ
    virtual int PermitAutoHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessJumpViewCloseWindow@CTaskListWnd@@UEAAXPEAUHWND__@@PEAUITaskGroup@@PEAUHMONITOR__@@@Z
    virtual void ProcessJumpViewCloseWindow(HWND__*, ITaskGroup *, HMONITOR__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskListWnd@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealityCheck@CTaskListWnd@@UEAAXXZ
    virtual void RealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawExtendedTask@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long RedrawExtendedTask(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawTask@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@K@Z
    virtual long RedrawTask(ITaskGroup *, ITaskItem *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskListWnd@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHighlightForAllButtons@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void RemoveHighlightForAllButtons(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderTaskGroup@CTaskListWnd@@UEAAJPEAUITaskGroup@@0@Z
    virtual long ReorderTaskGroup(ITaskGroup *, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@CTaskListWnd@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivatingTaskFlag@CTaskListWnd@@UEAAXXZ
    virtual void SetActivatingTaskFlag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrag@CTaskListWnd@@UEAAJH@Z
    virtual long SetDrag(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsGroupExpanded@CTaskListWnd@@UEAAXPEAUITaskGroup@@_N@Z
    virtual void SetIsGroupExpanded(ITaskGroup *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CTaskListWnd@@UEAAXPEAUHMONITOR__@@PEBG@Z
    virtual void SetMonitor(HMONITOR__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeTaskOrder@CTaskListWnd@@UEAAXPEAUITaskGroup@@H@Z
    virtual void SetRelativeTaskOrder(ITaskGroup *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTaskListWnd@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskFilter@CTaskListWnd@@UEAAXPEAUITaskItemFilter@@@Z
    virtual void SetTaskFilter(ITaskItemFilter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarIconRect@CTaskListWnd@@UEAAJPEAUITaskGroup@@AEBUtagRECT@@@Z
    virtual long SetTaskbarIconRect(ITaskGroup *, tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemVisualState@Shell@UI@WindowsUdk@winrt@@@Z
    virtual long SetVisualState(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChanged@CTaskListWnd@@UEAAJXZ
    virtual long SettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CTaskListWnd@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowJumpView@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@_N@Z
    virtual long ShowJumpView(ITaskGroup *, ITaskItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLegacyExtendedUIForKeyboardFocus@CTaskListWnd@@UEAAXAEBUTaskGroup@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ShowLegacyExtendedUIForKeyboardFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLivePreview@CTaskListWnd@@UEAAJPEAUITaskItem@@K@Z
    virtual long ShowLivePreview(ITaskItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CTaskListWnd@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToItem@CTaskListWnd@@UEAAXPEAUITaskItem@@@Z
    virtual void SwitchToItem(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CTaskListWnd@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocus@CTaskListWnd@@UEAAXH@Z
    virtual void TakeFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskActiveTabUpdated@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@1@Z
    virtual long TaskActiveTabUpdated(ITaskGroup *, ITaskItem *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskCreated@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskCreated(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskDestroyed@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskDestroyed(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskInclusionChanged@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskInclusionChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskProgressUpdate@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskProgressUpdate(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveGroup@CTaskListWnd@@UEAA_NPEAUITaskGroup@@I@Z
    virtual bool TryMoveGroup(ITaskGroup *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveKeyboardFocusToFlyout@CTaskListWnd@@UEAAXXZ
    virtual void TryMoveKeyboardFocusToFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPromotePlaceholder@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void TryPromotePlaceholder(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverlayIcon@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUHICON__@@I@Z
    virtual long UpdateOverlayIcon(ITaskGroup *, ITaskItem *, HICON__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryTraySizing@CTaskListWnd@@UEAAXXZ
    virtual void UpdatePrimaryTraySizing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@CTaskListWnd@@UEAAJXZ
    virtual long UpdateTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWnd@@UEAAXPEAUITaskGroup@@H@Z
    virtual void UpdateVisualTaskOrder(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWnd@@UEAAXXZ
    virtual void UpdateVisualTaskOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowStateChanged@CTaskListWnd@@UEAAXXZ
    virtual void WindowStateChanged();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskListWnd@@IEAA@PEAUIObjectFactory@@@Z
    CTaskListWnd(IObjectFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FakeSystemMenuCB@CTaskListWnd@@KAXPEAUHWND__@@I_K_J@Z
    static void FakeSystemMenuCB(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerPoint@CTaskListWnd@@IEBA?AUtagPOINT@@AEBULauncherOptions@System@Windows@winrt@@PEAUHWND__@@@Z
    tagPOINT GetCallerPoint(WindissectOpaque const &, HWND__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipBackgroundColor@CTaskListWnd@@IEBAKXZ
    unsigned long GetToolTipBackgroundColor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSecondaryModelAndHostAsync@CTaskListWnd@@IEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque InitSecondaryModelAndHostAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTaskGroupTaskItem@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskGroupTaskItem@@@Z
    void InsertTaskGroupTaskItem(ITaskGroup *, ITaskGroupTaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupInOverflow@CTaskListWnd@@IEAA_NPEAUITaskGroup@@@Z
    bool IsGroupInOverflow(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskGroupInserted@CTaskListWnd@@IEAAXPEAUITaskGroup@@H@Z
    void NotifyTaskGroupInserted(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskGroupRemoved@CTaskListWnd@@IEAAXPEAUITaskGroup@@@Z
    void NotifyTaskGroupRemoved(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskGroupRepositioned@CTaskListWnd@@IEAAXPEAUITaskGroup@@H@Z
    void NotifyTaskGroupRepositioned(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtendedUIVisibilityChanged@CTaskListWnd@@IEAAXAEBUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@AEBUIInspectable@Foundation@Windows@6@@Z
    void OnExtendedUIVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverCardVisibilityChanged@CTaskListWnd@@IEAAXAEBUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@AEBUIInspectable@Foundation@Windows@6@@Z
    void OnHoverCardVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskGroupTaskItem@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskGroupTaskItem@@@Z
    void RemoveTaskGroupTaskItem(ITaskGroup *, ITaskGroupTaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowJumplistOnHover@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void ShowJumplistOnHover(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartJumplistOnHoverTimer@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@_N@Z
    void StartJumplistOnHoverTimer(ITaskGroup *, ITaskItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTip@CTaskListWnd@@IEAAXXZ
    void UpdateToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTipFont@CTaskListWnd@@IEAAXXZ
    void UpdateToolTipFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeJumpViewPosition@CTaskListWnd@@IEBAJPEAUITaskBtnGroup@@HAEAUPoint@Foundation@Windows@@AEAW4HorizontalAlignment@Xaml@UI@5@AEAW4VerticalAlignment@785@@Z
    long _ComputeJumpViewPosition(ITaskBtnGroup *, int, WindissectOpaque &, int &, int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTBGroup@CTaskListWnd@@IEAAPEAUITaskBtnGroup@@PEAUITaskGroup@@H@Z
    ITaskBtnGroup * _CreateTBGroup(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureJumpViewExperienceWrapper@CTaskListWnd@@IEAAJXZ
    long _EnsureJumpViewExperienceWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FakeSystemMenu@CTaskListWnd@@IEAAXPEAUHWND__@@K@Z
    void _FakeSystemMenu(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishMenu@CTaskListWnd@@IEAAXXZ
    void _FinishMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixupTaskIndicies@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@HH@Z
    void _FixupTaskIndicies(ITaskBtnGroup *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImmersiveLivePreviewWindow@CTaskListWnd@@IEAAJPEAUITaskItem@@PEAPEAUHWND__@@PEAUtagRECT@@@Z
    long _GetImmersiveLivePreviewWindow(ITaskItem *, HWND__* *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetJumpViewParams@CTaskListWnd@@IEBAJPEAUITaskBtnGroup@@PEAUITaskItem@@H_NPEAPEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z
    long _GetJumpViewParams(ITaskBtnGroup *, ITaskItem *, int, bool, ::Windows::Internal::Shell::JumpView::IJumpViewParams * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTBGroupFromGroup@CTaskListWnd@@IEAAPEAUITaskBtnGroup@@PEAUITaskGroup@@PEAH@Z
    ITaskBtnGroup * _GetTBGroupFromGroup(ITaskGroup *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUserPreferences@CTaskListWnd@@IEBAKXZ
    unsigned long _GetUserPreferences() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleClick@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@HW4eCLICKACTION@1@HH@Z
    void _HandleClick(ITaskBtnGroup *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleCreate@CTaskListWnd@@IEAA_JXZ
    int64_t _HandleCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleJumpViewDismissed@CTaskListWnd@@IEAAXXZ
    void _HandleJumpViewDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMenuMessage@CTaskListWnd@@IEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _HandleMenuMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleThemeChanged@CTaskListWnd@@IEAAX_N@Z
    void _HandleThemeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTimer@CTaskListWnd@@IEAAX_K@Z
    void _HandleTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestForTBGroup@CTaskListWnd@@IEAAPEAUITaskBtnGroup@@AEBUtagPOINT@@PEAHPEAW4eTBGROUPHITLOCATION@@@Z
    ITaskBtnGroup * _HitTestForTBGroup(tagPOINT const &, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsButtonGroupInOverflow@CTaskListWnd@@IEBA_NPEAUITaskBtnGroup@@@Z
    bool _IsButtonGroupInOverflow(ITaskBtnGroup *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHorizontal@CTaskListWnd@@IEBAHXZ
    int _IsHorizontal() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTaskbandUnique@CTaskListWnd@@IEBAHXZ
    int _IsTaskbandUnique() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveTaskBtnGroup@CTaskListWnd@@IEAAJHH@Z
    long _MoveTaskBtnGroup(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnJumpViewCancelled@CTaskListWnd@@IEAAXPEAUHSTRING__@@@Z
    void _OnJumpViewCancelled(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnJumpViewDismissed@CTaskListWnd@@IEAAXPEAUHSTRING__@@@Z
    void _OnJumpViewDismissed(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnJumpViewShown@CTaskListWnd@@IEAAXPEAUHSTRING__@@@Z
    void _OnJumpViewShown(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistVisualOrder@CTaskListWnd@@IEAAXXZ
    void _PersistVisualOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessMenuCloseWindowSync@CTaskListWnd@@IEAAXPEAUHWND__@@PEAUITaskBtnGroup@@@Z
    void _ProcessMenuCloseWindowSync(HWND__*, ITaskBtnGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@CTaskListWnd@@IEAAHXZ
    int _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetActiveItem@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@H@Z
    void _SetActiveItem(ITaskBtnGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetHotItem@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@HW4SetHotItemFlags@@@Z
    void _SetHotItem(ITaskBtnGroup *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TaskCreated@CTaskListWnd@@IEAAJPEAUITaskGroup@@PEAUITaskItem@@H@Z
    long _TaskCreated(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TaskDestroyedFinal@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@H@Z
    void _TaskDestroyedFinal(ITaskBtnGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TopLevelTaskFromExtendedTask@CTaskListWnd@@IEAAPEAUITaskItem@@PEAU2@@Z
    ITaskItem * _TopLevelTaskFromExtendedTask(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WillExtendedUIGlom@CTaskListWnd@@IEAAHPEAUITaskBtnGroup@@@Z
    int _WillExtendedUIGlom(ITaskBtnGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CTaskListWnd@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskListWnd@@MEAA@XZ
    virtual ~CTaskListWnd();
};
