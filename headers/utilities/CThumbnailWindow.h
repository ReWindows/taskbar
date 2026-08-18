#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class CThumbnailWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CThumbnailWindow@@SAJAEBUCRect@Geometry@@0PEAUHWND__@@0_NW4ZBID@@PEAUHINSTANCE__@@PEAPEAV1@@Z
    static long CreateInstance(::Geometry::CRect const &, ::Geometry::CRect const &, HWND__*, ::Geometry::CRect const &, bool, int, HINSTANCE__*, CThumbnailWindow * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThumbnailWindow@@QEAAJXZ
    long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCenteredRect@CThumbnailWindow@@CA?AUCRect@Geometry@@U23@UCSize@3@@Z
    static ::Geometry::CRect _GetCenteredRect(::Geometry::CRect, ::Geometry::CSize);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CThumbnailWindow@@AEAA_JI_K_J@Z
    int64_t _WndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CThumbnailWindow@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
