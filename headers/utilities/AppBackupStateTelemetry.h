#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 14 member(s).
namespace StateCapture {
class AppBackupStateTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppBackupStateCapture_@AppBackupStateTelemetry@StateCapture@@QEBAXW4TelemetryStateCaptureType@2@@Z
    void AppBackupStateCapture_(int) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRegKeys@AppBackupStateTelemetry@StateCapture@@AEBAXPEAUHKEY__@@@Z
    void CleanupRegKeys(HKEY__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsBackupFlags@AppBackupStateTelemetry@StateCapture@@AEBA?AW4BackUpFlagsType@2@XZ
    int GetSettingsBackupFlags() const;
};
} // namespace StateCapture
