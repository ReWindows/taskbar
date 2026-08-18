#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 3 member(s).
namespace Windows::Internal::Shell {
class IconConverter {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBitmapToRandomAccessStream@IconConverter@Shell@Internal@Windows@@YA?AUIRandomAccessStream@Streams@Storage@4winrt@@PEAUIWICBitmap@@PEAUIWICImagingFactory@@@Z
    WindissectOpaque ConvertBitmapToRandomAccessStream(IWICBitmap *, IWICImagingFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertHIcontoRandomAccessStream@IconConverter@Shell@Internal@Windows@@YA?AUIRandomAccessStream@Streams@Storage@4winrt@@PEAUHICON__@@PEAUIWICImagingFactory@@W4IconConverterOptions@1234@@Z
    WindissectOpaque ConvertHIcontoRandomAccessStream(HICON__*, IWICImagingFactory *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToGrayscale@IconConverter@Shell@Internal@Windows@@YAXPEAUIWICBitmap@@@Z
    void ConvertToGrayscale(IWICBitmap *);
};
} // namespace Windows::Internal::Shell
