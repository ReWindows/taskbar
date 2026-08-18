#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
namespace TrayNotificationAreaTelemetry::CTrayNotificationAreaTelemetry {
class NotificationAreaIconBalloonRequested {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeBalloonToast@NotificationAreaIconBalloonRequested@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXXZ
    void MakeBalloonToast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RejectInvalidIconBalloonRequest@NotificationAreaIconBalloonRequested@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXXZ
    void RejectInvalidIconBalloonRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendBalloonToast@NotificationAreaIconBalloonRequested@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXXZ
    void SendBalloonToast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NotificationAreaIconBalloonRequested@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationAreaIconBalloonRequested@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAA@XZ
    ~NotificationAreaIconBalloonRequested();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NotificationAreaIconBalloonRequested@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NotificationAreaIconBalloonRequested@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TrayNotificationAreaTelemetry::CTrayNotificationAreaTelemetry
