#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class SystemTrayHost {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationAreaFrameWidth@SystemTrayHost@@QEAAHXZ
    int GetNotificationAreaFrameWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePosition@SystemTrayHost@@QEAAXXZ
    void UpdatePosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?View@SystemTrayHost@@QEAA?AUFrameworkElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque View();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemTrayHost@@QEAA@XZ
    ~SystemTrayHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadNotificationAreaFrameFromXamlExtension@SystemTrayHost@@AEAAXXZ
    void TryLoadNotificationAreaFrameFromXamlExtension();
};
