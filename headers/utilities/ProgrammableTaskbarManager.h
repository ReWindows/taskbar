#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 18 member(s).
namespace Taskbar {
class ProgrammableTaskbarManager {
public:
    class DownloadPinFromCloudResult;
    class ProgrammableTaskbarData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheCloudAdContent@ProgrammableTaskbarManager@Taskbar@@QEAAXUIrisCreativeResults@Iris@Services@WindowsUdk@winrt@@@Z
    void CacheCloudAdContent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXmlDocumentFromCloudResponse@ProgrammableTaskbarManager@Taskbar@@QEAA?AUXmlDocument@Dom@Xml@Data@Windows@winrt@@UIrisCreativeResults@Iris@Services@WindowsUdk@8@@Z
    WindissectOpaque CreateXmlDocumentFromCloudResponse(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@ProgrammableTaskbarManager@Taskbar@@SA?AU?$com_ptr@UProgrammableTaskbarManager@Taskbar@@@winrt@@XZ
    static WindissectOpaque Current();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadIconImageAndSavePathAsync@ProgrammableTaskbarManager@Taskbar@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@AEAUJsonObject@Json@Data@56@_N@Z
    WindissectOpaque DownloadIconImageAndSavePathAsync(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadPinsFromCloud@ProgrammableTaskbarManager@Taskbar@@QEAA?AUDownloadPinFromCloudResult@12@XZ
    WindissectOpaque DownloadPinsFromCloud();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPayloadAvailable@ProgrammableTaskbarManager@Taskbar@@QEAA_NXZ
    bool IsPayloadAvailable();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProgrammableTaskbarManager@Taskbar@@QEAA@XZ
    ProgrammableTaskbarManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSuccessfulTaskbarPinning@ProgrammableTaskbarManager@Taskbar@@QEAAXXZ
    void ReportSuccessfulTaskbarPinning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLayoutXmlFileToDisk@ProgrammableTaskbarManager@Taskbar@@SAJUXmlDocument@Dom@Xml@Data@Windows@winrt@@@Z
    static long WriteLayoutXmlFileToDisk(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProgrammableTaskbarManager@Taskbar@@UEAA@XZ
    virtual ~ProgrammableTaskbarManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPGTB@ProgrammableTaskbarManager@Taskbar@@AEAAXXZ
    void CancelPGTB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIrisPayloadFile@ProgrammableTaskbarManager@Taskbar@@AEAAXXZ
    void DeleteIrisPayloadFile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementId@ProgrammableTaskbarManager@Taskbar@@AEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetPlacementId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFolderMap@ProgrammableTaskbarManager@Taskbar@@AEAAXXZ
    void InitializeFolderMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeImpression@ProgrammableTaskbarManager@Taskbar@@AEAAXXZ
    void InitializeImpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldProgrammableTaskbarRun@ProgrammableTaskbarManager@Taskbar@@CA_NXZ
    static bool ShouldProgrammableTaskbarRun();
};
} // namespace Taskbar
