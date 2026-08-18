#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class TaskItemFilterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFilter@TaskItemFilterFactory@@UEAAJ_NPEAUHMONITOR__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateFilter(bool, HMONITOR__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarSettings@TaskItemFilterFactory@@UEAAXK@Z
    virtual void SetTaskbarSettings(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemFilterFactory@@UEAA@XZ
    virtual ~TaskItemFilterFactory();
};
