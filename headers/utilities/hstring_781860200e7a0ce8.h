#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 7 member(s).
namespace winrt {
class hstring {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?c_str@hstring@winrt@@QEBAPEBGXZ
    unsigned short const * c_str() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@winrt@@QEAA@PEBGI@Z
    hstring(unsigned short const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@winrt@@QEAA@PEBG@Z
    hstring(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@winrt@@QEAA@AEBU01@@Z
    hstring(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1hstring@winrt@@QEAA@XZ
    ~hstring();
};
} // namespace winrt
