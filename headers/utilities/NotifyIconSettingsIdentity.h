#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class NotifyIconSettingsIdentity {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotifyIconSettingsIdentity@@QEAA@AEBU0@@Z
    NotifyIconSettingsIdentity(NotifyIconSettingsIdentity const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotifyIconSettingsIdentity@@QEAA@QEAU_TRAYNOTIFYDATAW@@@Z
    NotifyIconSettingsIdentity(_TRAYNOTIFYDATAW * const);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotifyIconSettingsIdentity@@QEAA@$$QEAU0@@Z
    NotifyIconSettingsIdentity(NotifyIconSettingsIdentity &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotifyIconSettingsIdentity@@QEAA@AEBUguid@winrt@@QEBG@Z
    NotifyIconSettingsIdentity(WindissectOpaque const &, unsigned short const * const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotifyIconSettingsIdentity@@QEAA@XZ
    ~NotifyIconSettingsIdentity();
};
