#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 45 member(s).
class PlaceholderIconLoadData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppId@PlaceholderIconLoadData@@UEAAPEBGXZ
    virtual unsigned short const * GetAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPI@PlaceholderIconLoadData@@UEAAIXZ
    virtual unsigned int GetDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@PlaceholderIconLoadData@@UEAAPEAUHICON__@@XZ
    virtual HICON__* GetIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLoadPass@PlaceholderIconLoadData@@UEAA?AW4IconLoadPass@@XZ
    virtual int GetIconLoadPass();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconQuality@PlaceholderIconLoadData@@UEAA?AW4IconQuality@@XZ
    virtual int GetIconQuality();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageId@PlaceholderIconLoadData@@UEAAHXZ
    virtual int GetImageId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLoadingTestId@PlaceholderIconLoadData@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLoadingTestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTaskbarDPI@PlaceholderIconLoadData@@UEAAIXZ
    virtual unsigned int GetMaxTaskbarDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferenceId@PlaceholderIconLoadData@@UEAAHXZ
    virtual int GetPreferenceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@PlaceholderIconLoadData@@UEAAIXZ
    virtual unsigned int GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellImageListId@PlaceholderIconLoadData@@UEAAHXZ
    virtual int GetShellImageListId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreId@PlaceholderIconLoadData@@UEAAIXZ
    virtual unsigned int GetStoreId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTest@PlaceholderIconLoadData@@UEAA?AV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@XZ
    virtual WindissectOpaque GetTest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@PlaceholderIconLoadData@@UEAA?AW4IconType@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameRequest@PlaceholderIconLoadData@@UEAA_NPEAUIIconLoadData@@W4RequestMatchType@@@Z
    virtual bool IsSameRequest(IIconLoadData *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallIconMode@PlaceholderIconLoadData@@UEAA_NXZ
    virtual bool IsSmallIconMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@PlaceholderIconLoadData@@UEAA_NXZ
    virtual bool IsValid();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PlaceholderIconLoadData@@QEAA@XZ
    PlaceholderIconLoadData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PlaceholderIconLoadData@@QEAAJPEBGI@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaults@PlaceholderIconLoadData@@UEAAJIIIW4IconType@@W4IconSizeMode@@W4IconLoadPass@@HV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    virtual long SetDefaults(unsigned int, unsigned int, unsigned int, int, int, int, int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@PlaceholderIconLoadData@@UEAAXPEAUHICON__@@HW4IconQuality@@H@Z
    virtual void SetIcon(HICON__*, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconQuality@PlaceholderIconLoadData@@UEAAXW4IconQuality@@@Z
    virtual void SetIconQuality(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferenceId@PlaceholderIconLoadData@@UEAAXH@Z
    virtual void SetPreferenceId(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceholderIconLoadData@@UEAA@XZ
    virtual ~PlaceholderIconLoadData();
};
