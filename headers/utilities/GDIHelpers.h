#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
class GDIHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z
    long AddBackgroundForIcon(HBITMAP__*, unsigned long const &, tagSIZE const &, tagSIZE const &, tagSIZE const &, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorizeBitmap@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@KK@Z
    HBITMAP__* ColorizeBitmap(HBITMAP__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z
    void FillRectARGB(HDC__*, tagRECT const *, unsigned char, unsigned long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z
    ::Geometry::CRect GetDrawTextRectForCenteredGlyph(HDC__*, unsigned short, ::Geometry::CRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z
    HBITMAP__* PremultiplyAlphaChannel(HBITMAP__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z
    void RenderCenteredGlyph(HDC__*, HFONT__*, unsigned short, unsigned long, unsigned long, ::Geometry::CRect const &);
};
