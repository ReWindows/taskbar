# `global` :: `CTaskBand`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `taskbar.dll`. Total members: **325**.

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

// Reconstructed from taskbar.dll by Windissect. 325 member(s).
class CTaskBand {
public:
    class CDestroyWindowTask;
    class CInitialDesktopWindowsPopulatedTask;
    class CLauncherTask;
    class CPinListModifyTask;
    class CReorderWindowTask;
    class CResolveWindowTask;
    class CTaskItemSite;
    class PendingPinReplacement;
    class PendingTaskGroupTaskItem;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGhostPinnedItem@CTaskBand@@UEAAJPEAUIDataObject@@PEAPEAUITaskGroup@@PEAPEAUIShellItem@@@Z
    virtual long AddGhostPinnedItem(IDataObject *, ITaskGroup * *, IShellItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowShowJumplistOnHover@CTaskBand@@UEAA_NXZ
    virtual bool AllowShowJumplistOnHover();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppClosing@CTaskBand@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long AppClosing(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CTaskBand@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinDestinationToTarget@CTaskBand@@UEAAJPEAUIDataObject@@PEAUITaskGroup@@PEAPEAUIShellItem@@2PEAPEAGH@Z
    virtual long CanPinDestinationToTarget(IDataObject *, ITaskGroup *, IShellItem * *, IShellItem * *, unsigned short * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRenderComposited@CTaskBand@@UEAAJPEAH@Z
    virtual long CanRenderComposited(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSize@CTaskBand@@UEAAXH@Z
    virtual void CheckSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CTaskBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseItem@CTaskBand@@UEAAXPEAUITaskItem@@@Z
    virtual void CloseItem(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWnd@CTaskBand@@UEAAXPEAUHWND__@@@Z
    virtual void CloseWnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTaskbarForNavigate@CTaskBand@@UEAAJPEAUITaskListUI@@HPEAPEAU2@@Z
    virtual long ComputeTaskbarForNavigate(ITaskListUI *, int, ITaskListUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CTaskBand@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentVirtualDesktopChanged@CTaskBand@@UEAAJPEAUIVirtualDesktop@@0@Z
    virtual long CurrentVirtualDesktopChanged(IVirtualDesktop *, IVirtualDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentVirtualDesktopChangedAnimated@CTaskBand@@UEAAJPEAUIVirtualDesktop@@0@Z
    virtual long CurrentVirtualDesktopChangedAnimated(IVirtualDesktop *, IVirtualDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessageToTaskbarHosts@CTaskBand@@UEAA_NPEBUtagMSG@@@Z
    virtual bool DispatchMessageToTaskbarHosts(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CTaskBand@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleStringForBadge@CTaskBand@@UEAAJPEAUIBadgeData@@PEAPEAG@Z
    virtual long GetAccessibleStringForBadge(IBadgeData *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CTaskBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsInRawPixelsRelativeToDesktop@CTaskBand@@UEAA?AUtagRECT@@XZ
    virtual tagRECT GetBoundsInRawPixelsRelativeToDesktop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CTaskBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionState@CTaskBand@@UEAAJPEAH@Z
    virtual long GetCompositionState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiForWndSite@CTaskBand@@UEAAIXZ
    virtual unsigned int GetDpiForWndSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByTime@CTaskBand@@UEAAJKW4eTIMEFLAGS@@PEAPEAUITaskGroup@@PEAK@Z
    virtual long GetGroupByTime(unsigned long, int, ITaskGroup * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconId@CTaskBand@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@HPEAH@Z
    virtual long GetIconId(ITaskGroup *, ITaskItem *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSize@CTaskBand@@UEAAXW4IconType@IconUtils@@PEAUtagSIZE@@@Z
    virtual void GetIconSize(int, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageList@CTaskBand@@UEAAJIPEAPEAU_IMAGELIST@@@Z
    virtual long GetImageList(unsigned int, _IMAGELIST * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultimonStuckPlace@CTaskBand@@UEAAKXZ
    virtual unsigned long GetMultimonStuckPlace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearl@CTaskBand@@UEAAJPEAPEAVCPearl@@@Z
    virtual long GetPearl(CPearl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollInfo@CTaskBand@@UEAAJHPEAUtagSCROLLINFO@@@Z
    virtual long GetScrollInfo(int, tagSCROLLINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CTaskBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CTaskBand@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStuckPlace@CTaskBand@@UEAAJPEAK@Z
    virtual long GetStuckPlace(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskFromWindow@CTaskBand@@UEAAJPEAUHWND__@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    virtual long GetTaskFromWindow(HWND__*, ITaskGroup * *, ITaskItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskGroupsController@CTaskBand@@UEAA?AUITaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@XZ
    virtual WindissectOpaque GetTaskGroupsController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskListUITheme@CTaskBand@@UEAAJPEAPEBG@Z
    virtual long GetTaskListUITheme(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserPreferences@CTaskBand@@UEAAJPEAK@Z
    virtual long GetUserPreferences(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CTaskBand@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleContextMenuCommand@CTaskBand@@UEAAJPEAUITaskItemFilter@@PEAUITaskGroup@@PEAUITaskItem@@PEAUHWND__@@PEAUIContextMenu@@H@Z
    virtual long HandleContextMenuCommand(ITaskItemFilter *, ITaskGroup *, ITaskItem *, HWND__*, IContextMenu *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHoverUIVisibilityChange@CTaskBand@@UEAAX_N@Z
    virtual void HandleHoverUIVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveInvokeOnMonitor@CTaskBand@@UEAAXPEAUHMONITOR__@@@Z
    virtual void HandleImmersiveInvokeOnMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleImmersiveLauncherVisibilityChange@CTaskBand@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewClose@CTaskBand@@UEAAXPEBUJUMPVIEWCLOSEDATA@@@Z
    virtual void HandleJumpViewClose(JUMPVIEWCLOSEDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewEndTask@CTaskBand@@UEAAXPEBUJUMPVIEWCLOSEDATA@@@Z
    virtual void HandleJumpViewEndTask(JUMPVIEWCLOSEDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleJumpViewVisibilityChange@CTaskBand@@UEAAX_N@Z
    virtual void HandleJumpViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePlaceholderActivateAsync@CTaskBand@@UEAA?AUfire_and_forget@winrt@@PEAUITaskGroup@@PEAUHWND__@@@Z
    virtual WindissectOpaque HandlePlaceholderActivateAsync(ITaskGroup *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRaiseExpandableTaskbarChanged@CTaskBand@@UEAAXXZ
    virtual void HandleRaiseExpandableTaskbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleScroll@CTaskBand@@UEAAJHIH@Z
    virtual long HandleScroll(int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSearchAppVisibilityChange@CTaskBand@@UEAAXPEAUHMONITOR__@@_N@Z
    virtual void HandleSearchAppVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskViewVisibilityChange@CTaskBand@@UEAAX_N@Z
    virtual void HandleTaskViewVisibilityChange(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CTaskBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestForSizeableBorder@CTaskBand@@UEAAHHH@Z
    virtual int HitTestForSizeableBorder(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveShow@CTaskBand@@UEAAXXZ
    virtual void ImmersiveShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitModelAndHost@CTaskBand@@UEAAXUTaskbarModel@Shell@UI@WindowsUdk@winrt@@@Z
    virtual void InitModelAndHost(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPinnedItem@CTaskBand@@UEAAJPEAUITaskListUI@@PEAUIDataObject@@PEAUITaskGroup@@H@Z
    virtual long InsertPinnedItem(ITaskListUI *, IDataObject *, ITaskGroup *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopVisibleOnTrayMonitor@CTaskBand@@UEAA_NXZ
    virtual bool IsDesktopVisibleOnTrayMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CTaskBand@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullHeightOfTray@CTaskBand@@UEAAHXZ
    virtual int IsFullHeightOfTray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontal@CTaskBand@@UEAAHXZ
    virtual int IsHorizontal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeEnabled@CTaskBand@@UEAA_NXZ
    virtual bool IsTabletModeEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskGroupTaskItemValid@CTaskBand@@UEAA_NPEAUITaskGroupTaskItem@@@Z
    virtual bool IsTaskGroupTaskItemValid(ITaskGroupTaskItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CTaskBand@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Launch@CTaskBand@@UEAAJPEAUITaskGroup@@AEBUtagPOINT@@W4LaunchFromTaskbarOptions@@@Z
    virtual long Launch(ITaskGroup *, tagPOINT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CTaskBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewDismissed@CTaskBand@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewDismissed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewShown@CTaskBand@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewShown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCloudDataReceived@CTaskBand@@UEAAXXZ
    virtual void NotifyCloudDataReceived();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDashboardPayloadChanged@CTaskBand@@UEAAXXZ
    virtual void NotifyDashboardPayloadChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CTaskBand@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedTaskOrderChanged@CTaskBand@@UEAAXPEAUITaskGroup@@H@Z
    virtual void PinnedTaskOrderChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedWebsiteIconLoaded@CTaskBand@@UEAAXPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual void PinnedWebsiteIconLoaded(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceholderTileIconLoaded@CTaskBand@@UEAA?AUTile@StartScreen@UI@WindowsUdk@winrt@@PEBGH@Z
    virtual WindissectOpaque PlaceholderTileIconLoaded(unsigned short const *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTaskBand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CTaskBand@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhostPinnedItem@CTaskBand@@UEAAJPEAUITaskGroup@@@Z
    virtual long RemoveGhostPinnedItem(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroupIcon@CTaskBand@@UEAAXPEAUITaskGroup@@@Z
    virtual void RemoveGroupIcon(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveIcon@CTaskBand@@UEAAXPEAUITaskItem@@@Z
    virtual void RemoveIcon(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInvalidTabs@CTaskBand@@UEAAJPEAUITaskGroup@@@Z
    virtual long RemoveInvalidTabs(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestContextMenu@CTaskBand@@UEAAJPEAUITaskGroup@@PEAUITaskItem@@HPEAPEAUIContextMenu@@PEAPEAUHMENU__@@@Z
    virtual long RequestContextMenu(ITaskGroup *, ITaskItem *, int, IContextMenu * *, HMENU__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBorderDW@CTaskBand@@UEAAJPEBUtagRECT@@PEAUIUnknown@@H@Z
    virtual long ResizeBorderDW(tagRECT const *, IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CTaskBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryTaskbarLoaded@CTaskBand@@UEAAXPEAUITaskListUI@@_N@Z
    virtual void SecondaryTaskbarLoaded(ITaskListUI *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStateCaptureTelemetry@CTaskBand@@UEAAJW4TelemetryStateCaptureType@StateCapture@@@Z
    virtual long SendStateCaptureTelemetry(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@CTaskBand@@UEAAXURect@Foundation@Windows@winrt@@@Z
    virtual void SetBounds(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionState@CTaskBand@@UEAAJH@Z
    virtual long SetCompositionState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinReplacement@CTaskBand@@UEAAJPEBUSETPINREPLACEMENTDATA@@@Z
    virtual long SetPinReplacement(SETPINREPLACEMENTDATA const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollInfo@CTaskBand@@UEAAJHAEBUtagSCROLLINFO@@@Z
    virtual long SetScrollInfo(int, tagSCROLLINFO const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTaskBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStayExpanded@CTaskBand@@UEAA_NXZ
    virtual bool ShouldStayExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CTaskBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StuckTrayMonitorChanged@CTaskBand@@UEAAXPEAUHMONITOR__@@@Z
    virtual void StuckTrayMonitorChanged(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchTo@CTaskBand@@UEAAJPEAUITaskItem@@H@Z
    virtual long SwitchTo(ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayChange@CTaskBand@@UEAA?AW4SyncDisplayChangeFlags@@W42@AEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    virtual int SyncDisplayChange(int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskOrderChanged@CTaskBand@@UEAAXPEAUITaskGroup@@H@Z
    virtual void TaskOrderChanged(ITaskGroup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskOrderChanged@CTaskBand@@UEAAXXZ
    virtual void TaskOrderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CTaskBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPromotePlaceholder@CTaskBand@@UEAAXPEAUITaskGroup@@@Z
    virtual void TryPromotePlaceholder(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CTaskBand@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhideTray@CTaskBand@@UEAAJXZ
    virtual long UnhideTray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIcons@CTaskBand@@UEAAXXZ
    virtual void UpdateIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@CTaskBand@@UEAAXXZ
    virtual void UpdateTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewTransitionedFromHolographic@CTaskBand@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewTransitionedFromHolographic(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewTransitionedToHolographic@CTaskBand@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewTransitionedToHolographic(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewVirtualDesktopChanged@CTaskBand@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewVirtualDesktopChanged(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Win32AppIconLoaded@CTaskBand@@UEAAXPEAUHWND__@@PEAXH@Z
    virtual void Win32AppIconLoaded(HWND__*, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinRTAppIconLoaded@CTaskBand@@UEAAXPEBGPEAUIImmersiveApplication@@H@Z
    virtual void WinRTAppIconLoaded(unsigned short const *, IImmersiveApplication *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildEnumProc@CTaskBand@@KAHPEAUHWND__@@_J@Z
    static int BuildEnumProc(HWND__*, int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskBand@@IEAA@PEAUITrayComponentHost@@@Z
    CTaskBand(ITrayComponentHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseTaskGroupTaskItem@CTaskBand@@IEAAXPEAUITaskGroupTaskItem@@@Z
    void CloseTaskGroupTaskItem(ITaskGroupTaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTaskGroupTaskItemOnTaskbar@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void CreateTaskGroupTaskItemOnTaskbar(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTabCB@CTaskBand@@KAX_KPEAUHWND__@@@Z
    static void DeleteTabCB(uint64_t, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTaskGroupTaskItemOnTaskbar@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void DeleteTaskGroupTaskItemOnTaskbar(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPinnedGroupCB@CTaskBand@@KAHPEAUPINNEDGROUP@@PEAX@Z
    static int DestroyPinnedGroupCB(PINNEDGROUP *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPinnedGroupByTaskGroupCB@CTaskBand@@KAHPEBUPINNEDGROUP@@0_J@Z
    static int FindPinnedGroupByTaskGroupCB(PINNEDGROUP const *, PINNEDGROUP const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirePlaceholderIrisBeacon@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    void FirePlaceholderIrisBeacon(_ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleControlCenterVisibilityChange@CTaskBand@@IEAAXXZ
    void HandleControlCenterVisibilityChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupSwitchItemAdded@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void HandleTaskGroupSwitchItemAdded(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupSwitchItemRemoved@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void HandleTaskGroupSwitchItemRemoved(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTaskGroupsSwitchItemCollectionChanged@CTaskBand@@IEAAXAEBUISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z
    void HandleTaskGroupsSwitchItemCollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTaskBand@@IEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTaskGroupsOnTaskbar@CTaskBand@@IEAAXXZ
    void InitializeTaskGroupsOnTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTileCollectionAsync@CTaskBand@@IEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque InitializeTileCollectionAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskGroupsSettingEnabled@CTaskBand@@KA_NPEAUIImmersiveSettingsCache@@@Z
    static bool IsTaskGroupsSettingEnabled(IImmersiveSettingsCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkPlaceholderAsTombstone@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void MarkPlaceholderAsTombstone(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinimizeAllThreadProc@CTaskBand@@KAKPEAX@Z
    static unsigned long MinimizeAllThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskGroupSwitchItemChanged@CTaskBand@@IEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBW4SwitchItemProperty@34567@@Z
    void OnTaskGroupSwitchItemChanged(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskGroupsSwitchItemCollectionChanged@CTaskBand@@IEAAXAEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUISwitchItemCollectionChangedEventArgs@34567@@Z
    void OnTaskGroupsSwitchItemCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileAdded@CTaskBand@@IEAA?AUfire_and_forget@winrt@@_N@Z
    WindissectOpaque OnTileAdded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileMigrated@CTaskBand@@IEAA?AUfire_and_forget@winrt@@UTileMigratedEventArgs@StartScreen@UI@WindowsUdk@3@_N@Z
    WindissectOpaque OnTileMigrated(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTileRemoved@CTaskBand@@IEAA?AUfire_and_forget@winrt@@UTileRemovedEventArgs@StartScreen@UI@WindowsUdk@3@_N@Z
    WindissectOpaque OnTileRemoved(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinDefaultsFromCloud@CTaskBand@@IEAAJXZ
    long PinDefaultsFromCloud();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEventOnTaskGroupAndTaskItems@CTaskBand@@IEAAXPEAUITaskGroup@@W4TaskGroupProperty@Shell@UI@WindowsUdk@winrt@@W4TaskItemProperty@4567@@Z
    void RaiseEventOnTaskGroupAndTaskItems(ITaskGroup *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseHighlightChangedEvent@CTaskBand@@IEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque RaiseHighlightChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlashing@CTaskBand@@IEAA_NXZ
    bool ShowFlashing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTaskGroupsOnTaskbarChanged@CTaskBand@@IEAAXXZ
    void ShowTaskGroupsOnTaskbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeForControlCenterVisibilityChange@CTaskBand@@IEAAXXZ
    void SubscribeForControlCenterVisibilityChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToTaskGroupTaskItem@CTaskBand@@IEAAXPEAUITaskGroupTaskItem@@@Z
    void SwitchToTaskGroupTaskItem(ITaskGroupTaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTilesForPlaceholderTombstones@CTaskBand@@IEAAXXZ
    void TryFindTilesForPlaceholderTombstones();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMigratePinnedItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@Uhstring@winrt@@1AEAV?$tip_test@V?$merged_data@U_tip_TileMigrationEventHandlerTest@TaskbarTip@@U12@@details@tip2@@@tip2@@@Z
    void TryMigratePinnedItem(_ITEMIDLIST_ABSOLUTE *, WindissectOpaque, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadgeAsync@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void UpdateBadgeAsync(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppTaskItem@CTaskBand@@IEAAXPEAUITaskItem@@PEAURESOLVEDWINDOW@@@Z
    void _AddAppTaskItem(ITaskItem *, RESOLVEDWINDOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddImmersiveItem@CTaskBand@@IEAAJPEAUIImmersiveApplication@@_N@Z
    long _AddImmersiveItem(IImmersiveApplication *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPinnedItem@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEAPEAUITaskGroup@@HHPEAW4PlaceholderPinFlags@1@@Z
    long _AddPinnedItem(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, ITaskGroup * *, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWindow@CTaskBand@@IEAAHPEAUHWND__@@@Z
    int _AddWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplicationChangedSync@CTaskBand@@IEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z
    long _ApplicationChangedSync(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AsyncPinListModify@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    long _AsyncPinListModify(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandInfoChanged@CTaskBand@@IEAAJXZ
    long _BandInfoChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildMonitorDPIList@CTaskBand@@IEAAXAEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@@Z
    void _BuildMonitorDPIList(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildTaskList@CTaskBand@@IEAAJPEAV?$CDPA@UITaskItem@@V?$CTContainer_PolicyUnOwned@UITaskItem@@@@@@@Z
    long _BuildTaskList(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanMinimizeAll@CTaskBand@@IEAAHPEAUITaskGroup@@PEAH@Z
    int _CanMinimizeAll(ITaskGroup *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanRestoreAll@CTaskBand@@IEAAHPEAUITaskGroup@@@Z
    int _CanRestoreAll(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckImmersiveGroupEligibility@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void _CheckImmersiveGroupEligibility(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateIconContainerStorage@CTaskBand@@IEAAXXZ
    void _CreateIconContainerStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelayedInit@CTaskBand@@IEAAXXZ
    void _DelayedInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteItem@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _DeleteItem(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteTask@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@W4SWITCHER_REMOVAL_REASON@@@Z
    void _DeleteTask(ITaskGroup *, ITaskItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyGroup@CTaskBand@@IEAAJPEAUITaskGroup@@@Z
    long _DestroyGroup(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPreemptiveDesktopSwitch@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _DoPreemptiveDesktopSwitch(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoWindowsToRestoreOverlap@CTaskBand@@IEAA_NPEBUWINDOWPOSITIONS@@PEAV?$CDSA@PEAUHWND__@@@@@Z
    bool _DoWindowsToRestoreOverlap(WINDOWPOSITIONS const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndTask@CTaskBand@@IEAAXQEAUHWND__@@H@Z
    void _EndTask(HWND__* const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndTaskThreadProc@CTaskBand@@KAKPEAX@Z
    static unsigned long _EndTaskThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAppResolver@CTaskBand@@IEAAJXZ
    long _EnsureAppResolver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMonitorManager@CTaskBand@@IEAAJXZ
    long _EnsureMonitorManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePinnedList@CTaskBand@@IEAAJXZ
    long _EnsurePinnedList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureResolverScheduler@CTaskBand@@IEAAJXZ
    long _EnsureResolverScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureScheduler@CTaskBand@@IEAAJXZ
    long _EnsureScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumExistingImmersiveApps@CTaskBand@@IEAAXXZ
    void _EnumExistingImmersiveApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumPinnedItems@CTaskBand@@IEAAJ_N00@Z
    long _EnumPinnedItems(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetModeChangeFlags@CTaskBand@@IEAA?AW4ModeChangeFlags@ImmersiveTray@@XZ
    int _GetModeChangeFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPlaceholderPinnedTargetInfo@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@AEBUTile@StartScreen@UI@WindowsUdk@winrt@@_KPEAGPEAPEAGPEA_N@Z
    long _GetPlaceholderPinnedTargetInfo(_ITEMIDLIST_ABSOLUTE const *, WindissectOpaque const &, uint64_t, unsigned short *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetInfo@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@HPEAGHPEAPEAG1HPEA_N@Z
    long _GetTargetInfo(_ITEMIDLIST_ABSOLUTE const *, int, unsigned short *, int, unsigned short * *, unsigned short *, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskbarPinnedGroups@CTaskBand@@IEBAJPEAV?$CDSA@UPINNEDGROUP@@@@@Z
    long _GetTaskbarPinnedGroups(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleActivate@CTaskBand@@IEAA_JPEAUHWND__@@@Z
    int64_t _HandleActivate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppIDChanged@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleAppIDChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppResolverDeleteItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    void _HandleAppResolverDeleteItem(_ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppResolverRenameItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@0@Z
    void _HandleAppResolverRenameItem(_ITEMIDLIST_ABSOLUTE *, _ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAppResolverUpdateItem@CTaskBand@@IEAAXPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    void _HandleAppResolverUpdateItem(_ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleChangeNotify@CTaskBand@@IEAAX_K_J@Z
    void _HandleChangeNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleCreate@CTaskBand@@IEAA_JXZ
    int64_t _HandleCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDeletedPropChange@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleDeletedPropChange(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDestroy@CTaskBand@@IEAA_JXZ
    int64_t _HandleDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleEdgeGestureChanged@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleEdgeGestureChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleGamingFullScreenChanged@CTaskBand@@IEAAX_N@Z
    void _HandleGamingFullScreenChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleGetMinRect@CTaskBand@@IEAAXPEAUHWND__@@PEAUtagPOINTS@@@Z
    void _HandleGetMinRect(HWND__*, tagPOINTS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleGetTaskbarIconRect@CTaskBand@@IEAA_JPEAUHWND__@@PEAUtagRECT@@@Z
    int64_t _HandleGetTaskbarIconRect(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleHardError@CTaskBand@@IEAA_JPEBU_tagHardErrorData@@K@Z
    int64_t _HandleHardError(_tagHardErrorData const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleItemResolved@CTaskBand@@IEAAXPEAURESOLVEDWINDOW@@PEAUITaskListUI@@PEAUITaskGroup@@PEAUITaskItem@@@Z
    void _HandleItemResolved(RESOLVEDWINDOW *, ITaskListUI *, ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleLauncherVisibilityChange@CTaskBand@@IEAAXPEAUHMONITOR__@@_N@Z
    void _HandleLauncherVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMonitorChanged@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleMonitorChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMonitorChanged@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void _HandleMonitorChanged(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOtherWindowCreated@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleOtherWindowCreated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOtherWindowDestroyed@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _HandleOtherWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOverlayIcon@CTaskBand@@IEAAXPEAUHWND__@@PEAUHICON__@@@Z
    void _HandleOverlayIcon(HWND__*, HICON__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleOverlayIconDescription@CTaskBand@@IEAAXPEAUHWND__@@PEAX@Z
    void _HandleOverlayIconDescription(HWND__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandlePresentedWindowChanged@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _HandlePresentedWindowChanged(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleReplaceWindow@CTaskBand@@IEAA_JPEAUHWND__@@0@Z
    int64_t _HandleReplaceWindow(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleResendSecondaryStuckPlace@CTaskBand@@IEAAXXZ
    void _HandleResendSecondaryStuckPlace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSearchVisibilityChange@CTaskBand@@IEAAXPEAUHMONITOR__@@_N@Z
    void _HandleSearchVisibilityChange(HMONITOR__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSetSecondaryStuckPlace@CTaskBand@@IEAAXK@Z
    void _HandleSetSecondaryStuckPlace(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSettingChange@CTaskBand@@IEAA_J_K_JH@Z
    int64_t _HandleSettingChange(uint64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleShellContextMenu@CTaskBand@@IEAAJPEAUIContextMenu@@H@Z
    long _HandleShellContextMenu(IContextMenu *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleShellHook@CTaskBand@@IEAA_JH_J@Z
    int64_t _HandleShellHook(int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleShellModeChanged@CTaskBand@@IEAAXXZ
    void _HandleShellModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleStuckTrayChanged@CTaskBand@@IEAAXXZ
    void _HandleStuckTrayChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSyncDisplayChange@CTaskBand@@IEAAXW4SyncDisplayChangeFlags@@@Z
    void _HandleSyncDisplayChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTaskActivated@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void _HandleTaskActivated(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTaskViewVisibilityChange@CTaskBand@@IEAAX_N@Z
    void _HandleTaskViewVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleThumbBar@CTaskBand@@IEAAXIPEAUHWND__@@PEAX@Z
    void _HandleThumbBar(unsigned int, HWND__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleThumbnailToolTip@CTaskBand@@IEAAXPEAUHWND__@@PEAX@Z
    void _HandleThumbnailToolTip(HWND__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWindowResolved@CTaskBand@@IEAAXPEAURESOLVEDWINDOW@@@Z
    void _HandleWindowResolved(RESOLVEDWINDOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitIconContainer@CTaskBand@@IEAAJXZ
    long _InitIconContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitStartUIResourceMap@CTaskBand@@IEAAJXZ
    long _InitStartUIResourceMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitialDesktopWindowsPopulated@CTaskBand@@IEAAJXZ
    long _InitialDesktopWindowsPopulated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertItem@CTaskBand@@IEAAJPEAUHWND__@@PEAPEAUITaskItem@@00@Z
    long _InsertItem(HWND__*, ITaskItem * *, HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSettings@CTaskBand@@IEAAXXZ
    void _LoadSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogEventForImmersiveAppIfNecessary@CTaskBand@@IEAAXPEAUIImmersiveApplication@@W4AppEventTrigger@Triggers@CreativeFramework@@@Z
    void _LogEventForImmersiveAppIfNecessary(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchApp@CTaskBand@@IEAAJPEAUIImmersiveApplication@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    long _MatchApp(IImmersiveApplication *, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchAppID@CTaskBand@@IEAAJPEBGHW4MatchAppIDFlags@1@PEAPEAUITaskGroup@@@Z
    long _MatchAppID(unsigned short const *, int, int, ITaskGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchApplicationView@CTaskBand@@IEAAJPEAUIApplicationView@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    long _MatchApplicationView(IApplicationView *, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchIDList@CTaskBand@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUITaskGroup@@@Z
    long _MatchIDList(_ITEMIDLIST_ABSOLUTE const *, ITaskGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchWindow@CTaskBand@@IEAAJPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBGW4WINDOWMATCHCONFIDENCE@@PEAPEAUITaskGroup@@PEAPEAUITaskItem@@@Z
    long _MatchWindow(HWND__*, _ITEMIDLIST_ABSOLUTE const *, unsigned short const *, int, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeGroups@CTaskBand@@IEAAXPEAUITaskGroup@@0@Z
    void _MergeGroups(ITaskGroup *, ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MinimizeAll@CTaskBand@@IEAAHPEAXH@Z
    int _MinimizeAll(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyAppSwitcherNotificationService@CTaskBand@@IEAAXPEAUIImmersiveApplication@@_NW4SWITCHER_REMOVAL_REASON@@@Z
    void _NotifyAppSwitcherNotificationService(IImmersiveApplication *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAppsFolderItemUpdated@CTaskBand@@IEAAXPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _OnAppsFolderItemUpdated(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnImmersiveAppActivated@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _OnImmersiveAppActivated(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnImmersiveAppMonitorChanged@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _OnImmersiveAppMonitorChanged(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnImmersiveAppTerminated@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _OnImmersiveAppTerminated(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetFocus@CTaskBand@@IEAAXXZ
    void _OnSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetProgressState@CTaskBand@@IEAAXQEAUHWND__@@W4TBPFLAG@@@Z
    void _OnSetProgressState(HWND__* const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetProgressValue@CTaskBand@@IEAAXQEAUHWND__@@K@Z
    void _OnSetProgressValue(HWND__* const, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetTabActive@CTaskBand@@IEAAJQEAUHWND__@@@Z
    long _OnSetTabActive(HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetTabOrder@CTaskBand@@IEAAJQEAUHWND__@@0@Z
    long _OnSetTabOrder(HWND__* const, HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetTabProperties@CTaskBand@@IEAAJQEAUHWND__@@@Z
    long _OnSetTabProperties(HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetThumbnailClip@CTaskBand@@IEAAJQEAUHWND__@@QEAX@Z
    long _OnSetThumbnailClip(HWND__* const, void * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnUpdateGroupPIDL@CTaskBand@@IEAA_J_K_J@Z
    int64_t _OnUpdateGroupPIDL(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWindowActivated@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _OnWindowActivated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenTheme@CTaskBand@@IEAAXXZ
    void _OpenTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PinnedListHasPlaceholders@CTaskBand@@IEAA_NXZ
    bool _PinnedListHasPlaceholders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessOrderTab@CTaskBand@@IEAAJPEAUHWND__@@0@Z
    long _ProcessOrderTab(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessWindowDestroyed@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _ProcessWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseDesktop@CTaskBand@@IEAAXW4RAISEDESKTOPFLAGS@@@Z
    void _RaiseDesktop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadTabsFromHwnd@CTaskBand@@IEAAJQEAUHWND__@@@Z
    long _ReadTabsFromHwnd(HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealityCheck@CTaskBand@@IEAAXXZ
    void _RealityCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshSettings@CTaskBand@@IEAAXH@Z
    void _RefreshSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@CTaskBand@@IEAAHXZ
    int _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveImage@CTaskBand@@IEAAXH@Z
    void _RemoveImage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveImmersiveItem@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _RemoveImmersiveItem(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveInsertBefore@CTaskBand@@IEAAJPEAUHWND__@@PEAUITaskGroup@@PEAUITaskItem@@PEAPEAU3@PEAPEAU4@@Z
    long _ResolveInsertBefore(HWND__*, ITaskGroup *, ITaskItem *, ITaskGroup * *, ITaskItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleReorderTab@CTaskBand@@IEAAJPEAUHWND__@@0@Z
    long _ScheduleReorderTab(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendNowPlayingSessionManagerButtonReady@CTaskBand@@IEAAJPEAUIImmersiveApplication@@@Z
    long _SendNowPlayingSessionManagerButtonReady(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetActiveAlt@CTaskBand@@IEAAXPEAUHWND__@@@Z
    void _SetActiveAlt(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolbarTheme@CTaskBand@@IEAAXXZ
    void _SetToolbarTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAllowAppOnTaskbar@CTaskBand@@IEAA_NPEAUIImmersiveApplication@@@Z
    bool _ShouldAllowAppOnTaskbar(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAllowImmersiveAppIdOnTaskbar@CTaskBand@@IEAA_NPEBG@Z
    bool _ShouldAllowImmersiveAppIdOnTaskbar(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldMinimize@CTaskBand@@KAHPEAUHWND__@@@Z
    static int _ShouldMinimize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowAppsOnTaskbarChanged@CTaskBand@@IEAAXXZ
    void _ShowAppsOnTaskbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToImmersiveWindowAsync@CTaskBand@@IEAA?AUfire_and_forget@winrt@@PEAUIImmersiveApplication@@@Z
    WindissectOpaque _SwitchToImmersiveWindowAsync(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToWindow@CTaskBand@@IEAAXPEAUITaskItem@@@Z
    void _SwitchToWindow(ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryExtractAppTile@CTaskBand@@IEAA?AUTile@StartScreen@UI@WindowsUdk@winrt@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    WindissectOpaque _TryExtractAppTile(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllIcons@CTaskBand@@IEAAXXZ
    void _UpdateAllIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGroupAppID@CTaskBand@@IEAAHPEAUITaskGroup@@PEBGH@Z
    int _UpdateGroupAppID(ITaskGroup *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGroupIcons@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void _UpdateGroupIcons(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImmersiveIcons@CTaskBand@@IEAAXXZ
    void _UpdateImmersiveIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItemIcon@CTaskBand@@IEAAXPEAUITaskGroup@@PEAUITaskItem@@@Z
    void _UpdateItemIcon(ITaskGroup *, ITaskItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePinnedWebsiteIcons@CTaskBand@@IEAAXXZ
    void _UpdatePinnedWebsiteIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRestartInfoFlags@CTaskBand@@IEAAXW4RESTARTINFOFLAGS@@@Z
    void _UpdateRestartInfoFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTaskGroupInclusion@CTaskBand@@IEAAXPEAUITaskGroup@@@Z
    void _UpdateTaskGroupInclusion(ITaskGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTaskItemInclusion@CTaskBand@@IEAAXXZ
    void _UpdateTaskItemInclusion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVirtualDesktopInclusion@CTaskBand@@IEAAJXZ
    long _UpdateVirtualDesktopInclusion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerifyButtonHeight@CTaskBand@@IEAAXXZ
    void _VerifyButtonHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CTaskBand@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskBand@@IEAA@XZ
    ~CTaskBand();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `SwitchTo` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitialDesktopWindowsPopulated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddImmersiveItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InsertItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureResolverScheduler` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddAppTaskItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShowFlashing` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_OnImmersiveAppActivated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SendNowPlayingSessionManagerButtonReady` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandlePresentedWindowChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleShellHook` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_HandleGetMinRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleOverlayIconDescription` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MatchApplicationView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_RaiseDesktop` | `void` | `Method` | `Pdb` | No (PDB) |
| `BuildEnumProc` | `int` | `Method` | `Pdb` | No (PDB) |
| `_AddWindow` | `int` | `Method` | `Pdb` | No (PDB) |
| `_HandleActivate` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnWindowActivated` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleOtherWindowDestroyed` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleDeletedPropChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSetProgressState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleMonitorChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSetProgressValue` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MatchApp` | `long` | `Method` | `Pdb` | No (PDB) |
| `_MatchWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_RealityCheck` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetUserPreferences` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_HandleOverlayIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApplicationChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `v_WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `GetImageList` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Win32AppIconLoaded` | `void` | `Method` | `Pdb` | No (PDB) |
| `ViewVirtualDesktopChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleTaskActivated` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CanMinimizeAll` | `int` | `Method` | `Pdb` | No (PDB) |
| `MinimizeAllThreadProc` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_ShouldMinimize` | `int` | `Method` | `Pdb` | No (PDB) |
| `_InitIconContainer` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `_ReadTabsFromHwnd` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetTaskListUITheme` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Init` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeTaskGroupsOnTaskbar` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsTaskGroupTaskItemValid` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HandleTaskGroupSwitchItemAdded` | `void` | `Method` | `Pdb` | No (PDB) |
| `SubscribeForControlCenterVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RegisterWindowClass` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_LoadSettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `_BuildMonitorDPIList` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetBounds` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `IsHorizontal` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_NotifyAppSwitcherNotificationService` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleImmersiveLauncherVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleSearchAppVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetModeChangeFlags` | `enum ImmersiveTray::ModeChangeFlags` | `Method` | `Pdb` | No (PDB) |
| `SyncDisplayChange` | `enum SyncDisplayChangeFlags` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskViewVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddGhostPinnedItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsurePinnedList` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateBadgeAsync` | `void` | `Method` | `Pdb` | No (PDB) |
| `Launch` | `long` | `Method` | `Pdb` | No (PDB) |
| `_MatchAppID` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleStuckTrayChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateAllIcons` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateIconContainerStorage` | `void` | `Method` | `Pdb` | No (PDB) |
| `_VerifyButtonHeight` | `void` | `Method` | `Pdb` | No (PDB) |
| `_BandInfoChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateGroupIcons` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetIconId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateItemIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleShellModeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleTaskViewVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnWinEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleLauncherVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoPreemptiveDesktopSwitch` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleSearchVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleSettingChange` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_RefreshSettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsTaskGroupsSettingEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdatePinnedWebsiteIcons` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateImmersiveIcons` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleReplaceWindow` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_RemoveImmersiveItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OpenTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ProcessWindowDestroyed` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DeleteItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DeleteTask` | `void` | `Method` | `Pdb` | No (PDB) |
| `CheckSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DestroyGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateTaskItemInclusion` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateTaskGroupInclusion` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleAppResolverRenameItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleAppResolverDeleteItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MatchIDList` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryStatus` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitStartUIResourceMap` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindPinnedGroupByTaskGroupCB` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsDirty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_HandleChangeNotify` | `void` | `Method` | `Pdb` | No (PDB) |
| `CloseDW` | `long` | `Method` | `Pdb` | No (PDB) |
| `Load` | `long` | `Method` | `Pdb` | No (PDB) |
| `Save` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetCompositionState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShowDW` | `long` | `Method` | `Pdb` | No (PDB) |
| `RaiseEventOnTaskGroupAndTaskItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleWindowResolved` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetToolbarTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSetThumbnailClip` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleThumbnailToolTip` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleAppIDChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveInvalidTabs` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnhideTray` | `long` | `Method` | `Pdb` | No (PDB) |
| `SecondaryTaskbarLoaded` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RemoveImage` | `void` | `Method` | `Pdb` | No (PDB) |
| `DestroyPinnedGroupCB` | `int` | `Method` | `Pdb` | No (PDB) |
| `_HandleOtherWindowCreated` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnTaskGroupSwitchItemChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleHoverUIVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetClassID` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsDesktopVisibleOnTrayMonitor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `NotifyDashboardPayloadChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveGroupIcon` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetStuckPlace` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_EnsureScheduler` | `long` | `Method` | `Pdb` | No (PDB) |
| `CloseItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `CloseTaskGroupTaskItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `CloseWnd` | `void` | `Method` | `Pdb` | No (PDB) |
| `ImmersiveShow` | `void` | `Method` | `Pdb` | No (PDB) |
| `MultitaskingViewDismissed` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetPearl` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `MultitaskingViewShown` | `long` | `Method` | `Pdb` | No (PDB) |
| `_BuildTaskList` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureMonitorManager` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetTaskbarPinnedGroups` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleMonitorChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateIcons` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ApplicationChangedSync` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnumExistingImmersiveApps` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleJumpViewVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskGroupsSwitchItemCollectionChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `CTaskBand` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `Exec` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetBandInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconSize` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `WinRTAppIconLoaded` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AddPinnedItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DelayedInit` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetTargetInfo` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleAppResolverUpdateItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleCreate` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_HandleDestroy` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_HandleItemResolved` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleThumbBar` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PinnedListHasPlaceholders` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_ProcessOrderTab` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SwitchToWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppClosing` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ShouldAllowAppOnTaskbar` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_LogEventForImmersiveAppIfNecessary` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateVirtualDesktopInclusion` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveGhostPinnedItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnTaskGroupsSwitchItemCollectionChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetTaskFromWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateRestartInfoFlags` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSetTabActive` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleRaiseExpandableTaskbarChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCompositionState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSite` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSizeMax` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ResizeBorderDW` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetPinReplacement` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `~CTaskBand` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AllowShowJumplistOnHover` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CanPinDestinationToTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `CanRenderComposited` | `long` | `Method` | `Pdb` | No (PDB) |
| `ComputeTaskbarForNavigate` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateTaskGroupTaskItemOnTaskbar` | `void` | `Method` | `Pdb` | No (PDB) |
| `CurrentVirtualDesktopChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `CurrentVirtualDesktopChangedAnimated` | `long` | `Method` | `Pdb` | No (PDB) |
| `DeleteTabCB` | `void` | `Method` | `Pdb` | No (PDB) |
| `DeleteTaskGroupTaskItemOnTaskbar` | `void` | `Method` | `Pdb` | No (PDB) |
| `DispatchMessageToTaskbarHosts` | `bool` | `Method` | `Pdb` | No (PDB) |
| `FirePlaceholderIrisBeacon` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetAccessibleStringForBadge` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetBoundsInRawPixelsRelativeToDesktop` | `struct tagRECT` | `Accessor` | `Pdb` | No (PDB) |
| `GetDpiForWndSite` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetGroupByTime` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetMultimonStuckPlace` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetScrollInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskGroupsController` | `struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupSwitchItemController` | `Accessor` | `Pdb` | No (PDB) |
| `HandleContextMenuCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleControlCenterVisibilityChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleImmersiveInvokeOnMonitor` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleJumpViewClose` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandleJumpViewEndTask` | `void` | `Method` | `Pdb` | No (PDB) |
| `HandlePlaceholderActivateAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `HandleScroll` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleTaskGroupSwitchItemRemoved` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasFocusIO` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `HitTestForSizeableBorder` | `int` | `Method` | `Pdb` | No (PDB) |
| `InitModelAndHost` | `void` | `Method` | `Pdb` | No (PDB) |
| `InitializeTileCollectionAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `InsertPinnedItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsFullHeightOfTray` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsTabletModeEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindowOwner` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `MarkPlaceholderAsTombstone` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyCloudDataReceived` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnTileAdded` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `OnTileMigrated` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `OnTileRemoved` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `PinDefaultsFromCloud` | `long` | `Method` | `Pdb` | No (PDB) |
| `PinnedTaskOrderChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `PinnedWebsiteIconLoaded` | `void` | `Method` | `Pdb` | No (PDB) |
| `PlaceholderTileIconLoaded` | `struct winrt::WindowsUdk::UI::StartScreen::Tile` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryService` | `long` | `Method` | `Pdb` | No (PDB) |
| `RaiseHighlightChangedEvent` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RequestContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `SendStateCaptureTelemetry` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetScrollInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldStayExpanded` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShowTaskGroupsOnTaskbarChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `StuckTrayMonitorChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `SwitchToTaskGroupTaskItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskOrderChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `TaskOrderChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `TranslateAcceleratorIO` | `long` | `Method` | `Pdb` | No (PDB) |
| `TryFindTilesForPlaceholderTombstones` | `void` | `Method` | `Pdb` | No (PDB) |
| `TryMigratePinnedItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `TryPromotePlaceholder` | `void` | `Method` | `Pdb` | No (PDB) |
| `UIActivateIO` | `long` | `Method` | `Pdb` | No (PDB) |
| `ViewTransitionedFromHolographic` | `long` | `Method` | `Pdb` | No (PDB) |
| `ViewTransitionedToHolographic` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AsyncPinListModify` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CanRestoreAll` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CheckImmersiveGroupEligibility` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoWindowsToRestoreOverlap` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_EndTask` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EndTaskThreadProc` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureAppResolver` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnumPinnedItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetPlaceholderPinnedTargetInfo` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleEdgeGestureChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleGamingFullScreenChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleGetTaskbarIconRect` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_HandleHardError` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_HandleResendSecondaryStuckPlace` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleSetSecondaryStuckPlace` | `void` | `Method` | `Pdb` | No (PDB) |
| `_HandleShellContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleSyncDisplayChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MergeGroups` | `void` | `Method` | `Pdb` | No (PDB) |
| `_MinimizeAll` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnAppsFolderItemUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnImmersiveAppMonitorChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnImmersiveAppTerminated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSetFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSetTabOrder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnSetTabProperties` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnUpdateGroupPIDL` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_ResolveInsertBefore` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ScheduleReorderTab` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetActiveAlt` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShouldAllowImmersiveAppIdOnTaskbar` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_ShowAppsOnTaskbarChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SwitchToImmersiveWindowAsync` | `struct winrt::fire_and_forget` | `Method` | `Pdb` | No (PDB) |
| `_TryExtractAppTile` | `struct winrt::WindowsUdk::UI::StartScreen::Tile` | `Method` | `Pdb` | No (PDB) |
| `_UpdateGroupAppID` | `int` | `Method` | `Pdb` | No (PDB) |
