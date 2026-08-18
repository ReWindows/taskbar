#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt::param {
class hstring {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@param@winrt@@QEAA@QEBG@Z
    hstring(unsigned short const * const);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z
    void create_string_reference(unsigned short const * const, uint64_t);
};
} // namespace winrt::param
