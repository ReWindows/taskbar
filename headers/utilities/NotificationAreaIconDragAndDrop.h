#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
namespace TrayNotificationAreaTelemetry::CTrayNotificationAreaTelemetry {
class NotificationAreaIconDragAndDrop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovingToEmptyCollection@NotificationAreaIconDragAndDrop@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXXZ
    void MovingToEmptyCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NotificationAreaIconDragAndDrop@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXPEBG00H@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationAreaIconDragAndDrop@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAA@XZ
    ~NotificationAreaIconDragAndDrop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NotificationAreaIconDragAndDrop@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NotificationAreaIconDragAndDrop@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TrayNotificationAreaTelemetry::CTrayNotificationAreaTelemetry
