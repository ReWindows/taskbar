#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 20 member(s).
class ImmersiveTray {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachWindowToTray@ImmersiveTray@@YAJPEAUITrayComponentHost@@PEAUHWND__@@1_N@Z
    long AttachWindowToTray(ITrayComponentHost *, HWND__*, HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTrayForegroundControl@ImmersiveTray@@YAJPEAUITrayComponentHost@@@Z
    long EnsureTrayForegroundControl(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlaceChangeUncloakAnimation@ImmersiveTray@@YA?AW4TaskbarCloakStateAnimation@1@XZ
    int GetStuckPlaceChangeUncloakAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionRects@ImmersiveTray@@YAJPEAUHWND__@@I_NPEAUtagRECT@@222@Z
    long GetTransitionRects(HWND__*, unsigned int, bool, tagRECT *, tagRECT *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleActiveZBandChanged@ImmersiveTray@@YAJPEAUITrayComponentHost@@PEAUHWND__@@IW4ZBID@@W4ModeChangeFlags@1@@Z
    long HandleActiveZBandChanged(ITrayComponentHost *, HWND__*, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveModeChange@ImmersiveTray@@YAJPEAUITrayComponentHost@@PEAUHWND__@@IW4ModeChangeFlags@1@@Z
    long HandleImmersiveModeChange(ITrayComponentHost *, HWND__*, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@ImmersiveTray@@YAJPEAUHWND__@@IW4ShowHideWindowFlags@1@@Z
    long HideWindow(HWND__*, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullScreenViewVisibleOnMonitor@ImmersiveTray@@YA_NPEAUITrayComponentHost@@PEAUHMONITOR__@@@Z
    bool IsFullScreenViewVisibleOnMonitor(ITrayComponentHost *, HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowRaised@ImmersiveTray@@YA_NPEAUHWND__@@@Z
    bool IsWindowRaised(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPearlRectChanged@ImmersiveTray@@YAXPEAUITrayComponentHost@@PEAUHMONITOR__@@UtagRECT@@@Z
    void NotifyPearlRectChanged(ITrayComponentHost *, HMONITOR__*, tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPearlRectChangedHelper@ImmersiveTray@@YAXPEAUIServiceProvider@@PEAUHMONITOR__@@UtagRECT@@@Z
    void NotifyPearlRectChangedHelper(IServiceProvider *, HMONITOR__*, tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTraySearchBoxVisibilityChanged@ImmersiveTray@@YAXPEAUITrayComponentHost@@PEAUHMONITOR__@@H@Z
    void NotifyTraySearchBoxVisibilityChanged(ITrayComponentHost *, HMONITOR__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTrayStuckPlaceChanged@ImmersiveTray@@YAXPEAUITrayComponentHost@@PEAUHMONITOR__@@I@Z
    void NotifyTrayStuckPlaceChanged(ITrayComponentHost *, HMONITOR__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTrayStuckPlaceChangedHelper@ImmersiveTray@@YAXPEAUIServiceProvider@@PEAUHMONITOR__@@I@Z
    void NotifyTrayStuckPlaceChangedHelper(IServiceProvider *, HMONITOR__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseWindow@ImmersiveTray@@YAJPEAUITrayComponentHost@@PEAUHWND__@@1W4RaiseWindowFlags@1@@Z
    long RaiseWindow(ITrayComponentHost *, HWND__*, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForZBandChanges@ImmersiveTray@@YAJPEAUIActiveZBandNotification@@PEAUITrayComponentHost@@PEAPEAUIActiveZBandNotificationService@@PEAK@Z
    long RegisterForZBandChanges(IActiveZBandNotification *, ITrayComponentHost *, IActiveZBandNotificationService * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCloakWithAnimation@ImmersiveTray@@YAJPEAUHWND__@@HW4TaskbarCloakStateAnimation@1@I@Z
    long SetCloakWithAnimation(HWND__*, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInputObservation@ImmersiveTray@@YAJPEAUITrayComponentHost@@PEAUHWND__@@@Z
    long StopInputObservation(ITrayComponentHost *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInputObservationAsync@ImmersiveTray@@YA?AUfire_and_forget@winrt@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@PEAUHWND__@@UDispatcherQueue@System@Windows@3@@Z
    WindissectOpaque StopInputObservationAsync(WindissectOpaque, HWND__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToDesktopOnMonitor@ImmersiveTray@@YAJPEAUITrayComponentHost@@PEAUHWND__@@PEAUHMONITOR__@@@Z
    long SwitchToDesktopOnMonitor(ITrayComponentHost *, HWND__*, HMONITOR__*);
};
