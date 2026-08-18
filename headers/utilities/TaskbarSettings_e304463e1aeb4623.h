#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 35 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskbarSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alignment@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarAlignment@3456@XZ
    int Alignment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alignment@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBW4TaskbarAlignment@3456@@Z
    void Alignment(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayMode@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarDisplayMode@3456@XZ
    int DisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EffectiveSearchMode@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBW4TaskbarSearchMode@3456@@Z
    void EffectiveSearchMode(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupingMode@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarItemGroupingMode@3456@XZ
    int GroupingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconSizePreference@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarItemIconSizePreference@3456@XZ
    int IconSizePreference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchBoxSettingEnabled@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void IsSearchBoxSettingEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Location@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarLocation@3456@XZ
    int Location();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Location@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBW4TaskbarLocation@3456@@Z
    void Location(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekToPreviewDesktop@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void PeekToPreviewDesktop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekToPreviewDesktop@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool PeekToPreviewDesktop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchMode@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarSearchMode@3456@XZ
    int SearchMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchMode@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXAEBW4TaskbarSearchMode@3456@@Z
    void SearchMode(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenus@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowContextMenus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCrossDeviceResume@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowCrossDeviceResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDashboard@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowDashboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDashboard@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void ShowDashboard(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowExpandableTaskbar@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEBA_NXZ
    bool ShowExpandableTaskbar() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlashing@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowFlashing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowMeetNow@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void ShowMeetNow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowMiniSearch@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowMiniSearch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRecommendations@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowRecommendations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShareAnyWindow@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowShareAnyWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShareAnyWindow@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void ShowShareAnyWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShareAnyWindowForProviderKind@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NW4ShareWindowCommandProviderKind@3456@@Z
    bool ShowShareAnyWindowForProviderKind(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShowDesktop@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowShowDesktop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShowDesktop@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void ShowShowDesktop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskView@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NXZ
    bool ShowTaskView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskView@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAAX_N@Z
    void ShowTaskView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarSize@3456@XZ
    int Size();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITrayComponentHost@@PEAUITaskListWndSite@@@Z
    TaskbarSettings(ITrayComponentHost *, ITaskListWndSite *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarSettings@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskbarSettings();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
