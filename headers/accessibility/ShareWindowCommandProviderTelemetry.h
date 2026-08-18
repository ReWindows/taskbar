#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class ShareWindowCommandProviderTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandForWindow_@ShareWindowCommandProviderTelemetry@@QEAAXW4ShareWindowCommand@Shell@UI@Windows@winrt@@PEAUHWND__@@@Z
    void GetCommandForWindow_(int, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ShareWindowCommandProviderTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareWindowCommandCommunicationAppDetails_@ShareWindowCommandProviderTelemetry@@QEAAXPEBG@Z
    void ShareWindowCommandCommunicationAppDetails_(unsigned short const *);
};
