#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
class Taskbar {
public:
    class ProgrammableTaskbarManager;
    class _tip_ProgrammableTaskbarIrisDownloadTest;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAuditMode@Taskbar@@YA_NXZ
    bool IsAuditMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChinaCTAPolicyEnabled@Taskbar@@YA_NXZ
    bool IsChinaCTAPolicyEnabled();
};
