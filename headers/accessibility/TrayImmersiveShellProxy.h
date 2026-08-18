#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 12 member(s).
class TrayImmersiveShellProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveZbandChanged@TrayImmersiveShellProxy@@UEAAJKK@Z
    virtual long ActiveZbandChanged(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationProvider@TrayImmersiveShellProxy@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetNotificationProvider(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TrayImmersiveShellProxy@@UEAAJPEAUIServiceProvider@@@Z
    virtual long Initialize(IServiceProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewVisible@TrayImmersiveShellProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAW42@@Z
    virtual long IsViewVisible(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewDismissed@TrayImmersiveShellProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewDismissed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewShown@TrayImmersiveShellProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewShown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@TrayImmersiveShellProxy@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TrayImmersiveShellProxy@@QEAA@XZ
    TrayImmersiveShellProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@TrayImmersiveShellProxy@@UEAAXXZ
    virtual void Uninitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TrayImmersiveShellProxy@@UEAA@XZ
    virtual ~TrayImmersiveShellProxy();
};
