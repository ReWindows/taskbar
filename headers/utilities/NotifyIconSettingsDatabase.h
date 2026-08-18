#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 9 member(s).
class NotifyIconSettingsDatabase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIOrderForIcon@NotifyIconSettingsDatabase@@QEAAI_K@Z
    unsigned int GetUIOrderForIcon(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAttemptedGuidHijack@NotifyIconSettingsDatabase@@QEAA_NAEBUguid@winrt@@PEBG@Z
    bool IsAttemptedGuidHijack(WindissectOpaque const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveIcon@NotifyIconSettingsDatabase@@QEAAX_K0W4OrderListRelativePosition@@@Z
    void MoveIcon(uint64_t, uint64_t, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotifyIconSettingsDatabase@@QEAA@PEBG@Z
    NotifyIconSettingsDatabase(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotifyIconSettingsDatabase@@UEAA@XZ
    virtual ~NotifyIconSettingsDatabase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRegistry@NotifyIconSettingsDatabase@@AEAAXPEBG@Z
    void ValidateRegistry(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsRegistrySubkeyValid@NotifyIconSettingsDatabase@@CA_NPEAUHKEY__@@@Z
    static bool s_IsRegistrySubkeyValid(HKEY__*);
};
