#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 79 member(s).
class winrt {
public:
    class apartment_context;
    class cancellable_promise;
    class hresult;
    class hresult_access_denied;
    class hresult_canceled;
    class hresult_changed_state;
    class hresult_class_not_available;
    class hresult_class_not_registered;
    class hresult_error;
    class hresult_illegal_delegate_assignment;
    class hresult_illegal_method_call;
    class hresult_illegal_state_change;
    class hresult_invalid_argument;
    class hresult_no_interface;
    class hresult_not_implemented;
    class hresult_out_of_bounds;
    class hresult_wrong_thread;
    class hstring;
    class impl;
    class slim_lock_guard;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z
    void attach_abi(WindissectOpaque &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z
    WindissectOpaque check_hresult(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z
    void copy_from_abi(WindissectOpaque &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z
    void * * put_abi(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?terminate@winrt@@YAXXZ
    void terminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z
    void throw_hresult(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z
    void throw_last_error(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?to_hresult@winrt@@YA?AUhresult@1@XZ
    WindissectOpaque to_hresult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z
    WindissectOpaque to_hstring(WindissectOpaque const &);
};
