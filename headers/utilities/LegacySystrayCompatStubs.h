#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 12 member(s).
class LegacySystrayCompatStubs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAction@LegacySystrayCompatStubs@@UEAAJPEBUtagNOTIFYITEM@@W4tagNOTIFYITEMACTION@@@Z
    virtual long DoAction(tagNOTIFYITEM const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoNotifyIconEvent@LegacySystrayCompatStubs@@UEAAJPEBUtagNOTIFYITEM@@W4__MIDL___MIDL_itf_shpriv_0000_0034_0001@@KUtagPOINT@@K@Z
    virtual long DoNotifyIconEvent(tagNOTIFYITEM const *, int, unsigned long, tagPOINT, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAutoTray@LegacySystrayCompatStubs@@UEAAJH@Z
    virtual long EnableAutoTray(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCallback@LegacySystrayCompatStubs@@UEAAJPEAUINotificationCB@@PEAK@Z
    virtual long RegisterCallback(INotificationCB *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreference@LegacySystrayCompatStubs@@UEAAJPEBUtagNOTIFYITEM@@@Z
    virtual long SetPreference(tagNOTIFYITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCallback@LegacySystrayCompatStubs@@UEAAJK@Z
    virtual long UnregisterCallback(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LegacySystrayCompatStubsWndProc@LegacySystrayCompatStubs@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_LegacySystrayCompatStubsWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LegacySystrayCompatStubs@@UEAA@XZ
    virtual ~LegacySystrayCompatStubs();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTrayNotifywnd@LegacySystrayCompatStubs@@AEAAXXZ
    void CreateTrayNotifywnd();
};
