#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 315 member(s).
class TrayUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveZbandChanged@TrayUI@@UEAAJKK@Z
    virtual long ActiveZbandChanged(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocalActiveTaskbarTestId@TrayUI@@UEAAXPEAUHMONITOR__@@U_GUID@@@Z
    virtual void AddLocalActiveTaskbarTestId(HMONITOR__*, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRemoteSettings@TrayUI@@UEAAJK@Z
    virtual long ApplyRemoteSettings(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssocChanged@TrayUI@@UEAAXJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual void AssocChanged(long, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncSaveSettings@TrayUI@@UEAAXXZ
    virtual void AsyncSaveSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHideChangedOnMonitor@TrayUI@@QEAAXPEAUHMONITOR__@@@Z
    void AutoHideChangedOnMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BootImmersiveShell@TrayUI@@UEAAJXZ
    virtual long BootImmersiveShell();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildContextMenu@TrayUI@@UEAAPEAUHMENU__@@W4TrayContextMenuItemFlags@TrayCommon@@@Z
    virtual HMENU__* BuildContextMenu(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcHitTest@TrayUI@@UEAA_JPEAUHWND__@@_K_J@Z
    virtual int64_t CalcHitTest(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanMinimizeAll@TrayUI@@UEAAHXZ
    virtual int CanMinimizeAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanMove@TrayUI@@UEAAHXZ
    virtual int CanMove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowAppsOnTaskbarTabletMode@TrayUI@@UEBAHXZ
    virtual int CanShowAppsOnTaskbarTabletMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSize@TrayUI@@UEAAHXZ
    virtual int CanSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckGDIHandleLimit@TrayUI@@UEAAXXZ
    virtual void CheckGDIHandleLimit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@TrayUI@@UEAAXXZ
    virtual void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextMenuInvoke@TrayUI@@UEAAXHPEBUtagRECT@@@Z
    virtual void ContextMenuInvoke(int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClassInstance@TrayUI@@UEAAJAEBU_GUID@@PEAPEAUIUnknown@@@Z
    virtual long CreateClassInstance(_GUID const &, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeskBandRegistrationChanged@TrayUI@@UEAAJXZ
    virtual long DeskBandRegistrationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableGlass@TrayUI@@UEAAXH@Z
    virtual void EnableGlass(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAccessibleName@TrayUI@@QEAAJ_J@Z
    long EnsureAccessibleName(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillDisplayChangeData@TrayUI@@UEAAHPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z
    virtual int FillDisplayChangeData(_SYNC_DISPLAY_CHANGE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireLockTaskbarContextMenuTelemetry@TrayUI@@UEAAXXZ
    virtual void FireLockTaskbarContextMenuTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRelayout@TrayUI@@UEAAXXZ
    virtual void ForceRelayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveTaskbarTestId@TrayUI@@UEAA?AU_GUID@@PEAUHMONITOR__@@@Z
    virtual _GUID GetActiveTaskbarTestId(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoHideFlags@TrayUI@@UEAAIXZ
    virtual unsigned int GetAutoHideFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandSite@TrayUI@@UEAA?AV?$ComPtr@UIBandSite@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque GetBandSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCabinet@TrayUI@@UEAAPEAUHINSTANCE__@@XZ
    virtual HINSTANCE__* GetCabinet();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTheme@TrayUI@@UEBA?AW4COLORTHEME@@XZ
    virtual int GetColorTheme() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentState@TrayUI@@UEAAIW4TrayComponentStateOption@@@Z
    virtual unsigned int GetComponentState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDashboardWidgetEntryPoint@TrayUI@@UEAA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetDashboardWidgetEntryPoint();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopModeAutoHide@TrayUI@@UEBAIXZ
    virtual unsigned int GetDesktopModeAutoHide() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopRaised@TrayUI@@UEAAHXZ
    virtual int GetDesktopRaised();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopWindow@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetDesktopWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestinationItemFromDataObject@TrayUI@@UEAAJPEAUIDataObject@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetDestinationItemFromDataObject(IDataObject *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayMonitorInfoStructForMonitor@TrayUI@@QEAA?AUDisplayMonitorInfoStruct@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z
    WindissectOpaque GetDisplayMonitorInfoStructForMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRectFromRect@TrayUI@@UEAAXPEAUHWND__@@PEBUtagRECT@@PEAU3@@Z
    virtual void GetDisplayRectFromRect(HWND__*, tagRECT const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDockedRect@TrayUI@@UEAAIPEAUtagRECT@@H@Z
    virtual unsigned int GetDockedRect(tagRECT *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragFullWindows@TrayUI@@UEAAHXZ
    virtual int GetDragFullWindows();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceManager@TrayUI@@UEBAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetExperienceManager(unsigned short const *, _GUID const &, void * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalMetrics@TrayUI@@UEAAXPEAUGlobalMetrics@@@Z
    virtual void GetGlobalMetrics(GlobalMetrics *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHKeyExplorer@TrayUI@@UEAAPEAUHKEY__@@XZ
    virtual HKEY__* GetHKeyExplorer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSizePreference@TrayUI@@UEBAIXZ
    virtual unsigned int GetIconSizePreference() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveShellDispatcherQueue@TrayUI@@UEAA?AUDispatcherQueue@System@Windows@winrt@@XZ
    virtual WindissectOpaque GetImmersiveShellDispatcherQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveShellServiceProvider@TrayUI@@UEBAJPEAPEAUIServiceProvider@@_N@Z
    virtual long GetImmersiveShellServiceProvider(IServiceProvider * *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInSizeMove@TrayUI@@UEAAHXZ
    virtual int GetInSizeMove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsNoToolbarsOnTaskbarPolicyEnabled@TrayUI@@UEBAHXZ
    virtual int GetIsNoToolbarsOnTaskbarPolicyEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastActiveWindow@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetLastActiveWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherVisibleMonitor@TrayUI@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetLauncherVisibleMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyNotificationAreaSize@TrayUI@@UEAAHXZ
    virtual int GetLegacyNotificationAreaSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinSize@TrayUI@@UEAAXIPEAUtagSIZE@@@Z
    virtual void GetMinSize(unsigned int, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinSize@TrayUI@@UEAAXPEAUHMONITOR__@@PEAUtagSIZE@@@Z
    virtual void GetMinSize(HMONITOR__*, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinimizeFlags@TrayUI@@UEAAHXZ
    virtual int GetMinimizeFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDPI@TrayUI@@UEAAIXZ
    virtual unsigned int GetMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDeviceId@TrayUI@@QEAA?AUhstring@winrt@@PEBG@Z
    WindissectOpaque GetMonitorDeviceId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorMovedFrom@TrayUI@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitorMovedFrom();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultimonStuckPlace@TrayUI@@UEAAKXZ
    virtual unsigned long GetMultimonStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationAreaSize@TrayUI@@UEAAHXZ
    virtual int GetNotificationAreaSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearl@TrayUI@@UEAAJPEAPEAVCPearl@@@Z
    virtual long GetPearl(CPearl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearlRectForMonitor@TrayUI@@UEAAJPEAUHMONITOR__@@PEAUtagRECT@@PEAK@Z
    virtual long GetPearlRectForMonitor(HMONITOR__*, tagRECT *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryTaskbarButtonGroupCount@TrayUI@@UEAAHXZ
    virtual int GetPrimaryTaskbarButtonGroupCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivilegedOperations@TrayUI@@UEAA?AV?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque GetPrivilegedOperations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgrammableTaskbarCampaignPlacementId@TrayUI@@UEAA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetProgrammableTaskbarCampaignPlacementId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxyImmersiveShellComponentProvider@TrayUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetProxyImmersiveShellComponentProvider(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxyImmersiveShellRegistrationProvider@TrayUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetProxyImmersiveShellRegistrationProvider(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOwner@TrayUI@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* GetRootOwner(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@TrayUI@@UEAAHI@Z
    virtual int GetRowCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSavedWindowPositions@TrayUI@@UEAAXPEAPEBUWINDOWPOSITIONS@@@Z
    virtual void GetSavedWindowPositions(WINDOWPOSITIONS const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsIconBitmap@TrayUI@@UEBAPEAUHBITMAP__@@XZ
    virtual HBITMAP__* GetSettingsIconBitmap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsIconBitmapForSystemMenu@TrayUI@@UEBAPEAUHBITMAP__@@XZ
    virtual HBITMAP__* GetSettingsIconBitmapForSystemMenu() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShakerRoot@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetShakerRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizingBarHeight@TrayUI@@UEAAHXZ
    virtual int GetSizingBarHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaticSafeWorkAreaForMonitor@TrayUI@@UEAA?AURect@Foundation@Windows@winrt@@PEAUHMONITOR__@@@Z
    virtual WindissectOpaque GetStaticSafeWorkAreaForMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckInfo@TrayUI@@UEAAXPEAUtagRECT@@PEAI@Z
    virtual void GetStuckInfo(tagRECT *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckMonitor@TrayUI@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetStuckMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@TrayUI@@UEAAIXZ
    virtual unsigned int GetStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRect@TrayUI@@UEAAXIPEAUtagRECT@@@Z
    virtual void GetStuckRect(unsigned int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRectForMonitor@TrayUI@@UEAA_NPEAUHMONITOR__@@PEAUtagRECT@@@Z
    virtual bool GetStuckRectForMonitor(HMONITOR__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckWidths@TrayUI@@UEAA?AUtagSIZE@@XZ
    virtual tagSIZE GetStuckWidths();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabletModeAutoHide@TrayUI@@UEBAIXZ
    virtual unsigned int GetTabletModeAutoHide() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListAnimation@TrayUI@@UEAAJPEAPEAUITaskListAnimation@@@Z
    virtual long GetTaskListAnimation(ITaskListAnimation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbandAvailableSpace@TrayUI@@UEAAHXZ
    virtual int GetTaskbandAvailableSpace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbandHWND@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTaskbandHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarController@TrayUI@@UEAA?AUTaskbarControllerExtension@Shell@UI@WindowsUdk@winrt@@AEBUTaskbarModel@3456@@Z
    virtual WindissectOpaque GetTaskbarController(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarModel@TrayUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetTaskbarModel(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestProxy@TrayUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetTestProxy(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayForegroundControl@TrayUI@@UEAAPEAUITrustedComponentForegroundControl@@XZ
    virtual ITrustedComponentForegroundControl * GetTrayForegroundControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayUI@TrayUI@@UEAAPEAUITrayUI@@XZ
    virtual ITrayUI * GetTrayUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayViewOpts@TrayUI@@UEAAXPEAUTRAYVIEWOPTS@@PEAUICatBandManager@@@Z
    virtual void GetTrayViewOpts(TRAYVIEWOPTS *, ICatBandManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayWindow@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTrayWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRect@TrayUI@@UEAA_NPEAUHMONITOR__@@PEAUtagRECT@@1@Z
    virtual bool GetVisualRect(HMONITOR__*, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlassEnabled@TrayUI@@UEAAHXZ
    virtual int GlassEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommand@TrayUI@@UEAAHPEAUHWND__@@I_K_JPEA_J@Z
    virtual int HandleCommand(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCopyData@TrayUI@@UEAA_N_KPEAUtagCOPYDATASTRUCT@@PEA_J@Z
    virtual bool HandleCopyData(uint64_t, tagCOPYDATASTRUCT *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFirstTime@TrayUI@@UEAAXXZ
    virtual void HandleFirstTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHeadlinesSettingsChange@TrayUI@@UEAAX_N@Z
    virtual void HandleHeadlinesSettingsChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHoverUIVisibilityChange@TrayUI@@UEAAX_N@Z
    virtual void HandleHoverUIVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewVisibilityChange@TrayUI@@UEAAX_N@Z
    virtual void HandleJumpViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMessageFromMessageLoop@TrayUI@@UEAA_NUtagMSG@@@Z
    virtual bool HandleMessageFromMessageLoop(tagMSG);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMessageIdle@TrayUI@@UEAAXXZ
    virtual void HandleMessageIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePrivateCommand@TrayUI@@UEAA_N_J@Z
    virtual bool HandlePrivateCommand(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@TrayUI@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskbarHotkey@TrayUI@@UEAAX_K@Z
    virtual void HandleTaskbarHotkey(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTrayFlyoutVisibilityChange@TrayUI@@QEAAX_N@Z
    void HandleTrayFlyoutVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWinNumHotKey@TrayUI@@UEAAXHG@Z
    virtual void HandleWinNumHotKey(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWindowDestroyed@TrayUI@@UEAAXPEAUHWND__@@@Z
    virtual void HandleWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideDeskBand@TrayUI@@UEAAJAEBU_GUID@@@Z
    virtual long HideDeskBand(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveResize@TrayUI@@UEAAXXZ
    virtual void ImmersiveResize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDisplayMonitorInfoCollectionWorkAreas@TrayUI@@QEAAXXZ
    void InitDisplayMonitorInfoCollectionWorkAreas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitGlobalMetrics@TrayUI@@UEAAX_KPEBG@Z
    virtual void InitGlobalMetrics(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TrayUI@@UEAAXXZ
    virtual void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateWorkAreaAsync@TrayUI@@QEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque InvalidateWorkAreaAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvisibleUnhide@TrayUI@@QEAAXH@Z
    void InvisibleUnhide(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeferedPosRectChange@TrayUI@@UEAAHXZ
    virtual int IsDeferedPosRectChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeskBandShown@TrayUI@@UEAAJAEBU_GUID@@@Z
    virtual long IsDeskBandShown(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopVisibleOnTrayMonitor@TrayUI@@UEAA_NXZ
    virtual bool IsDesktopVisibleOnTrayMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDestroyed@TrayUI@@UEAA_NXZ
    virtual bool IsDestroyed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpandable@TrayUI@@QEBA_NXZ
    bool IsExpandable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpandableTaskbarExpanded@TrayUI@@UEAAHXZ
    virtual int IsExpandableTaskbarExpanded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExplorerShuttingDown@TrayUI@@UEAAHXZ
    virtual int IsExplorerShuttingDown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHiding@TrayUI@@UEAA_NXZ
    virtual bool IsHiding();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@TrayUI@@UEAA_NXZ
    virtual bool IsInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorExcluded@TrayUI@@UEAAHPEAUHMONITOR__@@@Z
    virtual int IsMonitorExcluded(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMouseOverClassicTaskbar@TrayUI@@UEAAHPEAUHWND__@@I@Z
    virtual int IsMouseOverClassicTaskbar(HWND__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentationModeActive@TrayUI@@UEBA_NXZ
    virtual bool IsPresentationModeActive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryTaskbarLoaded@TrayUI@@UEAA_NXZ
    virtual bool IsPrimaryTaskbarLoaded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessingDesktopRaise@TrayUI@@UEBA_NXZ
    virtual bool IsProcessingDesktopRaise() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchButtonEnabled@TrayUI@@UEAA_NXZ
    virtual bool IsSearchButtonEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeAutoHideEnabled@TrayUI@@UEBA_NXZ
    virtual bool IsTabletModeAutoHideEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeEnabled@TrayUI@@UEBA_NXZ
    virtual bool IsTabletModeEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskViewEnabled@TrayUI@@UEBA_NXZ
    virtual bool IsTaskViewEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrayThreadStarting@TrayUI@@UEAAHXZ
    virtual int IsTrayThreadStarting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPolicies@TrayUI@@UEAAXXZ
    virtual void LoadPolicies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettingsBitmap@TrayUI@@QEAAX_N@Z
    void LoadSettingsBitmap(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LongEdgeSwipe@TrayUI@@QEAAXUtagPOINT@@@Z
    void LongEdgeSwipe(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeStuckRect@TrayUI@@UEAAXPEAUtagRECT@@PEBU2@UtagSIZE@@I@Z
    virtual void MakeStuckRect(tagRECT *, tagRECT const *, tagSIZE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinimizeAll@TrayUI@@UEAAHHPEAX@Z
    virtual int MinimizeAll(int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFeedsAboutTaskListUpdated@TrayUI@@UEAAXXZ
    virtual void NotifyFeedsAboutTaskListUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyImmersiveShellStarted@TrayUI@@UEAAX_N@Z
    virtual void NotifyImmersiveShellStarted(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySettingsChanged@TrayUI@@UEAAJXZ
    virtual long NotifySettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppCommand@TrayUI@@UEAA_JH@Z
    virtual int64_t OnAppCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppResolverChangeNotify@TrayUI@@UEAAXJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual void OnAppResolverChangeNotify(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreate@TrayUI@@UEAA_JXZ
    virtual int64_t OnCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayChanged@TrayUI@@UEAAXXZ
    virtual void OnDisplayChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoExitWindows@TrayUI@@UEAAXXZ
    virtual void OnDoExitWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamingFullScreenChanged@TrayUI@@UEAAX_N@Z
    virtual void OnGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLauncherVisibilityChange@TrayUI@@UEAAXXZ
    virtual void OnLauncherVisibilityChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNextCtl@TrayUI@@UEAAXXZ
    virtual void OnNextCtl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPowerBroadcast@TrayUI@@UEAAX_K_J@Z
    virtual void OnPowerBroadcast(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPowerMessage@TrayUI@@UEAAXPEAUHWND__@@I_K_J@Z
    virtual void OnPowerMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefresh@TrayUI@@UEAAXXZ
    virtual void OnRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellModeChanged@TrayUI@@UEAAXXZ
    virtual void OnShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartMenuDismissed@TrayUI@@UEAAXXZ
    virtual void OnStartMenuDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartTaskbarApiSurface@TrayUI@@UEAAXXZ
    virtual void OnStartTaskbarApiSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@TrayUI@@UEAAX_K@Z
    virtual void OnTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTrayDestroyed@TrayUI@@UEAAXXZ
    virtual void OnTrayDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWtsConnect@TrayUI@@UEAAXXZ
    virtual void OnWtsConnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryTaskbarLoaded@TrayUI@@UEAA?AUevent_token@winrt@@AEBU?$delegate@$$V@3@@Z
    virtual WindissectOpaque PrimaryTaskbarLoaded(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarDataInitialized@TrayUI@@UEAAHXZ
    virtual int ProgrammableTaskbarDataInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarDataUpdated@TrayUI@@QEAAXXZ
    void ProgrammableTaskbarDataUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarPassedLogonGates@TrayUI@@UEAAHXZ
    virtual int ProgrammableTaskbarPassedLogonGates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarReportClick@TrayUI@@UEAAXI_N@Z
    virtual void ProgrammableTaskbarReportClick(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarReportImpressions@TrayUI@@UEAAXXZ
    virtual void ProgrammableTaskbarReportImpressions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateEnumProc@TrayUI@@SAHPEAUHWND__@@_J@Z
    static int PropagateEnumProc(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryImmersiveShellService@TrayUI@@UEBAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryImmersiveShellService(_GUID const &, _GUID const &, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUserNotificationState@TrayUI@@UEAA_JXZ
    virtual int64_t QueryUserNotificationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDesktop@TrayUI@@UEAAXW4RAISEDESKTOPFLAGS@@@Z
    virtual void RaiseDesktop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSettings@TrayUI@@UEAAXXZ
    virtual void RefreshSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLocalActiveTaskbarTestId@TrayUI@@UEAAXPEAUHMONITOR__@@@Z
    virtual void RemoveLocalActiveTaskbarTestId(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportImpression@TrayUI@@QEAA?AUfire_and_forget@winrt@@UIrisCreative@Iris@Services@WindowsUdk@3@@Z
    WindissectOpaque ReportImpression(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeStuckRects@TrayUI@@UEAAXXZ
    virtual void ResizeStuckRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnFocusToTaskListItemFromFlyout@TrayUI@@UEAAXXZ
    virtual void ReturnFocusToTaskListItemFromFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RudenessChanged@TrayUI@@UEAAXH@Z
    virtual void RudenessChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunWinXMigrationTasks@TrayUI@@QEAAXXZ
    void RunWinXMigrationTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TrayUI@@QEAAJPEAUITrayUIHost@@@Z
    long RuntimeClassInitialize(ITrayUIHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveTrayStuff@TrayUI@@UEAAXXZ
    virtual void SaveTrayStuff();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveWindowPositions@TrayUI@@UEAAXI@Z
    virtual void SaveWindowPositions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenSizeChange@TrayUI@@UEAAXW4ScreenSizeChangeFlags@TrayCommon@@PEAUHWND__@@@Z
    virtual void ScreenSizeChange(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@TrayUI@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoHideFlags@TrayUI@@UEAAXI@Z
    virtual void SetAutoHideFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoHideState@TrayUI@@UEAAJH@Z
    virtual long SetAutoHideState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDashboardWidgetEntryPoint@TrayUI@@UEAAXAEBUhstring@winrt@@@Z
    virtual void SetDashboardWidgetEntryPoint(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeferredPosRectChange@TrayUI@@UEAAXH@Z
    virtual void SetDeferredPosRectChange(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragFullWindows@TrayUI@@UEAAX_N@Z
    virtual void SetDragFullWindows(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnSystemTray@TrayUI@@UEAAXXZ
    virtual void SetFocusOnSystemTray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToTaskUI@TrayUI@@UEAAXXZ
    virtual void SetFocusToTaskUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalMetrics@TrayUI@@UEAAXPEBUGlobalMetrics@@@Z
    virtual void SetGlobalMetrics(GlobalMetrics const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInSizeMove@TrayUI@@UEAAH_N@Z
    virtual int SetInSizeMove(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastActiveWindow@TrayUI@@UEAAXPEAUHWND__@@@Z
    virtual void SetLastActiveWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockState@TrayUI@@UEAAXI@Z
    virtual void SetLockState(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockState@TrayUI@@UEAAXW4TRIBIT@@@Z
    virtual void SetLockState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModalMode@TrayUI@@UEAAXI@Z
    virtual void SetModalMode(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRebarAccessibleProperties@TrayUI@@QEAAJXZ
    long SetRebarAccessibleProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRebarBandPosition@TrayUI@@UEAAXAEBUtagRECT@@@Z
    virtual void SetRebarBandPosition(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelfSizing@TrayUI@@UEAAX_N@Z
    virtual void SetSelfSizing(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStuckPlace@TrayUI@@UEAAXI@Z
    virtual void SetStuckPlace(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarModel@TrayUI@@UEAAJUTaskbarModel@Shell@UI@WindowsUdk@winrt@@@Z
    virtual long SetTaskbarModel(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnhideTimer@TrayUI@@UEAAXJJ@Z
    virtual void SetUnhideTimer(long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWinHomeListening@TrayUI@@UEAAXXZ
    virtual void SetWinHomeListening();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsBitmapLoaded@TrayUI@@QEAAJAEBUSettingsBitmapLoadInfo@@@Z
    long SettingsBitmapLoaded(SettingsBitmapLoadInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChanged@TrayUI@@UEAA?AUevent_token@winrt@@AEBU?$delegate@$$V@3@@Z
    virtual WindissectOpaque SettingsChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBeCloaked@TrayUI@@UEAA_NXZ
    virtual bool ShouldBeCloaked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExpandableTaskbarBeRaised@TrayUI@@UEAA_NXZ
    virtual bool ShouldExpandableTaskbarBeRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShyTaskbarStayExpanded@TrayUI@@UEAA_NXZ
    virtual bool ShouldShyTaskbarStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseSmallIcons@TrayUI@@UEBAHXZ
    virtual int ShouldUseSmallIcons() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDeskBand@TrayUI@@UEAAJAEBU_GUID@@@Z
    virtual long ShowDeskBand(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskbandOnly@TrayUI@@UEAAXH@Z
    virtual void ShowTaskbandOnly(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTrayProperties@TrayUI@@UEAAXPEBUtagRECT@@@Z
    virtual void ShowTrayProperties(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShyTaskbarExpansionChanged@TrayUI@@UEAAXXZ
    virtual void ShyTaskbarExpansionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeWindows@TrayUI@@UEAAXXZ
    virtual void SizeWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SlideWindow@TrayUI@@UEAAXPEAUHWND__@@PEBUtagRECT@@PEAUHMONITOR__@@_N3@Z
    virtual void SlideWindow(HWND__*, tagRECT const *, HMONITOR__*, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProgrammableTaskbarWork@TrayUI@@UEAAXXZ
    virtual void StartProgrammableTaskbarWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTaskbar@TrayUI@@UEAAXXZ
    virtual void StartTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabInvoked@TrayUI@@UEAAX_N@Z
    virtual void TabInvoked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarHasFocus@TrayUI@@UEAAHXZ
    virtual int TaskbarHasFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TogglePeopleButton@TrayUI@@UEAAXXZ
    virtual void TogglePeopleButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleTaskViewButton@TrayUI@@UEAAXXZ
    virtual void ToggleTaskViewButton();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TrayUI@@QEAA@XZ
    TrayUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unhide@TrayUI@@UEAAXW4TrayUnhideFlags@TrayCommon@@W4UnhideRequest@3@@Z
    virtual void Unhide(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBandSiteStyle@TrayUI@@UEAAXXZ
    virtual void UpdateBandSiteStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCloakState@TrayUI@@QEAAX_N@Z
    void UpdateCloakState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayMonitorInfoCollectionWorkAreas@TrayUI@@QEAAXXZ
    void UpdateDisplayMonitorInfoCollectionWorkAreas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNotificationAreaSize@TrayUI@@UEAAXH@Z
    virtual void UpdateNotificationAreaSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryTaskbarSize@TrayUI@@UEAAXHPEAUHMONITOR__@@@Z
    virtual void UpdateSecondaryTaskbarSize(int, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStuckRectOnMonitorChange@TrayUI@@QEAAXII@Z
    void UpdateStuckRectOnMonitorChange(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarSize@TrayUI@@UEAAXH@Z
    virtual void UpdateTaskbarSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarVisibility@TrayUI@@QEAAXXZ
    void UpdateTaskbarVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifySize@TrayUI@@UEAAX_N0PEAUHMONITOR__@@@Z
    virtual void VerifySize(bool, bool, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasFlyoutRequested@TrayUI@@UEAA_NXZ
    virtual bool WasFlyoutRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@TrayUI@@UEAA_JPEAUHWND__@@I_K_JPEA_N@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AccountAllBandsForTaskbarSizingBar@TrayUI@@QEAAXXZ
    void _AccountAllBandsForTaskbarSizingBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttachWindow@TrayUI@@QEAAXPEAUHWND__@@_N@Z
    void _AttachWindow(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoHideCollision@TrayUI@@QEAAXXZ
    void _AutoHideCollision();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcClipCoords@TrayUI@@QEAAXPEAUtagRECT@@PEBU2@1@Z
    void _CalcClipCoords(tagRECT *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcDragPlace@TrayUI@@QEAAIUtagPOINT@@@Z
    unsigned int _CalcDragPlace(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClipInternal@TrayUI@@QEAAXPEAUHWND__@@PEBUtagRECT@@@Z
    void _ClipInternal(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClipWindow@TrayUI@@QEAAXH@Z
    void _ClipWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloakUntilNextRender@TrayUI@@QEAAXXZ
    void _CloakUntilNextRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeHiddenRect@TrayUI@@QEAAXPEAUtagRECT@@I@Z
    void _ComputeHiddenRect(tagRECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindows@TrayUI@@QEAA_JXZ
    int64_t _CreateWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoneMoving@TrayUI@@QEAAXPEAUtagWINDOWPOS@@@Z
    void _DoneMoving(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAnimationManager@TrayUI@@QEAAJXZ
    long _EnsureAnimationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayRectFromPoint@TrayUI@@QEAAXPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@@Z
    void _GetDisplayRectFromPoint(HWND__*, tagPOINT, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSaveStateAndInitRects@TrayUI@@QEAAXXZ
    void _GetSaveStateAndInitRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStuckDisplayRect@TrayUI@@QEAAXPEAUtagRECT@@@Z
    void _GetStuckDisplayRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowSizes@TrayUI@@QEAAXIPEBUtagRECT@@PEAU2@1@Z
    void _GetWindowSizes(unsigned int, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAssignedAccessTaskbarBlocking@TrayUI@@QEAAXXZ
    void _HandleAssignedAccessTaskbarBlocking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleEnterMenuLoop@TrayUI@@QEAAXXZ
    void _HandleEnterMenuLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleImmersiveInvoke@TrayUI@@QEAA_NW4ImmersiveInvokeFlags@ImmersiveTray@@W4ShowHideWindowFlags@3@@Z
    bool _HandleImmersiveInvoke(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMonitorChanged@TrayUI@@QEAAXXZ
    void _HandleMonitorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMoving@TrayUI@@QEAAX_KPEAUtagRECT@@@Z
    void _HandleMoving(uint64_t, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSettingChange@TrayUI@@QEAAXPEAUHWND__@@I_K_J@Z
    void _HandleSettingChange(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSize@TrayUI@@QEAAXXZ
    void _HandleSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSizing@TrayUI@@QEAAH_KPEAUtagRECT@@I_NPEAUHMONITOR__@@@Z
    int _HandleSizing(uint64_t, tagRECT *, unsigned int, bool, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTrayPrivateSettingMessage@TrayUI@@QEAA_JK_J@Z
    int64_t _HandleTrayPrivateSettingMessage(unsigned long, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWindowPosChanging@TrayUI@@QEAAXPEAUtagWINDOWPOS@@@Z
    void _HandleWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Hide@TrayUI@@QEAAXXZ
    void _Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitBandsite@TrayUI@@QEAAXXZ
    void _InitBandsite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRows@TrayUI@@QEAAXXZ
    void _InitRows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@TrayUI@@QEAA_JXZ
    int64_t _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsActive@TrayUI@@QEAAHXZ
    int _IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KickStartAutohide@TrayUI@@QEAAXXZ
    void _KickStartAutohide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDPIChanged@TrayUI@@QEAAXXZ
    void _OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFocusMsg@TrayUI@@QEAAXI_K_J@Z
    void _OnFocusMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNewSystemSizes@TrayUI@@QEAAXXZ
    void _OnNewSystemSizes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSettingChange@TrayUI@@QEAAXPEAUHWND__@@_K_J@Z
    void _OnSettingChange(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTabNavigation@TrayUI@@QEAAX_N@Z
    void _OnTabNavigation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnThemeChanged@TrayUI@@QEAAXXZ
    void _OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateMessage@TrayUI@@QEAAXPEAUHWND__@@I_K_J@Z
    void _PropagateMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecalcStuckPos@TrayUI@@QEAAIPEAUtagRECT@@@Z
    unsigned int _RecalcStuckPos(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshSettingsAndBandSite@TrayUI@@QEAAXXZ
    void _RefreshSettingsAndBandSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterDropTargets@TrayUI@@QEAAXXZ
    void _RegisterDropTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportAutoHideStateToChildControls@TrayUI@@QEAAXI@Z
    void _ReportAutoHideStateToChildControls(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetZorder@TrayUI@@QEAAXH@Z
    void _ResetZorder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreWindowPos@TrayUI@@QEAAXXZ
    void _RestoreWindowPos();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAutoHideTimer@TrayUI@@QEAAXXZ
    void _SetAutoHideTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBandSiteTheme@TrayUI@@QEAAXXZ
    void _SetBandSiteTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRebarTheme@TrayUI@@QEAAXXZ
    void _SetRebarTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStuckMonitor@TrayUI@@QEAAJPEAUHMONITOR__@@@Z
    long _SetStuckMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStuckMonitorState@TrayUI@@QEAAXW4MonitorSwitchDerivation@TrayTelemetry@@@Z
    void _SetStuckMonitorState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAutoHideTray@TrayUI@@QEAA_NVAutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@@Z
    bool _ShouldAutoHideTray(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldClipTaskbar@TrayUI@@QEAAHXZ
    int _ShouldClipTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldSubclassForSizingBar@TrayUI@@QEAAHXZ
    int _ShouldSubclassForSizingBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SlideStep@TrayUI@@QEAAXPEAUHWND__@@PEBUtagRECT@@11@Z
    void _SlideStep(HWND__*, tagRECT const *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SnapshotStuckRectSize@TrayUI@@QEAAXI@Z
    void _SnapshotStuckRectSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StuckTrayChange@TrayUI@@QEAAXXZ
    void _StuckTrayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleLanguageBand@TrayUI@@QEAAJ_J@Z
    long _ToggleLanguageBand(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleQL@TrayUI@@QEAAHHPEAUICatBandManager@@@Z
    int _ToggleQL(int, ICatBandManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnhideNow@TrayUI@@QEAAX_N@Z
    void _UnhideNow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAutoHideState@TrayUI@@QEAAX_N@Z
    void _UpdateAutoHideState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBorderPadding@TrayUI@@QEAAHXZ
    int _UpdateBorderPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDpiProperties@TrayUI@@QEAAX_N@Z
    void _UpdateDpiProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateStuckRectsForMonitor@TrayUI@@QEAAXPEAUHMONITOR__@@@Z
    void _UpdateStuckRectsForMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateStuckRectsForMonitorRect@TrayUI@@QEAAXPEBUtagRECT@@W4TrayStuckUpdateType@TrayTelemetry@@@Z
    void _UpdateStuckRectsForMonitorRect(tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTaskbandVisibility@TrayUI@@QEAAXXZ
    void _UpdateTaskbandVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVertical@TrayUI@@QEAAXIH@Z
    void _UpdateVertical(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnumTooltipWindowsProc@TrayUI@@SAHPEAUHWND__@@_J@Z
    static int s_EnumTooltipWindowsProc(HWND__*, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TrayUI@@UEAA@XZ
    virtual ~TrayUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GiveDesktopFocus@TrayUI@@AEAAXXZ
    void GiveDesktopFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadGlyphFont@TrayUI@@AEAAPEAUHFONT__@@H@Z
    HFONT__* LoadGlyphFont(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotificationAreaOverflowVisibilityChanged@TrayUI@@AEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque OnNotificationAreaOverflowVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUndockedActivationFailed@TrayUI@@AEAAXXZ
    void OnUndockedActivationFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSystemGlyphIcon@TrayUI@@AEAAXPEAUHDC__@@UtagSIZE@@KKPEAPEAUHBITMAP__@@@Z
    void RenderSystemGlyphIcon(HDC__*, tagSIZE, unsigned long, unsigned long, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkRectToStuckEdge@TrayUI@@AEBAXAEAUtagRECT@@H@Z
    void ShrinkRectToStuckEdge(tagRECT &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeUndockedComponents@TrayUI@@AEAA_NXZ
    bool TryInitializeUndockedComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadTaskbarFromXamlExtension@TrayUI@@AEAA_NXZ
    bool TryLoadTaskbarFromXamlExtension();
};
