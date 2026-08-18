#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 47 member(s).
class ShellIconLoadData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWindow@ShellIconLoadData@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetActualWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPI@ShellIconLoadData@@UEAAIXZ
    virtual unsigned int GetDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@ShellIconLoadData@@UEAAPEAUHICON__@@XZ
    virtual HICON__* GetIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLoadPass@ShellIconLoadData@@UEAA?AW4IconLoadPass@@XZ
    virtual int GetIconLoadPass();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconQuality@ShellIconLoadData@@UEAA?AW4IconQuality@@XZ
    virtual int GetIconQuality();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentifier@ShellIconLoadData@@UEAAPEAXXZ
    virtual void * GetIdentifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageId@ShellIconLoadData@@UEAAHXZ
    virtual int GetImageId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLoadingTestId@ShellIconLoadData@@UEAA?AU_GUID@@XZ
    virtual _GUID GetLoadingTestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferenceId@ShellIconLoadData@@UEAAHXZ
    virtual int GetPreferenceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryWindow@ShellIconLoadData@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetQueryWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@ShellIconLoadData@@UEAAIXZ
    virtual unsigned int GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellCacheIconData@ShellIconLoadData@@UEAAPEAUShellCacheLoadInfo@@XZ
    virtual ShellCacheLoadInfo * GetShellCacheIconData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellImageListId@ShellIconLoadData@@UEAAHXZ
    virtual int GetShellImageListId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreId@ShellIconLoadData@@UEAAIXZ
    virtual unsigned int GetStoreId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTest@ShellIconLoadData@@UEAA?AV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@XZ
    virtual WindissectOpaque GetTest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@ShellIconLoadData@@UEAA?AW4IconType@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameRequest@ShellIconLoadData@@UEAA_NPEAUIIconLoadData@@W4RequestMatchType@@@Z
    virtual bool IsSameRequest(IIconLoadData *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallIconMode@ShellIconLoadData@@UEAA_NXZ
    virtual bool IsSmallIconMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@ShellIconLoadData@@UEAA_NXZ
    virtual bool IsValid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaults@ShellIconLoadData@@UEAAJIIIW4IconType@@W4IconSizeMode@@W4IconLoadPass@@HV?$tip_test@V?$merged_data@U_tip_IconLoadTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    virtual long SetDefaults(unsigned int, unsigned int, unsigned int, int, int, int, int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@ShellIconLoadData@@UEAAXPEAUHICON__@@HW4IconQuality@@H@Z
    virtual void SetIcon(HICON__*, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconQuality@ShellIconLoadData@@UEAAXW4IconQuality@@@Z
    virtual void SetIconQuality(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageId@ShellIconLoadData@@UEAAXH@Z
    virtual void SetImageId(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferenceId@ShellIconLoadData@@UEAAXH@Z
    virtual void SetPreferenceId(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellCacheIconData@ShellIconLoadData@@UEAAX$$QEAV?$CAutoMemPtr@UShellCacheLoadInfo@@@@@Z
    virtual void SetShellCacheIconData(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellIconLoadData@@UEAA@XZ
    virtual ~ShellIconLoadData();
};
