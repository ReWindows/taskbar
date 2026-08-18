#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
namespace ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider {
class CdmLiteRequestActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CdmLiteRequestActivity@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CdmLiteRequestActivity@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CdmLiteRequestActivity@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@QEAA@XZ
    ~CdmLiteRequestActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CdmLiteRequestActivity@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CdmLiteRequestActivity@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider
