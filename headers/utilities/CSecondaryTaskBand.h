#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 63 member(s).
class CSecondaryTaskBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSecondaryTaskBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSize@CSecondaryTaskBand@@UEAAXH@Z
    virtual void CheckSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CSecondaryTaskBand@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSecondaryTaskBand@@SAJPEAUHWND__@@PEAUITaskListUI@@PEAUISecondaryTray@@PEAUITrayComponentHost@@PEAPEAV1@@Z
    static long CreateInstance(HWND__*, ITaskListUI *, ISecondaryTray *, ITrayComponentHost *, CSecondaryTaskBand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySecondaryTray@CSecondaryTaskBand@@UEAAXXZ
    virtual void DestroySecondaryTray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsInRawPixelsRelativeToDesktop@CSecondaryTaskBand@@UEAA?AUtagRECT@@XZ
    virtual tagRECT GetBoundsInRawPixelsRelativeToDesktop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiForWndSite@CSecondaryTaskBand@@UEAAIXZ
    virtual unsigned int GetDpiForWndSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CSecondaryTaskBand@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearl@CSecondaryTaskBand@@UEAAJPEAPEAVCPearl@@@Z
    virtual long GetPearl(CPearl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollInfo@CSecondaryTaskBand@@UEAAJHPEAUtagSCROLLINFO@@@Z
    virtual long GetScrollInfo(int, tagSCROLLINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CSecondaryTaskBand@@UEAAJPEAK@Z
    virtual long GetStuckPlace(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRect@CSecondaryTaskBand@@UEAAXPEAUtagRECT@@@Z
    virtual void GetStuckRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListUITheme@CSecondaryTaskBand@@UEAAJPEAPEBG@Z
    virtual long GetTaskListUITheme(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserPreferences@CSecondaryTaskBand@@UEAAJPEAK@Z
    virtual long GetUserPreferences(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSecondaryTaskBand@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayChange@CSecondaryTaskBand@@UEAAXXZ
    virtual void HandleDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGamingFullScreenChanged@CSecondaryTaskBand@@UEAAX_N@Z
    virtual void HandleGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHoverUIVisibilityChange@CSecondaryTaskBand@@UEAAX_N@Z
    virtual void HandleHoverUIVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveInvoke@CSecondaryTaskBand@@UEAAXXZ
    virtual void HandleImmersiveInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CSecondaryTaskBand@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewVisibilityChange@CSecondaryTaskBand@@UEAAX_N@Z
    virtual void HandleJumpViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleScroll@CSecondaryTaskBand@@UEAAJHIH@Z
    virtual long HandleScroll(int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CSecondaryTaskBand@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleShellModeChanged@CSecondaryTaskBand@@UEAAXXZ
    virtual void HandleShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CSecondaryTaskBand@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSecondaryTray@CSecondaryTaskBand@@UEAAXPEAUHMONITOR__@@@Z
    virtual void HideSecondaryTray(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestForSizeableBorder@CSecondaryTaskBand@@UEAAHHH@Z
    virtual int HitTestForSizeableBorder(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CSecondaryTaskBand@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitModelAndHost@CSecondaryTaskBand@@UEAAXUTaskbarModel@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void InitModelAndHost(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoHidden@CSecondaryTaskBand@@UEAAHXZ
    virtual int IsAutoHidden();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopVisibleOnTrayMonitor@CSecondaryTaskBand@@UEAA_NXZ
    virtual bool IsDesktopVisibleOnTrayMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullHeightOfTray@CSecondaryTaskBand@@UEAAHXZ
    virtual int IsFullHeightOfTray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontal@CSecondaryTaskBand@@UEAAHXZ
    virtual int IsHorizontal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSizeMove@CSecondaryTaskBand@@UEAAHXZ
    virtual int IsInSizeMove();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSecondaryTaskBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSecondaryTaskBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResendStuckPlace@CSecondaryTaskBand@@UEAAXXZ
    virtual void ResendStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@CSecondaryTaskBand@@UEAAXURect@Foundation@Windows@winrt@@@Z
    virtual void SetBounds(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CSecondaryTaskBand@@UEAAXPEAUHMONITOR__@@PEBG@Z
    virtual void SetMonitor(HMONITOR__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollInfo@CSecondaryTaskBand@@UEAAJHAEBUtagSCROLLINFO@@@Z
    virtual long SetScrollInfo(int, tagSCROLLINFO const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStuckPlace@CSecondaryTaskBand@@UEAAXK@Z
    virtual void SetStuckPlace(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CSecondaryTaskBand@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CSecondaryTaskBand@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhideTray@CSecondaryTaskBand@@UEAAJXZ
    virtual long UnhideTray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@CSecondaryTaskBand@@UEAAXXZ
    virtual void UpdateTheme();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondaryTaskBand@@AEAA@PEAUITaskListUI@@PEAUISecondaryTray@@PEAUITrayComponentHost@@@Z
    CSecondaryTaskBand(ITaskListUI *, ISecondaryTray *, ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSettings@CSecondaryTaskBand@@AEAAXXZ
    void _LoadSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshSettings@CSecondaryTaskBand@@AEAAXXZ
    void _RefreshSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CSecondaryTaskBand@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSecondaryTaskBand@@EEAA@XZ
    virtual ~CSecondaryTaskBand();
};
