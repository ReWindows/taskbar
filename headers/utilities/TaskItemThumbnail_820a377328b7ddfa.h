#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 20 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskItemThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessibleName@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque AccessibleName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateThumbnailVisual@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUTaskItemThumbnailVisual@3456@UCompositor@Composition@4Windows@6@USize@Foundation@Windows@6@@Z
    WindissectOpaque CreateThumbnailVisual(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icons@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IVectorView@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Collections@Foundation@Windows@6@XZ
    WindissectOpaque Icons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MenuItems@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@6@XZ
    WindissectOpaque MenuItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportClicked@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void ReportClicked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportContextRequested@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void ReportContextRequested();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUTaskItem@2345@PEAUITaskGroup@@PEAUITaskItem@@PEAUITaskListUI@@PEAUIWICImagingFactory@@_N@Z
    TaskItemThumbnail(WindissectOpaque const &, ITaskGroup *, ITaskItem *, ITaskListUI *, IWICImagingFactory *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITaskGroupTaskItem@@PEAUITaskGroup@@PEAUITaskListUI@@PEAUIWICImagingFactory@@@Z
    TaskItemThumbnail(ITaskGroupTaskItem *, ITaskGroup *, ITaskListUI *, IWICImagingFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarButtons@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AU?$IVectorView@UThumbBarButton@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@6@XZ
    WindissectOpaque ThumbBarButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbnailVisual@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUVisual@Composition@4Windows@6@XZ
    WindissectOpaque ThumbnailVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailFactory@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXXZ
    void UpdateThumbnailFactory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskItemThumbnail();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowIcon@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXPEAUHWND__@@_JHV?$tip_test@V?$merged_data@U_tip_ExtendedUIIconLoadingTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    void GetWindowIcon(HWND__*, int64_t, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconLoadComplete@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXPEAUHICON__@@H_JV?$tip_test@V?$merged_data@U_tip_ExtendedUIIconLoadingTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    void IconLoadComplete(HICON__*, int, int64_t, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadIcons@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ
    void LoadIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IconAsyncProc@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@CAXPEAUHWND__@@I_K_J@Z
    static void s_IconAsyncProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadImmersiveIcon@TaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@CA?AUfire_and_forget@6@U?$weak_ref@UTaskItemThumbnail@implementation@Shell@UI@WindowsUdk@winrt@@@6@PEAUIImmersiveApplication@@IKUDispatcherQueue@System@Windows@6@V?$tip_test@V?$merged_data@U_tip_ExtendedUIIconLoadingTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    static WindissectOpaque s_LoadImmersiveIcon(WindissectOpaque, IImmersiveApplication *, unsigned int, unsigned long, WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
