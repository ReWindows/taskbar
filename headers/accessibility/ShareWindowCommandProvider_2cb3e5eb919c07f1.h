#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 11 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class ShareWindowCommandProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveItem@ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskItem@3456@XZ
    WindissectOpaque ActiveItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppSourceIcon@ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUIRandomAccessStreamReference@Streams@Storage@Windows@6@XZ
    WindissectOpaque AppSourceIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandAsync@ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IAsyncOperation@W4ShareWindowCommand@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@6@XZ
    WindissectOpaque GetCommandAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCurrentCommand@ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void InvokeCurrentCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShareable@ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsShareable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowSharing@ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsWindowSharing();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUTaskItem@2345@PEAUIWICImagingFactory@@@Z
    ShareWindowCommandProvider(WindissectOpaque const &, IWICImagingFactory *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUTaskItem@2345@PEAUIWICImagingFactory@@W4ShareWindowCommandProviderKind@ShareWindow@2Internal@Windows@5@@Z
    ShareWindowCommandProvider(WindissectOpaque const &, IWICImagingFactory *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowCommandProvider@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~ShareWindowCommandProvider();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
