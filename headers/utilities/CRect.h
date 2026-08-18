#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 1 member(s).
namespace Geometry {
class CRect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z
    static ::Geometry::CRect MulDiv(tagRECT const &, int, int);
};
} // namespace Geometry
