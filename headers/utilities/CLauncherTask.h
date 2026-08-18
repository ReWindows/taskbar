#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
namespace CTaskBand {
class CLauncherTask {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLauncherTask@CTaskBand@@QEAA@PEAV1@PEAUITaskGroup@@AEBUtagPOINT@@W4LaunchFromTaskbarOptions@@VLaunchApplication@TaskbandTelemetry@@AEBV?$tip_test@V?$merged_data@U_tip_TaskListButtonClickTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    CLauncherTask(CTaskBand *, ITaskGroup *, tagPOINT const &, int, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadProc@CLauncherTask@CTaskBand@@QEAAXXZ
    void ThreadProc();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLauncherTask@CTaskBand@@QEAA@XZ
    ~CLauncherTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireIrisBeacon@CLauncherTask@CTaskBand@@AEAAXPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    void FireIrisBeacon(_ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Launch@CLauncherTask@CTaskBand@@AEAAJXZ
    long _Launch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RepairShortcut@CLauncherTask@CTaskBand@@AEAAJPEAUHWND__@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _RepairShortcut(HWND__*, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveOrDeletePinnedItem@CLauncherTask@CTaskBand@@AEAAXH@Z
    void _ResolveOrDeletePinnedItem(int);
};
} // namespace CTaskBand
