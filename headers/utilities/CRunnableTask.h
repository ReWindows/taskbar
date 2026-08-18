#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 36 member(s).
class CRunnableTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOriginalKeyboardLayout@CRunnableTask@@UEAAXPEAPEAUHKL__@@@Z
    virtual void ActivateOriginalKeyboardLayout(HKL__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRunnableTask@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCancelEvent@CRunnableTask@@UEAAJPEAPEAX@Z
    virtual long GetCancelEvent(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CRunnableTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardNeededAndGlobalInputSwitchingOnThread@CRunnableTask@@UEAA_NXZ
    virtual bool IsKeyboardNeededAndGlobalInputSwitchingOnThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunning@CRunnableTask@@UEAAKXZ
    virtual unsigned long IsRunning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kill@CRunnableTask@@UEAAJH@Z
    virtual long Kill(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillRT@CRunnableTask@@UEAAJH@Z
    virtual long KillRT(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CRunnableTask@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRunnableTask@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CRunnableTask@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRunnableTask@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetKeyboardLayout@CRunnableTask@@UEAAXPEAUHKL__@@@Z
    virtual void ResetKeyboardLayout(HKL__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@CRunnableTask@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeRT@CRunnableTask@@UEAAJXZ
    virtual long ResumeRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CRunnableTask@@UEAAJXZ
    virtual long Run();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInitRT@CRunnableTask@@UEAAJXZ
    virtual long RunInitRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@CRunnableTask@@UEAAJXZ
    virtual long Suspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendRT@CRunnableTask@@UEAAJXZ
    virtual long SuspendRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestTask@CRunnableTask@@UEAAJXZ
    virtual long TestTask();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbort@CRunnableTask@@IEAAXJ@Z
    void SetAbort(long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRunnableTask@@MEAA@XZ
    virtual ~CRunnableTask();
};
