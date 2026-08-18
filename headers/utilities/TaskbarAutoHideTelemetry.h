#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
namespace AutoHideTelemetry {
class TaskbarAutoHideTelemetry {
public:
    class AutoHideOnTaskbarHide;
    class AutoHideOnTaskbarShow;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHideStopFromTaskList_@TaskbarAutoHideTelemetry@AutoHideTelemetry@@QEAAXW4HideStopTaskListReason@2@PEAUHMONITOR__@@_NPEBG@Z
    void AutoHideStopFromTaskList_(int, HMONITOR__*, bool, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TaskbarAutoHideTelemetry@AutoHideTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarAutoHideTelemetry@AutoHideTelemetry@@UEAA@XZ
    virtual ~TaskbarAutoHideTelemetry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndUpdateState@TaskbarAutoHideTelemetry@AutoHideTelemetry@@CA_NW4HideStopReason@2@_K_N@Z
    static bool CheckAndUpdateState(int, uint64_t, bool);
};
} // namespace AutoHideTelemetry
