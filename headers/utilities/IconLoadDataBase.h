#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 20 member(s).
class IconLoadDataBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPI@IconLoadDataBase@@UEAAIXZ
    virtual unsigned int GetDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@IconLoadDataBase@@UEAAPEAUHICON__@@XZ
    virtual HICON__* GetIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLoadPass@IconLoadDataBase@@UEAA?AW4IconLoadPass@@XZ
    virtual int GetIconLoadPass();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconQuality@IconLoadDataBase@@UEAA?AW4IconQuality@@XZ
    virtual int GetIconQuality();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageId@IconLoadDataBase@@UEAAHXZ
    virtual int GetImageId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLoadingTestId@IconLoadDataBase@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLoadingTestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferenceId@IconLoadDataBase@@UEAAHXZ
    virtual int GetPreferenceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@IconLoadDataBase@@UEAAIXZ
    virtual unsigned int GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellImageListId@IconLoadDataBase@@UEAAHXZ
    virtual int GetShellImageListId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreId@IconLoadDataBase@@UEAAIXZ
    virtual unsigned int GetStoreId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTest@IconLoadDataBase@@UEAA?AV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@XZ
    virtual WindissectOpaque GetTest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@IconLoadDataBase@@UEAA?AW4IconType@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameRequest@IconLoadDataBase@@UEAA_NPEAUIIconLoadData@@W4RequestMatchType@@@Z
    virtual bool IsSameRequest(IIconLoadData *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallIconMode@IconLoadDataBase@@UEAA_NXZ
    virtual bool IsSmallIconMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@IconLoadDataBase@@UEAA_NXZ
    virtual bool IsValid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaults@IconLoadDataBase@@UEAAJIIIW4IconType@@W4IconSizeMode@@W4IconLoadPass@@HV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    virtual long SetDefaults(unsigned int, unsigned int, unsigned int, int, int, int, int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@IconLoadDataBase@@UEAAXPEAUHICON__@@HW4IconQuality@@H@Z
    virtual void SetIcon(HICON__*, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconQuality@IconLoadDataBase@@UEAAXW4IconQuality@@@Z
    virtual void SetIconQuality(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferenceId@IconLoadDataBase@@UEAAXH@Z
    virtual void SetPreferenceId(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IconLoadDataBase@@QEAA@XZ
    ~IconLoadDataBase();
};
