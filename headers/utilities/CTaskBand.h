#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 325 member(s).
class CTaskBand {
public:
    class CDestroyWindowTask;
    class CInitialDesktopWindowsPopulatedTask;
    class CLauncherTask;
    class CPinListModifyTask;
    class CReorderWindowTask;
    class CResolveWindowTask;
    class CTaskItemSite;
    class PendingPinReplacement;
    class PendingTaskGroupTaskItem;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGhostPinnedItem@CTaskBand@@UEAAJPEAUIDataObject@@PEAPEAUITaskGroup@@PEAPEAUIShellItem@@@Z
    virtual long AddGhostPinnedItem(IDataObject *, ITaskGroup * *, IShellItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowShowJumplistOnHover@CTaskBand@@UEAA_NXZ
    virtual bool AllowShowJumplistOnHover();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppClosing@CTaskBand@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long AppClosing(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CTaskBand@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinDestinationToTarget@CTaskBand@@UEAAJPEAUIDataObject@@PEAUITaskGroup@@PEAPEAUIShellItem@@2PEAPEAGH@Z
    virtual long CanPinDestinationToTarget(IDataObject *, ITaskGroup *, IShellItem * *, IShellItem * *, unsigned short * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRenderComposited@CTaskBand@@UEAAJPEAH@Z
    virtual long CanRenderComposited(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSize@CTaskBand@@UEAAXH@Z
    virtual void CheckSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CTaskBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseItem@CTaskBand@@UEAAXPEAUITaskItem@@@Z
    virtual void CloseItem(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWnd@CTaskBand@@UEAAXPEAUHWND__@@@Z
    virtual void CloseWnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTaskbarForNavigate@CTaskBand@@UEAAJPEAUITaskListUI@@HPEAPEAU2@@Z
    virtual long ComputeTaskbarForNavigate(ITaskListUI *, int, ITaskListUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CTaskBand@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentVirtualDesktopChanged@CTaskBand@@UEAAJPEAUIVirtualDesktop@@0@Z
    virtual long CurrentVirtualDesktopChanged(IVirtualDesktop *, IVirtualDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentVirtualDesktopChangedAnimated@CTaskBand@@UEAAJPEAUIVirtualDesktop@@0@Z
    virtual long CurrentVirtualDesktopChangedAnimated(IVirtualDesktop *, IVirtualDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessageToTaskbarHosts@CTaskBand@@UEAA_NPEBUtagMSG@@@Z
    virtual bool DispatchMessageToTaskbarHosts(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CTaskBand@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleStringForBadge@CTaskBand@@UEAAJPEAUIBadgeData@@PEAPEAG@Z
    virtual long GetAccessibleStringForBadge(IBadgeData *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CTaskBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsInRawPixelsRelativeToDesktop@CTaskBand@@UEAA?AUtagRECT@@XZ
    virtual tagRECT GetBoundsInRawPixelsRelativeToDesktop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CTaskBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionState@CTaskBand@@UEAAJPEAH@Z
    virtual long GetCompositionState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiForWndSite@CTaskBand@@UEAAIXZ
    virtual unsigned int GetDpiForWndSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByTime@CTaskBand@@UEAAJKW4eTIMEFLAGS@@PEAPEAUITaskGroup@@PEAK@Z
    virtual long GetGroupByTime(unsigned long, int, ITaskGroup * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconId@CTaskBand@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@HPEAH@Z
    virtual long GetIconId(ITaskGroup *, ITaskItem *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSize@CTaskBand@@UEAAXW4IconType@IconUtils@@PEAUtagSIZE@@@Z
    virtual void GetIconSize(int, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageList@CTaskBand@@UEAAJIPEAPEAU_IMAGELIST@@@Z
    virtual long GetImageList(unsigned int, _IMAGELIST * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultimonStuckPlace@CTaskBand@@UEAAKXZ
    virtual unsigned long GetMultimonStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearl@CTaskBand@@UEAAJPEAPEAVCPearl@@@Z
    virtual long GetPearl(CPearl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollInfo@CTaskBand@@UEAAJHPEAUtagSCROLLINFO@@@Z
    virtual long GetScrollInfo(int, tagSCROLLINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CTaskBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CTaskBand@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CTaskBand@@UEAAJPEAK@Z
    virtual long GetStuckPlace(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskFromWindow@CTaskBand@@UEAAJPEAUHWND__@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    virtual long GetTaskFromWindow(HWND__*, ITaskGroup * *, ITaskItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskGroupsController@CTaskBand@@UEAA?AUITaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@XZ
    virtual WindissectOpaque GetTaskGroupsController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListUITheme@CTaskBand@@UEAAJPEAPEBG@Z
    virtual long GetTaskListUITheme(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserPreferences@CTaskBand@@UEAAJPEAK@Z
    virtual long GetUserPreferences(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CTaskBand@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleContextMenuCommand@CTaskBand@@UEAAJPEAUITaskItemFilter@@PEAUITaskGroup@@PEAUITaskItem@@PEAUHWND__@@PEAUIContextMenu@@H@Z
    virtual long HandleContextMenuCommand(ITaskItemFilter *, ITaskGroup *, ITaskItem *, HWND__*, IContextMenu *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHoverUIVisibilityChange@CTaskBand@@UEAAX_N@Z
    virtual void HandleHoverUIVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveInvokeOnMonitor@CTaskBand@@UEAAXPEAUHMONITOR__@@@Z
    virtual void HandleImmersiveInvokeOnMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CTaskBand@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewClose@CTaskBand@@UEAAXPEBUJUMPVIEWCLOSEDATA@@@Z
    virtual void HandleJumpViewClose(JUMPVIEWCLOSEDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewEndTask@CTaskBand@@UEAAXPEBUJUMPVIEWCLOSEDATA@@@Z
    virtual void HandleJumpViewEndTask(JUMPVIEWCLOSEDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewVisibilityChange@CTaskBand@@UEAAX_N@Z
    virtual void HandleJumpViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePlaceholderActivateAsync@CTaskBand@@UEAA?AUfire_and_forget@winrt@@PEAUITaskGroup@@PEAUHWND__@@@Z
    virtual WindissectOpaque HandlePlaceholderActivateAsync(ITaskGroup *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRaiseExpandableTaskbarChanged@CTaskBand@@UEAAXXZ
    virtual void HandleRaiseExpandableTaskbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleScroll@CTaskBand@@UEAAJHIH@Z
    virtual long HandleScroll(int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CTaskBand@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CTaskBand@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CTaskBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestForSizeableBorder@CTaskBand@@UEAAHHH@Z
    virtual int HitTestForSizeableBorder(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskBand@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitModelAndHost@CTaskBand@@UEAAXUTaskbarModel@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void InitModelAndHost(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPinnedItem@CTaskBand@@UEAAJPEAUITaskListUI@@PEAUIDataObject@@PEAUITaskGroup@@H@Z
    virtual long InsertPinnedItem(ITaskListUI *, IDataObject *, ITaskGroup *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopVisibleOnTrayMonitor@CTaskBand@@UEAA_NXZ
    virtual bool IsDesktopVisibleOnTrayMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CTaskBand@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullHeightOfTray@CTaskBand@@UEAAHXZ
    virtual int IsFullHeightOfTray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontal@CTaskBand@@UEAAHXZ
    virtual int IsHorizontal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeEnabled@CTaskBand@@UEAA_NXZ
    virtual bool IsTabletModeEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskGroupTaskItemValid@CTaskBand@@UEAA_NPEAUITaskGroupTaskItem@@@Z
    virtual bool IsTaskGroupTaskItemValid(ITaskGroupTaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CTaskBand@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Launch@CTaskBand@@UEAAJPEAUITaskGroup@@AEBUtagPOINT@@W4LaunchFromTaskbarOptions@@@Z
    virtual long Launch(ITaskGroup *, tagPOINT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CTaskBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewDismissed@CTaskBand@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewDismissed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewShown@CTaskBand@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewShown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCloudDataReceived@CTaskBand@@UEAAXXZ
    virtual void NotifyCloudDataReceived();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDashboardPayloadChanged@CTaskBand@@UEAAXXZ
    virtual void NotifyDashboardPayloadChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CTaskBand@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedTaskOrderChanged@CTaskBand@@UEAAXPEAUITaskGroup@@H@Z
    virtual void PinnedTaskOrderChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedWebsiteIconLoaded@CTaskBand@@UEAAXPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual void PinnedWebsiteIconLoaded(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceholderTileIconLoaded@CTaskBand@@UEAA?AUTile@StartScreen@UI@WindowsUdk@winrt@@PEBGH@Z
    virtual WindissectOpaque PlaceholderTileIconLoaded(unsigned short const *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTaskBand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CTaskBand@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhostPinnedItem@CTaskBand@@UEAAJPEAUITaskGroup@@@Z
    virtual long RemoveGhostPinnedItem(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroupIcon@CTaskBand@@UEAAXPEAUITaskGroup@@@Z
    virtual void RemoveGroupIcon(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveIcon@CTaskBand@@UEAAXPEAUITaskItem@@@Z
    virtual void RemoveIcon(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInvalidTabs@CTaskBand@@UEAAJPEAUITaskGroup@@@Z
    virtual long RemoveInvalidTabs(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestContextMenu@CTaskBand@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@HPEAPEAUIContextMenu@@PEAPEAUHMENU__@@@Z
    virtual long RequestContextMenu(ITaskGroup *, ITaskItem *, int, IContextMenu * *, HMENU__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBorderDW@CTaskBand@@UEAAJPEBUtagRECT@@PEAUIUnknown@@H@Z
    virtual long ResizeBorderDW(tagRECT const *, IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CTaskBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryTaskbarLoaded@CTaskBand@@UEAAXPEAUITaskListUI@@_N@Z
    virtual void SecondaryTaskbarLoaded(ITaskListUI *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@CTaskBand@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@CTaskBand@@UEAAXURect@Foundation@Windows@winrt@@@Z
    virtual void SetBounds(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionState@CTaskBand@@UEAAJH@Z
    virtual long SetCompositionState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinReplacement@CTaskBand@@UEAAJPEBUSETPINREPLACEMENTDATA@@@Z
    virtual long SetPinReplacement(SETPINREPLACEMENTDATA const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollInfo@CTaskBand@@UEAAJHAEBUtagSCROLLINFO@@@Z
    virtual long SetScrollInfo(int, tagSCROLLINFO const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTaskBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CTaskBand@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CTaskBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StuckTrayMonitorChanged@CTaskBand@@UEAAXPEAUHMONITOR__@@@Z
    virtual void StuckTrayMonitorChanged(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchTo@CTaskBand@@UEAAJPEAUITaskItem@@H@Z
    virtual long SwitchTo(ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CTaskBand@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskOrderChanged@CTaskBand@@UEAAXPEAUITaskGroup@@H@Z
    virtual void TaskOrderChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskOrderChanged@CTaskBand@@UEAAXXZ
    virtual void TaskOrderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CTaskBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPromotePlaceholder@CTaskBand@@UEAAXPEAUITaskGroup@@@Z
    virtual void TryPromotePlaceholder(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CTaskBand@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhideTray@CTaskBand@@UEAAJXZ
    virtual long UnhideTray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIcons@CTaskBand@@UEAAXXZ
    virtual void UpdateIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@CTaskBand@@UEAAXXZ
    virtual void UpdateTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewTransitionedFromHolographic@CTaskBand@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewTransitionedFromHolographic(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewTransitionedToHolographic@CTaskBand@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewTransitionedToHolographic(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewVirtualDesktopChanged@CTaskBand@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewVirtualDesktopChanged(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Win32AppIconLoaded@CTaskBand@@UEAAXPEAUHWND__@@PEAXH@Z
    virtual void Win32AppIconLoaded(HWND__*, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinRTAppIconLoaded@CTaskBand@@UEAAXPEBGPEAUIImmersiveApplication@@H@Z
    virtual void WinRTAppIconLoaded(unsigned short const *, IImmersiveApplication *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildEnumProc@CTaskBand@@KAHPEAUHWND__@@_J@Z
    static int BuildEnumProc(HWND__*, int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskBand@@IEAA@PEAUITrayComponentHost@@@Z
    CTaskBand(ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseTaskGroupTaskItem@CTaskBand@@IEAAXPEAUITaskGroupTaskItem@@@Z
    void CloseTaskGroupTaskItem(ITaskGroupTaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTaskGroupTaskItemOnTaskbar@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void CreateTaskGroupTaskItemOnTaskbar(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTabCB@CTaskBand@@KAX_KPEAUHWND__@@@Z
    static void DeleteTabCB(uint64_t, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTaskGroupTaskItemOnTaskbar@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void DeleteTaskGroupTaskItemOnTaskbar(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPinnedGroupCB@CTaskBand@@KAHPEAUPINNEDGROUP@@PEAX@Z
    static int DestroyPinnedGroupCB(PINNEDGROUP *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPinnedGroupByTaskGroupCB@CTaskBand@@KAHPEBUPINNEDGROUP@@0_J@Z
    static int FindPinnedGroupByTaskGroupCB(PINNEDGROUP const *, PINNEDGROUP const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirePlaceholderIrisBeacon@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    void FirePlaceholderIrisBeacon(_ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleControlCenterVisibilityChange@CTaskBand@@IEAAXXZ
    void HandleControlCenterVisibilityChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupSwitchItemAdded@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void HandleTaskGroupSwitchItemAdded(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupSwitchItemRemoved@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void HandleTaskGroupSwitchItemRemoved(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupsSwitchItemCollectionChanged@CTaskBand@@IEAAXAEBUISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void HandleTaskGroupsSwitchItemCollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTaskBand@@IEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTaskGroupsOnTaskbar@CTaskBand@@IEAAXXZ
    void InitializeTaskGroupsOnTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTileCollectionAsync@CTaskBand@@IEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque InitializeTileCollectionAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskGroupsSettingEnabled@CTaskBand@@KA_NPEAUIImmersiveSettingsCache@@@Z
    static bool IsTaskGroupsSettingEnabled(IImmersiveSettingsCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkPlaceholderAsTombstone@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void MarkPlaceholderAsTombstone(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinimizeAllThreadProc@CTaskBand@@KAKPEAX@Z
    static unsigned long MinimizeAllThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskGroupSwitchItemChanged@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBW4SwitchItemProperty@34567@@Z
    void OnTaskGroupSwitchItemChanged(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskGroupsSwitchItemCollectionChanged@CTaskBand@@IEAAXAEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUISwitchItemCollectionChangedEventArgs@34567@@Z
    void OnTaskGroupsSwitchItemCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileAdded@CTaskBand@@IEAA?AUfire_and_forget@winrt@@_N@Z
    WindissectOpaque OnTileAdded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileMigrated@CTaskBand@@IEAA?AUfire_and_forget@winrt@@UTileMigratedEventArgs@StartScreen@UI@WindowsUdk@3@_N@Z
    WindissectOpaque OnTileMigrated(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileRemoved@CTaskBand@@IEAA?AUfire_and_forget@winrt@@UTileRemovedEventArgs@StartScreen@UI@WindowsUdk@3@_N@Z
    WindissectOpaque OnTileRemoved(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinDefaultsFromCloud@CTaskBand@@IEAAJXZ
    long PinDefaultsFromCloud();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEventOnTaskGroupAndTaskItems@CTaskBand@@IEAAXPEAUITaskGroup@@W4TaskGroupProperty@Shell@UI@WindowsUdk@winrt@@W4TaskItemProperty@4567@@Z
    void RaiseEventOnTaskGroupAndTaskItems(ITaskGroup *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseHighlightChangedEvent@CTaskBand@@IEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque RaiseHighlightChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlashing@CTaskBand@@IEAA_NXZ
    bool ShowFlashing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskGroupsOnTaskbarChanged@CTaskBand@@IEAAXXZ
    void ShowTaskGroupsOnTaskbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeForControlCenterVisibilityChange@CTaskBand@@IEAAXXZ
    void SubscribeForControlCenterVisibilityChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToTaskGroupTaskItem@CTaskBand@@IEAAXPEAUITaskGroupTaskItem@@@Z
    void SwitchToTaskGroupTaskItem(ITaskGroupTaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTilesForPlaceholderTombstones@CTaskBand@@IEAAXXZ
    void TryFindTilesForPlaceholderTombstones();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMigratePinnedItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@Uhstring@winrt@@1AEAV?$tip_test@V?$merged_data@U_tip_TileMigrationEventHandlerTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    void TryMigratePinnedItem(_ITEMIDLIST_ABSOLUTE *, WindissectOpaque, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadgeAsync@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void UpdateBadgeAsync(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppTaskItem@CTaskBand@@IEAAXPEAUITaskItem@@PEAURESOLVEDWINDOW@@@Z
    void _AddAppTaskItem(ITaskItem *, RESOLVEDWINDOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddImmersiveItem@CTaskBand@@IEAAJPEAUIImmersiveApplication@@_N@Z
    long _AddImmersiveItem(IImmersiveApplication *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPinnedItem@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEAPEAUITaskGroup@@HHPEAW4PlaceholderPinFlags@1@@Z
    long _AddPinnedItem(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, ITaskGroup * *, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWindow@CTaskBand@@IEAAHPEAUHWND__@@@Z
    int _AddWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplicationChangedSync@CTaskBand@@IEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z
    long _ApplicationChangedSync(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AsyncPinListModify@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    long _AsyncPinListModify(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandInfoChanged@CTaskBand@@IEAAJXZ
    long _BandInfoChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildMonitorDPIList@CTaskBand@@IEAAXAEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    void _BuildMonitorDPIList(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildTaskList@CTaskBand@@IEAAJPEAV?$CDPA@UITaskItem@@V?$CTContainer_PolicyUnOwned@UITaskItem@@@@@@@Z
    long _BuildTaskList(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanMinimizeAll@CTaskBand@@IEAAHPEAUITaskGroup@@PEAH@Z
    int _CanMinimizeAll(ITaskGroup *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanRestoreAll@CTaskBand@@IEAAHPEAUITaskGroup@@@Z
    int _CanRestoreAll(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckImmersiveGroupEligibility@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void _CheckImmersiveGroupEligibility(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateIconContainerStorage@CTaskBand@@IEAAXXZ
    void _CreateIconContainerStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelayedInit@CTaskBand@@IEAAXXZ
    void _DelayedInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteItem@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _DeleteItem(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteTask@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@W4SWITCHER_REMOVAL_REASON@@@Z
    void _DeleteTask(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyGroup@CTaskBand@@IEAAJPEAUITaskGroup@@@Z
    long _DestroyGroup(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPreemptiveDesktopSwitch@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _DoPreemptiveDesktopSwitch(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoWindowsToRestoreOverlap@CTaskBand@@IEAA_NPEBUWINDOWPOSITIONS@@PEAV?$CDSA@PEAUHWND__@@@@@Z
    bool _DoWindowsToRestoreOverlap(WINDOWPOSITIONS const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndTask@CTaskBand@@IEAAXQEAUHWND__@@H@Z
    void _EndTask(HWND__* const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndTaskThreadProc@CTaskBand@@KAKPEAX@Z
    static unsigned long _EndTaskThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAppResolver@CTaskBand@@IEAAJXZ
    long _EnsureAppResolver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMonitorManager@CTaskBand@@IEAAJXZ
    long _EnsureMonitorManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePinnedList@CTaskBand@@IEAAJXZ
    long _EnsurePinnedList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureResolverScheduler@CTaskBand@@IEAAJXZ
    long _EnsureResolverScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureScheduler@CTaskBand@@IEAAJXZ
    long _EnsureScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumExistingImmersiveApps@CTaskBand@@IEAAXXZ
    void _EnumExistingImmersiveApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumPinnedItems@CTaskBand@@IEAAJ_N00@Z
    long _EnumPinnedItems(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetModeChangeFlags@CTaskBand@@IEAA?AW4ModeChangeFlags@ImmersiveTray@@XZ
    int _GetModeChangeFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPlaceholderPinnedTargetInfo@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@AEBUTile@StartScreen@UI@WindowsUdk@winrt@@_KPEAGPEAPEAGPEA_N@Z
    long _GetPlaceholderPinnedTargetInfo(_ITEMIDLIST_ABSOLUTE const *, WindissectOpaque const &, uint64_t, unsigned short *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetInfo@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@HPEAGHPEAPEAG1HPEA_N@Z
    long _GetTargetInfo(_ITEMIDLIST_ABSOLUTE const *, int, unsigned short *, int, unsigned short * *, unsigned short *, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskbarPinnedGroups@CTaskBand@@IEBAJPEAV?$CDSA@UPINNEDGROUP@@@@@Z
    long _GetTaskbarPinnedGroups(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleActivate@CTaskBand@@IEAA_JPEAUHWND__@@@Z
    int64_t _HandleActivate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppIDChanged@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleAppIDChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppResolverDeleteItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    void _HandleAppResolverDeleteItem(_ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppResolverRenameItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@0@Z
    void _HandleAppResolverRenameItem(_ITEMIDLIST_ABSOLUTE *, _ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppResolverUpdateItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    void _HandleAppResolverUpdateItem(_ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleChangeNotify@CTaskBand@@IEAAX_K_J@Z
    void _HandleChangeNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleCreate@CTaskBand@@IEAA_JXZ
    int64_t _HandleCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDeletedPropChange@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleDeletedPropChange(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDestroy@CTaskBand@@IEAA_JXZ
    int64_t _HandleDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleEdgeGestureChanged@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleEdgeGestureChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleGamingFullScreenChanged@CTaskBand@@IEAAX_N@Z
    void _HandleGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleGetMinRect@CTaskBand@@IEAAXPEAUHWND__@@PEAUtagPOINTS@@@Z
    void _HandleGetMinRect(HWND__*, tagPOINTS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleGetTaskbarIconRect@CTaskBand@@IEAA_JPEAUHWND__@@PEAUtagRECT@@@Z
    int64_t _HandleGetTaskbarIconRect(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleHardError@CTaskBand@@IEAA_JPEBU_tagHardErrorData@@K@Z
    int64_t _HandleHardError(_tagHardErrorData const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleItemResolved@CTaskBand@@IEAAXPEAURESOLVEDWINDOW@@PEAUITaskListUI@@PEAUITaskGroup@@PEAUITaskItem@@@Z
    void _HandleItemResolved(RESOLVEDWINDOW *, ITaskListUI *, ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleLauncherVisibilityChange@CTaskBand@@IEAAXPEAUHMONITOR__@@_N@Z
    void _HandleLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMonitorChanged@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleMonitorChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMonitorChanged@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void _HandleMonitorChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOtherWindowCreated@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleOtherWindowCreated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOtherWindowDestroyed@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleOtherWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOverlayIcon@CTaskBand@@IEAAXPEAUHWND__@@PEAUHICON__@@@Z
    void _HandleOverlayIcon(HWND__*, HICON__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOverlayIconDescription@CTaskBand@@IEAAXPEAUHWND__@@PEAX@Z
    void _HandleOverlayIconDescription(HWND__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandlePresentedWindowChanged@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _HandlePresentedWindowChanged(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleReplaceWindow@CTaskBand@@IEAA_JPEAUHWND__@@0@Z
    int64_t _HandleReplaceWindow(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleResendSecondaryStuckPlace@CTaskBand@@IEAAXXZ
    void _HandleResendSecondaryStuckPlace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSearchVisibilityChange@CTaskBand@@IEAAXPEAUHMONITOR__@@_N@Z
    void _HandleSearchVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSetSecondaryStuckPlace@CTaskBand@@IEAAXK@Z
    void _HandleSetSecondaryStuckPlace(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSettingChange@CTaskBand@@IEAA_J_K_JH@Z
    int64_t _HandleSettingChange(uint64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleShellContextMenu@CTaskBand@@IEAAJPEAUIContextMenu@@H@Z
    long _HandleShellContextMenu(IContextMenu *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleShellHook@CTaskBand@@IEAA_JH_J@Z
    int64_t _HandleShellHook(int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleShellModeChanged@CTaskBand@@IEAAXXZ
    void _HandleShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleStuckTrayChanged@CTaskBand@@IEAAXXZ
    void _HandleStuckTrayChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSyncDisplayChange@CTaskBand@@IEAAXW4SyncDisplayChangeFlags@@@Z
    void _HandleSyncDisplayChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTaskActivated@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void _HandleTaskActivated(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTaskViewVisibilityChange@CTaskBand@@IEAAX_N@Z
    void _HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleThumbBar@CTaskBand@@IEAAXIPEAUHWND__@@PEAX@Z
    void _HandleThumbBar(unsigned int, HWND__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleThumbnailToolTip@CTaskBand@@IEAAXPEAUHWND__@@PEAX@Z
    void _HandleThumbnailToolTip(HWND__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWindowResolved@CTaskBand@@IEAAXPEAURESOLVEDWINDOW@@@Z
    void _HandleWindowResolved(RESOLVEDWINDOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitIconContainer@CTaskBand@@IEAAJXZ
    long _InitIconContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitStartUIResourceMap@CTaskBand@@IEAAJXZ
    long _InitStartUIResourceMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitialDesktopWindowsPopulated@CTaskBand@@IEAAJXZ
    long _InitialDesktopWindowsPopulated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertItem@CTaskBand@@IEAAJPEAUHWND__@@PEAPEAUITaskItem@@00@Z
    long _InsertItem(HWND__*, ITaskItem * *, HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSettings@CTaskBand@@IEAAXXZ
    void _LoadSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogEventForImmersiveAppIfNecessary@CTaskBand@@IEAAXPEAUIImmersiveApplication@@W4AppEventTrigger@Triggers@CreativeFramework@@@Z
    void _LogEventForImmersiveAppIfNecessary(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchApp@CTaskBand@@IEAAJPEAUIImmersiveApplication@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    long _MatchApp(IImmersiveApplication *, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchAppID@CTaskBand@@IEAAJPEBGHW4MatchAppIDFlags@1@PEAPEAUITaskGroup@@@Z
    long _MatchAppID(unsigned short const *, int, int, ITaskGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchApplicationView@CTaskBand@@IEAAJPEAUIApplicationView@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    long _MatchApplicationView(IApplicationView *, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchIDList@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUITaskGroup@@@Z
    long _MatchIDList(_ITEMIDLIST_ABSOLUTE const *, ITaskGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchWindow@CTaskBand@@IEAAJPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBGW4WINDOWMATCHCONFIDENCE@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    long _MatchWindow(HWND__*, _ITEMIDLIST_ABSOLUTE const *, unsigned short const *, int, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeGroups@CTaskBand@@IEAAXPEAUITaskGroup@@0@Z
    void _MergeGroups(ITaskGroup *, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MinimizeAll@CTaskBand@@IEAAHPEAXH@Z
    int _MinimizeAll(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyAppSwitcherNotificationService@CTaskBand@@IEAAXPEAUIImmersiveApplication@@_NW4SWITCHER_REMOVAL_REASON@@@Z
    void _NotifyAppSwitcherNotificationService(IImmersiveApplication *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAppsFolderItemUpdated@CTaskBand@@IEAAXPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _OnAppsFolderItemUpdated(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnImmersiveAppActivated@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _OnImmersiveAppActivated(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnImmersiveAppMonitorChanged@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _OnImmersiveAppMonitorChanged(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnImmersiveAppTerminated@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _OnImmersiveAppTerminated(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetFocus@CTaskBand@@IEAAXXZ
    void _OnSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetProgressState@CTaskBand@@IEAAXQEAUHWND__@@W4TBPFLAG@@@Z
    void _OnSetProgressState(HWND__* const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetProgressValue@CTaskBand@@IEAAXQEAUHWND__@@K@Z
    void _OnSetProgressValue(HWND__* const, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetTabActive@CTaskBand@@IEAAJQEAUHWND__@@@Z
    long _OnSetTabActive(HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetTabOrder@CTaskBand@@IEAAJQEAUHWND__@@0@Z
    long _OnSetTabOrder(HWND__* const, HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetTabProperties@CTaskBand@@IEAAJQEAUHWND__@@@Z
    long _OnSetTabProperties(HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetThumbnailClip@CTaskBand@@IEAAJQEAUHWND__@@QEAX@Z
    long _OnSetThumbnailClip(HWND__* const, void * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnUpdateGroupPIDL@CTaskBand@@IEAA_J_K_J@Z
    int64_t _OnUpdateGroupPIDL(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowActivated@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _OnWindowActivated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenTheme@CTaskBand@@IEAAXXZ
    void _OpenTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PinnedListHasPlaceholders@CTaskBand@@IEAA_NXZ
    bool _PinnedListHasPlaceholders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessOrderTab@CTaskBand@@IEAAJPEAUHWND__@@0@Z
    long _ProcessOrderTab(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessWindowDestroyed@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _ProcessWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseDesktop@CTaskBand@@IEAAXW4RAISEDESKTOPFLAGS@@@Z
    void _RaiseDesktop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadTabsFromHwnd@CTaskBand@@IEAAJQEAUHWND__@@@Z
    long _ReadTabsFromHwnd(HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealityCheck@CTaskBand@@IEAAXXZ
    void _RealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshSettings@CTaskBand@@IEAAXH@Z
    void _RefreshSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@CTaskBand@@IEAAHXZ
    int _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveImage@CTaskBand@@IEAAXH@Z
    void _RemoveImage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveImmersiveItem@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _RemoveImmersiveItem(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveInsertBefore@CTaskBand@@IEAAJPEAUHWND__@@PEAUITaskGroup@@PEAUITaskItem@@PEAPEAU3@PEAPEAU4@@Z
    long _ResolveInsertBefore(HWND__*, ITaskGroup *, ITaskItem *, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleReorderTab@CTaskBand@@IEAAJPEAUHWND__@@0@Z
    long _ScheduleReorderTab(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendNowPlayingSessionManagerButtonReady@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _SendNowPlayingSessionManagerButtonReady(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetActiveAlt@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _SetActiveAlt(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolbarTheme@CTaskBand@@IEAAXXZ
    void _SetToolbarTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAllowAppOnTaskbar@CTaskBand@@IEAA_NPEAUIImmersiveApplication@@@Z
    bool _ShouldAllowAppOnTaskbar(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAllowImmersiveAppIdOnTaskbar@CTaskBand@@IEAA_NPEBG@Z
    bool _ShouldAllowImmersiveAppIdOnTaskbar(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldMinimize@CTaskBand@@KAHPEAUHWND__@@@Z
    static int _ShouldMinimize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowAppsOnTaskbarChanged@CTaskBand@@IEAAXXZ
    void _ShowAppsOnTaskbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToImmersiveWindowAsync@CTaskBand@@IEAA?AUfire_and_forget@winrt@@PEAUIImmersiveApplication@@@Z
    WindissectOpaque _SwitchToImmersiveWindowAsync(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToWindow@CTaskBand@@IEAAXPEAUITaskItem@@@Z
    void _SwitchToWindow(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryExtractAppTile@CTaskBand@@IEAA?AUTile@StartScreen@UI@WindowsUdk@winrt@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    WindissectOpaque _TryExtractAppTile(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllIcons@CTaskBand@@IEAAXXZ
    void _UpdateAllIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGroupAppID@CTaskBand@@IEAAHPEAUITaskGroup@@PEBGH@Z
    int _UpdateGroupAppID(ITaskGroup *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGroupIcons@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void _UpdateGroupIcons(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImmersiveIcons@CTaskBand@@IEAAXXZ
    void _UpdateImmersiveIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItemIcon@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void _UpdateItemIcon(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePinnedWebsiteIcons@CTaskBand@@IEAAXXZ
    void _UpdatePinnedWebsiteIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRestartInfoFlags@CTaskBand@@IEAAXW4RESTARTINFOFLAGS@@@Z
    void _UpdateRestartInfoFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTaskGroupInclusion@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void _UpdateTaskGroupInclusion(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTaskItemInclusion@CTaskBand@@IEAAXXZ
    void _UpdateTaskItemInclusion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVirtualDesktopInclusion@CTaskBand@@IEAAJXZ
    long _UpdateVirtualDesktopInclusion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerifyButtonHeight@CTaskBand@@IEAAXXZ
    void _VerifyButtonHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CTaskBand@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskBand@@IEAA@XZ
    ~CTaskBand();
};
