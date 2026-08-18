#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 9 member(s).
class TaskbandTelemetry {
public:
    class EnumPinnedItems;
    class JumplistInvocation;
    class LaunchApplication;
    class ProcessPinnedItem;
    class TaskbarExternalDragItemPinning;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDomainFromSecondaryTile@TaskbandTelemetry@@SAJPEBGPEAPEAG@Z
    static long GetDomainFromSecondaryTile(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TaskbandTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreview_@TaskbandTelemetry@@QEBAXPEBG@Z
    void LivePreview_(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbarAction_@TaskbandTelemetry@@QEBAXPEBG0I@Z
    void ThumbarAction_(unsigned short const *, unsigned short const *, unsigned int) const;
};
