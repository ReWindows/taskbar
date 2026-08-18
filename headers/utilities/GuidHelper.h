#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace winrt::Windows::Foundation {
class GuidHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ
    static CreateNewGuid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ
    static Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@GuidHelper@Foundation@Windows@winrt@@SA@AEBUguid@4@0@Z
    static Equals(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Foundation
