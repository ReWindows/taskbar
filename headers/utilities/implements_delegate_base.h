#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace winrt::impl {
class implements_delegate_base {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ
    unsigned int decrement_reference();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0implements_delegate_base@impl@winrt@@QEAA@XZ
    implements_delegate_base();
    // Category: Method | Source: PDB Internal
    // Symbol: ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ
    unsigned int increment_reference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z
    unsigned int query_interface(WindissectOpaque const &, void * *, WindissectOpaque *, WindissectOpaque const &);
};
} // namespace winrt::impl
