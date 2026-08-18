#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 15 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque AccessibleName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bounds@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AURect@Foundation@Windows@6@XZ
    WindissectOpaque Bounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bounds@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z
    void Bounds(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque DisplayName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnails@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IVectorView@UTaskItemThumbnail@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@6@AEBUSize@9Windows@6@@Z
    WindissectOpaque GetThumbnails(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@6@XZ
    WindissectOpaque Icon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsJumpListVisible@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsJumpListVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestingAttention@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsRequestingAttention();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenCaptureActive@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsScreenCaptureActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverlayIcon@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUIRandomAccessStream@Streams@Storage@Windows@6@XZ
    WindissectOpaque OverlayIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Progress@TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskItemProgress@3456@XZ
    WindissectOpaque Progress();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITaskGroup@@PEAUITaskItem@@PEAUITaskListUI@@PEAUIWICImagingFactory@@@Z
    TaskItem(ITaskGroup *, ITaskItem *, ITaskListUI *, IWICImagingFactory *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItem@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskItem();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
