#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 68 member(s).
class CTaskItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddButtonRef@CTaskItem@@UEAAKXZ
    virtual unsigned long AddButtonRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTab@CTaskItem@@UEAAJPEAUITaskItem@@@Z
    virtual long AddTab(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearOverlayIconNoDestroy@CTaskItem@@UEAAXXZ
    virtual void ClearOverlayIconNoDestroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibilityName@CTaskItem@@UEAAJPEAPEAG@Z
    virtual long GetAccessibilityName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveTabItem@CTaskItem@@UEAAPEAUITaskItem@@XZ
    virtual ITaskItem * GetActiveTabItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonRef@CTaskItem@@UEAAKXZ
    virtual unsigned long GetButtonRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstOpenedTime@CTaskItem@@UEAAKXZ
    virtual unsigned long GetFirstOpenedTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CTaskItem@@UEBAKXZ
    virtual unsigned long GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconId@CTaskItem@@UEAAHXZ
    virtual int GetIconId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastActivatedTime@CTaskItem@@UEAAKXZ
    virtual unsigned long GetLastActivatedTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInteractiveStartTime@CTaskItem@@UEAAKXZ
    virtual unsigned long GetLastInteractiveStartTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CTaskItem@@UEAAPEAUHMONITOR__@@PEAUITrayComponentHost@@@Z
    virtual HMONITOR__* GetMonitor(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumTabs@CTaskItem@@UEAAHXZ
    virtual int GetNumTabs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIcon@CTaskItem@@UEAAPEAUHICON__@@XZ
    virtual HICON__* GetOverlayIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconDescription@CTaskItem@@UEAAPEBGXZ
    virtual unsigned short const * GetOverlayIconDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconTime@CTaskItem@@UEAAKXZ
    virtual unsigned long GetOverlayIconTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgress@CTaskItem@@UEAAXPEAKPEAW4_TBPSTATE@@@Z
    virtual void GetProgress(unsigned long *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgressState@CTaskItem@@UEAA?AW4_TBPSTATE@@XZ
    virtual int GetProgressState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgressValue@CTaskItem@@UEAAKXZ
    virtual unsigned long GetProgressValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabContainerItem@CTaskItem@@UEBAPEAUITaskItem@@XZ
    virtual ITaskItem * GetTabContainerItem() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbButtonById@CTaskItem@@UEAAJIPEAUtagTHUMBBUTTON32@@@Z
    virtual long GetThumbButtonById(unsigned int, tagTHUMBBUTTON32*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbButtonThemePartById@CTaskItem@@UEAAII@Z
    virtual unsigned int GetThumbButtonThemePartById(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbButtons@CTaskItem@@UEAAPEAUtagTHUMBBUTTON32@@PEAH@Z
    virtual tagTHUMBBUTTON32* GetThumbButtons(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailClip@CTaskItem@@UEAAJPEAUtagRECT@@@Z
    virtual long GetThumbnailClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailToolTip@CTaskItem@@UEAAPEBGXZ
    virtual unsigned short const * GetThumbnailToolTip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBeenInteracted@CTaskItem@@UEAAHXZ
    virtual int HasBeenInteracted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasThumbBar@CTaskItem@@UEAAHPEAI@Z
    virtual int HasThumbBar(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActiveTab@CTaskItem@@UEAAHXZ
    virtual int IsActiveTab();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisibleOnCurrentVirtualDesktop@CTaskItem@@UEAA_NXZ
    virtual bool IsVisibleOnCurrentVirtualDesktop();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveButtonRef@CTaskItem@@UEAAKXZ
    virtual unsigned long RemoveButtonRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTab@CTaskItem@@UEAAJPEAUITaskItem@@@Z
    virtual long RemoveTab(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveThumbBar@CTaskItem@@UEAAXXZ
    virtual void RemoveThumbBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetProgress@CTaskItem@@UEAAHXZ
    virtual int ResetProgress();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveTabItem@CTaskItem@@UEAAJPEAUITaskItem@@@Z
    virtual long SetActiveTabItem(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconId@CTaskItem@@UEAAJH@Z
    virtual long SetIconId(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastInteractiveStartTime@CTaskItem@@UEAAJK@Z
    virtual long SetLastInteractiveStartTime(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverlayIcon@CTaskItem@@UEAAJPEAUHICON__@@I@Z
    virtual long SetOverlayIcon(HICON__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverlayIconDescription@CTaskItem@@UEAAJPEBG@Z
    virtual long SetOverlayIconDescription(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressState@CTaskItem@@UEAAHW4_TBPSTATE@@@Z
    virtual int SetProgressState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressValue@CTaskItem@@UEAAHK@Z
    virtual int SetProgressValue(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabContainerItem@CTaskItem@@UEAAJPEAUITaskItem@@@Z
    virtual long SetTabContainerItem(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabProperties@CTaskItem@@UEAAJW4STPFLAG@@@Z
    virtual long SetTabProperties(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailClip@CTaskItem@@UEAAJPEAUtagRECT@@@Z
    virtual long SetThumbnailClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailToolTip@CTaskItem@@UEAAJPEBG@Z
    virtual long SetThumbnailToolTip(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleOnCurrentVirtualDesktop@CTaskItem@@UEAAX_N@Z
    virtual void SetVisibleOnCurrentVirtualDesktop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SoftwareBitmapIcon@CTaskItem@@UEAA?AUSoftwareBitmap@Imaging@Graphics@Windows@winrt@@I@Z
    virtual WindissectOpaque SoftwareBitmapIcon(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarAddButtons@CTaskItem@@UEAAJPEAUtagTHUMBBUTTON32@@KI@Z
    virtual long ThumbBarAddButtons(tagTHUMBBUTTON32*, unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarGetImageList@CTaskItem@@UEAAPEAU_IMAGELIST@@XZ
    virtual _IMAGELIST * ThumbBarGetImageList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarSetImageList@CTaskItem@@UEAAJPEAU_IMAGELIST@@I@Z
    virtual long ThumbBarSetImageList(_IMAGELIST *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbBarUpdateButton@CTaskItem@@UEAAJPEAUtagTHUMBBUTTON32@@@Z
    virtual long ThumbBarUpdateButton(tagTHUMBBUTTON32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlags@CTaskItem@@UEAAJKK@Z
    virtual long UpdateFlags(unsigned long, unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskItem@@IEAA@PEAUIMockableApi@@@Z
    CTaskItem(IMockableApi *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CTaskItem@@IEAAJPEAUITrayComponentHost@@@Z
    long _Initialize(ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScaleAndCopyIcon@CTaskItem@@IEAAPEAUHICON__@@PEAU2@UtagSIZE@@@Z
    HICON__* _ScaleAndCopyIcon(HICON__*, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateThumbButtonThemeParts@CTaskItem@@IEAAXXZ
    void _UpdateThumbButtonThemeParts();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskItem@@MEAA@XZ
    virtual ~CTaskItem();
};
