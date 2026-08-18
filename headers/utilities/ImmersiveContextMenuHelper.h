#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 10 member(s).
class ImmersiveContextMenuHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z
    long ApplyOwnerDrawToMenu(HMENU__*, HWND__*, tagPOINT *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z
    bool CanApplyOwnerDrawToMenu(HMENU__*, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z
    ContextMenuRenderingData * GetContextMenuDataForItem(HWND__*, uint64_t, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentThemeForOverrides@ImmersiveContextMenuHelper@@YAPEAXPEAUHWND__@@W4ImmersiveContextMenuOptions@@_N@Z
    void * GetCurrentThemeForOverrides(HWND__*, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z
    void HandleMergedMenus(HMENU__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z
    long OverrideBackgroundColor(HMENU__*, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z
    void RemoveOwnerDrawFromMenu(HMENU__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRenderingData@@@Z
    long StoreContextMenuDataForItem(HWND__*, uint64_t, unsigned int, ContextMenuRenderingData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z
    long _GetRenderingDataForMenuItem(int, tagMENUITEMINFOW, unsigned short const *, tagPOINT *, WindissectOpaque &, ContextMenuRenderingData *, int, ContextMenuRenderingData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z
    void _RemoveOwnerDrawFromMenuWorker(HMENU__*, HWND__*);
};
