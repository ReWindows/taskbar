#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 32 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskbarModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOverflowFlyout@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void ActivateOverflowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapsedExtent@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEBANXZ
    double CollapsedExtent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertVectorChangedToIconsChanged@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUNotificationAreaIconCollectionChangedEventArgs@3456@UIVectorChangedEventArgs@Collections@Foundation@Windows@6@W4NotificationAreaIconLocation@3456@@Z
    WindissectOpaque ConvertVectorChangedToIconsChanged(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlyout@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskbarFlyout@3456@W4TaskbarFlyoutKind@3456@@Z
    WindissectOpaque CreateFlyout(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpStringForShellViewButton@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@_KAEBW4ShellView@3456@@Z
    WindissectOpaque GetHelpStringForShellViewButton(uint64_t, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartButtonMenuItemsAsync@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@6@AEBUMenuItemGetOptions@456@@Z
    WindissectOpaque GetStartButtonMenuItemsAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void HideFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideTaskItemPreviews@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void HideTaskItemPreviews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostWindowId@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_KXZ
    uint64_t HostWindowId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void IsExpanded(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlyoutVisible@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsFlyoutVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullscreenWindowHidingTaskbar@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void IsFullscreenWindowHidingTaskbar(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutFocused@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsOverflowFlyoutFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutShowing@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool IsOverflowFlyoutShowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationAreaOverflowIcons@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IVectorView@UNotificationAreaIcon@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@6@XZ
    WindissectOpaque NotificationAreaOverflowIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDashboardWidgetEntryPointPayloadChanged@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void NotifyDashboardWidgetEntryPointPayloadChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInteractionModeChanged@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void NotifyInteractionModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyShouldStayExpandedChanged@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void NotifyShouldStayExpandedChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCommand@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NW4TaskbarCommand@3456@@Z
    bool RaiseCommand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDashboardWidgetEntryPointPayload@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUhstring@6@@Z
    void SetDashboardWidgetEntryPointPayload(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBUFrameworkElement@Xaml@4Windows@6@@Z
    void ShowFlyout(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLegacyExtendedUI@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUTaskGroup@3456@@Z
    void ShowLegacyExtendedUI(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLegacyExtendedUIOnHover@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUTaskGroup@3456@@Z
    void ShowLegacyExtendedUIOnHover(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskItemPreview@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBUTaskItem@3456@@Z
    void ShowTaskItemPreview(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskItemThumbnailPreview@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUTaskItemThumbnail@3456@@Z
    void ShowTaskItemThumbnailPreview(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartButtonBounds@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z
    void StartButtonBounds(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAreAllWindowsMinimized@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void UpdateAreAllWindowsMinimized(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskbarModel();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualDesktopHelpString@TaskbarModel@implementation@Shell@UI@WindowsUdk@winrt@@AEAA?AUhstring@6@PEAUHMONITOR__@@@Z
    WindissectOpaque GetVirtualDesktopHelpString(HMONITOR__*);
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
