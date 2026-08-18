#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace shell {
class TaskScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@KKPEAPEAV12@@Z
    static long CreateInstance(_GUID const &, unsigned long, unsigned long, ::shell::TaskScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@PEAPEAV12@@Z
    static long CreateInstance(_GUID const &, ::shell::TaskScheduler * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskScheduler@shell@@QEAA@XZ
    ~TaskScheduler();
};
} // namespace shell
