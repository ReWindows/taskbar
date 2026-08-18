#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 1 member(s).
namespace winrt::WindowsUdk::UI::Shell {
class implementation {
public:
    class DashboardWidgetEntryPointPayloadChangedEventArgs;
    class ExtendedUICyclingRequestedEventArgs;
    class InstallProgress;
    class NotificationAreaIcon2;
    class NotificationAreaIconCollectionChangedEventArgs;
    class ShareWindowCommandProvider;
    class TaskGroup;
    class TaskGroupCollectionChangedEventArgs;
    class TaskGroupMovedEventArgs;
    class TaskGroupPropertyChangedEventArgs;
    class TaskItem;
    class TaskItemAnimationRequestedEventArgs;
    class TaskItemCollectionChangedEventArgs;
    class TaskItemPropertyChangedEventArgs;
    class TaskItemThumbnail;
    class TaskItemThumbnailPropertyChangedEventArgs;
    class TaskItemThumbnailVisual;
    class TaskbarAppsList;
    class TaskbarCommandInvokedEventArgs;
    class TaskbarFlyout;
    class TaskbarModel;
    class TaskbarNotificationAreaLayout;
    class TaskbarPinnableObject;
    class TaskbarSettings;
    class ThumbBarButton;
    class ThumbnailIconData;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTipIconState@implementation@Shell@UI@WindowsUdk@winrt@@YAX_JV?$tip_test@V?$merged_data@U_tip_ExtendedUIIconLoadingTest@TaskbarTip@@U12@@details@tip2@@@tip2@@W4IconState@TaskbarTip@@@Z
    void SetTipIconState(int64_t, WindissectOpaque, int);
};
} // namespace winrt::WindowsUdk::UI::Shell
