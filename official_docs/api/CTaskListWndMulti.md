# `global` :: `CTaskListWndMulti`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `taskbar.dll`. Total members: **163**.

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

// Reconstructed from taskbar.dll by Windissect. 163 member(s).
class CTaskListWndMulti {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOverflowFlyout@CTaskListWndMulti@@UEAAXXZ
    virtual void ActivateOverflowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTask@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long ActivateTask(ITaskGroup *, ITaskItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskListWndMulti@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllWindowsMinimized@CTaskListWndMulti@@UEAA_NXZ
    virtual bool AreAllWindowsMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSize@CTaskListWndMulti@@UEAAJXZ
    virtual long AutoSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTaskbarForNavigate@CTaskListWndMulti@@UEAAJPEAUITaskListUI@@HPEAPEAU2@@Z
    virtual long ComputeTaskbarForNavigate(ITaskListUI *, int, ITaskListUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPinnedItems@CTaskListWndMulti@@UEAAHXZ
    virtual int ContainsPinnedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlyout@CTaskListWndMulti@@UEAA?AUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@W4TaskbarFlyoutKind@3456@@Z
    virtual WindissectOpaque CreateFlyout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllSecondaryUI@CTaskListWndMulti@@UEAAXXZ
    virtual void DismissAllSecondaryUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissJumpView@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@@Z
    virtual long DismissJumpView(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOverflowFlyoutAsync@CTaskListWndMulti@@UEAA?AUfire_and_forget@winrt@@XZ
    virtual WindissectOpaque DismissOverflowFlyoutAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissPopupMenu@CTaskListWndMulti@@UEAAJXZ
    virtual long DismissPopupMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessageToTaskbarHosts@CTaskListWndMulti@@UEAA_NPEBUtagMSG@@@Z
    virtual bool DispatchMessageToTaskbarHosts(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDesktopSwitch@CTaskListWndMulti@@UEAAXXZ
    virtual void ForceDesktopSwitch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDesktopSwitchOnMonitor@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void ForceDesktopSwitchOnMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonGroupCount@CTaskListWndMulti@@UEAAHXZ
    virtual int GetButtonGroupCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHeight@CTaskListWndMulti@@UEAAHPEAH@Z
    virtual int GetButtonHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonMargin@CTaskListWndMulti@@UEAAXPEAH0@Z
    virtual void GetButtonMargin(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTheme@CTaskListWndMulti@@UEAA?AW4COLORTHEME@@XZ
    virtual int GetColorTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTaskOrder@CTaskListWndMulti@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetCurrentTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupProgess@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAKPEAW4_TBPSTATE@@@Z
    virtual long GetGroupProgess(ITaskGroup *, unsigned long *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@CTaskListWndMulti@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAPEAUHICON__@@@Z
    virtual long GetIcon(ITaskGroup *, ITaskItem *, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForGroupAndItem@CTaskListWndMulti@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual WindissectOpaque GetIconForGroupAndItem(ITaskGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForWindow@CTaskListWndMulti@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUHWND__@@@Z
    virtual WindissectOpaque GetIconForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAutoHiddenFromMonitor@CTaskListWndMulti@@UEAAHPEAUHMONITOR__@@@Z
    virtual int GetIsAutoHiddenFromMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinRect@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetMinRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CTaskListWndMulti@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDPI@CTaskListWndMulti@@UEAAIXZ
    virtual unsigned int GetMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumRows@CTaskListWndMulti@@UEAAHXZ
    virtual int GetNumRows();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconDescription@CTaskListWndMulti@@UEAA?AUhstring@winrt@@PEAUITaskGroup@@@Z
    virtual WindissectOpaque GetOverlayIconDescription(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDropTarget@CTaskListWndMulti@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPrimaryDropTarget(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeTaskOrder@CTaskListWndMulti@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetRelativeTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CTaskListWndMulti@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CTaskListWndMulti@@UEAAKXZ
    virtual unsigned long GetStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckRectFromMonitor@CTaskListWndMulti@@UEAAJPEAUHMONITOR__@@PEAUtagRECT@@@Z
    virtual long GetStuckRectFromMonitor(HMONITOR__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskButtonGroupInfo@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAI1PEA_N@Z
    virtual long GetTaskButtonGroupInfo(ITaskGroup *, unsigned int *, unsigned int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListWndSite@CTaskListWndMulti@@UEAAJPEAPEAUITaskListWndSite@@@Z
    virtual long GetTaskListWndSite(ITaskListWndSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarIconRect@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetTaskbarIconRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayHWND@CTaskListWndMulti@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTrayHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayMonitorRect@CTaskListWndMulti@@UEAAJPEAUtagRECT@@@Z
    virtual long GetTrayMonitorRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowCount@CTaskListWndMulti@@UEAAHXZ
    virtual int GetWindowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@W4TaskGroupProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void GroupChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleAccelerator@CTaskListWndMulti@@UEAAJPEAUtagMSG@@@Z
    virtual long HandleAccelerator(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleClick@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayChange@CTaskListWndMulti@@UEAAXXZ
    virtual void HandleDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayNameChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleDisplayNameChanged(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExtendedUIClick@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleExtendedUIClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGamingFullScreenChanged@CTaskListWndMulti@@UEAAX_N@Z
    virtual void HandleGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveInvokeOnMonitor@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void HandleImmersiveInvokeOnMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleShellModeChanged@CTaskListWndMulti@@UEAAXXZ
    virtual void HandleShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupPinned@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupPinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupUnpinned@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupUnpinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CTaskListWndMulti@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWinNumHotKey@CTaskListWndMulti@@UEAAJFG@Z
    virtual long HandleWinNumHotKey(short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveAppHidden@CTaskListWndMulti@@UEAAXXZ
    virtual void ImmersiveAppHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskListWndMulti@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void ImmersiveShow(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InclusionRealityCheck@CTaskListWndMulti@@UEAAXXZ
    virtual void InclusionRealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTaskListWndMulti@@UEAAJPEAUITaskItemFilter@@PEAUHMONITOR__@@PEBGPEAUITrayComponentHost@@@Z
    virtual long Initialize(ITaskItemFilter *, HMONITOR__*, unsigned short const *, ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnyTrayInSizeMove@CTaskListWndMulti@@UEAAHXZ
    virtual int IsAnyTrayInSizeMove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtendedUIVisible@CTaskListWndMulti@@UEAAHXZ
    virtual int IsExtendedUIVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupExpanded@CTaskListWndMulti@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsGroupExpanded(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoverOverExtendedUI@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsHoverOverExtendedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnPrimaryTaskband@CTaskListWndMulti@@UEAAHXZ
    virtual int IsOnPrimaryTaskband();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutFocused@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsOverflowFlyoutFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutVisible@CTaskListWndMulti@@UEAAHXZ
    virtual int IsOverflowFlyoutVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CTaskListWndMulti@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsPinned(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestingAttention@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEA_N@Z
    virtual long IsRequestingAttention(ITaskGroup *, ITaskItem *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingJumplistForHover@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsShowingJumplistForHover();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskAllowed@CTaskListWndMulti@@UEAA_NPEAUITaskItem@@@Z
    virtual bool IsTaskAllowed(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransparent@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsTransparent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrayWindow@CTaskListWndMulti@@UEAAJPEAUHWND__@@@Z
    virtual long IsTrayWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowSharing@CTaskListWndMulti@@UEAA_NXZ
    virtual bool IsWindowSharing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemThumbnailChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemThumbnailProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemThumbnailChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCloudDataReceived@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifyCloudDataReceived();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDashboardPayloadChanged@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifyDashboardPayloadChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIsWindowSharingChanged@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void NotifyIsWindowSharingChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySystemMenu@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifySystemMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVirtualDesktopChanging@CTaskListWndMulti@@UEAAXXZ
    virtual void NotifyVirtualDesktopChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PermitAutoHide@CTaskListWndMulti@@UEAAHXZ
    virtual int PermitAutoHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessJumpViewCloseWindow@CTaskListWndMulti@@UEAAXPEAUHWND__@@PEAUITaskGroup@@PEAUHMONITOR__@@@Z
    virtual void ProcessJumpViewCloseWindow(HWND__*, ITaskGroup *, HMONITOR__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskListWndMulti@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTaskListWndMulti@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealityCheck@CTaskListWndMulti@@UEAAXXZ
    virtual void RealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawExtendedTask@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long RedrawExtendedTask(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawTask@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@K@Z
    virtual long RedrawTask(ITaskGroup *, ITaskItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshTaskFilter@CTaskListWndMulti@@UEAAXXZ
    virtual void RefreshTaskFilter();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskListWndMulti@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHighlightForAllButtons@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void RemoveHighlightForAllButtons(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderTaskGroup@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@0@Z
    virtual long ReorderTaskGroup(ITaskGroup *, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResendSecondaryStuckPlace@CTaskListWndMulti@@UEAAXXZ
    virtual void ResendSecondaryStuckPlace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAnimationState@CTaskListWndMulti@@UEAAXXZ
    virtual void ResetAnimationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryTaskbarLoaded@CTaskListWndMulti@@UEAAXPEAUITaskListUI@@_N@Z
    virtual void SecondaryTaskbarLoaded(ITaskListUI *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageW@CTaskListWndMulti@@UEAAXI_K_J@Z
    virtual void SendMessageW(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@CTaskListWndMulti@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivatingTaskFlag@CTaskListWndMulti@@UEAAXXZ
    virtual void SetActivatingTaskFlag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrag@CTaskListWndMulti@@UEAAJH@Z
    virtual long SetDrag(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsGroupExpanded@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@_N@Z
    virtual void SetIsGroupExpanded(ITaskGroup *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@PEBG@Z
    virtual void SetMonitor(HMONITOR__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedraw@CTaskListWndMulti@@UEAA?AUSetRedrawState@@H@Z
    virtual SetRedrawState SetRedraw(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeTaskOrder@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@H@Z
    virtual void SetRelativeTaskOrder(ITaskGroup *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryStuckPlace@CTaskListWndMulti@@UEAAXK@Z
    virtual void SetSecondaryStuckPlace(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTaskListWndMulti@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskFilter@CTaskListWndMulti@@UEAAXPEAUITaskItemFilter@@@Z
    virtual void SetTaskFilter(ITaskItemFilter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarIconRect@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@AEBUtagRECT@@@Z
    virtual long SetTaskbarIconRect(ITaskGroup *, tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemVisualState@Shell@UI@WindowsUdk@winrt@@@Z
    virtual long SetVisualState(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChanged@CTaskListWndMulti@@UEAAJXZ
    virtual long SettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CTaskListWndMulti@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowJumpView@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@_N@Z
    virtual long ShowJumpView(ITaskGroup *, ITaskItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLegacyExtendedUIForKeyboardFocus@CTaskListWndMulti@@UEAAXAEBUTaskGroup@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ShowLegacyExtendedUIForKeyboardFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CTaskListWndMulti@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StuckTrayMonitorChanged@CTaskListWndMulti@@UEAAXPEAUHMONITOR__@@@Z
    virtual void StuckTrayMonitorChanged(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CTaskListWndMulti@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocus@CTaskListWndMulti@@UEAAXH@Z
    virtual void TakeFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskActiveTabUpdated@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@1@Z
    virtual long TaskActiveTabUpdated(ITaskGroup *, ITaskItem *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskCreated@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskCreated(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskDestroyed@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskDestroyed(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskInclusionChanged@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskInclusionChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskProgressUpdate@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskProgressUpdate(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveGroup@CTaskListWndMulti@@UEAA_NPEAUITaskGroup@@I@Z
    virtual bool TryMoveGroup(ITaskGroup *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveKeyboardFocusToFlyout@CTaskListWndMulti@@UEAAXXZ
    virtual void TryMoveKeyboardFocusToFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPromotePlaceholder@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@@Z
    virtual void TryPromotePlaceholder(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverlayIcon@CTaskListWndMulti@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUHICON__@@I@Z
    virtual long UpdateOverlayIcon(ITaskGroup *, ITaskItem *, HICON__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryTraySizing@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdatePrimaryTraySizing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryUIPositions@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdateSecondaryUIPositions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTaskBandTheme@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdateTaskBandTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@CTaskListWndMulti@@UEAAJXZ
    virtual long UpdateTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWndMulti@@UEAAXXZ
    virtual void UpdateVisualTaskOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWndMulti@@UEAAXPEAUITaskGroup@@H@Z
    virtual void UpdateVisualTaskOrder(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowStateChanged@CTaskListWndMulti@@UEAAXXZ
    virtual void WindowStateChanged();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskListWndMulti@@IEAA@PEAUIObjectFactory@@PEAUITaskItemFilterFactory@@PEAUITrayComponentHost@@@Z
    CTaskListWndMulti(IObjectFactory *, ITaskItemFilterFactory *, ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSecondaryTaskListWnd@CTaskListWndMulti@@IEAAXPEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SecondaryTaskbarInitialization@TaskbarTip@@U12@@details@tip2@@@tip2@@PEBG@Z
    void _CreateSecondaryTaskListWnd(HMONITOR__*, WindissectOpaque, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumDisplayMonitors@CTaskListWndMulti@@IEAAXXZ
    void _EnumDisplayMonitors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPendingSecondaryTaskListWnd@CTaskListWndMulti@@IEAAPEAUITaskListUI@@PEAUHMONITOR__@@@Z
    ITaskListUI * _GetPendingSecondaryTaskListWnd(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSecondaryTaskListWnd@CTaskListWndMulti@@IEAAPEAUITaskListUI@@PEAUHMONITOR__@@PEBUtagRECT@@PEBG@Z
    ITaskListUI * _GetSecondaryTaskListWnd(HMONITOR__*, tagRECT const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskListWnd@CTaskListWndMulti@@IEAAPEAUITaskListUI@@PEAUHMONITOR__@@@Z
    ITaskListUI * _GetTaskListWnd(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshFilter@CTaskListWndMulti@@IEAAXPEAUITaskListUI@@_N@Z
    void _RefreshFilter(ITaskListUI *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MonitorEnumProc@CTaskListWndMulti@@KAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int s_MonitorEnumProc(HMONITOR__*, HDC__*, tagRECT *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskListWndMulti@@MEAA@XZ
    virtual ~CTaskListWndMulti();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `ItemChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskProgressUpdate` | `long` | `Method` | `Pdb` | No (PDB) |
| `RedrawTask` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateOverlayIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivateTask` | `long` | `Method` | `Pdb` | No (PDB) |
| `RealityCheck` | `void` | `Method` | `Pdb` | No (PDB) |
| `SecondaryTaskbarLoaded` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateSecondaryUIPositions` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnumDisplayMonitors` | `void` | `Method` | `Pdb` | No (PDB) |
| `AutoSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `TaskInclusionChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `PermitAutoHide` | `int` | `Method` | `Pdb` | No (PDB) |
| `GroupChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `s_MonitorEnumProc` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsAnyTrayInSizeMove` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetIsAutoHiddenFromMonitor` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateTaskBandTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetStuckRectFromMonitor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetSecondaryTaskListWnd` | `struct ITaskListUI *` | `Method` | `Pdb` | No (PDB) |
| `ContainsPinnedItems` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetMonitor` | `struct HMONITOR__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitorDPI` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RefreshTaskFilter` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RefreshFilter` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskDestroyed` | `long` | `Method` | `Pdb` | No (PDB) |
| `TaskCreated` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetActivatingTaskFlag` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateTheme` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForceDesktopSwitchOnMonitor` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetTaskListWnd` | `struct ITaskListUI *` | `Method` | `Pdb` | No (PDB) |
| `GetMinRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `HandleImmersiveLauncherVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `HandleSearchAppVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `DismissPopupMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetRedraw` | `struct SetRedrawState` | `Accessor` | `Pdb` | No (PDB) |
| `RedrawExtendedTask` | `long` | `Method` | `Pdb` | No (PDB) |
| `SyncDisplayChange` | `enum SyncDisplayChangeFlags` | `Method` | `Pdb` | No (PDB) |
| `ReorderTaskGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `SendMessageW` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdatePrimaryTraySizing` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyDashboardPayloadChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateVisualTaskOrder` | `void` | `Method` | `Pdb` | No (PDB) |
| `SettingsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentTaskOrder` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetButtonHeight` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `WindowStateChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `DismissAllSecondaryUI` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskViewVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetRelativeTaskOrder` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `NotifyVirtualDesktopChanging` | `void` | `Method` | `Pdb` | No (PDB) |
| `CTaskListWndMulti` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `GetPrimaryDropTarget` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `HandleDisplayChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetHWND` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetButtonMargin` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ForceDesktopSwitch` | `void` | `Method` | `Pdb` | No (PDB) |
| `ImmersiveShow` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetMonitor` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetTaskFilter` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `TakeFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetTaskListWndSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrayMonitorRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `~CTaskListWndMulti` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `ActivateOverflowFlyout` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AreAllWindowsMinimized` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ComputeTaskbarForNavigate` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateFlyout` | `struct winrt::WindowsUdk::UI::Shell::TaskbarFlyout` | `Method` | `Pdb` | No (PDB) |
| `DismissJumpView` | `long` | `Method` | `Pdb` | No (PDB) |
| `DismissOverflowFlyoutAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `DispatchMessageToTaskbarHosts` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetButtonGroupCount` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetColorTheme` | `enum COLORTHEME` | `Accessor` | `Pdb` | No (PDB) |
| `GetGroupProgess` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIcon` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconForGroupAndItem` | `struct winrt::Windows::Storage::Streams::IRandomAccessStream` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconForWindow` | `struct winrt::Windows::Storage::Streams::IRandomAccessStream` | `Accessor` | `Pdb` | No (PDB) |
| `GetNumRows` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetOverlayIconDescription` | `struct winrt::hstring` | `Accessor` | `Pdb` | No (PDB) |
| `GetRelativeTaskOrder` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetStuckPlace` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskButtonGroupInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskbarIconRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrayHWND` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowCount` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `HandleAccelerator` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleClick` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleDisplayNameChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleExtendedUIClick` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleGamingFullScreenChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleImmersiveInvokeOnMonitor` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleImmersiveLauncherVisibilityChange` | `[thunk]: public: virtual void` | `Method` | `Pdb` | No (PDB) |
| `HandleSearchAppVisibilityChange` | `[thunk]: public: virtual void` | `Method` | `Pdb` | No (PDB) |
| `HandleShellModeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskGroupPinned` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskGroupUnpinned` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskViewVisibilityChange` | `[thunk]: public: virtual void` | `Method` | `Pdb` | No (PDB) |
| `HandleWinNumHotKey` | `long` | `Method` | `Pdb` | No (PDB) |
| `ImmersiveAppHidden` | `void` | `Method` | `Pdb` | No (PDB) |
| `ImmersiveShow` | `void` | `Method` | `Pdb` | No (PDB) |
| `InclusionRealityCheck` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsExtendedUIVisible` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsGroupExpanded` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsHoverOverExtendedUI` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsOnPrimaryTaskband` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsOverflowFlyoutFocused` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsOverflowFlyoutVisible` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsPinned` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsRequestingAttention` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsShowingJumplistForHover` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsTaskAllowed` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsTransparent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsTrayWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindowSharing` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ItemThumbnailChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyCloudDataReceived` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyIsWindowSharingChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifySystemMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessJumpViewCloseWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryService` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RemoveHighlightForAllButtons` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResendSecondaryStuckPlace` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetAnimationState` | `void` | `Method` | `Pdb` | No (PDB) |
| `SendStateCaptureTelemetry` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetDrag` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetIsGroupExpanded` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetSecondaryStuckPlace` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTaskbarIconRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetVisualState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldStayExpanded` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShowJumpView` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowLegacyExtendedUIForKeyboardFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `Shutdown` | `long` | `Method` | `Pdb` | No (PDB) |
| `StuckTrayMonitorChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskActiveTabUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `TryMoveGroup` | `bool` | `Method` | `Pdb` | No (PDB) |
| `TryMoveKeyboardFocusToFlyout` | `void` | `Method` | `Pdb` | No (PDB) |
| `TryPromotePlaceholder` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateVisualTaskOrder` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateSecondaryTaskListWnd` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetPendingSecondaryTaskListWnd` | `struct ITaskListUI *` | `Method` | `Pdb` | No (PDB) |
