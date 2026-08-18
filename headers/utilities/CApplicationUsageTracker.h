#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 18 member(s).
class CApplicationUsageTracker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationUsageTracker@@QEAA@PEAUITrayComponentHost@@@Z
    CApplicationUsageTracker(ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUserActiveState@CApplicationUsageTracker@@UEAAJPEAH@Z
    virtual long CheckUserActiveState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTelemetryId@CApplicationUsageTracker@@UEAAPEBGPEBGPEAUHWND__@@@Z
    virtual unsigned short const * GetTelemetryId(unsigned short const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPowerBroadcastMessage@CApplicationUsageTracker@@UEAAJ_K_J@Z
    virtual long OnPowerBroadcastMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CApplicationUsageTracker@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@CApplicationUsageTracker@@UEAAJPEAUHWND__@@@Z
    virtual long OnWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CApplicationUsageTracker@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CApplicationUsageTracker@@UEAAJXZ
    virtual long Stop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckUserActiveState@CApplicationUsageTracker@@AEAAX_N@Z
    void _CheckUserActiveState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireDelayedSwitch@CApplicationUsageTracker@@AEAAXXZ
    void _FireDelayedSwitch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireDelayedSwitchCallback@CApplicationUsageTracker@@CAXPEAXE@Z
    static void _FireDelayedSwitchCallback(void *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowTrackingSettings@CApplicationUsageTracker@@AEAAXXZ
    void _GetWindowTrackingSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleActivateWindow@CApplicationUsageTracker@@AEAAJPEAUHWND__@@@Z
    long _HandleActivateWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDestroyWindow@CApplicationUsageTracker@@AEAAJPEAUHWND__@@@Z
    long _HandleDestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateUserActiveStateCallback@CApplicationUsageTracker@@CAXPEAXE@Z
    static void _UpdateUserActiveStateCallback(void *, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationUsageTracker@@EEAA@XZ
    virtual ~CApplicationUsageTracker();
};
