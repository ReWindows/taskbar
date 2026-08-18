#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace CreativeFramework {
class Triggers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEventForWin32IfNecessary@Triggers@CreativeFramework@@YAXPEBG0W4AppEventTrigger@12@@Z
    void LogEventForWin32IfNecessary(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEventIfNecessary@Triggers@CreativeFramework@@YAXPEBGW4AppEventTrigger@12@0@Z
    void LogEventIfNecessary(unsigned short const *, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishWnfStateForApplicationEvent@Triggers@CreativeFramework@@YAJW4AppEventTrigger@12@PEBG1I@Z
    long PublishWnfStateForApplicationEvent(int, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveWnfStateFromApplicationEvent@Triggers@CreativeFramework@@YAJW4AppEventTrigger@12@PEBGPEAPEBU_WNF_STATE_NAME@@@Z
    long ResolveWnfStateFromApplicationEvent(int, unsigned short const *, _WNF_STATE_NAME const * *);
};
} // namespace CreativeFramework
