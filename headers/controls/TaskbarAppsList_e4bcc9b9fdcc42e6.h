#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 17 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskbarAppsList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveGroup@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskGroup@3456@XZ
    WindissectOpaque ActiveGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveItem@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskItem@3456@XZ
    WindissectOpaque ActiveItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllGroupsInNormalVisualState@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEBA_NXZ
    bool AreAllGroupsInNormalVisualState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedUICyclingRequested@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUevent_token@6@AEBU?$TypedEventHandler@UTaskbarAppsList@Shell@UI@WindowsUdk@winrt@@UExtendedUICyclingRequestedEventArgs@2345@@Foundation@Windows@6@@Z
    WindissectOpaque ExtendedUICyclingRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedUICyclingRequested@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUevent_token@6@@Z
    void ExtendedUICyclingRequested(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedUIHotTrackedItem@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskItem@3456@XZ
    WindissectOpaque ExtendedUIHotTrackedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Groups@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IVectorView@UTaskGroup@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@6@XZ
    WindissectOpaque Groups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemThumbnailPropertyChanged@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUevent_token@6@AEBU?$TypedEventHandler@UTaskbarAppsList@Shell@UI@WindowsUdk@winrt@@UTaskItemThumbnailPropertyChangedEventArgs@2345@@Foundation@Windows@6@@Z
    WindissectOpaque ItemThumbnailPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyExtendedUICyclingRequested@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXPEAUITaskGroup@@_N1@Z
    void NotifyExtendedUICyclingRequested(ITaskGroup *, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconConfiguration@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBUTaskbarIconConfiguration@3456@@Z
    void SetIconConfiguration(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITaskListWndSite@@PEAUITaskListUI@@PEAUIWICImagingFactory@@PEAUITaskListManager@@@Z
    TaskbarAppsList(ITaskListWndSite *, ITaskListUI *, IWICImagingFactory *, ITaskListManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreatePinnableObjectFromDataPackage@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskbarPinnableObject@3456@UDataPackage@DataTransfer@ApplicationModel@Windows@6@@Z
    WindissectOpaque TryCreatePinnableObjectFromDataPackage(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreatePinnableObjectFromDataPackageView@TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskbarPinnableObject@3456@UDataPackageView@DataTransfer@ApplicationModel@Windows@6@@Z
    WindissectOpaque TryCreatePinnableObjectFromDataPackageView(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarAppsList@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskbarAppsList();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
