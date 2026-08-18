#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 8 member(s).
namespace winrt::WindowsUdk::UI::Shell::implementation {
class TaskbarPinnableObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@TaskbarPinnableObject@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque DisplayName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinnableToTaskGroup@TaskbarPinnableObject@implementation@Shell@UI@WindowsUdk@winrt@@QEAA_NUTaskGroup@3456@@Z
    bool IsPinnableToTaskGroup(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@TaskbarPinnableObject@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AW4TaskbarPinnableObjectKind@3456@XZ
    int Kind();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinToTaskGroup@TaskbarPinnableObject@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUTaskGroup@3456@@Z
    void PinToTaskGroup(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarPinnableObject@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@PEAUITaskListManager@@PEAUITaskListUI@@PEAUIDataObject@@PEAUITaskGroup@@@Z
    TaskbarPinnableObject(ITaskListManager *, ITaskListUI *, IDataObject *, ITaskGroup *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarPinnableObject@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ
    virtual ~TaskbarPinnableObject();
};
} // namespace winrt::WindowsUdk::UI::Shell::implementation
