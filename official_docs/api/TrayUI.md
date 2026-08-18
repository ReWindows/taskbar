# `global` :: `TrayUI`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `taskbar.dll`. Total members: **315**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace AutoHideTelemetry { class TaskbarAutoHideTelemetry; } 
class CMarshaledInterface; 
class CTaskBand; 
class CTrayAnimationManager; 
class CoCreateInstanceAsSystemTelemetry; 
namespace CreativeFramework { class ContentDeliveryManagerSettings; } 
class DefaultCompanionManagerConfiguration; 
class IconContainer; 
class LoggingUtil; 
class MeetAndChatHelpers; 
namespace Microsoft { namespace WRL { class Details; } } 
namespace ProgrammableTaskbarTelemetry { class ProgrammableTaskbarTelemetryProvider; } 
class TaskbandTelemetry; 
class Taskbar; 
class TaskbarDefaultPinningProvider; 
class TaskbarHost; 
namespace TrayNotificationAreaTelemetry { class CTrayNotificationAreaTelemetry; } 
class TrayTelemetry; 
class tip2; 
class tson; 
class winrt; 
class AIAssistancePolicy; class AIAssistanceTelemetry; class AIXPolicyHelper; class AIXTelemetry; class AIXTelemetryLogging; class ANIMDATA; class APPITEM; class ATL; class AUXPINENTRY; class AccentColorUtils; class AccentColors; class ActivityData; class AgileGitPtr; class ApplicationViewHelpers; class AutoProviderRegistrar; class BadgeUtils; class BadgingData; class BalloonToast; class BalloonToast2; class CAccessibleWrapperBase; class CApi; class CAppLifeCycle_UILogging; class CApplicationUsageTracker; class CAutoMemPtr; class CByteHashTable; class CCachedSTAObject; class CCoSimpleArray; class CComPropVariant; class CContextMenuForwarder; class CContextMenuWithVerbs; class CContextMenuWithoutSubMenus; class CCurrentColorUser; class CCurrentUser; class CDPA; class CDSA; class CEnumTaskItems; class CIconLoadingFunctions; class CImmersiveColor; class CImmersiveColorImpl; class CImmersiveContextMenuOwnerDrawHelper; class CImmersiveTaskItem; class CImpWndProc; class CImpWorkerWndProc; class CLauncherUIMode; class CLauncherUIModeWithThreadRef; class CLivePreviewWindow; class CMarshaledInterface; class CObjectFactory; class CObjectWithSite; class CPearl; class CPearlAccessibleWrapper; class CPropertyStoreHelper; class CRunnableTask; class CSecondaryTaskBand; class CSecondaryTray; class CSimpleArrayStandardCompareHelper; class CSimpleOleWindow; class CSimplePointerArrayNewMem; class CSmuggledObject; class CTCoAllocPolicy; class CTContainer_PolicyUnOwned; class CTLocalAllocPolicy; class CTaskBand; class CTaskBar; class CTaskBtnGroup; class CTaskButton; class CTaskGroup; class CTaskGroupTaskItem; class CTaskItem; class CTaskListWnd; class CTaskListWndMulti; class CTaskUnknown; class CThumbnailWindow; class CTrayAnimationManager; class CTrayBandSite; class CTrayDropTarget; class CTraySearchControl; class CWRLObjectWithGITSite; class CWinRTAppIconLoader; class CWindowTaskItem; class CallerIdentity; class CoCreateInstanceAsSystemLogging; class CoCreateInstanceAsSystemTelemetry; class CoTaskMemFree; class CompanionInfo; class ContextMenuRenderingData; class CopilotButtonHelpers; class CreationThreadDispatcher; class DESKBANDINFO; class DISPLAYCONFIG_MODE_INFO; class DISPLAYCONFIG_PATH_INFO; class DPIToPPIHelpers; class DPI_AWARENESS_CONTEXT__; class DefaultCompanionManagerConfiguration; class DefaultCompanionManagerLogger; class DeferWorkAreaChangesGuard; class DelayAllocateTLSLogging; class DelayAllocateTLSTelemetry; class DeleteObject; class Destroy; class DestroyIcon; class EnterpriseFeatureControl; class ExplorerLogging; class ExplorerUsageTracking; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class FileWatcherInfo; class GDIHelpers; class GlobalInterfaceTable; class GlobalMetrics; class HBITMAP__; class HBRUSH__; class HDC__; class HFONT__; class HICON__; class HINSTANCE__; class HKEY__; class HKL__; class HMENU__; class HMONITOR__; class HPEN__; class HRGN__; class HSTRING__; class HTIPTEST__; class HWND__; class HolographicViewHelpers; class IAccessible; class IActivationFactory; class IActiveZBandNotification; class IActiveZBandNotificationService; class IAgileReference; class IApplicationResolver; class IApplicationResolver2; class IApplicationUsageTracker; class IApplicationView; class IApplicationViewFlashingNotification; class IAsyncCallback; class IAsyncCallbackDispatcher; class IAutomaticDestinationList; class IAutomaticDestinationList2; class IBadgeData; class IBandSite; class IBindCtx; class ICatBandManager; class IClassFactory; class IClassicWindowManager; class IContextMenu; class IContextMenu3; class IContextMenuCB; class ICustomDestinationList; class IDataObject; class IDeskBand; class IDispatch; class IEnumTaskItems; class IEnumVARIANT; class IExecuteCommandHost; class IFlexibleTaskbarPinnedList; class IIconContainer; class IIconContainerNotifications; class IIconLoadData; class IIconLoaderNotifications2; class IIconLoadingFunctions; class IImageList; class IImmersiveAppCrusher; class IImmersiveApplication; class IImmersiveSettingsCache; class IInspectable; class ILaunchTargetMonitor; class ILauncherTipContextMenu; class ILayoutPreferencesOnAppLaunch; class ILivePreviewWindow; class ILocalCopyDownloadSettings; class IMMERSIVE_COLOR_PREFERENCE; class IMalloc; class IMockableApi; class IMultitaskingViewVisibilityNotification; class IMultitaskingViewVisibilityService; class INotificationCB; class IObjectArray; class IObjectFactory; class IObjectWithSite; class IPinManagerInterop; class IPinnedList2; class IPinnedList3; class IPinnedWebsiteIconLoadData; class IPlaceholderIconLoadData; class IPrivilegedPresentationOperations; class IPropertyBag2; class IPropertyStore; class IQueryAssociations; class IRegisteredTask; class IResourceCandidate; class IResourceContext; class IResourceMap; class IRunnableTask; class ISecondaryTray; class IServiceProvider; class IShellFolder; class IShellIconLoadData; class IShellItem; class IShellItem2; class IShellItemArray; class IShellLinkW; class IShellTaskScheduler; class IShellTaskScheduler2; class IShellTelemetryHelper; class IShellUserAssist; class IShellUserAssist2; class IShouldSwitchToDesktop; class IStartButtonSite; class IStateCapture; class IStream; class ITaskBtnGroup; class ITaskButton; class ITaskGroup; class ITaskGroupTaskItem; class ITaskItem; class ITaskItemFilter; class ITaskItemFilterFactory; class ITaskListAnimation; class ITaskListAnimationNotificationSink; class ITaskListManager; class ITaskListSite; class ITaskListUI; class ITaskListUIMulti; class ITaskListWndSite; class ITaskService; class ITaskbarTestProxyPrivate; class ITrayComponentHost; class ITrayDeskBand; class ITrayImmersiveShellProxy; class ITrayUI; class ITrayUIHost; class ITrustedComponentForegroundControl; class ITypeInfo; class IUIAnimationStoryboard2; class IUIAnimationTimerEventHandler; class IUIAnimationTransition2; class IUIAnimationVariable2; class IUnknown; class IUpdateViewValueSet; class IVirtualDesktop; class IWICBitmap; class IWICBitmapEncoder; class IWICBitmapSource; class IWICImagingFactory; class IWakeOnRPCCalls; class IWeakReference; class IWin32ApplicationView; class IWinRTApplicationView; class IWinRTIconLoadData; class IconContainer; class IconLoadDataBase; class IconLoadDataFinder; class IconUtils; class ImmersiveColorTelemetry; class ImmersiveContextMenuHelper; class ImmersiveIcons; class ImmersiveIconsLogging; class ImmersiveTray; class JUMPVIEWCLOSEDATA; class LaunchHelpers; class LauncherAppLaunchTelemetry; class LauncherNotifyHelper; class LauncherTelemetryLogging; class LeaveCriticalSection; class LegacySystrayCompatStubs; class LoggingUtil; class MFUITEM; class MINALLDATAtag; class MSMFUEnumerator; class MeetAndChatHelpers; class MigrationTaskArgs; class NonAgileDispatcher; class NotificationAreaIconIdentity; class NotificationAreaIconManager2; class NotifyIconMigrationHelpers; class NotifyIconRegistryHelpers; class NotifyIconSettingsDatabase; class NotifyIconSettingsIdentity; class NotifyIconUtilities; class OEMAccentColors; class OEMMFUEnumerator; class PINNEDGROUP; class PiiFilter; class PinnedWebsiteIconLoadData; class PinnedWebsiteIconLoader; class PixelCollection; class PixelCollectionParameters; class PlaceholderIconLoadData; class PlaceholderTileIconLoader; class RESOLVEDWINDOW; class RawImageInfo; class RegCloseKey; class ReleaseSRWLockExclusive; class RtlNameValueArray; class SETPINREPLACEMENTDATA; class SecondaryTileIdentifierHelpers; class SetRedrawState; class SetRedrawWindowState; class SettingsBitmapLoadInfo; class ShareWindowCommandProviderTelemetry; class ShellCacheLoadInfo; class ShellExperienceDispatcherLogging; class ShellExperienceDispatcherTelemetry; class ShellIconCacheParams; class ShellIconLoadData; class ShellIconLoaderV2; class ShellManagedWindowHelper; class ShellVersion; class StaDispatcher; class StartMenuCompanionManager; class StateCaptureLogging; class SuppressDisplayMonitorInfoCollectionUpdates; class SystemTrayHost; class TNPersistStreamData; class TRAYVIEWOPTS; class TabletModeHelpers; class TaskGroupsTraceLoggingProvider; class TaskIdentity; class TaskItemFilter; class TaskItemFilterFactory; class TaskbandTelemetry; class Taskbar; class TaskbarAuxPinningTelemetry; class TaskbarDefaultPinningProvider; class TaskbarFavoritesMigrationHelpers; class TaskbarHelpers; class TaskbarHost; class TaskbarIconLoadingTelemetry; class TaskbarLayoutRestoreLogging; class TaskbarLayoutRestoreTelemetry; class TaskbarLogging; class TaskbarTelemetry; class TaskbarTelemetryHelper; class TaskbarTheme; class TileUtils; class TipReportingInfo; class TrackedImage; class TrayCommon; class TrayDPIHelpers; class TrayImmersiveShellProxy; class TrayNotificationAreaLogging; class TrayStuckRectData; class TrayTelemetry; class TrayUI; class TrayUIComponent; class UserAssistImpl; class WINDOWPOSITIONS; class WinRTIconLoadData; class WindowManagementLogging; class WindowTabHostTelemetry; class WindowsStoreHelpers; class _BLENDFUNCTION; class _BP_PAINTPARAMS; class _CMINVOKECOMMANDINFO; class _CONTEXT; class _DTTOPTS; class _EVENT_DATA_DESCRIPTOR; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _FILETIME; class _GUID; class _HIDDENITEMID; class _ICONINFO; class _ICONINFOEXW; class _IMAGELIST; class _ITEMIDLIST_ABSOLUTE; class _ITEMIDLIST_RELATIVE; class _ITEMID_CHILD; class _MARGINS; class _PII_FILTER; class _POINTL; class _RO_REGISTRATION_COOKIE; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _SECURITY_ATTRIBUTES; class _SYNC_DISPLAY_CHANGE_DATA; class _TOKEN_MANDATORY_LABEL; class _TP_CALLBACK_INSTANCE; class _TP_IO; class _TP_TIMER; class _TP_WAIT; class _TRAYNOTIFYDATAW; class _TRAYNOTIFYINFO; class _TlgReflectorTag_Param0IsProviderType; class _ULARGE_INTEGER; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class __WilFeatureTraits_Feature_Servicing_TaskbarApartmentContext; class __std_fs_convert_result; class _tagHardErrorData; class _tagOLECMD; class _tagOLECMDTEXT; class _tagpropertykey; class _timespec64; class _tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest; class _tip_SecondaryClockShowTest; class _tip_WindowsCopilotDisabledByMDM; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperArray; class _tlgWrapperByRef; class _tlgWrapperByVal; class _tlgWrapperPtrSize; class g_hShareWindowCommandProvider; class iterator; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_06c1fd67c44c8e6b532044fd7074eb44; class lambda_156f8c05752017390d6185e99ef4c093; class lambda_16e90beb890bb5a0f3e760349136ba81; class lambda_1e939f46dadccbd6f27a953524366ffa; class lambda_24592a1187ed4794c7c8033543882dff; class lambda_26b2cf7627f76d90987cfda9dcac6019; class lambda_2e07f120a463f0972cbf2963d8d78735; class lambda_319d5e083f45f90dcdce5dce53cbb275; class lambda_33b9e25750b66a172afb36d6a3c83aa9; class lambda_33e9762ba2032d4577f0c14d9f4a6a5a; class lambda_340dc9cdafe54586e892324d211f71c2; class lambda_412b166021fd81d3524e7184f74b86bc; class lambda_53a3411efd5845070a14566a18738b74; class lambda_5599476506729dc313a98f4c9d5d987e; class lambda_65e615be2a453ca0576c979606f46740; class lambda_6ca8793510f341cd96f0f98232559544; class lambda_6f6f7d8b99e53a1218b8f9dc1fe9c893; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_79981cb7109e9408e019985868374c7f; class lambda_7d151714ca0074b33c977dd82f5c8610; class lambda_7f96eb1dcf99da5daec8c2467d2d5499; class lambda_80db51466ca5def8fbe8d4013f23e0e8; class lambda_85628c5db741e69ea880e51a2ae9296f; class lambda_9013ee9e23efe4882b67eff5b0ecf103; class lambda_97d1d5d5e62cb3f17b4fe98388d34ae1; class lambda_99befc3d664477dfea71a8e02919f774; class lambda_9b682a48b4f6fb45f61a32cfe80602de; class lambda_9e13d76a427e13caa9ab7c9cd20d41bc; class lambda_9fcc0990ef58c1b2ac799528752a791d; class lambda_a147fc506891ca1ab4bc45f97d2f9519; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_c230bb056ca55315decf9fba73b23b7d; class lambda_ca1c4ebc1c9cb23ebc58633d2d4e6260; class lambda_d0e64613925f1481b0644c09de5a851c; class lambda_dc4c43a3a5637dad581706f1ad504e63; class lambda_df77b48789fda7bd5466315fb282a2cc; class lambda_e1befb086ad3257e3f042a63030725f7; class lambda_e9106b291c644fc0e88a7f201150a551; class lambda_ef1f58c13b66af6943dd8b037c0e8121; class promise_type; class tagBANDSITEINFO; class tagBITMAPINFO; class tagCOPYDATASTRUCT; class tagCURSORINFO; class tagDISPPARAMS; class tagDRAWTEXTPARAMS; class tagEXCEPINFO; class tagLOGFONTW; class tagMENUITEMINFOW; class tagMONITORINFO; class tagMONITORINFOEXW; class tagMSG; class tagNOTIFYITEM; class tagPAINTSTRUCT; class tagPOINT; class tagPOINTER_INFO; class tagPOINTS; class tagPROPVARIANT; class tagRECT; class tagSCROLLINFO; class tagSIZE; class tagTEXTMETRICW; class tagTHUMBBUTTON32; class tagTPMPARAMS; class tagTRACKMOUSEEVENT; class tagUEMINFO; class tagVARIANT; class tagWINDOWCOMPOSITIONATTRIBDATA; class tagWINDOWPOS; class tagWNDCLASSEXW; class thunk; class tip2; class tson; class type; class type_info; class vector_iterator_nothrow; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace AssignedAccessHelper { class AssignedAccessUtility; } 
namespace AutoHideTelemetry { class TaskbarAutoHideTelemetry; } 
namespace BrowserChannels { class Info; class Private; } 
namespace BrowserReplacementVariant { class Private; } 
namespace CreativeFramework { class ContentDeliveryManagerSettings; class Policy; class Triggers; } 
namespace CreativeFramework { namespace Logging { class ShellPlacementLogging; class ShellPlacementTelemetry; } } 
namespace CurveData { class AccelDecel; class CubicBezier; class Linear; } 
namespace DirectLaunch { namespace details { class DirectLaunchTelemetry; class _tip_DirectLaunchInvocationTest; } } 
namespace ExplorerTelemetry { class TaskBandDelayedInit; class TaskBandInit; } 
namespace Geometry { class CRect; class CSize; } 
namespace ImmersiveIconsLoggingTelemetry { class LoadIconW; } 
namespace Microsoft { namespace WRL { class AgileRef; class ChainInterfaces; class ClassFactory; class ComPtr; class Details; class FtmBase; class Implements; class RuntimeClassFlags; class SimpleClassFactory; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class ClientDC; class CompatibleDC; class HString; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; } } } } 
namespace MobilityExperience { class Triggers; } 
namespace PerfTrack { class AppLaunchTelemetry; class AppSwitchTelemetry; } 
namespace ProgrammableTaskbarTelemetry { class ProgrammableTaskbarTelemetryProvider; } 
namespace ShellMRTHelper { class Common; } 
namespace StateCapture { class AppBackupStateTelemetry; class ShellStateTelemetry; class StateTelemetryBase; class TaskbarStateTelemetry; } 
namespace TaskbarPinningTelemetry { class PinningActivity; } 
namespace TaskbarTip { class _tip_AppsFolderDisplayNameUpdateTest; class _tip_ExtendedUIIconLoadingTest; class _tip_IconLoadTest; class _tip_PlaceholderActivationTest; class _tip_PlaceholderRetrievalTest; class _tip_PreventTaskbarBackupPinsTipTest; class _tip_PrimaryTaskbarInitialization; class _tip_PrimaryTaskbarInitializationWin11_attributes; class _tip_SecondaryTaskbarInitialization; class _tip_TaskListButtonClickTest; class _tip_TaskbarAutoHideTest; class _tip_TaskbarCopilotAppPinTest; class _tip_TaskbarExternalDragItemPinningTest; class _tip_TaskbarLauncherTipContextMenuTest; class _tip_TaskbarOneTimeTFLPinTest; class _tip_TaskbarRestoreBackupPayloadTipTest; class _tip_TaskbarStartupPerformanceTest; class _tip_TileAddedEventHandlerTest; class _tip_TileMigrationEventHandlerTest; class _tip_TileRemovedEventHandlerTest; } 
namespace TestInfo_ODR_guard { class TestInfo; } 
namespace TrayNotificationAreaTelemetry { class CTrayNotificationAreaTelemetry; } 
namespace VirtualAssistantAppRegistry { class VirtualAssistantAppInfo; class VirtualAssistantAppManager; } 
namespace Windows { class Foundation; } 
namespace Windows { namespace Internal { class CoTaskMemPolicy; class NativeString; } } 
namespace Windows { namespace Internal { namespace AssignedAccess { class AAManagerHelper; class AssignedAccessConfigStoreBase; class AssignedAccessConfigStoreHelper; class AssignedAccessConfigStoreV0; class AssignedAccessConfigStoreV1; class AssignedAccessConfigStoreV2; class AssignedAccessUserInfo; class IAssignedAccessConfiguration; class IAssignedAccessController; } } } 
namespace Windows { namespace Internal { namespace ComTaskPool { class CTaskWrapper; } } } 
namespace Windows { namespace Internal { namespace ComposableShell { namespace Multitasking { class IThumbnailFactory; } } } } 
namespace Windows { namespace Internal { namespace Shell { class IconConverter; } } } 
namespace Windows { namespace Internal { namespace Shell { namespace JumpView { class IJumpViewExperienceWrapper; class IJumpViewParams; } } } } 
namespace Windows { namespace Internal { namespace Shell { namespace Multitasking { namespace Desktop { class IDesktopThumbnailDevice; } } } } } 
namespace Windows { namespace Internal { namespace Shell { namespace TaskGroups { class ITaskGroup; } } } } 
namespace Windows { namespace Internal { namespace Tiles { class ITileQueryFilter; } } } 
namespace Windows { namespace System { namespace Profile { class IEducationSettingsStatics; } } } 
namespace Windows { namespace UI { namespace Xaml { class IWindowPrivate; } } } 
namespace shell { class TaskScheduler; } 
namespace std { class _Hash_find_last_result; class _Iterator_base0; class _List_const_iterator; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_const_iterator; class _List_unchecked_iterator; class _List_val; class _Node_handle; class _Node_handle_map_base; class _Ref_count_base; class _Simple_types; class _String_constructor_concat_tag; class _System_error; class _Tmap_traits; class _Tree; class _Tree_find_hint_result; class _Tree_find_result; class _Tree_id; class _Tree_iterator; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Uhash_compare; class _Unsigned128; class _Value_init_tag; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class array; class bad_alloc; class bad_array_new_length; class bad_optional_access; class bad_variant_access; class bad_weak_ptr; class basic_string; class basic_string_view; class char_traits; class default_delete; class equal_to; class error_code; class error_condition; class exception; class exception_ptr; class function; class hash; class initializer_list; class invalid_argument; class less; class logic_error; class map; class mutex; class nothrow_t; class nullptr_t; class optional; class pair; class piecewise_construct_t; class random_access_iterator_tag; class ratio; class runtime_error; class set; class shared_ptr; class system_error; class tuple; class unique_ptr; class unordered_map; class variant; class vector; class weak_ptr; } 
namespace std { namespace chrono { class duration; class steady_clock; class time_point; } } 
namespace std { namespace experimental { class coroutine_handle; class coroutine_traits; } } 
namespace std { namespace filesystem { class _File_status_and_error; class filesystem_error; class path; } } 
namespace wil { class ActivityBase; class ActivityThreadWatcher; class CallContextInfo; class DiagnosticsInfo; class FailureInfo; class Feature; class ResultException; class StoredFailureInfo; class ThreadErrorContext; class WNF_CHANGE_STAMP_STRUCT; class basic_zstring_view; class com_ptr_t; class err_exception_policy; class err_returncode_policy; class folder_change_reader_t; class function_deleter; class process_heap_deleter; class registry_watcher_t; class shared_any_t; class srwlock; class unique_any_t; class vector_range_nothrow; class write_lock_required; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class DummyUnknown; class FeatureLogging; class FeatureStateManager; class FreeProcessHeap; class IFailureCallback; class IFunctor; class IFunctorHost; class ResultStatus; class StoredCallContextInfo; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class delete_folder_change_reader_state; class delete_registry_watcher_state; class delete_wnf_subscription_state; class empty_wnf_state; class folder_change_reader_state; class registry_watcher_state; class resource_policy; class shared_object; class shared_storage; class token_info_deleter; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from taskbar.dll by Windissect. 315 member(s).
class TrayUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveZbandChanged@TrayUI@@UEAAJKK@Z
    virtual long ActiveZbandChanged(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocalActiveTaskbarTestId@TrayUI@@UEAAXPEAUHMONITOR__@@U_GUID@@@Z
    virtual void AddLocalActiveTaskbarTestId(HMONITOR__*, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRemoteSettings@TrayUI@@UEAAJK@Z
    virtual long ApplyRemoteSettings(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssocChanged@TrayUI@@UEAAXJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual void AssocChanged(long, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncSaveSettings@TrayUI@@UEAAXXZ
    virtual void AsyncSaveSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHideChangedOnMonitor@TrayUI@@QEAAXPEAUHMONITOR__@@@Z
    void AutoHideChangedOnMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BootImmersiveShell@TrayUI@@UEAAJXZ
    virtual long BootImmersiveShell();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildContextMenu@TrayUI@@UEAAPEAUHMENU__@@W4TrayContextMenuItemFlags@TrayCommon@@@Z
    virtual HMENU__* BuildContextMenu(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcHitTest@TrayUI@@UEAA_JPEAUHWND__@@_K_J@Z
    virtual int64_t CalcHitTest(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanMinimizeAll@TrayUI@@UEAAHXZ
    virtual int CanMinimizeAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanMove@TrayUI@@UEAAHXZ
    virtual int CanMove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowAppsOnTaskbarTabletMode@TrayUI@@UEBAHXZ
    virtual int CanShowAppsOnTaskbarTabletMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSize@TrayUI@@UEAAHXZ
    virtual int CanSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckGDIHandleLimit@TrayUI@@UEAAXXZ
    virtual void CheckGDIHandleLimit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@TrayUI@@UEAAXXZ
    virtual void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextMenuInvoke@TrayUI@@UEAAXHPEBUtagRECT@@@Z
    virtual void ContextMenuInvoke(int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClassInstance@TrayUI@@UEAAJAEBU_GUID@@PEAPEAUIUnknown@@@Z
    virtual long CreateClassInstance(_GUID const &, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeskBandRegistrationChanged@TrayUI@@UEAAJXZ
    virtual long DeskBandRegistrationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableGlass@TrayUI@@UEAAXH@Z
    virtual void EnableGlass(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAccessibleName@TrayUI@@QEAAJ_J@Z
    long EnsureAccessibleName(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillDisplayChangeData@TrayUI@@UEAAHPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z
    virtual int FillDisplayChangeData(_SYNC_DISPLAY_CHANGE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireLockTaskbarContextMenuTelemetry@TrayUI@@UEAAXXZ
    virtual void FireLockTaskbarContextMenuTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRelayout@TrayUI@@UEAAXXZ
    virtual void ForceRelayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveTaskbarTestId@TrayUI@@UEAA?AU_GUID@@PEAUHMONITOR__@@@Z
    virtual _GUID GetActiveTaskbarTestId(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoHideFlags@TrayUI@@UEAAIXZ
    virtual unsigned int GetAutoHideFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandSite@TrayUI@@UEAA?AV?$ComPtr@UIBandSite@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque GetBandSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCabinet@TrayUI@@UEAAPEAUHINSTANCE__@@XZ
    virtual HINSTANCE__* GetCabinet();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTheme@TrayUI@@UEBA?AW4COLORTHEME@@XZ
    virtual int GetColorTheme() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentState@TrayUI@@UEAAIW4TrayComponentStateOption@@@Z
    virtual unsigned int GetComponentState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDashboardWidgetEntryPoint@TrayUI@@UEAA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetDashboardWidgetEntryPoint();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopModeAutoHide@TrayUI@@UEBAIXZ
    virtual unsigned int GetDesktopModeAutoHide() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopRaised@TrayUI@@UEAAHXZ
    virtual int GetDesktopRaised();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopWindow@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetDesktopWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestinationItemFromDataObject@TrayUI@@UEAAJPEAUIDataObject@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetDestinationItemFromDataObject(IDataObject *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayMonitorInfoStructForMonitor@TrayUI@@QEAA?AUDisplayMonitorInfoStruct@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z
    WindissectOpaque GetDisplayMonitorInfoStructForMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRectFromRect@TrayUI@@UEAAXPEAUHWND__@@PEBUtagRECT@@PEAU3@@Z
    virtual void GetDisplayRectFromRect(HWND__*, tagRECT const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDockedRect@TrayUI@@UEAAIPEAUtagRECT@@H@Z
    virtual unsigned int GetDockedRect(tagRECT *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragFullWindows@TrayUI@@UEAAHXZ
    virtual int GetDragFullWindows();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceManager@TrayUI@@UEBAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetExperienceManager(unsigned short const *, _GUID const &, void * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalMetrics@TrayUI@@UEAAXPEAUGlobalMetrics@@@Z
    virtual void GetGlobalMetrics(GlobalMetrics *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHKeyExplorer@TrayUI@@UEAAPEAUHKEY__@@XZ
    virtual HKEY__* GetHKeyExplorer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSizePreference@TrayUI@@UEBAIXZ
    virtual unsigned int GetIconSizePreference() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveShellDispatcherQueue@TrayUI@@UEAA?AUDispatcherQueue@System@Windows@winrt@@XZ
    virtual WindissectOpaque GetImmersiveShellDispatcherQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveShellServiceProvider@TrayUI@@UEBAJPEAPEAUIServiceProvider@@_N@Z
    virtual long GetImmersiveShellServiceProvider(IServiceProvider * *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInSizeMove@TrayUI@@UEAAHXZ
    virtual int GetInSizeMove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsNoToolbarsOnTaskbarPolicyEnabled@TrayUI@@UEBAHXZ
    virtual int GetIsNoToolbarsOnTaskbarPolicyEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastActiveWindow@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetLastActiveWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherVisibleMonitor@TrayUI@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetLauncherVisibleMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyNotificationAreaSize@TrayUI@@UEAAHXZ
    virtual int GetLegacyNotificationAreaSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinSize@TrayUI@@UEAAXIPEAUtagSIZE@@@Z
    virtual void GetMinSize(unsigned int, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinSize@TrayUI@@UEAAXPEAUHMONITOR__@@PEAUtagSIZE@@@Z
    virtual void GetMinSize(HMONITOR__*, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinimizeFlags@TrayUI@@UEAAHXZ
    virtual int GetMinimizeFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDPI@TrayUI@@UEAAIXZ
    virtual unsigned int GetMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDeviceId@TrayUI@@QEAA?AUhstring@winrt@@PEBG@Z
    WindissectOpaque GetMonitorDeviceId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorMovedFrom@TrayUI@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitorMovedFrom();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultimonStuckPlace@TrayUI@@UEAAKXZ
    virtual unsigned long GetMultimonStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationAreaSize@TrayUI@@UEAAHXZ
    virtual int GetNotificationAreaSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearl@TrayUI@@UEAAJPEAPEAVCPearl@@@Z
    virtual long GetPearl(CPearl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearlRectForMonitor@TrayUI@@UEAAJPEAUHMONITOR__@@PEAUtagRECT@@PEAK@Z
    virtual long GetPearlRectForMonitor(HMONITOR__*, tagRECT *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryTaskbarButtonGroupCount@TrayUI@@UEAAHXZ
    virtual int GetPrimaryTaskbarButtonGroupCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivilegedOperations@TrayUI@@UEAA?AV?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque GetPrivilegedOperations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgrammableTaskbarCampaignPlacementId@TrayUI@@UEAA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetProgrammableTaskbarCampaignPlacementId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxyImmersiveShellComponentProvider@TrayUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetProxyImmersiveShellComponentProvider(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxyImmersiveShellRegistrationProvider@TrayUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetProxyImmersiveShellRegistrationProvider(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOwner@TrayUI@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* GetRootOwner(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowCount@TrayUI@@UEAAHI@Z
    virtual int GetRowCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSavedWindowPositions@TrayUI@@UEAAXPEAPEBUWINDOWPOSITIONS@@@Z
    virtual void GetSavedWindowPositions(WINDOWPOSITIONS const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsIconBitmap@TrayUI@@UEBAPEAUHBITMAP__@@XZ
    virtual HBITMAP__* GetSettingsIconBitmap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsIconBitmapForSystemMenu@TrayUI@@UEBAPEAUHBITMAP__@@XZ
    virtual HBITMAP__* GetSettingsIconBitmapForSystemMenu() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShakerRoot@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetShakerRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizingBarHeight@TrayUI@@UEAAHXZ
    virtual int GetSizingBarHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaticSafeWorkAreaForMonitor@TrayUI@@UEAA?AURect@Foundation@Windows@winrt@@PEAUHMONITOR__@@@Z
    virtual WindissectOpaque GetStaticSafeWorkAreaForMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckInfo@TrayUI@@UEAAXPEAUtagRECT@@PEAI@Z
    virtual void GetStuckInfo(tagRECT *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckMonitor@TrayUI@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetStuckMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@TrayUI@@UEAAIXZ
    virtual unsigned int GetStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRect@TrayUI@@UEAAXIPEAUtagRECT@@@Z
    virtual void GetStuckRect(unsigned int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRectForMonitor@TrayUI@@UEAA_NPEAUHMONITOR__@@PEAUtagRECT@@@Z
    virtual bool GetStuckRectForMonitor(HMONITOR__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckWidths@TrayUI@@UEAA?AUtagSIZE@@XZ
    virtual tagSIZE GetStuckWidths();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabletModeAutoHide@TrayUI@@UEBAIXZ
    virtual unsigned int GetTabletModeAutoHide() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListAnimation@TrayUI@@UEAAJPEAPEAUITaskListAnimation@@@Z
    virtual long GetTaskListAnimation(ITaskListAnimation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbandAvailableSpace@TrayUI@@UEAAHXZ
    virtual int GetTaskbandAvailableSpace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbandHWND@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTaskbandHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarController@TrayUI@@UEAA?AUTaskbarControllerExtension@Shell@UI@WindowsUdk@winrt@@AEBUTaskbarModel@3456@@Z
    virtual WindissectOpaque GetTaskbarController(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarModel@TrayUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetTaskbarModel(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestProxy@TrayUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetTestProxy(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayForegroundControl@TrayUI@@UEAAPEAUITrustedComponentForegroundControl@@XZ
    virtual ITrustedComponentForegroundControl * GetTrayForegroundControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayUI@TrayUI@@UEAAPEAUITrayUI@@XZ
    virtual ITrayUI * GetTrayUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayViewOpts@TrayUI@@UEAAXPEAUTRAYVIEWOPTS@@PEAUICatBandManager@@@Z
    virtual void GetTrayViewOpts(TRAYVIEWOPTS *, ICatBandManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayWindow@TrayUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTrayWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRect@TrayUI@@UEAA_NPEAUHMONITOR__@@PEAUtagRECT@@1@Z
    virtual bool GetVisualRect(HMONITOR__*, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlassEnabled@TrayUI@@UEAAHXZ
    virtual int GlassEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommand@TrayUI@@UEAAHPEAUHWND__@@I_K_JPEA_J@Z
    virtual int HandleCommand(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCopyData@TrayUI@@UEAA_N_KPEAUtagCOPYDATASTRUCT@@PEA_J@Z
    virtual bool HandleCopyData(uint64_t, tagCOPYDATASTRUCT *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFirstTime@TrayUI@@UEAAXXZ
    virtual void HandleFirstTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHeadlinesSettingsChange@TrayUI@@UEAAX_N@Z
    virtual void HandleHeadlinesSettingsChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHoverUIVisibilityChange@TrayUI@@UEAAX_N@Z
    virtual void HandleHoverUIVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewVisibilityChange@TrayUI@@UEAAX_N@Z
    virtual void HandleJumpViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMessageFromMessageLoop@TrayUI@@UEAA_NUtagMSG@@@Z
    virtual bool HandleMessageFromMessageLoop(tagMSG);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMessageIdle@TrayUI@@UEAAXXZ
    virtual void HandleMessageIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePrivateCommand@TrayUI@@UEAA_N_J@Z
    virtual bool HandlePrivateCommand(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@TrayUI@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskbarHotkey@TrayUI@@UEAAX_K@Z
    virtual void HandleTaskbarHotkey(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTrayFlyoutVisibilityChange@TrayUI@@QEAAX_N@Z
    void HandleTrayFlyoutVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWinNumHotKey@TrayUI@@UEAAXHG@Z
    virtual void HandleWinNumHotKey(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWindowDestroyed@TrayUI@@UEAAXPEAUHWND__@@@Z
    virtual void HandleWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideDeskBand@TrayUI@@UEAAJAEBU_GUID@@@Z
    virtual long HideDeskBand(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveResize@TrayUI@@UEAAXXZ
    virtual void ImmersiveResize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDisplayMonitorInfoCollectionWorkAreas@TrayUI@@QEAAXXZ
    void InitDisplayMonitorInfoCollectionWorkAreas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitGlobalMetrics@TrayUI@@UEAAX_KPEBG@Z
    virtual void InitGlobalMetrics(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TrayUI@@UEAAXXZ
    virtual void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateWorkAreaAsync@TrayUI@@QEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque InvalidateWorkAreaAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvisibleUnhide@TrayUI@@QEAAXH@Z
    void InvisibleUnhide(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeferedPosRectChange@TrayUI@@UEAAHXZ
    virtual int IsDeferedPosRectChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeskBandShown@TrayUI@@UEAAJAEBU_GUID@@@Z
    virtual long IsDeskBandShown(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopVisibleOnTrayMonitor@TrayUI@@UEAA_NXZ
    virtual bool IsDesktopVisibleOnTrayMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDestroyed@TrayUI@@UEAA_NXZ
    virtual bool IsDestroyed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpandable@TrayUI@@QEBA_NXZ
    bool IsExpandable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpandableTaskbarExpanded@TrayUI@@UEAAHXZ
    virtual int IsExpandableTaskbarExpanded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExplorerShuttingDown@TrayUI@@UEAAHXZ
    virtual int IsExplorerShuttingDown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHiding@TrayUI@@UEAA_NXZ
    virtual bool IsHiding();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@TrayUI@@UEAA_NXZ
    virtual bool IsInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorExcluded@TrayUI@@UEAAHPEAUHMONITOR__@@@Z
    virtual int IsMonitorExcluded(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMouseOverClassicTaskbar@TrayUI@@UEAAHPEAUHWND__@@I@Z
    virtual int IsMouseOverClassicTaskbar(HWND__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentationModeActive@TrayUI@@UEBA_NXZ
    virtual bool IsPresentationModeActive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryTaskbarLoaded@TrayUI@@UEAA_NXZ
    virtual bool IsPrimaryTaskbarLoaded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessingDesktopRaise@TrayUI@@UEBA_NXZ
    virtual bool IsProcessingDesktopRaise() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchButtonEnabled@TrayUI@@UEAA_NXZ
    virtual bool IsSearchButtonEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeAutoHideEnabled@TrayUI@@UEBA_NXZ
    virtual bool IsTabletModeAutoHideEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeEnabled@TrayUI@@UEBA_NXZ
    virtual bool IsTabletModeEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskViewEnabled@TrayUI@@UEBA_NXZ
    virtual bool IsTaskViewEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrayThreadStarting@TrayUI@@UEAAHXZ
    virtual int IsTrayThreadStarting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPolicies@TrayUI@@UEAAXXZ
    virtual void LoadPolicies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettingsBitmap@TrayUI@@QEAAX_N@Z
    void LoadSettingsBitmap(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LongEdgeSwipe@TrayUI@@QEAAXUtagPOINT@@@Z
    void LongEdgeSwipe(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeStuckRect@TrayUI@@UEAAXPEAUtagRECT@@PEBU2@UtagSIZE@@I@Z
    virtual void MakeStuckRect(tagRECT *, tagRECT const *, tagSIZE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinimizeAll@TrayUI@@UEAAHHPEAX@Z
    virtual int MinimizeAll(int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFeedsAboutTaskListUpdated@TrayUI@@UEAAXXZ
    virtual void NotifyFeedsAboutTaskListUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyImmersiveShellStarted@TrayUI@@UEAAX_N@Z
    virtual void NotifyImmersiveShellStarted(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySettingsChanged@TrayUI@@UEAAJXZ
    virtual long NotifySettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppCommand@TrayUI@@UEAA_JH@Z
    virtual int64_t OnAppCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppResolverChangeNotify@TrayUI@@UEAAXJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual void OnAppResolverChangeNotify(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreate@TrayUI@@UEAA_JXZ
    virtual int64_t OnCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayChanged@TrayUI@@UEAAXXZ
    virtual void OnDisplayChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoExitWindows@TrayUI@@UEAAXXZ
    virtual void OnDoExitWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamingFullScreenChanged@TrayUI@@UEAAX_N@Z
    virtual void OnGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLauncherVisibilityChange@TrayUI@@UEAAXXZ
    virtual void OnLauncherVisibilityChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNextCtl@TrayUI@@UEAAXXZ
    virtual void OnNextCtl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPowerBroadcast@TrayUI@@UEAAX_K_J@Z
    virtual void OnPowerBroadcast(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPowerMessage@TrayUI@@UEAAXPEAUHWND__@@I_K_J@Z
    virtual void OnPowerMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefresh@TrayUI@@UEAAXXZ
    virtual void OnRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellModeChanged@TrayUI@@UEAAXXZ
    virtual void OnShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartMenuDismissed@TrayUI@@UEAAXXZ
    virtual void OnStartMenuDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartTaskbarApiSurface@TrayUI@@UEAAXXZ
    virtual void OnStartTaskbarApiSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@TrayUI@@UEAAX_K@Z
    virtual void OnTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTrayDestroyed@TrayUI@@UEAAXXZ
    virtual void OnTrayDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWtsConnect@TrayUI@@UEAAXXZ
    virtual void OnWtsConnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryTaskbarLoaded@TrayUI@@UEAA?AUevent_token@winrt@@AEBU?$delegate@$$V@3@@Z
    virtual WindissectOpaque PrimaryTaskbarLoaded(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarDataInitialized@TrayUI@@UEAAHXZ
    virtual int ProgrammableTaskbarDataInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarDataUpdated@TrayUI@@QEAAXXZ
    void ProgrammableTaskbarDataUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarPassedLogonGates@TrayUI@@UEAAHXZ
    virtual int ProgrammableTaskbarPassedLogonGates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarReportClick@TrayUI@@UEAAXI_N@Z
    virtual void ProgrammableTaskbarReportClick(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammableTaskbarReportImpressions@TrayUI@@UEAAXXZ
    virtual void ProgrammableTaskbarReportImpressions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateEnumProc@TrayUI@@SAHPEAUHWND__@@_J@Z
    static int PropagateEnumProc(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryImmersiveShellService@TrayUI@@UEBAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryImmersiveShellService(_GUID const &, _GUID const &, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUserNotificationState@TrayUI@@UEAA_JXZ
    virtual int64_t QueryUserNotificationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDesktop@TrayUI@@UEAAXW4RAISEDESKTOPFLAGS@@@Z
    virtual void RaiseDesktop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSettings@TrayUI@@UEAAXXZ
    virtual void RefreshSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLocalActiveTaskbarTestId@TrayUI@@UEAAXPEAUHMONITOR__@@@Z
    virtual void RemoveLocalActiveTaskbarTestId(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportImpression@TrayUI@@QEAA?AUfire_and_forget@winrt@@UIrisCreative@Iris@Services@WindowsUdk@3@@Z
    WindissectOpaque ReportImpression(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeStuckRects@TrayUI@@UEAAXXZ
    virtual void ResizeStuckRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnFocusToTaskListItemFromFlyout@TrayUI@@UEAAXXZ
    virtual void ReturnFocusToTaskListItemFromFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RudenessChanged@TrayUI@@UEAAXH@Z
    virtual void RudenessChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunWinXMigrationTasks@TrayUI@@QEAAXXZ
    void RunWinXMigrationTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TrayUI@@QEAAJPEAUITrayUIHost@@@Z
    long RuntimeClassInitialize(ITrayUIHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveTrayStuff@TrayUI@@UEAAXXZ
    virtual void SaveTrayStuff();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveWindowPositions@TrayUI@@UEAAXI@Z
    virtual void SaveWindowPositions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenSizeChange@TrayUI@@UEAAXW4ScreenSizeChangeFlags@TrayCommon@@PEAUHWND__@@@Z
    virtual void ScreenSizeChange(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@TrayUI@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoHideFlags@TrayUI@@UEAAXI@Z
    virtual void SetAutoHideFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoHideState@TrayUI@@UEAAJH@Z
    virtual long SetAutoHideState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDashboardWidgetEntryPoint@TrayUI@@UEAAXAEBUhstring@winrt@@@Z
    virtual void SetDashboardWidgetEntryPoint(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeferredPosRectChange@TrayUI@@UEAAXH@Z
    virtual void SetDeferredPosRectChange(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragFullWindows@TrayUI@@UEAAX_N@Z
    virtual void SetDragFullWindows(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnSystemTray@TrayUI@@UEAAXXZ
    virtual void SetFocusOnSystemTray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToTaskUI@TrayUI@@UEAAXXZ
    virtual void SetFocusToTaskUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalMetrics@TrayUI@@UEAAXPEBUGlobalMetrics@@@Z
    virtual void SetGlobalMetrics(GlobalMetrics const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInSizeMove@TrayUI@@UEAAH_N@Z
    virtual int SetInSizeMove(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastActiveWindow@TrayUI@@UEAAXPEAUHWND__@@@Z
    virtual void SetLastActiveWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockState@TrayUI@@UEAAXI@Z
    virtual void SetLockState(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockState@TrayUI@@UEAAXW4TRIBIT@@@Z
    virtual void SetLockState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModalMode@TrayUI@@UEAAXI@Z
    virtual void SetModalMode(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRebarAccessibleProperties@TrayUI@@QEAAJXZ
    long SetRebarAccessibleProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRebarBandPosition@TrayUI@@UEAAXAEBUtagRECT@@@Z
    virtual void SetRebarBandPosition(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelfSizing@TrayUI@@UEAAX_N@Z
    virtual void SetSelfSizing(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStuckPlace@TrayUI@@UEAAXI@Z
    virtual void SetStuckPlace(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarModel@TrayUI@@UEAAJUTaskbarModel@Shell@UI@WindowsUdk@winrt@@@Z
    virtual long SetTaskbarModel(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnhideTimer@TrayUI@@UEAAXJJ@Z
    virtual void SetUnhideTimer(long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWinHomeListening@TrayUI@@UEAAXXZ
    virtual void SetWinHomeListening();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsBitmapLoaded@TrayUI@@QEAAJAEBUSettingsBitmapLoadInfo@@@Z
    long SettingsBitmapLoaded(SettingsBitmapLoadInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChanged@TrayUI@@UEAA?AUevent_token@winrt@@AEBU?$delegate@$$V@3@@Z
    virtual WindissectOpaque SettingsChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBeCloaked@TrayUI@@UEAA_NXZ
    virtual bool ShouldBeCloaked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExpandableTaskbarBeRaised@TrayUI@@UEAA_NXZ
    virtual bool ShouldExpandableTaskbarBeRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShyTaskbarStayExpanded@TrayUI@@UEAA_NXZ
    virtual bool ShouldShyTaskbarStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseSmallIcons@TrayUI@@UEBAHXZ
    virtual int ShouldUseSmallIcons() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDeskBand@TrayUI@@UEAAJAEBU_GUID@@@Z
    virtual long ShowDeskBand(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskbandOnly@TrayUI@@UEAAXH@Z
    virtual void ShowTaskbandOnly(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTrayProperties@TrayUI@@UEAAXPEBUtagRECT@@@Z
    virtual void ShowTrayProperties(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShyTaskbarExpansionChanged@TrayUI@@UEAAXXZ
    virtual void ShyTaskbarExpansionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeWindows@TrayUI@@UEAAXXZ
    virtual void SizeWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SlideWindow@TrayUI@@UEAAXPEAUHWND__@@PEBUtagRECT@@PEAUHMONITOR__@@_N3@Z
    virtual void SlideWindow(HWND__*, tagRECT const *, HMONITOR__*, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProgrammableTaskbarWork@TrayUI@@UEAAXXZ
    virtual void StartProgrammableTaskbarWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTaskbar@TrayUI@@UEAAXXZ
    virtual void StartTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabInvoked@TrayUI@@UEAAX_N@Z
    virtual void TabInvoked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarHasFocus@TrayUI@@UEAAHXZ
    virtual int TaskbarHasFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TogglePeopleButton@TrayUI@@UEAAXXZ
    virtual void TogglePeopleButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleTaskViewButton@TrayUI@@UEAAXXZ
    virtual void ToggleTaskViewButton();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TrayUI@@QEAA@XZ
    TrayUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unhide@TrayUI@@UEAAXW4TrayUnhideFlags@TrayCommon@@W4UnhideRequest@3@@Z
    virtual void Unhide(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBandSiteStyle@TrayUI@@UEAAXXZ
    virtual void UpdateBandSiteStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCloakState@TrayUI@@QEAAX_N@Z
    void UpdateCloakState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayMonitorInfoCollectionWorkAreas@TrayUI@@QEAAXXZ
    void UpdateDisplayMonitorInfoCollectionWorkAreas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNotificationAreaSize@TrayUI@@UEAAXH@Z
    virtual void UpdateNotificationAreaSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryTaskbarSize@TrayUI@@UEAAXHPEAUHMONITOR__@@@Z
    virtual void UpdateSecondaryTaskbarSize(int, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStuckRectOnMonitorChange@TrayUI@@QEAAXII@Z
    void UpdateStuckRectOnMonitorChange(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarSize@TrayUI@@UEAAXH@Z
    virtual void UpdateTaskbarSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskbarVisibility@TrayUI@@QEAAXXZ
    void UpdateTaskbarVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifySize@TrayUI@@UEAAX_N0PEAUHMONITOR__@@@Z
    virtual void VerifySize(bool, bool, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasFlyoutRequested@TrayUI@@UEAA_NXZ
    virtual bool WasFlyoutRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@TrayUI@@UEAA_JPEAUHWND__@@I_K_JPEA_N@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AccountAllBandsForTaskbarSizingBar@TrayUI@@QEAAXXZ
    void _AccountAllBandsForTaskbarSizingBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttachWindow@TrayUI@@QEAAXPEAUHWND__@@_N@Z
    void _AttachWindow(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoHideCollision@TrayUI@@QEAAXXZ
    void _AutoHideCollision();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcClipCoords@TrayUI@@QEAAXPEAUtagRECT@@PEBU2@1@Z
    void _CalcClipCoords(tagRECT *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcDragPlace@TrayUI@@QEAAIUtagPOINT@@@Z
    unsigned int _CalcDragPlace(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClipInternal@TrayUI@@QEAAXPEAUHWND__@@PEBUtagRECT@@@Z
    void _ClipInternal(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClipWindow@TrayUI@@QEAAXH@Z
    void _ClipWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloakUntilNextRender@TrayUI@@QEAAXXZ
    void _CloakUntilNextRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeHiddenRect@TrayUI@@QEAAXPEAUtagRECT@@I@Z
    void _ComputeHiddenRect(tagRECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindows@TrayUI@@QEAA_JXZ
    int64_t _CreateWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoneMoving@TrayUI@@QEAAXPEAUtagWINDOWPOS@@@Z
    void _DoneMoving(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAnimationManager@TrayUI@@QEAAJXZ
    long _EnsureAnimationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayRectFromPoint@TrayUI@@QEAAXPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@@Z
    void _GetDisplayRectFromPoint(HWND__*, tagPOINT, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSaveStateAndInitRects@TrayUI@@QEAAXXZ
    void _GetSaveStateAndInitRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStuckDisplayRect@TrayUI@@QEAAXPEAUtagRECT@@@Z
    void _GetStuckDisplayRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowSizes@TrayUI@@QEAAXIPEBUtagRECT@@PEAU2@1@Z
    void _GetWindowSizes(unsigned int, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAssignedAccessTaskbarBlocking@TrayUI@@QEAAXXZ
    void _HandleAssignedAccessTaskbarBlocking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleEnterMenuLoop@TrayUI@@QEAAXXZ
    void _HandleEnterMenuLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleImmersiveInvoke@TrayUI@@QEAA_NW4ImmersiveInvokeFlags@ImmersiveTray@@W4ShowHideWindowFlags@3@@Z
    bool _HandleImmersiveInvoke(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMonitorChanged@TrayUI@@QEAAXXZ
    void _HandleMonitorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMoving@TrayUI@@QEAAX_KPEAUtagRECT@@@Z
    void _HandleMoving(uint64_t, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSettingChange@TrayUI@@QEAAXPEAUHWND__@@I_K_J@Z
    void _HandleSettingChange(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSize@TrayUI@@QEAAXXZ
    void _HandleSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSizing@TrayUI@@QEAAH_KPEAUtagRECT@@I_NPEAUHMONITOR__@@@Z
    int _HandleSizing(uint64_t, tagRECT *, unsigned int, bool, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTrayPrivateSettingMessage@TrayUI@@QEAA_JK_J@Z
    int64_t _HandleTrayPrivateSettingMessage(unsigned long, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWindowPosChanging@TrayUI@@QEAAXPEAUtagWINDOWPOS@@@Z
    void _HandleWindowPosChanging(tagWINDOWPOS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Hide@TrayUI@@QEAAXXZ
    void _Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitBandsite@TrayUI@@QEAAXXZ
    void _InitBandsite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRows@TrayUI@@QEAAXXZ
    void _InitRows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@TrayUI@@QEAA_JXZ
    int64_t _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsActive@TrayUI@@QEAAHXZ
    int _IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KickStartAutohide@TrayUI@@QEAAXXZ
    void _KickStartAutohide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDPIChanged@TrayUI@@QEAAXXZ
    void _OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFocusMsg@TrayUI@@QEAAXI_K_J@Z
    void _OnFocusMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNewSystemSizes@TrayUI@@QEAAXXZ
    void _OnNewSystemSizes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSettingChange@TrayUI@@QEAAXPEAUHWND__@@_K_J@Z
    void _OnSettingChange(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTabNavigation@TrayUI@@QEAAX_N@Z
    void _OnTabNavigation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnThemeChanged@TrayUI@@QEAAXXZ
    void _OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateMessage@TrayUI@@QEAAXPEAUHWND__@@I_K_J@Z
    void _PropagateMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecalcStuckPos@TrayUI@@QEAAIPEAUtagRECT@@@Z
    unsigned int _RecalcStuckPos(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshSettingsAndBandSite@TrayUI@@QEAAXXZ
    void _RefreshSettingsAndBandSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterDropTargets@TrayUI@@QEAAXXZ
    void _RegisterDropTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportAutoHideStateToChildControls@TrayUI@@QEAAXI@Z
    void _ReportAutoHideStateToChildControls(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetZorder@TrayUI@@QEAAXH@Z
    void _ResetZorder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreWindowPos@TrayUI@@QEAAXXZ
    void _RestoreWindowPos();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAutoHideTimer@TrayUI@@QEAAXXZ
    void _SetAutoHideTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBandSiteTheme@TrayUI@@QEAAXXZ
    void _SetBandSiteTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRebarTheme@TrayUI@@QEAAXXZ
    void _SetRebarTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStuckMonitor@TrayUI@@QEAAJPEAUHMONITOR__@@@Z
    long _SetStuckMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStuckMonitorState@TrayUI@@QEAAXW4MonitorSwitchDerivation@TrayTelemetry@@@Z
    void _SetStuckMonitorState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAutoHideTray@TrayUI@@QEAA_NVAutoHideOnTaskbarHide@TaskbarAutoHideTelemetry@AutoHideTelemetry@@@Z
    bool _ShouldAutoHideTray(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldClipTaskbar@TrayUI@@QEAAHXZ
    int _ShouldClipTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldSubclassForSizingBar@TrayUI@@QEAAHXZ
    int _ShouldSubclassForSizingBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SlideStep@TrayUI@@QEAAXPEAUHWND__@@PEBUtagRECT@@11@Z
    void _SlideStep(HWND__*, tagRECT const *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SnapshotStuckRectSize@TrayUI@@QEAAXI@Z
    void _SnapshotStuckRectSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StuckTrayChange@TrayUI@@QEAAXXZ
    void _StuckTrayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleLanguageBand@TrayUI@@QEAAJ_J@Z
    long _ToggleLanguageBand(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleQL@TrayUI@@QEAAHHPEAUICatBandManager@@@Z
    int _ToggleQL(int, ICatBandManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnhideNow@TrayUI@@QEAAX_N@Z
    void _UnhideNow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAutoHideState@TrayUI@@QEAAX_N@Z
    void _UpdateAutoHideState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBorderPadding@TrayUI@@QEAAHXZ
    int _UpdateBorderPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDpiProperties@TrayUI@@QEAAX_N@Z
    void _UpdateDpiProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateStuckRectsForMonitor@TrayUI@@QEAAXPEAUHMONITOR__@@@Z
    void _UpdateStuckRectsForMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateStuckRectsForMonitorRect@TrayUI@@QEAAXPEBUtagRECT@@W4TrayStuckUpdateType@TrayTelemetry@@@Z
    void _UpdateStuckRectsForMonitorRect(tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTaskbandVisibility@TrayUI@@QEAAXXZ
    void _UpdateTaskbandVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVertical@TrayUI@@QEAAXIH@Z
    void _UpdateVertical(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnumTooltipWindowsProc@TrayUI@@SAHPEAUHWND__@@_J@Z
    static int s_EnumTooltipWindowsProc(HWND__*, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TrayUI@@UEAA@XZ
    virtual ~TrayUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GiveDesktopFocus@TrayUI@@AEAAXXZ
    void GiveDesktopFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadGlyphFont@TrayUI@@AEAAPEAUHFONT__@@H@Z
    HFONT__* LoadGlyphFont(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotificationAreaOverflowVisibilityChanged@TrayUI@@AEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque OnNotificationAreaOverflowVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUndockedActivationFailed@TrayUI@@AEAAXXZ
    void OnUndockedActivationFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSystemGlyphIcon@TrayUI@@AEAAXPEAUHDC__@@UtagSIZE@@KKPEAPEAUHBITMAP__@@@Z
    void RenderSystemGlyphIcon(HDC__*, tagSIZE, unsigned long, unsigned long, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkRectToStuckEdge@TrayUI@@AEBAXAEAUtagRECT@@H@Z
    void ShrinkRectToStuckEdge(tagRECT &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeUndockedComponents@TrayUI@@AEAA_NXZ
    bool TryInitializeUndockedComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadTaskbarFromXamlExtension@TrayUI@@AEAA_NXZ
    bool TryLoadTaskbarFromXamlExtension();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `GetDisplayRectFromRect` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetInSizeMove` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetUnhideTimer` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_HandleWindowPosChanging` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetDockedRect` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetAutoHideFlags` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `_ComputeHiddenRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetSelfSizing` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `s_EnumTooltipWindowsProc` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetTrayWindow` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetDesktopWindow` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitorDeviceId` | `struct winrt::hstring` | `Accessor` | `Pdb` | No (PDB) |
| `GetDashboardWidgetEntryPoint` | `struct winrt::hstring` | `Accessor` | `Pdb` | No (PDB) |
| `SetDashboardWidgetEntryPoint` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `HandleHoverUIVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ResetZorder` | `void` | `Method` | `Pdb` | No (PDB) |
| `RudenessChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateStuckRectsForMonitorRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `MakeStuckRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SnapshotStuckRectSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResizeStuckRects` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldAutoHideTray` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_UpdateStuckRectsForMonitor` | `void` | `Method` | `Pdb` | No (PDB) |
| `RefreshSettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `LoadPolicies` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetStuckMonitorState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateDpiProperties` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetMinSize` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetImmersiveShellServiceProvider` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnLauncherVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `RunWinXMigrationTasks` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleMessageIdle` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleMessageFromMessageLoop` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_GetSaveStateAndInitRects` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetStaticSafeWorkAreaForMonitor` | `struct winrt::Windows::Foundation::Rect` | `Accessor` | `Pdb` | No (PDB) |
| `GetDisplayMonitorInfoStructForMonitor` | `struct winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoStruct` | `Accessor` | `Pdb` | No (PDB) |
| `_RestoreWindowPos` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateWindows` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnThemeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateVertical` | `void` | `Method` | `Pdb` | No (PDB) |
| `LoadSettingsBitmap` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetRebarTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AccountAllBandsForTaskbarSizingBar` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldSubclassForSizingBar` | `int` | `Method` | `Pdb` | No (PDB) |
| `_UpdateBorderPadding` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SetBandSiteTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PropagateMessage` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleSettingChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSettingChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateDisplayMonitorInfoCollectionWorkAreas` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetStuckRectForMonitor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsExpandableTaskbarExpanded` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsExpandable` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `SlideWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SlideStep` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ClipWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ClipInternal` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldClipTaskbar` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetStuckDisplayRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CalcClipCoords` | `void` | `Method` | `Pdb` | No (PDB) |
| `AutoHideChangedOnMonitor` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetDisplayRectFromPoint` | `void` | `Method` | `Pdb` | No (PDB) |
| `PropagateEnumProc` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetTaskbarModel` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetExperienceManager` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsTabletModeEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `NotifySettingsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetColorTheme` | `enum COLORTHEME` | `Accessor` | `Pdb` | No (PDB) |
| `IsDeskBandShown` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRowCount` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsDeferedPosRectChange` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `BuildContextMenu` | `struct HMENU__*` | `Method` | `Pdb` | No (PDB) |
| `DeskBandRegistrationChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetSettingsIconBitmap` | `struct HBITMAP__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetTabletModeAutoHide` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskbandAvailableSpace` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `HideDeskBand` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowDeskBand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ToggleQL` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetMonitorDPI` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetStuckPlace` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `SetRebarBandPosition` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_IsActive` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsDesktopVisibleOnTrayMonitor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetDesktopModeAutoHide` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskbandHWND` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `SetLastActiveWindow` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `IsSearchButtonEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateStuckRectOnMonitorChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetSizingBarHeight` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrayForegroundControl` | `struct ITrustedComponentForegroundControl *` | `Accessor` | `Pdb` | No (PDB) |
| `GetActiveTaskbarTestId` | `struct _GUID` | `Accessor` | `Pdb` | No (PDB) |
| `GetDesktopRaised` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldUseSmallIcons` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetMinSize` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_StuckTrayChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `SettingsBitmapLoaded` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnAppResolverChangeNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetLegacyNotificationAreaSize` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `OnPowerBroadcast` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetLauncherVisibleMonitor` | `struct HMONITOR__*` | `Accessor` | `Pdb` | No (PDB) |
| `IsInitialized` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetStuckMonitor` | `struct HMONITOR__*` | `Accessor` | `Pdb` | No (PDB) |
| `_ReportAutoHideStateToChildControls` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AttachWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetGlobalMetrics` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_SetAutoHideTimer` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetCabinet` | `struct HINSTANCE__*` | `Accessor` | `Pdb` | No (PDB) |
| `SettingsChanged` | `struct winrt::event_token` | `Method` | `Pdb` | No (PDB) |
| `GetProxyImmersiveShellRegistrationProvider` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ImmersiveResize` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleWindowDestroyed` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetTaskListAnimation` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateNotificationAreaSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsPresentationModeActive` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GlassEnabled` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetNotificationAreaSize` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `InvisibleUnhide` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateBandSiteStyle` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetLastActiveWindow` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `InitGlobalMetrics` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetHKeyExplorer` | `struct HKEY__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetDragFullWindows` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrayUI` | `struct ITrayUI *` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitorMovedFrom` | `struct HMONITOR__*` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldExpandableTaskbarBeRaised` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_UnhideNow` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetStuckInfo` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_OnDPIChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateClassInstance` | `long` | `Method` | `Pdb` | No (PDB) |
| `ContextMenuInvoke` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireLockTaskbarContextMenuTelemetry` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleHeadlinesSettingsChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyFeedsAboutTaskListUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `TogglePeopleButton` | `void` | `Method` | `Pdb` | No (PDB) |
| `ToggleTaskViewButton` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateTaskbandVisibility` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnTrayDestroyed` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetIsNoToolbarsOnTaskbarPolicyEnabled` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `OnPowerMessage` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsDestroyed` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HandleFirstTime` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyImmersiveShellStarted` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnableGlass` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetStuckMonitor` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsMonitorExcluded` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `OnDoExitWindows` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnRefresh` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnWtsConnect` | `void` | `Method` | `Pdb` | No (PDB) |
| `RenderSystemGlyphIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsTrayThreadStarting` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `ActiveZbandChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureAccessibleName` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetVisualRect` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HandleCopyData` | `bool` | `Method` | `Pdb` | No (PDB) |
| `OnCreate` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `OnTimer` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScreenSizeChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetAutoHideFlags` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetRebarAccessibleProperties` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SizeWindows` | `void` | `Method` | `Pdb` | No (PDB) |
| `StartTaskbar` | `void` | `Method` | `Pdb` | No (PDB) |
| `TryLoadTaskbarFromXamlExtension` | `bool` | `Method` | `Pdb` | No (PDB) |
| `Unhide` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateTaskbarSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_GetWindowSizes` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Hide` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InitBandsite` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RefreshSettingsAndBandSite` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnNotificationAreaOverflowVisibilityChanged` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `InvalidateWorkAreaAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `IsExplorerShuttingDown` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `OnAppCommand` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnNewSystemSizes` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RegisterDropTargets` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnsureAnimationManager` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitRows` | `void` | `Method` | `Pdb` | No (PDB) |
| `TrayUI` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `~TrayUI` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `AddLocalActiveTaskbarTestId` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApplyRemoteSettings` | `long` | `Method` | `Pdb` | No (PDB) |
| `AssocChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `AsyncSaveSettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `BootImmersiveShell` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalcHitTest` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `CanMinimizeAll` | `int` | `Method` | `Pdb` | No (PDB) |
| `CanMove` | `int` | `Method` | `Pdb` | No (PDB) |
| `CanShowAppsOnTaskbarTabletMode` | `int` | `Method` | `Pdb` | No (PDB) |
| `CanSize` | `int` | `Method` | `Pdb` | No (PDB) |
| `CheckGDIHandleLimit` | `void` | `Method` | `Pdb` | No (PDB) |
| `Cleanup` | `void` | `Method` | `Pdb` | No (PDB) |
| `FillDisplayChangeData` | `int` | `Method` | `Pdb` | No (PDB) |
| `ForceRelayout` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetAutoHideFlags` | `[thunk]: public: virtual unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetBandSite` | `class Microsoft::WRL::ComPtr<struct IBandSite>` | `Accessor` | `Pdb` | No (PDB) |
| `GetComponentState` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetDestinationItemFromDataObject` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconSizePreference` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetImmersiveShellDispatcherQueue` | `struct winrt::Windows::System::DispatcherQueue` | `Accessor` | `Pdb` | No (PDB) |
| `GetMinimizeFlags` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitorDPI` | `[thunk]: public: virtual unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetMultimonStuckPlace` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPearl` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPearlRectForMonitor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPrimaryTaskbarButtonGroupCount` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetPrivilegedOperations` | `class Microsoft::WRL::ComPtr<struct IPrivilegedPresentationOperations>` | `Accessor` | `Pdb` | No (PDB) |
| `GetProgrammableTaskbarCampaignPlacementId` | `struct winrt::hstring` | `Accessor` | `Pdb` | No (PDB) |
| `GetProxyImmersiveShellComponentProvider` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRootOwner` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetSavedWindowPositions` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetSettingsIconBitmapForSystemMenu` | `struct HBITMAP__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetShakerRoot` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetStuckMonitor` | `[thunk]: public: virtual struct HMONITOR__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetStuckRect` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetStuckWidths` | `struct tagSIZE` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskbarController` | `struct winrt::WindowsUdk::UI::Shell::TaskbarControllerExtension` | `Accessor` | `Pdb` | No (PDB) |
| `GetTestProxy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrayViewOpts` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GiveDesktopFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleCommand` | `int` | `Method` | `Pdb` | No (PDB) |
| `HandleJumpViewVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandlePrivateCommand` | `bool` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskViewVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskbarHotkey` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTrayFlyoutVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleWinNumHotKey` | `void` | `Method` | `Pdb` | No (PDB) |
| `InitDisplayMonitorInfoCollectionWorkAreas` | `void` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsHiding` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsMouseOverClassicTaskbar` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsPrimaryTaskbarLoaded` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsProcessingDesktopRaise` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsTabletModeAutoHideEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsTaskViewEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `LoadGlyphFont` | `struct HFONT__*` | `Method` | `Pdb` | No (PDB) |
| `LongEdgeSwipe` | `void` | `Method` | `Pdb` | No (PDB) |
| `MinimizeAll` | `int` | `Method` | `Pdb` | No (PDB) |
| `OnDisplayChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnGamingFullScreenChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnNextCtl` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnShellModeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnStartMenuDismissed` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnStartTaskbarApiSurface` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnUndockedActivationFailed` | `void` | `Method` | `Pdb` | No (PDB) |
| `PrimaryTaskbarLoaded` | `struct winrt::event_token` | `Method` | `Pdb` | No (PDB) |
| `PrimaryTaskbarLoaded` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProgrammableTaskbarDataInitialized` | `int` | `Method` | `Pdb` | No (PDB) |
| `ProgrammableTaskbarDataUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProgrammableTaskbarPassedLogonGates` | `int` | `Method` | `Pdb` | No (PDB) |
| `ProgrammableTaskbarReportClick` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProgrammableTaskbarReportImpressions` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueryImmersiveShellService` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryUserNotificationState` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `RaiseDesktop` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveLocalActiveTaskbarTestId` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReportImpression` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `ReturnFocusToTaskListItemFromFlyout` | `void` | `Method` | `Pdb` | No (PDB) |
| `RuntimeClassInitialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `SaveTrayStuff` | `void` | `Method` | `Pdb` | No (PDB) |
| `SaveWindowPositions` | `void` | `Method` | `Pdb` | No (PDB) |
| `SendStateCaptureTelemetry` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetAutoHideState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetAutoHideState` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `SetDeferredPosRectChange` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetDragFullWindows` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetFocusOnSystemTray` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetFocusToTaskUI` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetGlobalMetrics` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetInSizeMove` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetLockState` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetLockState` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetLockState` | `[thunk]: public: virtual void` | `Accessor` | `Pdb` | No (PDB) |
| `SetModalMode` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetStuckPlace` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetTaskbarModel` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetUnhideTimer` | `[thunk]: public: virtual void` | `Accessor` | `Pdb` | No (PDB) |
| `SetWinHomeListening` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SettingsChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShouldBeCloaked` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShouldShyTaskbarStayExpanded` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShowTaskbandOnly` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShowTrayProperties` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShrinkRectToStuckEdge` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShyTaskbarExpansionChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `StartProgrammableTaskbarWork` | `void` | `Method` | `Pdb` | No (PDB) |
| `TabInvoked` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskbarHasFocus` | `int` | `Method` | `Pdb` | No (PDB) |
| `TryInitializeUndockedComponents` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UpdateCloakState` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateSecondaryTaskbarSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateTaskbarVisibility` | `void` | `Method` | `Pdb` | No (PDB) |
| `VerifySize` | `void` | `Method` | `Pdb` | No (PDB) |
| `WasFlyoutRequested` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_AutoHideCollision` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CalcDragPlace` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `_CloakUntilNextRender` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoneMoving` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleAssignedAccessTaskbarBlocking` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleEnterMenuLoop` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleImmersiveInvoke` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_HandleMonitorChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleMoving` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleSizing` | `int` | `Method` | `Pdb` | No (PDB) |
| `_HandleTrayPrivateSettingMessage` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_Initialize` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_KickStartAutohide` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnFocusMsg` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnTabNavigation` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RecalcStuckPos` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `_ToggleLanguageBand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateAutoHideState` | `void` | `Method` | `Pdb` | No (PDB) |
