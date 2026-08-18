#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 4 member(s).
namespace ShellMRTHelper {
class Common {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z
    long ConvertMsAppXUriToMsResourceUri(HSTRING__*, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z
    long ConvertMsAppXUriToMsResourceUri(WindissectOpaque *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z
    bool HasMsAppXUriScheme(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z
    long TryFallbackToFilePath(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__* *);
};
} // namespace ShellMRTHelper
