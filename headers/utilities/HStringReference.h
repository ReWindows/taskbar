#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
namespace Microsoft::WRL::Wrappers {
class HStringReference {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z
    HStringReference(unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ
    ~HStringReference();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z
    static unsigned int AddOne(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z
    void CreateReference(unsigned short const *, unsigned int, unsigned int);
};
} // namespace Microsoft::WRL::Wrappers
