#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 40 member(s).
class IconContainer {
public:
    class DPIData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DPIChanged@IconContainer@@UEAAJAEBV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@W4IconContainerFlags@@PEA_N@Z
    virtual long DPIChanged(WindissectOpaque const &, int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxDPI@IconContainer@@UEAAIXZ
    virtual unsigned int GetMaxDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReadOnlyImageList@IconContainer@@UEAAJPEAPEAU_IMAGELIST@@@Z
    virtual long GetReadOnlyImageList(_IMAGELIST * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReadOnlyImageListForDPI@IconContainer@@UEAAJIPEAPEAU_IMAGELIST@@@Z
    virtual long GetReadOnlyImageListForDPI(unsigned int, _IMAGELIST * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IconContainer@@QEAA@XZ
    IconContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconLoaded@IconContainer@@UEAAXPEAUIIconLoadData@@@Z
    virtual void IconLoaded(IIconLoadData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStorageRecreationRequired@IconContainer@@UEAA_NAEBV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@W4IconContainerFlags@@@Z
    virtual bool IsStorageRecreationRequired(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrackedShellImage@IconContainer@@UEAA_NHH@Z
    virtual bool IsTrackedShellImage(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPlaceholderIconHelper@IconContainer@@UEAAJHPEBGUTile@StartScreen@UI@WindowsUdk@winrt@@@Z
    virtual long LoadPlaceholderIconHelper(int, unsigned short const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveImage@IconContainer@@UEAAXH@Z
    virtual void RemoveImage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@IconContainer@@QEAAJPEAUITrayComponentHost@@PEAUIIconContainerNotifications@@@Z
    long RuntimeClassInitialize(ITrayComponentHost *, IIconContainerNotifications *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@IconContainer@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadPinnedWebsiteIcon@IconContainer@@UEAAJHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long TryLoadPinnedWebsiteIcon(int, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadWin32Icon@IconContainer@@UEAAJHPEBG0PEBU_ITEMIDLIST_ABSOLUTE@@PEAUHWND__@@2PEAUITaskGroup@@@Z
    virtual long TryLoadWin32Icon(int, unsigned short const *, unsigned short const *, _ITEMIDLIST_ABSOLUTE const *, HWND__*, HWND__*, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadWinRTIcon@IconContainer@@UEAAJHPEBGPEAUIImmersiveApplication@@@Z
    virtual long TryLoadWinRTIcon(int, unsigned short const *, IImmersiveApplication *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IconContainer@@UEAA@XZ
    virtual ~IconContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewShellIconLoadData@IconContainer@@AEAAJIW4IconLoadPass@@HPEBG1PEBU_ITEMIDLIST_ABSOLUTE@@PEAUHWND__@@3PEAXV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@PEAPEAUIShellIconLoadData@@@Z
    long CreateNewShellIconLoadData(unsigned int, int, int, unsigned short const *, unsigned short const *, _ITEMIDLIST_ABSOLUTE const *, HWND__*, HWND__*, void *, WindissectOpaque, IShellIconLoadData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardImageId@IconContainer@@AEAAXH@Z
    void DiscardImageId(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPIIndex@IconContainer@@AEAAJIPEA_K@Z
    long GetDPIIndex(unsigned int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconLoaded@IconContainer@@AEAAXPEAUIShellIconLoadData@@@Z
    void IconLoaded(IShellIconLoadData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconLoaded@IconContainer@@AEAAXPEAUIWinRTIconLoadData@@@Z
    void IconLoaded(IWinRTIconLoadData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconLoaded@IconContainer@@AEAAXPEAUIPinnedWebsiteIconLoadData@@@Z
    void IconLoaded(IPinnedWebsiteIconLoadData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconLoaded@IconContainer@@AEAAXPEAUIPlaceholderIconLoadData@@@Z
    void IconLoaded(IPlaceholderIconLoadData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingCurrentRequestPresent@IconContainer@@AEAA_NPEAUIIconLoadData@@W4IconType@@W4RequestMatchType@@PEA_K@Z
    bool IsMatchingCurrentRequestPresent(IIconLoadData *, int, int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImmersiveIcon@IconContainer@@AEAAJIW4IconLoadPass@@HPEBGPEAUIImmersiveApplication@@@Z
    long LoadImmersiveIcon(unsigned int, int, int, unsigned short const *, IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPinnedWebsiteIcon@IconContainer@@AEAAJIW4IconLoadPass@@HPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long LoadPinnedWebsiteIcon(unsigned int, int, int, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPlaceholderIcon@IconContainer@@AEAAJIW4IconLoadPass@@HPEBGUTile@StartScreen@UI@WindowsUdk@winrt@@@Z
    long LoadPlaceholderIcon(unsigned int, int, int, unsigned short const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadShellAndWindowIconSecondary@IconContainer@@AEAAJPEAUIShellIconLoadData@@I@Z
    long LoadShellAndWindowIconSecondary(IShellIconLoadData *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSecondaryIconLoaded@IconContainer@@AEAAJPEAUIIconLoadData@@@Z
    long OnSecondaryIconLoaded(IIconLoadData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateUniqueSortedList@IconContainer@@AEAAJAEBV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@PEAV2@@Z
    long PopulateUniqueSortedList(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateStorage@IconContainer@@AEAAJAEBV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@W4IconContainerFlags@@@Z
    long RecreateStorage(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMatchingPendingRequest@IconContainer@@AEAAXPEAUIIconLoadData@@W4IconType@@@Z
    void RemoveMatchingPendingRequest(IIconLoadData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePendingSecondaryPassRequests@IconContainer@@AEAAXH@Z
    void RemovePendingSecondaryPassRequests(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@IconContainer@@AEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldProcessIconLoadData@IconContainer@@AEAA_NPEAUIIconLoadData@@@Z
    bool ShouldProcessIconLoadData(IIconLoadData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreDefaultIconInImageList@IconContainer@@AEAAJ_KPEAH@Z
    long StoreDefaultIconInImageList(uint64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreIconInImageList@IconContainer@@AEAAJPEAUIImageList@@PEAUIIconLoadData@@@Z
    long StoreIconInImageList(IImageList *, IIconLoadData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTrackedImageEntryFromIconLoadData@IconContainer@@AEAAXPEAUTrackedImage@@PEAUIIconLoadData@@@Z
    void UpdateTrackedImageEntryFromIconLoadData(TrackedImage *, IIconLoadData *);
};
