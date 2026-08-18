#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 6 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class ThumbBarButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@ThumbBarButton@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUIRandomAccessStreamReference@Streams@Storage@Windows@6@XZ
    WindissectOpaque Icon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportClicked@ThumbBarButton@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void ReportClicked();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThumbBarButton@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITaskGroup@@PEAUITaskItem@@HPEAUtagTHUMBBUTTON32@@PEAUIWICImagingFactory@@@Z
    ThumbBarButton(ITaskGroup *, ITaskItem *, int, tagTHUMBBUTTON32*, IWICImagingFactory *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThumbBarButton@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~ThumbBarButton();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
