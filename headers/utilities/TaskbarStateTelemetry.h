#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 10 member(s).
namespace StateCapture {
class TaskbarStateTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TaskbarStateTelemetry@StateCapture@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedItemAggregate_@TaskbarStateTelemetry@StateCapture@@QEAAXPEAUITrayComponentHost@@W4TelemetryStateCaptureType@2@PEAUIFlexibleTaskbarPinnedList@@@Z
    void PinnedItemAggregate_(ITrayComponentHost *, int, IFlexibleTaskbarPinnedList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListStateCapture_@TaskbarStateTelemetry@StateCapture@@QEAAXW4TelemetryStateCaptureType@2@PEAUITaskListUI@@@Z
    void TaskListStateCapture_(int, ITaskListUI *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrayStateCapture_@TaskbarStateTelemetry@StateCapture@@QEAAXW4TelemetryStateCaptureType@2@PEAUITrayComponentHost@@PEAUICatBandManager@@@Z
    void TrayStateCapture_(int, ITrayComponentHost *, ICatBandManager *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractToolbarCounts@TaskbarStateTelemetry@StateCapture@@CAXPEAUICatBandManager@@PEAI11PEAPEAG2@Z
    static void ExtractToolbarCounts(ICatBandManager *, unsigned int *, unsigned int *, unsigned int *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractTrayLocation@TaskbarStateTelemetry@StateCapture@@CA?AW4TrayLocation@TrayCommon@@V?$ComPtr@UITaskListUI@@@WRL@Microsoft@@@Z
    static int ExtractTrayLocation(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUsage@TaskbarStateTelemetry@StateCapture@@CA_JPEBG0@Z
    static int64_t GetAppUsage(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyCreationAge@TaskbarStateTelemetry@StateCapture@@CA_JU_FILETIME@@@Z
    static int64_t GetKeyCreationAge(_FILETIME);
};
} // namespace StateCapture
