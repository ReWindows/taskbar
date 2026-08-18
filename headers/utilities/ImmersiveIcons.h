#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 11 member(s).
class ImmersiveIcons {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z
    long CreateIconBitmap(tagSIZE, tagSIZE, tagSIZE, unsigned long, bool, WindissectOpaque &, bool, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z
    int DpiToMrtScale(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z
    int GetContrastForParams(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@PEAVLoadIconW@ImmersiveIconsLoggingTelemetry@@@Z
    long GetIconData(unsigned short const *, WindissectOpaque const &, WindissectOpaque*, ::ImmersiveIconsLoggingTelemetry::LoadIconW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ
    int GetMrtContrast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@PEAVLoadIconW@ImmersiveIconsLoggingTelemetry@@@Z
    long InitResourceContextForAllThemes(WindissectOpaque const &, IResourceContext *, ::ImmersiveIconsLoggingTelemetry::LoadIconW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@PEAVLoadIconW@ImmersiveIconsLoggingTelemetry@@@Z
    long InitResourceContextForLightTheme(WindissectOpaque const &, IResourceContext *, ::ImmersiveIconsLoggingTelemetry::LoadIconW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrast@ImmersiveIcons@@YA_NXZ
    bool IsHighContrast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImmersiveIconThemeAware@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@@Z
    long LoadImmersiveIconThemeAware(unsigned short const *, WindissectOpaque const &, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPinnedWebsiteIcon@ImmersiveIcons@@YAJPEAUIShellItem@@UtagSIZE@@1K_NPEAPEAUHBITMAP__@@@Z
    long LoadPinnedWebsiteIcon(IShellItem *, tagSIZE, tagSIZE, unsigned long, bool, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@PEAVLoadIconW@ImmersiveIconsLoggingTelemetry@@@Z
    long _LoadImmersiveIcon(unsigned short const *, WindissectOpaque const &, HBITMAP__* *, WindissectOpaque*, ::ImmersiveIconsLoggingTelemetry::LoadIconW *);
};
