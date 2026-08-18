# `global` :: `CTaskListWnd`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `taskbar.dll`. Total members: **202**.

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

// Reconstructed from taskbar.dll by Windissect. 202 member(s).
class CTaskListWnd {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOverflowFlyout@CTaskListWnd@@UEAAXXZ
    virtual void ActivateOverflowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTask@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long ActivateTask(ITaskGroup *, ITaskItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskListWnd@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllWindowsMinimized@CTaskListWnd@@UEAA_NXZ
    virtual bool AreAllWindowsMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSize@CTaskListWnd@@UEAAJXZ
    virtual long AutoSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseItem@CTaskListWnd@@UEAAXPEAUITaskItem@@@Z
    virtual void CloseItem(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsPinnedItems@CTaskListWnd@@UEAAHXZ
    virtual int ContainsPinnedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlyout@CTaskListWnd@@UEAA?AUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@W4TaskbarFlyoutKind@3456@@Z
    virtual WindissectOpaque CreateFlyout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableToolTip@CTaskListWnd@@UEAAXH@Z
    virtual void DisableToolTip(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllSecondaryUI@CTaskListWnd@@UEAAXXZ
    virtual void DismissAllSecondaryUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissJumpView@CTaskListWnd@@UEAAJPEAUITaskGroup@@@Z
    virtual long DismissJumpView(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissOverflowFlyoutAsync@CTaskListWnd@@UEAA?AUfire_and_forget@winrt@@XZ
    virtual WindissectOpaque DismissOverflowFlyoutAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissPopupMenu@CTaskListWnd@@UEAAJXZ
    virtual long DismissPopupMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessageToTaskbarHosts@CTaskListWnd@@UEAA_NPEBUtagMSG@@@Z
    virtual bool DispatchMessageToTaskbarHosts(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CTaskListWnd@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CTaskListWnd@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CTaskListWnd@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CTaskListWnd@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDesktopSwitch@CTaskListWnd@@UEAAXXZ
    virtual void ForceDesktopSwitch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonGroupCount@CTaskListWnd@@UEAAHXZ
    virtual int GetButtonGroupCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHeight@CTaskListWnd@@UEAAHPEAH@Z
    virtual int GetButtonHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonMargin@CTaskListWnd@@UEAAXPEAH0@Z
    virtual void GetButtonMargin(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTheme@CTaskListWnd@@UEAA?AW4COLORTHEME@@XZ
    virtual int GetColorTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTaskOrder@CTaskListWnd@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetCurrentTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupLocation@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@HPEAUtagRECT@@@Z
    virtual long GetGroupLocation(ITaskGroup *, ITaskItem *, int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupProgess@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAKPEAW4_TBPSTATE@@@Z
    virtual long GetGroupProgess(ITaskGroup *, unsigned long *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@CTaskListWnd@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHost@CTaskListWnd@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetHost(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAPEAUHICON__@@@Z
    virtual long GetIcon(ITaskGroup *, ITaskItem *, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForGroupAndItem@CTaskListWnd@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual WindissectOpaque GetIconForGroupAndItem(ITaskGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconForWindow@CTaskListWnd@@UEAA?AUIRandomAccessStream@Streams@Storage@Windows@winrt@@PEAUHWND__@@@Z
    virtual WindissectOpaque GetIconForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconId@CTaskListWnd@@UEAAHPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual int GetIconId(ITaskGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinRect@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetMinRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CTaskListWnd@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDPI@CTaskListWnd@@UEAAIXZ
    virtual unsigned int GetMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumRows@CTaskListWnd@@UEAAHXZ
    virtual int GetNumRows();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconDescription@CTaskListWnd@@UEAA?AUhstring@winrt@@PEAUITaskGroup@@@Z
    virtual WindissectOpaque GetOverlayIconDescription(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeTaskOrder@CTaskListWnd@@UEAAHPEAUITaskGroup@@@Z
    virtual int GetRelativeTaskOrder(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CTaskListWnd@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CTaskListWnd@@UEAAKXZ
    virtual unsigned long GetStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskButtonGroupInfo@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAI1PEA_N@Z
    virtual long GetTaskButtonGroupInfo(ITaskGroup *, unsigned int *, unsigned int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListWndSite@CTaskListWnd@@UEAAJPEAPEAUITaskListWndSite@@@Z
    virtual long GetTaskListWndSite(ITaskListWndSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarIconRect@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUtagRECT@@@Z
    virtual long GetTaskbarIconRect(ITaskGroup *, ITaskItem *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayHWND@CTaskListWnd@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTrayHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayMonitorRect@CTaskListWnd@@UEAAJPEAUtagRECT@@@Z
    virtual long GetTrayMonitorRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CTaskListWnd@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowCount@CTaskListWnd@@UEAAHXZ
    virtual int GetWindowCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@W4TaskGroupProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void GroupChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleAccelerator@CTaskListWnd@@UEAAJPEAUtagMSG@@@Z
    virtual long HandleAccelerator(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleClick@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayChange@CTaskListWnd@@UEAAXXZ
    virtual void HandleDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayNameChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleDisplayNameChanged(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExtendedUIClick@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@AEBULauncherOptions@System@Windows@winrt@@@Z
    virtual long HandleExtendedUIClick(ITaskGroup *, ITaskItem *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CTaskListWnd@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CTaskListWnd@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupPinned@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupPinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupUnpinned@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void HandleTaskGroupUnpinned(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CTaskListWnd@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWinNumHotKey@CTaskListWnd@@UEAAJFG@Z
    virtual long HandleWinNumHotKey(short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveAppHidden@CTaskListWnd@@UEAAXXZ
    virtual void ImmersiveAppHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskListWnd@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InclusionRealityCheck@CTaskListWnd@@UEAAXXZ
    virtual void InclusionRealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTaskListWnd@@UEAAJPEAUITaskItemFilter@@PEAUHMONITOR__@@PEBGPEAUITrayComponentHost@@@Z
    virtual long Initialize(ITaskItemFilter *, HMONITOR__*, unsigned short const *, ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContextMenuActive@CTaskListWnd@@UEAAHXZ
    virtual int IsContextMenuActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtendedUIVisible@CTaskListWnd@@UEAAHXZ
    virtual int IsExtendedUIVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupExpanded@CTaskListWnd@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsGroupExpanded(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHoverOverExtendedUI@CTaskListWnd@@UEAA_NXZ
    virtual bool IsHoverOverExtendedUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLivePreviewActive@CTaskListWnd@@UEAAHXZ
    virtual int IsLivePreviewActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnPrimaryTaskband@CTaskListWnd@@UEAAHXZ
    virtual int IsOnPrimaryTaskband();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutFocused@CTaskListWnd@@UEAA_NXZ
    virtual bool IsOverflowFlyoutFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverflowFlyoutVisible@CTaskListWnd@@UEAAHXZ
    virtual int IsOverflowFlyoutVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CTaskListWnd@@UEAA_NPEAUITaskGroup@@@Z
    virtual bool IsPinned(ITaskGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestingAttention@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEA_N@Z
    virtual long IsRequestingAttention(ITaskGroup *, ITaskItem *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingJumplistForHover@CTaskListWnd@@UEAA_NXZ
    virtual bool IsShowingJumplistForHover();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskAllowed@CTaskListWnd@@UEAA_NPEAUITaskItem@@@Z
    virtual bool IsTaskAllowed(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskExtendedUI@CTaskListWnd@@UEAAHPEAUITaskBtnGroup@@PEAUITaskItem@@@Z
    virtual int IsTaskExtendedUI(ITaskBtnGroup *, ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskTopLevelUI@CTaskListWnd@@UEAAHPEAUITaskItem@@@Z
    virtual int IsTaskTopLevelUI(ITaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransparent@CTaskListWnd@@UEAA_NXZ
    virtual bool IsTransparent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowSharing@CTaskListWnd@@UEAA_NXZ
    virtual bool IsWindowSharing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemThumbnailChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemThumbnailProperty@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ItemThumbnailChanged(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCloudDataReceived@CTaskListWnd@@UEAAXXZ
    virtual void NotifyCloudDataReceived();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDashboardPayloadChanged@CTaskListWnd@@UEAAXXZ
    virtual void NotifyDashboardPayloadChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIsWindowSharingChanged@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void NotifyIsWindowSharingChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySystemMenu@CTaskListWnd@@UEAAXXZ
    virtual void NotifySystemMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVirtualDesktopChanging@CTaskListWnd@@UEAAXXZ
    virtual void NotifyVirtualDesktopChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenu@CTaskListWnd@@UEAAXUtagPOINT@@PEAUHWND__@@_NPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void OnContextMenu(tagPOINT, HWND__*, bool, ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuAsync@CTaskListWnd@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@PEAUHWND__@@_NPEAUITaskGroup@@PEAUITaskItem@@@Z
    WindissectOpaque OnContextMenuAsync(tagPOINT, HWND__*, bool, ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PermitAutoHide@CTaskListWnd@@UEAAHXZ
    virtual int PermitAutoHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessJumpViewCloseWindow@CTaskListWnd@@UEAAXPEAUHWND__@@PEAUITaskGroup@@PEAUHMONITOR__@@@Z
    virtual void ProcessJumpViewCloseWindow(HWND__*, ITaskGroup *, HMONITOR__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskListWnd@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealityCheck@CTaskListWnd@@UEAAXXZ
    virtual void RealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawExtendedTask@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long RedrawExtendedTask(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawTask@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@K@Z
    virtual long RedrawTask(ITaskGroup *, ITaskItem *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskListWnd@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHighlightForAllButtons@CTaskListWnd@@UEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual void RemoveHighlightForAllButtons(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderTaskGroup@CTaskListWnd@@UEAAJPEAUITaskGroup@@0@Z
    virtual long ReorderTaskGroup(ITaskGroup *, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@CTaskListWnd@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivatingTaskFlag@CTaskListWnd@@UEAAXXZ
    virtual void SetActivatingTaskFlag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrag@CTaskListWnd@@UEAAJH@Z
    virtual long SetDrag(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsGroupExpanded@CTaskListWnd@@UEAAXPEAUITaskGroup@@_N@Z
    virtual void SetIsGroupExpanded(ITaskGroup *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CTaskListWnd@@UEAAXPEAUHMONITOR__@@PEBG@Z
    virtual void SetMonitor(HMONITOR__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeTaskOrder@CTaskListWnd@@UEAAXPEAUITaskGroup@@H@Z
    virtual void SetRelativeTaskOrder(ITaskGroup *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTaskListWnd@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskFilter@CTaskListWnd@@UEAAXPEAUITaskItemFilter@@@Z
    virtual void SetTaskFilter(ITaskItemFilter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarIconRect@CTaskListWnd@@UEAAJPEAUITaskGroup@@AEBUtagRECT@@@Z
    virtual long SetTaskbarIconRect(ITaskGroup *, tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@W4TaskItemVisualState@Shell@UI@WindowsUdk@winrt@@@Z
    virtual long SetVisualState(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChanged@CTaskListWnd@@UEAAJXZ
    virtual long SettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CTaskListWnd@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowJumpView@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@_N@Z
    virtual long ShowJumpView(ITaskGroup *, ITaskItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLegacyExtendedUIForKeyboardFocus@CTaskListWnd@@UEAAXAEBUTaskGroup@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void ShowLegacyExtendedUIForKeyboardFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLivePreview@CTaskListWnd@@UEAAJPEAUITaskItem@@K@Z
    virtual long ShowLivePreview(ITaskItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CTaskListWnd@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToItem@CTaskListWnd@@UEAAXPEAUITaskItem@@@Z
    virtual void SwitchToItem(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CTaskListWnd@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocus@CTaskListWnd@@UEAAXH@Z
    virtual void TakeFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskActiveTabUpdated@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@1@Z
    virtual long TaskActiveTabUpdated(ITaskGroup *, ITaskItem *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskCreated@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskCreated(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskDestroyed@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskDestroyed(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskInclusionChanged@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskInclusionChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskProgressUpdate@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@@Z
    virtual long TaskProgressUpdate(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveGroup@CTaskListWnd@@UEAA_NPEAUITaskGroup@@I@Z
    virtual bool TryMoveGroup(ITaskGroup *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveKeyboardFocusToFlyout@CTaskListWnd@@UEAAXXZ
    virtual void TryMoveKeyboardFocusToFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPromotePlaceholder@CTaskListWnd@@UEAAXPEAUITaskGroup@@@Z
    virtual void TryPromotePlaceholder(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverlayIcon@CTaskListWnd@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@PEAUHICON__@@I@Z
    virtual long UpdateOverlayIcon(ITaskGroup *, ITaskItem *, HICON__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryTraySizing@CTaskListWnd@@UEAAXXZ
    virtual void UpdatePrimaryTraySizing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@CTaskListWnd@@UEAAJXZ
    virtual long UpdateTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWnd@@UEAAXPEAUITaskGroup@@H@Z
    virtual void UpdateVisualTaskOrder(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualTaskOrder@CTaskListWnd@@UEAAXXZ
    virtual void UpdateVisualTaskOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowStateChanged@CTaskListWnd@@UEAAXXZ
    virtual void WindowStateChanged();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskListWnd@@IEAA@PEAUIObjectFactory@@@Z
    CTaskListWnd(IObjectFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FakeSystemMenuCB@CTaskListWnd@@KAXPEAUHWND__@@I_K_J@Z
    static void FakeSystemMenuCB(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerPoint@CTaskListWnd@@IEBA?AUtagPOINT@@AEBULauncherOptions@System@Windows@winrt@@PEAUHWND__@@@Z
    tagPOINT GetCallerPoint(WindissectOpaque const &, HWND__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipBackgroundColor@CTaskListWnd@@IEBAKXZ
    unsigned long GetToolTipBackgroundColor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSecondaryModelAndHostAsync@CTaskListWnd@@IEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque InitSecondaryModelAndHostAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTaskGroupTaskItem@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskGroupTaskItem@@@Z
    void InsertTaskGroupTaskItem(ITaskGroup *, ITaskGroupTaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupInOverflow@CTaskListWnd@@IEAA_NPEAUITaskGroup@@@Z
    bool IsGroupInOverflow(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskGroupInserted@CTaskListWnd@@IEAAXPEAUITaskGroup@@H@Z
    void NotifyTaskGroupInserted(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskGroupRemoved@CTaskListWnd@@IEAAXPEAUITaskGroup@@@Z
    void NotifyTaskGroupRemoved(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskGroupRepositioned@CTaskListWnd@@IEAAXPEAUITaskGroup@@H@Z
    void NotifyTaskGroupRepositioned(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtendedUIVisibilityChanged@CTaskListWnd@@IEAAXAEBUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@AEBUIInspectable@Foundation@Windows@6@@Z
    void OnExtendedUIVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverCardVisibilityChanged@CTaskListWnd@@IEAAXAEBUTaskbarFlyout@Shell@UI@WindowsUdk@winrt@@AEBUIInspectable@Foundation@Windows@6@@Z
    void OnHoverCardVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskGroupTaskItem@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskGroupTaskItem@@@Z
    void RemoveTaskGroupTaskItem(ITaskGroup *, ITaskGroupTaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowJumplistOnHover@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void ShowJumplistOnHover(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartJumplistOnHoverTimer@CTaskListWnd@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@_N@Z
    void StartJumplistOnHoverTimer(ITaskGroup *, ITaskItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTip@CTaskListWnd@@IEAAXXZ
    void UpdateToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolTipFont@CTaskListWnd@@IEAAXXZ
    void UpdateToolTipFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeJumpViewPosition@CTaskListWnd@@IEBAJPEAUITaskBtnGroup@@HAEAUPoint@Foundation@Windows@@AEAW4HorizontalAlignment@Xaml@UI@5@AEAW4VerticalAlignment@785@@Z
    long _ComputeJumpViewPosition(ITaskBtnGroup *, int, WindissectOpaque &, int &, int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTBGroup@CTaskListWnd@@IEAAPEAUITaskBtnGroup@@PEAUITaskGroup@@H@Z
    ITaskBtnGroup * _CreateTBGroup(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureJumpViewExperienceWrapper@CTaskListWnd@@IEAAJXZ
    long _EnsureJumpViewExperienceWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FakeSystemMenu@CTaskListWnd@@IEAAXPEAUHWND__@@K@Z
    void _FakeSystemMenu(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishMenu@CTaskListWnd@@IEAAXXZ
    void _FinishMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixupTaskIndicies@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@HH@Z
    void _FixupTaskIndicies(ITaskBtnGroup *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImmersiveLivePreviewWindow@CTaskListWnd@@IEAAJPEAUITaskItem@@PEAPEAUHWND__@@PEAUtagRECT@@@Z
    long _GetImmersiveLivePreviewWindow(ITaskItem *, HWND__* *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetJumpViewParams@CTaskListWnd@@IEBAJPEAUITaskBtnGroup@@PEAUITaskItem@@H_NPEAPEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z
    long _GetJumpViewParams(ITaskBtnGroup *, ITaskItem *, int, bool, ::Windows::Internal::Shell::JumpView::IJumpViewParams * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTBGroupFromGroup@CTaskListWnd@@IEAAPEAUITaskBtnGroup@@PEAUITaskGroup@@PEAH@Z
    ITaskBtnGroup * _GetTBGroupFromGroup(ITaskGroup *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUserPreferences@CTaskListWnd@@IEBAKXZ
    unsigned long _GetUserPreferences() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleClick@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@HW4eCLICKACTION@1@HH@Z
    void _HandleClick(ITaskBtnGroup *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleCreate@CTaskListWnd@@IEAA_JXZ
    int64_t _HandleCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleJumpViewDismissed@CTaskListWnd@@IEAAXXZ
    void _HandleJumpViewDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMenuMessage@CTaskListWnd@@IEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _HandleMenuMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleThemeChanged@CTaskListWnd@@IEAAX_N@Z
    void _HandleThemeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTimer@CTaskListWnd@@IEAAX_K@Z
    void _HandleTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestForTBGroup@CTaskListWnd@@IEAAPEAUITaskBtnGroup@@AEBUtagPOINT@@PEAHPEAW4eTBGROUPHITLOCATION@@@Z
    ITaskBtnGroup * _HitTestForTBGroup(tagPOINT const &, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsButtonGroupInOverflow@CTaskListWnd@@IEBA_NPEAUITaskBtnGroup@@@Z
    bool _IsButtonGroupInOverflow(ITaskBtnGroup *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHorizontal@CTaskListWnd@@IEBAHXZ
    int _IsHorizontal() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTaskbandUnique@CTaskListWnd@@IEBAHXZ
    int _IsTaskbandUnique() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveTaskBtnGroup@CTaskListWnd@@IEAAJHH@Z
    long _MoveTaskBtnGroup(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnJumpViewCancelled@CTaskListWnd@@IEAAXPEAUHSTRING__@@@Z
    void _OnJumpViewCancelled(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnJumpViewDismissed@CTaskListWnd@@IEAAXPEAUHSTRING__@@@Z
    void _OnJumpViewDismissed(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnJumpViewShown@CTaskListWnd@@IEAAXPEAUHSTRING__@@@Z
    void _OnJumpViewShown(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistVisualOrder@CTaskListWnd@@IEAAXXZ
    void _PersistVisualOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessMenuCloseWindowSync@CTaskListWnd@@IEAAXPEAUHWND__@@PEAUITaskBtnGroup@@@Z
    void _ProcessMenuCloseWindowSync(HWND__*, ITaskBtnGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@CTaskListWnd@@IEAAHXZ
    int _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetActiveItem@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@H@Z
    void _SetActiveItem(ITaskBtnGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetHotItem@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@HW4SetHotItemFlags@@@Z
    void _SetHotItem(ITaskBtnGroup *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TaskCreated@CTaskListWnd@@IEAAJPEAUITaskGroup@@PEAUITaskItem@@H@Z
    long _TaskCreated(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TaskDestroyedFinal@CTaskListWnd@@IEAAXPEAUITaskBtnGroup@@H@Z
    void _TaskDestroyedFinal(ITaskBtnGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TopLevelTaskFromExtendedTask@CTaskListWnd@@IEAAPEAUITaskItem@@PEAU2@@Z
    ITaskItem * _TopLevelTaskFromExtendedTask(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WillExtendedUIGlom@CTaskListWnd@@IEAAHPEAUITaskBtnGroup@@@Z
    int _WillExtendedUIGlom(ITaskBtnGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CTaskListWnd@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskListWnd@@MEAA@XZ
    virtual ~CTaskListWnd();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `ItemChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskProgressUpdate` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetOverlayIconDescription` | `struct winrt::hstring` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskButtonGroupInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateOverlayIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetTBGroupFromGroup` | `struct ITaskBtnGroup *` | `Method` | `Pdb` | No (PDB) |
| `_WillExtendedUIGlom` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetUserPreferences` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `RedrawTask` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetIsGroupExpanded` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `v_WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_EnsureJumpViewExperienceWrapper` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivateTask` | `long` | `Method` | `Pdb` | No (PDB) |
| `DismissJumpView` | `long` | `Method` | `Pdb` | No (PDB) |
| `SwitchToItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShowLivePreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `RealityCheck` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateTBGroup` | `struct ITaskBtnGroup *` | `Method` | `Pdb` | No (PDB) |
| `NotifyTaskGroupInserted` | `void` | `Method` | `Pdb` | No (PDB) |
| `_TaskDestroyedFinal` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyTaskGroupRemoved` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleThemeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateToolTipFont` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdatePrimaryTraySizing` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetButtonHeight` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_IsHorizontal` | `int` | `Method` | `Pdb` | No (PDB) |
| `AutoSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `TaskInclusionChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_TaskCreated` | `long` | `Method` | `Pdb` | No (PDB) |
| `TaskDestroyed` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetGroupProgess` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SyncDisplayChange` | `enum SyncDisplayChangeFlags` | `Method` | `Pdb` | No (PDB) |
| `GetMinRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `InclusionRealityCheck` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetIcon` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsRequestingAttention` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `AreAllWindowsMinimized` | `bool` | `Method` | `Pdb` | No (PDB) |
| `IsPinned` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `PermitAutoHide` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetTaskbarIconRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GroupChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateToolTip` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetToolTipBackgroundColor` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `_TopLevelTaskFromExtendedTask` | `struct ITaskItem *` | `Method` | `Pdb` | No (PDB) |
| `IsTaskTopLevelUI` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetNumRows` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetVisualState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateVisualTaskOrder` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `GetCurrentTaskOrder` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `ReorderTaskGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `_MoveTaskBtnGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetTrayHWND` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `_GetJumpViewParams` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetImmersiveLivePreviewWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetRelativeTaskOrder` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `IsLivePreviewActive` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `ContainsPinnedItems` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsGroupExpanded` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `CTaskListWnd` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `IsTaskExtendedUI` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitor` | `struct HMONITOR__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetStuckPlace` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskListWndSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnJumpViewDismissed` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetHWND` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `SetActivatingTaskFlag` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetButtonMargin` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `HandleImmersiveLauncherVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskCreated` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleSearchAppVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsTaskAllowed` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `NotifyDashboardPayloadChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ForceDesktopSwitch` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetGroupLocation` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ImmersiveAppHidden` | `void` | `Method` | `Pdb` | No (PDB) |
| `WindowStateChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleDisplayChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HitTestForTBGroup` | `struct ITaskBtnGroup *` | `Method` | `Pdb` | No (PDB) |
| `_RegisterWindowClass` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsContextMenuActive` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `DismissPopupMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleClick` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsExtendedUIVisible` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateTheme` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FixupTaskIndicies` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleClick` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleCreate` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_HandleTimer` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetActiveItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `InitSecondaryModelAndHostAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `NotifyVirtualDesktopChanging` | `void` | `Method` | `Pdb` | No (PDB) |
| `DisableToolTip` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetMonitorDPI` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `~CTaskListWnd` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `[thunk]: protected: virtual void *` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `ActivateOverflowFlyout` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `CloseItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateFlyout` | `struct winrt::WindowsUdk::UI::Shell::TaskbarFlyout` | `Method` | `Pdb` | No (PDB) |
| `DismissAllSecondaryUI` | `void` | `Method` | `Pdb` | No (PDB) |
| `DismissOverflowFlyoutAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `DispatchMessageToTaskbarHosts` | `bool` | `Method` | `Pdb` | No (PDB) |
| `DragEnter` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragLeave` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragOver` | `long` | `Method` | `Pdb` | No (PDB) |
| `Drop` | `long` | `Method` | `Pdb` | No (PDB) |
| `FakeSystemMenuCB` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetButtonGroupCount` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetCallerPoint` | `struct tagPOINT` | `Accessor` | `Pdb` | No (PDB) |
| `GetColorTheme` | `enum COLORTHEME` | `Accessor` | `Pdb` | No (PDB) |
| `GetHost` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconForGroupAndItem` | `struct winrt::Windows::Storage::Streams::IRandomAccessStream` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconForWindow` | `struct winrt::Windows::Storage::Streams::IRandomAccessStream` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconId` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetRelativeTaskOrder` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskbarIconRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrayMonitorRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowCount` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `HandleAccelerator` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleDisplayNameChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleExtendedUIClick` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskGroupPinned` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskGroupUnpinned` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskViewVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleWinNumHotKey` | `long` | `Method` | `Pdb` | No (PDB) |
| `ImmersiveShow` | `void` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `InsertTaskGroupTaskItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsGroupInOverflow` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsHoverOverExtendedUI` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsOnPrimaryTaskband` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsOverflowFlyoutFocused` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsOverflowFlyoutVisible` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsShowingJumplistForHover` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsTransparent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindowSharing` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ItemThumbnailChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyCloudDataReceived` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyIsWindowSharingChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifySystemMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyTaskGroupRepositioned` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnContextMenuAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `OnExtendedUIVisibilityChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnHoverCardVisibilityChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessJumpViewCloseWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `RedrawExtendedTask` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RemoveHighlightForAllButtons` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveTaskGroupTaskItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `SendStateCaptureTelemetry` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetDrag` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetMonitor` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetTaskFilter` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SettingsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShouldStayExpanded` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShowJumpView` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowJumplistOnHover` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShowLegacyExtendedUIForKeyboardFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `Shutdown` | `long` | `Method` | `Pdb` | No (PDB) |
| `StartJumplistOnHoverTimer` | `void` | `Method` | `Pdb` | No (PDB) |
| `TakeFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskActiveTabUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `TryMoveGroup` | `bool` | `Method` | `Pdb` | No (PDB) |
| `TryMoveKeyboardFocusToFlyout` | `void` | `Method` | `Pdb` | No (PDB) |
| `TryPromotePlaceholder` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateVisualTaskOrder` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ComputeJumpViewPosition` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FakeSystemMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FinishMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleJumpViewDismissed` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleMenuMessage` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_IsButtonGroupInOverflow` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_IsTaskbandUnique` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnJumpViewCancelled` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnJumpViewShown` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PersistVisualOrder` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ProcessMenuCloseWindowSync` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetHotItem` | `void` | `Method` | `Pdb` | No (PDB) |
