#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 32 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class NotificationAreaIcon2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppFriendlyName@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque AppFriendlyName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppOwnsToolTips@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool AppOwnsToolTips();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bounds@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AURect@Foundation@Windows@6@XZ
    WindissectOpaque Bounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clicked@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_NAEBUPoint@Foundation@Windows@6@@Z
    void Clicked(bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickedAsync@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUfire_and_forget@6@UPoint@Foundation@Windows@6@@Z
    WindissectOpaque ClickedAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextRequested@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_NAEBUPoint@Foundation@Windows@6@@Z
    void ContextRequested(bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextRequestedAsync@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUfire_and_forget@6@UPoint@Foundation@Windows@6@@Z
    WindissectOpaque ContextRequestedAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoubleClicked@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_NAEBUPoint@Foundation@Windows@6@@Z
    void DoubleClicked(bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoubleClickedAsync@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUfire_and_forget@6@UPoint@Foundation@Windows@6@@Z
    WindissectOpaque DoubleClickedAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideBalloon@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void HideBalloon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Identity@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEBA?AUNotificationAreaIconIdentity@@XZ
    NotificationAreaIconIdentity Identity() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MiddleClicked@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBUPoint@Foundation@Windows@6@@Z
    void MiddleClicked(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MiddleClickedAsync@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUfire_and_forget@6@UPoint@Foundation@Windows@6@@Z
    WindissectOpaque MiddleClickedAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseInteracted@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBW4PointerUpdateKind@Input@4Windows@6@AEBUPoint@Foundation@96@@Z
    void MouseInteracted(int const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Promoted@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void Promoted(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXPEAUHICON__@@@Z
    void SetIcon(HICON__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTooltip@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXPEBG@Z
    void SetTooltip(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~NotificationAreaIcon2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIconIfNeeded@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAA?AUfire_and_forget@6@PEAU_TP_CALLBACK_INSTANCE@@@Z
    WindissectOpaque DeleteIconIfNeeded(_TP_CALLBACK_INSTANCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveMouseCursorIfNecessary@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAX_NAEBUPoint@Foundation@Windows@6@@Z
    void MoveMouseCursorIfNecessary(bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBalloonToastCompleted@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAA?AUfire_and_forget@6@W4BalloonToastResult@@@Z
    WindissectOpaque OnBalloonToastCompleted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRegistrySettingsChanged@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void OnRegistrySettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForColorThemeChanges@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void RegisterForColorThemeChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForSettingChanges@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void RegisterForSettingChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForThreadDestroyed@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void RegisterForThreadDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageToOwnerWindow@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXIAEBUPoint@Foundation@Windows@6@@Z
    void SendMessageToOwnerWindow(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterBalloonToastEvents@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void UnregisterBalloonToastEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadDestroyedCallback@NotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void s_ThreadDestroyedCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
