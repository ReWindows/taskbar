#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 2 member(s).
namespace winrt::Windows::UI::Notifications {
class ToastNotificationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z
    static CreateToastNotifier(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateContent@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBW4ToastTemplateType@2345@@Z
    static GetTemplateContent(int const &);
};
} // namespace winrt::Windows::UI::Notifications
