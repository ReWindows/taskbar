#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 21 member(s).
class ShellIconLoaderV2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeLoadWindowIconOnlyV2@ShellIconLoaderV2@@QEAAJXZ
    long InitializeLoadWindowIconOnlyV2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeShellIconCacheIconOnlyV2@ShellIconLoaderV2@@QEAAJXZ
    long InitializeShellIconCacheIconOnlyV2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWindowAndShellIconV2@ShellIconLoaderV2@@QEAAJXZ
    long InitializeWindowAndShellIconV2();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellIconLoaderV2@@QEAA@PEAUITrayComponentHost@@PEAUIShellIconLoadData@@PEAUIIconLoaderNotifications2@@PEAUIIconLoadingFunctions@@@Z
    ShellIconLoaderV2(ITrayComponentHost *, IShellIconLoadData *, IIconLoaderNotifications2*, IIconLoadingFunctions *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellIconLoaderV2@@UEAA@XZ
    virtual ~ShellIconLoaderV2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTaskScheduler@ShellIconLoaderV2@@AEAAXXZ
    void EnsureTaskScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceImagePresentAsync@ShellIconLoaderV2@@AEAA?AUfire_and_forget@winrt@@HH@Z
    WindissectOpaque ForceImagePresentAsync(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsyncIcon@ShellIconLoaderV2@@AEAA?AUfire_and_forget@winrt@@H@Z
    WindissectOpaque LoadAsyncIcon(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadShellIconCacheIcon@ShellIconLoaderV2@@AEAA_NH@Z
    bool LoadShellIconCacheIcon(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSyncWindowIcon@ShellIconLoaderV2@@AEAA_NHPEAPEAUHICON__@@@Z
    bool LoadSyncWindowIcon(int, HICON__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadAsyncIcon@ShellIconLoaderV2@@AEAA_NH@Z
    bool TryLoadAsyncIcon(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadIconFromResourceIfNeeded@ShellIconLoaderV2@@AEAAXXZ
    void TryLoadIconFromResourceIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMembers@ShellIconLoaderV2@@AEAAXPEAUITrayComponentHost@@PEAUIShellIconLoadData@@PEAUIIconLoaderNotifications2@@PEAUIIconLoadingFunctions@@@Z
    void UpdateMembers(ITrayComponentHost *, IShellIconLoadData *, IIconLoaderNotifications2*, IIconLoadingFunctions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ForceImagePresent@ShellIconLoaderV2@@CAJHHPEAPEAUHICON__@@@Z
    static long s_ForceImagePresent(int, int, HICON__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetShellIconSize@ShellIconLoaderV2@@CAHH@Z
    static int s_GetShellIconSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetShellImageListSizeId@ShellIconLoaderV2@@CAHH@Z
    static int s_GetShellImageListSizeId(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadIconsFromResourceSync@ShellIconLoaderV2@@CAJPEBGGHPEAPEAUHICON__@@@Z
    static long s_LoadIconsFromResourceSync(unsigned short const *, unsigned short, int, HICON__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetIconCallback@ShellIconLoaderV2@@CAXPEAX0HH@Z
    static void s_SetIconCallback(void *, void *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShouldLoadBetterIcon@ShellIconLoaderV2@@CA_NAEBU_ICONINFOEXW@@H@Z
    static bool s_ShouldLoadBetterIcon(_ICONINFOEXW const &, int);
};
