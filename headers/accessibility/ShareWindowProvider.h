#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 18 member(s).
namespace Taskbar::ExtendedUI::Data {
class ShareWindowProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowShareUI@ShareWindowProvider@Data@ExtendedUI@Taskbar@@QEAA_NXZ
    bool CanShowShareUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandForWindow@ShareWindowProvider@Data@ExtendedUI@Taskbar@@QEAA?AW4ShareWindowCommand@Shell@UI@Windows@winrt@@PEAUHWND__@@@Z
    int GetCommandForWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommandForWindow@ShareWindowProvider@Data@ExtendedUI@Taskbar@@QEAAXPEAUHWND__@@@Z
    void InvokeCommandForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowSharing@ShareWindowProvider@Data@ExtendedUI@Taskbar@@QEAA_NPEAUHWND__@@@Z
    bool IsWindowSharing(HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowProvider@Data@ExtendedUI@Taskbar@@QEAA@XZ
    ShareWindowProvider();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowProvider@Data@ExtendedUI@Taskbar@@QEAA@W4ShareWindowCommandProviderKind@ShareWindow@Shell@Internal@Windows@winrt@@UPrivate@0123@@Z
    ShareWindowProvider(int, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowProvider@Data@ExtendedUI@Taskbar@@QEAA@XZ
    ~ShareWindowProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFullImageNameForConnectingHwnd@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXXZ
    void EnsureFullImageNameForConnectingHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnythingCurrentlySharing@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEBA_NXZ
    bool IsAnythingCurrentlySharing() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReportCommandChanged@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXAEBUShareWindowCommandTarget@ShareWindow@Shell@Internal@Windows@winrt@@AEBUIInspectable@Foundation@9winrt@@@Z
    void OnReportCommandChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReportCommandChangedV2@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXAEBUShareWindowCommandTargetV2@ShareWindow@Shell@Internal@Windows@winrt@@AEBUReportCommandChangedEventArgs@6789winrt@@@Z
    void OnReportCommandChangedV2(WindissectOpaque &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceAvailabilityChanged@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXAEBUShareWindowCommandTarget@ShareWindow@Shell@Internal@Windows@winrt@@AEBUSourceAvailabilityChangedEventArgs@6789winrt@@@Z
    void OnSourceAvailabilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceAvailabilityChangedV2@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXAEBUShareWindowCommandTargetV2@ShareWindow@Shell@Internal@Windows@winrt@@AEBUSourceAvailabilityChangedEventArgsV2@6789winrt@@@Z
    void OnSourceAvailabilityChangedV2(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSharedWindowChangedEvent@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque RaiseSharedWindowChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSharingStatusToShareWindowCommand@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAX_N@Z
    void ReportSharingStatusToShareWindowCommand(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceWindowIcon@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXXZ
    void SetSourceWindowIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceWindowName@ShareWindowProvider@Data@ExtendedUI@Taskbar@@AEAAXXZ
    void SetSourceWindowName();
};
} // namespace Taskbar::ExtendedUI::Data
