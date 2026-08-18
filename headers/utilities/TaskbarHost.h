#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 36 member(s).
class TaskbarHost {
public:
    class APIAdaptations;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOverflowFlyout@TaskbarHost@@QEAAXXZ
    void ActivateOverflowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameDepth@TaskbarHost@@QEAAHXZ
    int FrameDepth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameHeight@TaskbarHost@@QEBAHXZ
    int FrameHeight() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommand@TaskbarHost@@QEAA_NW4TaskbarCommand@Shell@UI@WindowsUdk@winrt@@@Z
    bool HandleCommand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocus@TaskbarHost@@QEAA_NXZ
    bool HasFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconSizeInViewPixels@TaskbarHost@@QEBA?AUtagSIZE@@XZ
    tagSIZE IconSizeInViewPixels() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCapableOfTabletPosture@TaskbarHost@@QEBA_NXZ
    bool IsCapableOfTabletPosture() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutShowing@TaskbarHost@@QEBA_NXZ
    bool IsOverflowFlyoutShowing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoHide@TaskbarHost@@QEAAXI@Z
    void SetAutoHide(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnSystemTrayFromDesktop@TaskbarHost@@QEAAXXZ
    void SetFocusOnSystemTrayFromDesktop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnTaskbar@TaskbarHost@@QEAAXXZ
    void SetFocusOnTaskbar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemTraySize@TaskbarHost@@QEAAXH@Z
    void SetSystemTraySize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@TaskbarHost@@QEAAXW4COLORTHEME@@@Z
    void SetTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseExpandableTaskbarBounds@TaskbarHost@@QEBA_NXZ
    bool ShouldUseExpandableTaskbarBounds() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@TaskbarHost@@QEAAXXZ
    void Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start_System@TaskbarHost@@QEAAXXZ
    void Start_System();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarHost@@QEAA@PEAUITrayComponentHost@@UTaskbarModel@Shell@UI@WindowsUdk@winrt@@AEBUTaskbarControllerExtension@3456@PEAUHMONITOR__@@PEAUHWND__@@_NW4COLORTHEME@@PEAVCSecondaryTray@@@Z
    TaskbarHost(ITrayComponentHost *, WindissectOpaque, WindissectOpaque const &, HMONITOR__*, HWND__*, bool, int, CSecondaryTray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMonitorHandle@TaskbarHost@@QEAAXPEAUHMONITOR__@@@Z
    void UpdateMonitorHandle(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePosition@TaskbarHost@@QEAAXI@Z
    void UpdatePosition(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarHost@@QEAA@XZ
    ~TaskbarHost();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusWithCommand@TaskbarHost@@IEAA_NW4TaskbarCommand@Shell@UI@WindowsUdk@winrt@@_N@Z
    bool SetFocusWithCommand(int, bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledValueWithHighPrecisionRounding@TaskbarHost@@AEAAHMI@Z
    int GetScaledValueWithHighPrecisionRounding(float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExpansionProgressChanged@TaskbarHost@@AEAAX_N@Z
    void HandleExpansionProgressChanged(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontalOrientation@TaskbarHost@@AEAA_NXZ
    bool IsHorizontalOrientation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowCloaked@TaskbarHost@@CA_NPEAUHWND__@@@Z
    static bool IsWindowCloaked(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsExpandedChanged@TaskbarHost@@AEAAXXZ
    void OnIsExpandedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterLightDismiss@TaskbarHost@@AEAAXXZ
    void RegisterLightDismiss();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpandProgress@TaskbarHost@@AEAAXXZ
    void SetExpandProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToTaskbarLayoutManager@TaskbarHost@@AEAAXXZ
    void SubscribeToTaskbarLayoutManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCompleteTaskbarInitTest@TaskbarHost@@CAXXZ
    static void TryCompleteTaskbarInitTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCompleteTaskbarInitTest2@TaskbarHost@@AEAAXXZ
    void TryCompleteTaskbarInitTest2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadTaskbarFrameFromController@TaskbarHost@@AEAA_NXZ
    bool TryLoadTaskbarFrameFromController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadTaskbarFrameFromXamlExtension@TaskbarHost@@AEAA_NXZ
    bool TryLoadTaskbarFrameFromXamlExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateVerticalAlignmentAndGridHeight@TaskbarHost@@AEAA_NXZ
    bool TryUpdateVerticalAlignmentAndGridHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterLightDismiss@TaskbarHost@@AEAAXXZ
    void UnregisterLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeEvents@TaskbarHost@@AEAAXXZ
    void UnsubscribeEvents();
};
