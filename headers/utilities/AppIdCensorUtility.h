#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace LoggingUtil {
class AppIdCensorUtility {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z
    static long CensorAppIdBuffer(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z
    static void CensorUnescapedUrl(unsigned short const *, unsigned short const *, unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z
    static void CensorWebAppId(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z
    static bool ExtractDomain(unsigned short const *, unsigned short * *);
};
} // namespace LoggingUtil
