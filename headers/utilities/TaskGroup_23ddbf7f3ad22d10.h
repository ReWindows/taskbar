#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 25 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque AccessibleName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bounds@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z
    void Bounds(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bounds@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AURect@Foundation@Windows@6@XZ
    WindissectOpaque Bounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTileUpdated@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void HandleTileUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@6@XZ
    WindissectOpaque Icon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallProgress@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU03456@XZ
    WindissectOpaque InstallProgress();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsJumpListVisible@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsJumpListVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaceholder@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsPlaceholder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestingAttention@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsRequestingAttention();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenCaptureActive@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsScreenCaptureActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowSharing@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsWindowSharing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Items@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IVectorView@UTaskItem@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@6@XZ
    WindissectOpaque Items();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverlayIcon@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@6@XZ
    WindissectOpaque OverlayIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Progress@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskItemProgress@3456@XZ
    WindissectOpaque Progress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUTMListeners@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void RegisterUTMListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXI@Z
    void RemoveItem(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITaskGroup@@PEAUITaskListUI@@PEAUIWICImagingFactory@@@Z
    TaskGroup(ITaskGroup *, ITaskListUI *, IWICImagingFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Thumbnails@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IObservableVector@UTaskItemThumbnail@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@6@XZ
    WindissectOpaque Thumbnails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualState@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXW4TaskItemVisualState@3456@@Z
    void VisualState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileChanged@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@AEAA?AUfire_and_forget@6@UTile@StartScreen@456@AEBUTileChangedEventArgs@9456@@Z
    WindissectOpaque OnTileChanged(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInstallProgress@TaskGroup@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void UpdateInstallProgress();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
