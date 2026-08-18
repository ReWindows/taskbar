#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 19 member(s).
class CPearl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPearl@@QEAA@XZ
    CPearl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherTipContextMenu@CPearl@@QEAAJV?$tip_test@V?$merged_data@U_tip_TaskbarLauncherTipContextMenuTest@TaskbarTip@@U12@@details@tip2@@@tip2@@PEAPEAUILauncherTipContextMenu@@@Z
    long GetLauncherTipContextMenu(WindissectOpaque, ILauncherTipContextMenu * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinimumFitSize@CPearl@@QEAAXPEAUtagSIZE@@@Z
    void GetMinimumFitSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartMenuMonitor@CPearl@@QEAAPEAUHMONITOR__@@XZ
    HMONITOR__* GetStartMenuMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CPearl@@QEAAJPEAUITrayComponentHost@@PEAUHWND__@@@Z
    long RuntimeClassInitialize(ITrayComponentHost *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@CPearl@@QEAAJAEBUtagRECT@@@Z
    long SetBounds(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleStartAsync@CPearl@@QEAA?AUfire_and_forget@winrt@@UPoint@Foundation@Windows@3@W4InputDeviceKind@Shell@UI@WindowsUdk@3@@Z
    WindissectOpaque ToggleStartAsync(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CPearl@@QEAAXXZ
    void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSize@CPearl@@QEAAJI@Z
    long UpdateSize(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPearl@@UEAA@XZ
    virtual ~CPearl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindow@CPearl@@AEAAJPEAUHWND__@@@Z
    long _CreateWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImmersiveShell@CPearl@@AEAAJXZ
    long _EnsureImmersiveShell();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLauncher@CPearl@@AEAAJXZ
    long _EnsureLauncher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMonitorManager@CPearl@@AEAAJXZ
    long _EnsureMonitorManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyPearlSizeChange@CPearl@@AEAAXXZ
    void _NotifyPearlSizeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetObject@CPearl@@AEAA_J_K@Z
    int64_t _OnGetObject(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CPearl@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
