#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 1 member(s).
namespace winrt::Windows::Management::Policies {
class NamedPolicy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyFromPath@NamedPolicy@Policies@Management@Windows@winrt@@SA@AEBUhstring@param@5@0@Z
    static GetPolicyFromPath(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Management::Policies
