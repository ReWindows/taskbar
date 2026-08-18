#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 14 member(s).
class CLauncherUIMode {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLauncherUIMode@@QEAA@XZ
    CLauncherUIMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopSwitchPreference@CLauncherUIMode@@UEAAJPEAW4IAM_DESKTOP_SWITCH_OPTION@@@Z
    virtual long GetDesktopSwitchPreference(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CLauncherUIMode@@UEAAJPEAPEAUHMONITOR__@@@Z
    virtual long GetMonitor(HMONITOR__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorPreference@CLauncherUIMode@@UEAAJPEAW4ACTIVATION_MONITOR_PREFERENCE@@@Z
    virtual long GetMonitorPreference(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceWindow@CLauncherUIMode@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetSourceWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwitchAppFlags@CLauncherUIMode@@UEAAJPEAW4SWITCH_APP_FLAGS@@@Z
    virtual long GetSwitchAppFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIMode@CLauncherUIMode@@UEAAJPEAW4EC_HOST_UI_MODE@@@Z
    virtual long GetUIMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CLauncherUIMode@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowDownloadUI@CLauncherUIMode@@UEAAJXZ
    virtual long ShouldShowDownloadUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSwitchToDesktop@CLauncherUIMode@@UEAAJXZ
    virtual long ShouldSwitchToDesktop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldWakeOnRPCCalls@CLauncherUIMode@@UEAAJXZ
    virtual long ShouldWakeOnRPCCalls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CLauncherUIMode@@UEAAJPEAUIUnknown@@@Z
    virtual long Update(IUnknown *);
};
