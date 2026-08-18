#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 19 member(s).
class NotificationAreaIconManager2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveIcon@NotificationAreaIconManager2@@QEAAXUNotificationAreaIcon@Shell@UI@WindowsUdk@winrt@@W4NotificationAreaIconLocation@3456@I@Z
    void MoveIcon(WindissectOpaque, int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationAreaIconManager2@@QEAA@PEBG@Z
    NotificationAreaIconManager2(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellNotifyIcon@NotificationAreaIconManager2@@QEAA_NQEAU_TRAYNOTIFYDATAW@@@Z
    bool ShellNotifyIcon(_TRAYNOTIFYDATAW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellNotifyIconGetRect@NotificationAreaIconManager2@@QEAA_JQEAU_TRAYNOTIFYINFO@@@Z
    int64_t ShellNotifyIconGetRect(_TRAYNOTIFYINFO * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisibleOverflowIcons@NotificationAreaIconManager2@@QEAA?AU?$IObservableVector@UNotificationAreaIcon@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque VisibleOverflowIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisiblePromotedIcons@NotificationAreaIconManager2@@QEAA?AU?$IObservableVector@UNotificationAreaIcon@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque VisiblePromotedIcons();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationAreaIconManager2@@QEAA@XZ
    ~NotificationAreaIconManager2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIcon@NotificationAreaIconManager2@@AEAAXQEAU_TRAYNOTIFYDATAW@@@Z
    void AddIcon(_TRAYNOTIFYDATAW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIconToVisibleCollection@NotificationAreaIconManager2@@AEAAXPEAUNotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@@Z
    void AddIconToVisibleCollection(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIcon@NotificationAreaIconManager2@@AEAAXAEBUNotificationAreaIconIdentity@@@Z
    void DeleteIcon(NotificationAreaIconIdentity const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAttemptedGuidHijack@NotificationAreaIconManager2@@AEAA_NQEAU_TRAYNOTIFYDATAW@@@Z
    bool IsAttemptedGuidHijack(_TRAYNOTIFYDATAW * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIconCurrentlyVisible@NotificationAreaIconManager2@@AEAA_NPEAUNotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@@Z
    bool IsIconCurrentlyVisible(WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestValid@NotificationAreaIconManager2@@AEAA_NQEAU_TRAYNOTIFYDATAW@@@Z
    bool IsRequestValid(_TRAYNOTIFYDATAW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyIcon@NotificationAreaIconManager2@@AEAAXQEAU_TRAYNOTIFYDATAW@@_N@Z
    void ModifyIcon(_TRAYNOTIFYDATAW * const, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconPromotionChanged@NotificationAreaIconManager2@@AEAAXAEBUNotificationAreaIconIdentity@@@Z
    void OnIconPromotionChanged(NotificationAreaIconIdentity const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealityCheck@NotificationAreaIconManager2@@AEAAXXZ
    void RealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveIconFromVisibleCollection@NotificationAreaIconManager2@@AEAAXPEAUNotificationAreaIcon2@implementation@Shell@UI@WindowsUdk@winrt@@@Z
    void RemoveIconFromVisibleCollection(WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@NotificationAreaIconManager2@@AEAAXQEAU_TRAYNOTIFYDATAW@@@Z
    void SetFocus(_TRAYNOTIFYDATAW * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVersion@NotificationAreaIconManager2@@AEAAXQEAU_TRAYNOTIFYDATAW@@@Z
    void SetVersion(_TRAYNOTIFYDATAW * const);
};
