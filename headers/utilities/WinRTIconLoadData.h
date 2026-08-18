#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 46 member(s).
class WinRTIconLoadData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppId@WinRTIconLoadData@@UEAAPEBGXZ
    virtual unsigned short const * GetAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPI@WinRTIconLoadData@@UEAAIXZ
    virtual unsigned int GetDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@WinRTIconLoadData@@UEAAPEAUHICON__@@XZ
    virtual HICON__* GetIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLoadPass@WinRTIconLoadData@@UEAA?AW4IconLoadPass@@XZ
    virtual int GetIconLoadPass();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconQuality@WinRTIconLoadData@@UEAA?AW4IconQuality@@XZ
    virtual int GetIconQuality();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageId@WinRTIconLoadData@@UEAAHXZ
    virtual int GetImageId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveApp@WinRTIconLoadData@@UEAAPEAUIImmersiveApplication@@XZ
    virtual IImmersiveApplication * GetImmersiveApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLoadingTestId@WinRTIconLoadData@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLoadingTestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTaskbarDPI@WinRTIconLoadData@@UEAAIXZ
    virtual unsigned int GetMaxTaskbarDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferenceId@WinRTIconLoadData@@UEAAHXZ
    virtual int GetPreferenceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@WinRTIconLoadData@@UEAAIXZ
    virtual unsigned int GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellImageListId@WinRTIconLoadData@@UEAAHXZ
    virtual int GetShellImageListId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreId@WinRTIconLoadData@@UEAAIXZ
    virtual unsigned int GetStoreId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTest@WinRTIconLoadData@@UEAA?AV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@XZ
    virtual WindissectOpaque GetTest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@WinRTIconLoadData@@UEAA?AW4IconType@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameRequest@WinRTIconLoadData@@UEAA_NPEAUIIconLoadData@@W4RequestMatchType@@@Z
    virtual bool IsSameRequest(IIconLoadData *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallIconMode@WinRTIconLoadData@@UEAA_NXZ
    virtual bool IsSmallIconMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@WinRTIconLoadData@@UEAA_NXZ
    virtual bool IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WinRTIconLoadData@@QEAAJPEBGPEAUIImmersiveApplication@@I@Z
    long RuntimeClassInitialize(unsigned short const *, IImmersiveApplication *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaults@WinRTIconLoadData@@UEAAJIIIW4IconType@@W4IconSizeMode@@W4IconLoadPass@@HV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    virtual long SetDefaults(unsigned int, unsigned int, unsigned int, int, int, int, int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@WinRTIconLoadData@@UEAAXPEAUHICON__@@HW4IconQuality@@H@Z
    virtual void SetIcon(HICON__*, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconQuality@WinRTIconLoadData@@UEAAXW4IconQuality@@@Z
    virtual void SetIconQuality(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferenceId@WinRTIconLoadData@@UEAAXH@Z
    virtual void SetPreferenceId(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTIconLoadData@@QEAA@XZ
    WinRTIconLoadData();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTIconLoadData@@UEAA@XZ
    virtual ~WinRTIconLoadData();
};
