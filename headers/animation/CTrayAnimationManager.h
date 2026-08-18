#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 28 member(s).
class CTrayAnimationManager {
public:
    class CUIAnimationVariables;
    class CUIAnimationVariablesDataBlock;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPostUpdateNotificationCallback@CTrayAnimationManager@@UEAAJPEAUITaskListAnimationNotificationSink@@@Z
    virtual long AddPostUpdateNotificationCallback(ITaskListAnimationNotificationSink *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTrayAnimationManager@@QEAA@XZ
    CTrayAnimationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAnimate@CTrayAnimationManager@@UEAAJW4eANIMTYPE@@@Z
    virtual long CanAnimate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAnimation@CTrayAnimationManager@@UEAAJPEAUIUnknown@@W4eANIMTYPE@@PEAPEAUIUIAnimationVariable2@@@Z
    virtual long CancelAnimation(IUnknown *, int, IUIAnimationVariable2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAnimations@CTrayAnimationManager@@UEAAJPEAUIUnknown@@PEAW4eANIMTYPE@@H@Z
    virtual long CancelAnimations(IUnknown *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishAnimation@CTrayAnimationManager@@UEAAJPEAUIUnknown@@W4eANIMTYPE@@@Z
    virtual long FinishAnimation(IUnknown *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationData@CTrayAnimationManager@@UEAAAEBUANIMDATA@@W4eANIMTYPE@@@Z
    virtual ANIMDATA const & GetAnimationData(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationType@CTrayAnimationManager@@UEAAJPEAUIUIAnimationStoryboard2@@PEAW4eANIMTYPE@@@Z
    virtual long GetAnimationType(IUIAnimationStoryboard2*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimation@CTrayAnimationManager@@UEAAJPEAUIUnknown@@W4eANIMTYPE@@PEAH@Z
    virtual long HasAnimation(IUnknown *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnyAnimation@CTrayAnimationManager@@UEAAHPEAUIUnknown@@W4eANIMTYPE@@@Z
    virtual int HasAnyAnimation(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPostUpdate@CTrayAnimationManager@@UEAAJXZ
    virtual long OnPostUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreUpdate@CTrayAnimationManager@@UEAAJXZ
    virtual long OnPreUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRenderingTooSlow@CTrayAnimationManager@@UEAAJI@Z
    virtual long OnRenderingTooSlow(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredAnimationActions@CTrayAnimationManager@@UEAAJXZ
    virtual long ProcessDeferredAnimationActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAnimationState@CTrayAnimationManager@@UEAAJXZ
    virtual long ResetAnimationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTrayAnimationManager@@QEAAJPEAUITrayComponentHost@@@Z
    long RuntimeClassInitialize(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderFlag@CTrayAnimationManager@@UEAAJK@Z
    virtual long SetRenderFlag(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserPreferenceFlag@CTrayAnimationManager@@UEAAJKK@Z
    virtual long SetUserPreferenceFlag(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CTrayAnimationManager@@UEAAJPEAUIUnknown@@W4eANIMTYPE@@@Z
    virtual long StartAnimation(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationEx@CTrayAnimationManager@@UEAAJPEAUIUnknown@@W4eANIMTYPE@@PEBUANIMDATA@@@Z
    virtual long StartAnimationEx(IUnknown *, int, ANIMDATA const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrayAnimationManager@@UEAA@XZ
    virtual ~CTrayAnimationManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyStoryboardFromAnimationVariable@CTrayAnimationManager@@AEAAJPEAUIUIAnimationVariable2@@@Z
    long _DestroyStoryboardFromAnimationVariable(IUIAnimationVariable2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAnimationData@CTrayAnimationManager@@AEAAXXZ
    void _InitAnimationData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAnimations@CTrayAnimationManager@@AEAAXXZ
    void _InitAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartAnimationHelper@CTrayAnimationManager@@AEAAJPEAUIUnknown@@W4eANIMTYPE@@PEBUANIMDATA@@@Z
    long _StartAnimationHelper(IUnknown *, int, ANIMDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartCyclicAnimation@CTrayAnimationManager@@AEAAJPEAUIUnknown@@W4eANIMTYPE@@PEBUANIMDATA@@@Z
    long _StartCyclicAnimation(IUnknown *, int, ANIMDATA const *);
};
