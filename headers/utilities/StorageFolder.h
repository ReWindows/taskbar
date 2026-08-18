#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt::Windows::Storage {
class StorageFolder {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFromPathAsync@StorageFolder@Storage@Windows@winrt@@SA@AEBUhstring@param@4@@Z
    static GetFolderFromPathAsync(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StorageFolder@Storage@Windows@winrt@@QEAA@XZ
    ~StorageFolder();
};
} // namespace winrt::Windows::Storage
