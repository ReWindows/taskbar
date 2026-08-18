#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 10 member(s).
class NotifyIconUtilities {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMarginsToBitmap@NotifyIconUtilities@@YAJU_MARGINS@@IIPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z
    long AddMarginsToBitmap(_MARGINS, unsigned int, unsigned int, IWICBitmapSource *, IWICBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowWindowSetForegroundAsync@NotifyIconUtilities@@YA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z
    WindissectOpaque AllowWindowSetForegroundAsync(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableWindowHardeningPolicy@NotifyIconUtilities@@YAJXZ
    long DisableWindowHardeningPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastIfNotUIThread@NotifyIconUtilities@@YAXXZ
    void FailFastIfNotUIThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColorTheme@NotifyIconUtilities@@YA?AW4COLORTHEME@1@XZ
    int GetSystemColorTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidIcon@NotifyIconUtilities@@YA_NQEAUHICON__@@@Z
    bool IsValidIcon(HICON__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForForegroundTransferToOtherProcess@NotifyIconUtilities@@YA?AUIAsyncAction@Foundation@Windows@winrt@@K@Z
    WindissectOpaque PrepareForForegroundTransferToOtherProcess(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceIconColor@NotifyIconUtilities@@YAPEAUHICON__@@PEAU2@KK@Z
    HICON__* ReplaceIconColor(HICON__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSoftwareBitmapFromHicon@NotifyIconUtilities@@YA?AUSoftwareBitmap@Imaging@Graphics@Windows@winrt@@PEAUHICON__@@@Z
    WindissectOpaque TryGetSoftwareBitmapFromHicon(HICON__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteHIconToPngFile@NotifyIconUtilities@@YAJPEAUHICON__@@PEBG@Z
    long WriteHIconToPngFile(HICON__*, unsigned short const *);
};
