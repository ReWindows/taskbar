#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
namespace TrayNotificationAreaTelemetry::CTrayNotificationAreaTelemetry {
class MigrateLegacyNotifyIconDataIfNeeded {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrationNotNeeded@MigrateLegacyNotifyIconDataIfNeeded@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXXZ
    void MigrationNotNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MigrateLegacyNotifyIconDataIfNeeded@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MigrateLegacyNotifyIconDataIfNeeded@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@QEAA@XZ
    ~MigrateLegacyNotifyIconDataIfNeeded();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MigrateLegacyNotifyIconDataIfNeeded@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MigrateLegacyNotifyIconDataIfNeeded@CTrayNotificationAreaTelemetry@TrayNotificationAreaTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TrayNotificationAreaTelemetry::CTrayNotificationAreaTelemetry
