#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
class TaskItemFilter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskAllowed@TaskItemFilter@@UEAA_NPEAUITaskItem@@@Z
    virtual bool IsTaskAllowed(ITaskItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemFilter@@UEAA@XZ
    virtual ~TaskItemFilter();
};
