#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 66 member(s).
class CTaskGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskGroup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTaskItem@CTaskGroup@@UEAAJPEAUITaskItem@@0@Z
    virtual long AddTaskItem(ITaskItem *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesWindowMatch@CTaskGroup@@UEAAJPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEAW4WINDOWMATCHCONFIDENCE@@PEAPEAUITaskItem@@@Z
    virtual long DoesWindowMatch(HWND__*, _ITEMIDLIST_ABSOLUTE const *, unsigned short const *, int *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumTaskItems@CTaskGroup@@UEAAJPEAPEAUIEnumTaskItems@@@Z
    virtual long EnumTaskItems(IEnumTaskItems * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccName@CTaskGroup@@UEAAJPEAUITaskItem@@IIPEAPEAG@Z
    virtual long GetAccName(ITaskItem *, unsigned int, unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppID@CTaskGroup@@UEAAPEBGXZ
    virtual unsigned short const * GetAppID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationIDList@CTaskGroup@@UEAAPEAU_ITEMIDLIST_ABSOLUTE@@XZ
    virtual _ITEMIDLIST_ABSOLUTE * GetApplicationIDList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadge@CTaskGroup@@UEAA?AUBadge@StartScreen@UI@WindowsUdk@winrt@@XZ
    virtual WindissectOpaque GetBadge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeData@CTaskGroup@@UEAAJPEAPEAUIBadgeData@@@Z
    virtual long GetBadgeData(IBadgeData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeDescription@CTaskGroup@@UEAAPEBGXZ
    virtual unsigned short const * GetBadgeDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCensoredAppId@CTaskGroup@@UEAAPEBGXZ
    virtual unsigned short const * GetCensoredAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExeName@CTaskGroup@@UEAAPEBGXZ
    virtual unsigned short const * GetExeName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CTaskGroup@@UEBAKXZ
    virtual unsigned long GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconId@CTaskGroup@@UEAAJPEAUITaskItem@@PEAH@Z
    virtual long GetIconId(ITaskItem *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconResource@CTaskGroup@@UEAAPEBGXZ
    virtual unsigned short const * GetIconResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFromWindow@CTaskGroup@@UEAAJPEAUHWND__@@PEAPEAUITaskItem@@@Z
    virtual long GetItemFromWindow(HWND__*, ITaskItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastActiveItem@CTaskGroup@@UEAAJPEAPEAUITaskItem@@@Z
    virtual long GetLastActiveItem(ITaskItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherName@CTaskGroup@@UEAAJPEAPEAG@Z
    virtual long GetLauncherName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@CTaskGroup@@UEAAHXZ
    virtual int GetNumItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumTabs@CTaskGroup@@UEAAJPEAH0@Z
    virtual long GetNumTabs(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIcon@CTaskGroup@@UEAAPEAUHICON__@@XZ
    virtual HICON__* GetOverlayIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconDescription@CTaskGroup@@UEAAPEBGXZ
    virtual unsigned short const * GetOverlayIconDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutIDList@CTaskGroup@@UEAAPEBU_ITEMIDLIST_ABSOLUTE@@XZ
    virtual _ITEMIDLIST_ABSOLUTE const * GetShortcutIDList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTile@CTaskGroup@@UEAA?AUTile@StartScreen@UI@WindowsUdk@winrt@@XZ
    virtual WindissectOpaque GetTile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileNotificationId@CTaskGroup@@UEAAPEBGXZ
    virtual unsigned short const * GetTileNotificationId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleText@CTaskGroup@@UEAAJPEAUITaskItem@@PEAGH@Z
    virtual long GetTitleText(ITaskItem *, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipText@CTaskGroup@@UEAAJPEAUITaskItem@@PEAGH@Z
    virtual long GetToolTipText(ITaskItem *, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualOrder@CTaskGroup@@UEAAHXZ
    virtual int GetVisualOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupMenuCommand@CTaskGroup@@UEAAJPEAUITaskItemFilter@@H@Z
    virtual long GroupMenuCommand(ITaskItemFilter *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasItemsOnCurrentDesktop@CTaskGroup@@UEAA_NXZ
    virtual bool HasItemsOnCurrentDesktop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTaskGroup@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBG1@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppLaunchable@CTaskGroup@@UEAAHXZ
    virtual int IsAppLaunchable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppPinnable@CTaskGroup@@UEAAHXZ
    virtual int IsAppPinnable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveGroup@CTaskGroup@@UEAA_NXZ
    virtual bool IsImmersiveGroup();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskGroup@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTabs@CTaskGroup@@UEAAJPEAUITaskItem@@HP6AX_KPEAUHWND__@@@Z1@Z
    virtual long RemoveTabs(ITaskItem *, int, void ( *)(uint64_t, HWND__*), uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskItem@CTaskGroup@@UEAAJPEAUITaskItem@@@Z
    virtual long RemoveTaskItem(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppID@CTaskGroup@@UEAAJPEBG@Z
    virtual long SetAppID(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBadge@CTaskGroup@@UEAAXAEBUBadge@StartScreen@UI@WindowsUdk@winrt@@@Z
    virtual void SetBadge(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBadgeData@CTaskGroup@@UEAAXPEAUIBadgeData@@@Z
    virtual void SetBadgeData(IBadgeData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBadgeDescription@CTaskGroup@@UEAAJPEBG@Z
    virtual long SetBadgeDescription(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExeName@CTaskGroup@@UEAAJPEBG@Z
    virtual long SetExeName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconId@CTaskGroup@@UEAAJPEAUITaskItem@@H@Z
    virtual long SetIconId(ITaskItem *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinnableAndLaunchable@CTaskGroup@@UEAAJH@Z
    virtual long SetPinnableAndLaunchable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShortcutIDList@CTaskGroup@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetShortcutIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTile@CTaskGroup@@UEAAXAEBUTile@StartScreen@UI@WindowsUdk@winrt@@@Z
    virtual void SetTile(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTip@CTaskGroup@@UEAAJPEBG@Z
    virtual long SetTip(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualOrder@CTaskGroup@@UEAAXH@Z
    virtual void SetVisualOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldLog@CTaskGroup@@UEAAHXZ
    virtual int ShouldLog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SoftwareBitmapIcon@CTaskGroup@@UEAA?AUSoftwareBitmap@Imaging@Graphics@Windows@winrt@@I@Z
    virtual WindissectOpaque SoftwareBitmapIcon(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileUpdated@CTaskGroup@@UEAA?AUevent_token@winrt@@AEBU?$delegate@$$V@3@@Z
    virtual WindissectOpaque TileUpdated(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlags@CTaskGroup@@UEAAJKK@Z
    virtual long UpdateFlags(unsigned long, unsigned long);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskGroup@@AEAA@PEAUIMockableApi@@@Z
    CTaskGroup(IMockableApi *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndSetTileNotificationId@CTaskGroup@@AEAAJPEBG@Z
    long _CreateAndSetTileNotificationId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateShortcutFromAppID@CTaskGroup@@AEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GenerateShortcutFromAppID(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateShortcutFromFirstWindow@CTaskGroup@@AEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GenerateShortcutFromFirstWindow(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemForOverlay@CTaskGroup@@AEAAPEAUITaskItem@@XZ
    ITaskItem * _GetItemForOverlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateUseExecutableGroupIcon@CTaskGroup@@AEAAXXZ
    void _UpdateUseExecutableGroupIcon();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskGroup@@EEAA@XZ
    virtual ~CTaskGroup();
};
