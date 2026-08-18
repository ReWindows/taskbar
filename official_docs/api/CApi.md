# `global` :: `CApi`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `taskbar.dll`. Total members: **189**.

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

// Reconstructed from taskbar.dll by Windissect. 189 member(s).
class CApi {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApi@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustWindowRect@CApi@@UEAAHPEAUtagRECT@@KH@Z
    virtual int AdjustWindowRect(tagRECT *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustWindowRectEx@CApi@@UEAAHPEAUtagRECT@@KHK@Z
    virtual int AdjustWindowRectEx(tagRECT *, unsigned long, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginBufferedPaint@CApi@@UEAAPEAXPEAUHDC__@@PEBUtagRECT@@W4_BP_BUFFERFORMAT@@PEAU_BP_PAINTPARAMS@@PEAPEAU2@@Z
    virtual void * BeginBufferedPaint(HDC__*, tagRECT const *, int, _BP_PAINTPARAMS *, HDC__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPaint@CApi@@UEAAPEAUHDC__@@PEAUHWND__@@PEAUtagPAINTSTRUCT@@@Z
    virtual HDC__* BeginPaint(HWND__*, tagPAINTSTRUCT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringWindowToTop@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int BringWindowToTop(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferedPaintInit@CApi@@UEAAJXZ
    virtual long BufferedPaintInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferedPaintUnInit@CApi@@UEAAJXZ
    virtual long BufferedPaintUnInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CharNextA@CApi@@UEAAPEADPEBD@Z
    virtual char * CharNextA(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CharNextW@CApi@@UEAAPEAGPEBG@Z
    virtual unsigned short * CharNextW(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientToScreen@CApi@@UEAAHPEAUHWND__@@PEAUtagPOINT@@@Z
    virtual int ClientToScreen(HWND__*, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseThemeData@CApi@@UEAAJPEAX@Z
    virtual long CloseThemeData(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIcon@CApi@@UEAAPEAUHICON__@@PEAU2@@Z
    virtual HICON__* CopyIcon(HICON__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyRect@CApi@@UEAAHPEAUtagRECT@@PEBU2@@Z
    virtual int CopyRect(tagRECT *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompatibleDC@CApi@@UEAAPEAUHDC__@@PEAU2@@Z
    virtual HDC__* CreateCompatibleDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDIBSection@CApi@@UEAAPEAUHBITMAP__@@PEAUHDC__@@PEBUtagBITMAPINFO@@IPEAPEAXPEAXK@Z
    virtual HBITMAP__* CreateDIBSection(HDC__*, tagBITMAPINFO const *, unsigned int, void * *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontIndirectW@CApi@@UEAAPEAUHFONT__@@PEBUtagLOGFONTW@@@Z
    virtual HFONT__* CreateFontIndirectW(tagLOGFONTW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePen@CApi@@UEAAPEAUHPEN__@@HHK@Z
    virtual HPEN__* CreatePen(int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSmallerIcon@CApi@@UEAAJPEAUHICON__@@IIPEAPEAU2@@Z
    virtual long CreateSmallerIcon(HICON__*, unsigned int, unsigned int, HICON__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowExW@CApi@@UEAAPEAUHWND__@@KPEBG0KHHHHPEAU2@PEAUHMENU__@@PEAUHINSTANCE__@@PEAX@Z
    virtual HWND__* CreateWindowExW(unsigned long, unsigned short const *, unsigned short const *, unsigned long, int, int, int, int, HWND__*, HMENU__*, HINSTANCE__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DADHelper_DragEnter@CApi@@UEAAXPEAUHWND__@@U_POINTL@@PEAUIDataObject@@@Z
    virtual void DADHelper_DragEnter(HWND__*, _POINTL, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DADHelper_DragMove@CApi@@UEAAXPEAUHWND__@@U_POINTL@@@Z
    virtual void DADHelper_DragMove(HWND__*, _POINTL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataObj_SetBlob@CApi@@UEAAJPEAUIDataObject@@IPEBXI@Z
    virtual long DataObj_SetBlob(IDataObject *, unsigned int, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefWindowProcA@CApi@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t DefWindowProcA(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefWindowProcW@CApi@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t DefWindowProcW(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteDC@CApi@@UEAAHPEAUHDC__@@@Z
    virtual int DeleteDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteObject@CApi@@UEAAHPEAX@Z
    virtual int DeleteObject(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyIcon@CApi@@UEAAHPEAUHICON__@@@Z
    virtual int DestroyIcon(HICON__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyMenu@CApi@@UEAAHPEAUHMENU__@@@Z
    virtual int DestroyMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int DestroyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessageW@CApi@@UEAA_JPEBUtagMSG@@@Z
    virtual int64_t DispatchMessageW(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextExW@CApi@@UEAAHPEAUHDC__@@PEAGHPEAUtagRECT@@IPEAUtagDRAWTEXTPARAMS@@@Z
    virtual int DrawTextExW(HDC__*, unsigned short *, int, tagRECT *, unsigned int, tagDRAWTEXTPARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawThemeBackground@CApi@@UEAAJPEAXPEAUHDC__@@HHPEBUtagRECT@@2@Z
    virtual long DrawThemeBackground(void *, HDC__*, int, int, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawThemeParentBackground@CApi@@UEAAJPEAUHWND__@@PEAUHDC__@@PEBUtagRECT@@@Z
    virtual long DrawThemeParentBackground(HWND__*, HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawThemeTextEx@CApi@@UEAAJPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEBU_DTTOPTS@@@Z
    virtual long DrawThemeTextEx(void *, HDC__*, int, int, unsigned short const *, int, unsigned long, tagRECT *, _DTTOPTS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmpActivateLivePreview@CApi@@UEAAJHPEAUHWND__@@0W4LIVEPREVIEW_TRIGGER@@PEAUtagRECT@@@Z
    virtual long DwmpActivateLivePreview(int, HWND__*, HWND__*, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndBufferedPaint@CApi@@UEAAJPEAXH@Z
    virtual long EndBufferedPaint(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPaint@CApi@@UEAAHPEAUHWND__@@PEBUtagPAINTSTRUCT@@@Z
    virtual int EndPaint(HWND__*, tagPAINTSTRUCT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDisplayMonitors@CApi@@UEAAHPEAUHDC__@@PEBUtagRECT@@P6AHPEAUHMONITOR__@@0PEAU3@_J@Z4@Z
    virtual int EnumDisplayMonitors(HDC__*, tagRECT const *, int ( *)(HMONITOR__*, HDC__*, tagRECT *, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualRect@CApi@@UEAAHPEBUtagRECT@@0@Z
    virtual int EqualRect(tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeHwndFromLivePreview@CApi@@UEAAXPEAUHWND__@@H@Z
    virtual void ExcludeHwndFromLivePreview(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRect@CApi@@UEAAHPEAUHDC__@@PEBUtagRECT@@PEAUHBRUSH__@@@Z
    virtual int FillRect(HDC__*, tagRECT const *, HBRUSH__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectARGB@CApi@@UEAAXPEAUHDC__@@PEBUtagRECT@@EK@Z
    virtual void FillRectARGB(HDC__*, tagRECT const *, unsigned char, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceActiveWindowAppearance@CApi@@UEAAXPEAUHWND__@@@Z
    virtual void ForceActiveWindowAppearance(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GdiAlphaBlend@CApi@@UEAAHPEAUHDC__@@HHHH0HHHHU_BLENDFUNCTION@@@Z
    virtual int GdiAlphaBlend(HDC__*, int, int, int, int, HDC__*, int, int, int, int, _BLENDFUNCTION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GdiFlush@CApi@@UEAAHXZ
    virtual int GdiFlush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveTabFromContainer@CApi@@UEAAPEAUHWND__@@QEAU2@@Z
    virtual HWND__* GetActiveTabFromContainer(HWND__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAncestor@CApi@@UEAAPEAUHWND__@@PEAU2@I@Z
    virtual HWND__* GetAncestor(HWND__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapture@CApi@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetCapture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaretBlinkTime@CApi@@UEAAIXZ
    virtual unsigned int GetCaretBlinkTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoExW@CApi@@UEAAHPEAUHINSTANCE__@@PEBGPEAUtagWNDCLASSEXW@@@Z
    virtual int GetClassInfoExW(HINSTANCE__*, unsigned short const *, tagWNDCLASSEXW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientRect@CApi@@UEAAHPEAUHWND__@@PEAUtagRECT@@@Z
    virtual int GetClientRect(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipBox@CApi@@UEAAHPEAUHDC__@@PEAUtagRECT@@@Z
    virtual int GetClipBox(HDC__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentObject@CApi@@UEAAPEAXPEAUHDC__@@I@Z
    virtual void * GetCurrentObject(HDC__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorInfo@CApi@@UEAAHPEAUtagCURSORINFO@@@Z
    virtual int GetCursorInfo(tagCURSORINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorPos@CApi@@UEAAHPEAUtagPOINT@@@Z
    virtual int GetCursorPos(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDC@CApi@@UEAAPEAUHDC__@@PEAUHWND__@@@Z
    virtual HDC__* GetDC(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopWindow@CApi@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetDesktopWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceCaps@CApi@@UEAAHPEAUHDC__@@H@Z
    virtual int GetDeviceCaps(HDC__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayConfigBufferSizes@CApi@@UEAAJIPEAI0@Z
    virtual long GetDisplayConfigBufferSizes(unsigned int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiForMonitor@CApi@@UEAAJPEAUHMONITOR__@@W4MONITOR_DPI_TYPE@@PEAI2@Z
    virtual long GetDpiForMonitor(HMONITOR__*, int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiForWindow@CApi@@UEAAIPEAUHWND__@@@Z
    virtual unsigned int GetDpiForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@CApi@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundWindow@CApi@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetForegroundWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconInfo@CApi@@UEAAHPEAUHICON__@@PEAU_ICONINFO@@@Z
    virtual int GetIconInfo(HICON__*, _ICONINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsImmersiveColorUsingHighContrast@CApi@@UEAA_NW4IMMERSIVE_HC_CACHE_MODE@@@Z
    virtual bool GetIsImmersiveColorUsingHighContrast(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyState@CApi@@UEAAFH@Z
    virtual short GetKeyState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayeredWindowAttributes@CApi@@UEAAHPEAUHWND__@@PEAKPEAE1@Z
    virtual int GetLayeredWindowAttributes(HWND__*, unsigned long *, unsigned char *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLowestTopMostWnd@CApi@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetLowestTopMostWnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageExtraInfo@CApi@@UEAA_JXZ
    virtual int64_t GetMessageExtraInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessagePos@CApi@@UEAAKXZ
    virtual unsigned long GetMessagePos();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinimizedWidth@CApi@@UEAAHPEAUITrayComponentHost@@@Z
    virtual int GetMinimizedWidth(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorInfoW@CApi@@UEAAHPEAUHMONITOR__@@PEAUtagMONITORINFO@@@Z
    virtual int GetMonitorInfoW(HMONITOR__*, tagMONITORINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRects@CApi@@UEAAHPEAUHMONITOR__@@PEAUtagRECT@@H@Z
    virtual int GetMonitorRects(HMONITOR__*, tagRECT *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectW@CApi@@UEAAHPEAXH0@Z
    virtual int GetObjectW(void *, int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CApi@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* GetParent(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerInfo@CApi@@UEAAHIPEAUtagPOINTER_INFO@@@Z
    virtual int GetPointerInfo(unsigned int, tagPOINTER_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropW@CApi@@UEAAPEAXPEAUHWND__@@PEBG@Z
    virtual void * GetPropW(HWND__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollBarHeight@CApi@@UEAAHPEAUITrayComponentHost@@@Z
    virtual int GetScrollBarHeight(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollBarWidth@CApi@@UEAAHPEAUITrayComponentHost@@@Z
    virtual int GetScrollBarWidth(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStockObject@CApi@@UEAAPEAXH@Z
    virtual void * GetStockObject(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSysColor@CApi@@UEAAKH@Z
    virtual unsigned long GetSysColor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSysColorBrush@CApi@@UEAAPEAUHBRUSH__@@H@Z
    virtual HBRUSH__* GetSysColorBrush(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetrics@CApi@@UEAAHH@Z
    virtual int GetSystemMetrics(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetricsForDpi@CApi@@UEAAHHI@Z
    virtual int GetSystemMetricsForDpi(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabContainerFromAtom@CApi@@UEAAPEAUHWND__@@QEAU2@@Z
    virtual HWND__* GetTabContainerFromAtom(HWND__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarColor@CApi@@UEAAKPEAUITrayComponentHost@@@Z
    virtual unsigned long GetTaskbarColor(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarOpacity@CApi@@UEAAEPEAUITrayComponentHost@@@Z
    virtual unsigned char GetTaskbarOpacity(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextMetricsW@CApi@@UEAAHPEAUHDC__@@PEAUtagTEXTMETRICW@@@Z
    virtual int GetTextMetricsW(HDC__*, tagTEXTMETRICW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeBool@CApi@@UEAAJPEAXHHHPEAH@Z
    virtual long GetThemeBool(void *, int, int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeColor@CApi@@UEAAJPEAXHHHPEAK@Z
    virtual long GetThemeColor(void *, int, int, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeMargins@CApi@@UEAAJPEAXPEAUHDC__@@HHHPEBUtagRECT@@PEAU_MARGINS@@@Z
    virtual long GetThemeMargins(void *, HDC__*, int, int, int, tagRECT const *, _MARGINS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeMetric@CApi@@UEAAJPEAXPEAUHDC__@@HHHPEAH@Z
    virtual long GetThemeMetric(void *, HDC__*, int, int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemePartSize@CApi@@UEAAJPEAXPEAUHDC__@@HHPEBUtagRECT@@W4THEMESIZE@@PEAUtagSIZE@@@Z
    virtual long GetThemePartSize(void *, HDC__*, int, int, tagRECT const *, int, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTickCount@CApi@@UEAAKXZ
    virtual unsigned long GetTickCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayMonitor@CApi@@UEAAPEAUHMONITOR__@@PEAUITrayComponentHost@@@Z
    virtual HMONITOR__* GetTrayMonitor(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowCompositionAttribute@CApi@@UEAAHPEAUHWND__@@PEAUtagWINDOWCOMPOSITIONATTRIBDATA@@@Z
    virtual int GetWindowCompositionAttribute(HWND__*, tagWINDOWCOMPOSITIONATTRIBDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowDC@CApi@@UEAAPEAUHDC__@@PEAUHWND__@@@Z
    virtual HDC__* GetWindowDC(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowLongPtrW@CApi@@UEAA_JPEAUHWND__@@H@Z
    virtual int64_t GetWindowLongPtrW(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowLongW@CApi@@UEAAJPEAUHWND__@@H@Z
    virtual long GetWindowLongW(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowProcessHandle@CApi@@UEAAPEAXPEAUHWND__@@K@Z
    virtual void * GetWindowProcessHandle(HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowRect@CApi@@UEAAHPEAUHWND__@@PEAUtagRECT@@@Z
    virtual int GetWindowRect(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HungWindowFromGhostWindow@CApi@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* HungWindowFromGhostWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ILIsEqualByAliasOrPath@CApi@@UEAAHPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual int ILIsEqualByAliasOrPath(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InflateRect@CApi@@UEAAHPEAUtagRECT@@HH@Z
    virtual int InflateRect(tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetWindowText@CApi@@UEAAHPEAUHWND__@@PEAGH@Z
    virtual int InternalGetWindowText(HWND__*, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRect@CApi@@UEAAHPEAUHWND__@@PEBUtagRECT@@H@Z
    virtual int InvalidateRect(HWND__*, tagRECT const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationAllowedInSku@CApi@@UEAAHXZ
    virtual int IsAnimationAllowedInSku();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositionActive@CApi@@UEAAHXZ
    virtual int IsCompositionActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGhostWindowClass@CApi@@UEAAHQEAUHWND__@@@Z
    virtual int IsGhostWindowClass(HWND__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIconic@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int IsIconic(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersivePidl@CApi@@UEAA_NPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual bool IsImmersivePidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessDPIAware@CApi@@UEAAHXZ
    virtual int IsProcessDPIAware();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectEmpty@CApi@@UEAAHPEBUtagRECT@@@Z
    virtual int IsRectEmpty(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindow@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int IsWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowUnicode@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int IsWindowUnicode(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowVisible@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int IsWindowVisible(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillTimer@CApi@@UEAAHPEAUHWND__@@_K@Z
    virtual int KillTimer(HWND__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCursorW@CApi@@UEAAPEAUHICON__@@PEAUHINSTANCE__@@PEBG@Z
    virtual HICON__* LoadCursorW(HINSTANCE__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStringW@CApi@@UEAAHPEAUHINSTANCE__@@IPEAGH@Z
    virtual int LoadStringW(HINSTANCE__*, unsigned int, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LresultFromObject@CApi@@UEAA_JAEBU_GUID@@_KPEAUIUnknown@@@Z
    virtual int64_t LresultFromObject(_GUID const &, uint64_t, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeIconicThumbnailSource@CApi@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z
    virtual long MakeIconicThumbnailSource(IImmersiveApplication *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapWindowPoints@CApi@@UEAAHPEAUHWND__@@0PEAUtagPOINT@@I@Z
    virtual int MapWindowPoints(HWND__*, HWND__*, tagPOINT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Mirror_IsThreadRTL@CApi@@UEAAHXZ
    virtual int Mirror_IsThreadRTL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorFromPoint@CApi@@UEAAPEAUHMONITOR__@@UtagPOINT@@K@Z
    virtual HMONITOR__* MonitorFromPoint(tagPOINT, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorFromRect@CApi@@UEAAPEAUHMONITOR__@@PEBUtagRECT@@K@Z
    virtual HMONITOR__* MonitorFromRect(tagRECT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorFromWindow@CApi@@UEAAPEAUHMONITOR__@@PEAUHWND__@@K@Z
    virtual HMONITOR__* MonitorFromWindow(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWinEvent@CApi@@UEAAXKPEAUHWND__@@JJ@Z
    virtual void NotifyWinEvent(unsigned long, HWND__*, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OffsetRect@CApi@@UEAAHPEAUtagRECT@@HH@Z
    virtual int OffsetRect(tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenThemeData@CApi@@UEAAPEAXPEAUHWND__@@PEBG@Z
    virtual void * OpenThemeData(HWND__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenThemeDataForDpi@CApi@@UEAAPEAXPEAUHWND__@@PEBGI@Z
    virtual void * OpenThemeDataForDpi(HWND__*, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Polyline@CApi@@UEAAHPEAUHDC__@@PEBUtagPOINT@@H@Z
    virtual int Polyline(HDC__*, tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageW@CApi@@UEAAHPEAUHWND__@@I_K_J@Z
    virtual int PostMessageW(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTrayMessage@CApi@@UEAAHPEAUITrayComponentHost@@I_K_J@Z
    virtual int PostTrayMessage(ITrayComponentHost *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PtInRect@CApi@@UEAAHPEBUtagRECT@@UtagPOINT@@@Z
    virtual int PtInRect(tagRECT const *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDisplayConfig@CApi@@UEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z
    virtual long QueryDisplayConfig(unsigned int, unsigned int *, DISPLAYCONFIG_PATH_INFO *, unsigned int *, DISPLAYCONFIG_MODE_INFO *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApi@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawWindow@CApi@@UEAAHPEAUHWND__@@PEBUtagRECT@@PEAUHRGN__@@I@Z
    virtual int RedrawWindow(HWND__*, tagRECT const *, HRGN__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshImmersiveColorPolicyState@CApi@@UEAAXXZ
    virtual void RefreshImmersiveColorPolicyState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClassExW@CApi@@UEAAGPEBUtagWNDCLASSEXW@@@Z
    virtual unsigned short RegisterClassExW(tagWNDCLASSEXW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClipboardFormatW@CApi@@UEAAIPEBG@Z
    virtual unsigned int RegisterClipboardFormatW(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApi@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCapture@CApi@@UEAAHXZ
    virtual int ReleaseCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDC@CApi@@UEAAHPEAUHWND__@@PEAUHDC__@@@Z
    virtual int ReleaseDC(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDescriptionFromDataObject@CApi@@UEAAXPEAUIDataObject@@I@Z
    virtual void RemoveDescriptionFromDataObject(IDataObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RtlNtStatusToDosError@CApi@@UEAAKJ@Z
    virtual unsigned long RtlNtStatusToDosError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RtlQueryWnfStateData@CApi@@UEAAJPEAKU_WNF_STATE_NAME@@P6AJ1KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z32@Z
    virtual long RtlQueryWnfStateData(unsigned long *, _WNF_STATE_NAME, long ( *)(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long), void *, _WNF_TYPE_ID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SHGetDPIX@CApi@@UEAAHXZ
    virtual int SHGetDPIX();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SHIsParentOwnerOrSelf@CApi@@UEAAJPEAUHWND__@@0@Z
    virtual long SHIsParentOwnerOrSelf(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SHRegGetBoolValueFromHKCUHKLM@CApi@@UEAAHPEBG0H@Z
    virtual int SHRegGetBoolValueFromHKCUHKLM(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SHRegGetUSDWORDW@CApi@@UEAAKPEBG0K@Z
    virtual unsigned long SHRegGetUSDWORDW(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SHWindowsPolicy@CApi@@UEAAKAEBU_GUID@@@Z
    virtual unsigned long SHWindowsPolicy(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenToClient@CApi@@UEAAHPEAUHWND__@@PEAUtagPOINT@@@Z
    virtual int ScreenToClient(HWND__*, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectObject@CApi@@UEAAPEAXPEAUHDC__@@PEAX@Z
    virtual void * SelectObject(HDC__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageCallbackW@CApi@@UEAAHPEAUHWND__@@I_K_JP6AX0I12@Z1@Z
    virtual int SendMessageCallbackW(HWND__*, unsigned int, uint64_t, int64_t, void ( *)(HWND__*, unsigned int, uint64_t, int64_t), uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageW@CApi@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t SendMessageW(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNotifyMessageW@CApi@@UEAAHPEAUHWND__@@I_K_J@Z
    virtual int SendNotifyMessageW(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTrayMessage@CApi@@UEAA_JPEAUITrayComponentHost@@I_K_J@Z
    virtual int64_t SendTrayMessage(ITrayComponentHost *, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBkMode@CApi@@UEAAHPEAUHDC__@@H@Z
    virtual int SetBkMode(HDC__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCapture@CApi@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* SetCapture(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CApi@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* SetFocus(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundWindow@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int SetForegroundWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayeredWindowAttributes@CApi@@UEAAHPEAUHWND__@@KEK@Z
    virtual int SetLayeredWindowAttributes(HWND__*, unsigned long, unsigned char, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CApi@@UEAAHPEAUtagRECT@@HHHH@Z
    virtual int SetRect(tagRECT *, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectEmpty@CApi@@UEAAHPEAUtagRECT@@@Z
    virtual int SetRectEmpty(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextColor@CApi@@UEAAKPEAUHDC__@@K@Z
    virtual unsigned long SetTextColor(HDC__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadDpiAwarenessContext@CApi@@UEAAPEAUDPI_AWARENESS_CONTEXT__@@PEAU2@@Z
    virtual DPI_AWARENESS_CONTEXT__* SetThreadDpiAwarenessContext(DPI_AWARENESS_CONTEXT__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimer@CApi@@UEAA_KPEAUHWND__@@_KIP6AX0I1K@Z@Z
    virtual uint64_t SetTimer(HWND__*, uint64_t, unsigned int, void ( *)(HWND__*, unsigned int, uint64_t, unsigned long));
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrayForeground@CApi@@UEAAXPEAUITrayComponentHost@@@Z
    virtual void SetTrayForeground(ITrayComponentHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowLongPtrW@CApi@@UEAA_JPEAUHWND__@@H_J@Z
    virtual int64_t SetWindowLongPtrW(HWND__*, int, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowLongW@CApi@@UEAAJPEAUHWND__@@HJ@Z
    virtual long SetWindowLongW(HWND__*, int, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@CApi@@UEAAHPEAUHWND__@@0HHHHI@Z
    virtual int SetWindowPos(HWND__*, HWND__*, int, int, int, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowTheme@CApi@@UEAAJPEAUHWND__@@PEBG1@Z
    virtual long SetWindowTheme(HWND__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTaskbarAnimate@CApi@@UEAAHXZ
    virtual int ShouldTaskbarAnimate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToDesktopOnMonitor@CApi@@UEAAJPEAUITrayComponentHost@@PEAUHWND__@@PEAUHMONITOR__@@@Z
    virtual long SwitchToDesktopOnMonitor(ITrayComponentHost *, HWND__*, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemParametersInfoW@CApi@@UEAAHIIPEAXI@Z
    virtual int SystemParametersInfoW(unsigned int, unsigned int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackMouseEvent@CApi@@UEAAHPEAUtagTRACKMOUSEEVENT@@@Z
    virtual int TrackMouseEvent(tagTRACKMOUSEEVENT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackPopupMenuEx@CApi@@UEAAHPEAUHMENU__@@IHHPEAUHWND__@@PEAUtagTPMPARAMS@@@Z
    virtual int TrackPopupMenuEx(HMENU__*, unsigned int, int, int, HWND__*, tagTPMPARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateArrowKey@CApi@@UEAAHHKH@Z
    virtual int TranslateArrowKey(int, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateMessage@CApi@@UEAAHPEBUtagMSG@@@Z
    virtual int TranslateMessage(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnionRect@CApi@@UEAAHPEAUtagRECT@@PEBU2@1@Z
    virtual int UnionRect(tagRECT *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindow@CApi@@UEAAHPEAUHWND__@@@Z
    virtual int UpdateWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowFromPoint@CApi@@UEAAPEAUHWND__@@UtagPOINT@@@Z
    virtual HWND__* WindowFromPoint(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPinnabilityInfoForAppPidl@CApi@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAH1@Z
    virtual long _GetPinnabilityInfoForAppPidl(_ITEMIDLIST_ABSOLUTE const *, int *, int *);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `GetTickCount` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `DestroyIcon` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsGhostWindowClass` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsImmersivePidl` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetTabContainerFromAtom` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `SendMessageCallbackW` | `int` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `CreateSmallerIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetMonitorInfoW` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `MonitorFromWindow` | `struct HMONITOR__*` | `Method` | `Pdb` | No (PDB) |
| `InternalGetWindowText` | `int` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `CopyIcon` | `struct HICON__*` | `Method` | `Pdb` | No (PDB) |
| `IsIconic` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `HungWindowFromGhostWindow` | `struct HWND__*` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AdjustWindowRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `AdjustWindowRectEx` | `int` | `Method` | `Pdb` | No (PDB) |
| `BeginBufferedPaint` | `void *` | `Method` | `Pdb` | No (PDB) |
| `BeginPaint` | `struct HDC__*` | `Method` | `Pdb` | No (PDB) |
| `BringWindowToTop` | `int` | `Method` | `Pdb` | No (PDB) |
| `BufferedPaintInit` | `long` | `Method` | `Pdb` | No (PDB) |
| `BufferedPaintUnInit` | `long` | `Method` | `Pdb` | No (PDB) |
| `CharNextA` | `char *` | `Method` | `Pdb` | No (PDB) |
| `CharNextW` | `unsigned short *` | `Method` | `Pdb` | No (PDB) |
| `ClientToScreen` | `int` | `Method` | `Pdb` | No (PDB) |
| `CloseThemeData` | `long` | `Method` | `Pdb` | No (PDB) |
| `CopyRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `CreateCompatibleDC` | `struct HDC__*` | `Method` | `Pdb` | No (PDB) |
| `CreateDIBSection` | `struct HBITMAP__*` | `Method` | `Pdb` | No (PDB) |
| `CreateFontIndirectW` | `struct HFONT__*` | `Method` | `Pdb` | No (PDB) |
| `CreatePen` | `struct HPEN__*` | `Method` | `Pdb` | No (PDB) |
| `CreateWindowExW` | `struct HWND__*` | `Method` | `Pdb` | No (PDB) |
| `DADHelper_DragEnter` | `void` | `Method` | `Pdb` | No (PDB) |
| `DADHelper_DragMove` | `void` | `Method` | `Pdb` | No (PDB) |
| `DataObj_SetBlob` | `long` | `Method` | `Pdb` | No (PDB) |
| `DefWindowProcA` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `DefWindowProcW` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `DeleteDC` | `int` | `Method` | `Pdb` | No (PDB) |
| `DeleteObject` | `int` | `Method` | `Pdb` | No (PDB) |
| `DestroyMenu` | `int` | `Method` | `Pdb` | No (PDB) |
| `DestroyWindow` | `int` | `Method` | `Pdb` | No (PDB) |
| `DispatchMessageW` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `DrawTextExW` | `int` | `Method` | `Pdb` | No (PDB) |
| `DrawThemeBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawThemeParentBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawThemeTextEx` | `long` | `Method` | `Pdb` | No (PDB) |
| `DwmpActivateLivePreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `EndBufferedPaint` | `long` | `Method` | `Pdb` | No (PDB) |
| `EndPaint` | `int` | `Method` | `Pdb` | No (PDB) |
| `EnumDisplayMonitors` | `int` | `Method` | `Pdb` | No (PDB) |
| `EqualRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `ExcludeHwndFromLivePreview` | `void` | `Method` | `Pdb` | No (PDB) |
| `FillRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `FillRectARGB` | `void` | `Method` | `Pdb` | No (PDB) |
| `ForceActiveWindowAppearance` | `void` | `Method` | `Pdb` | No (PDB) |
| `GdiAlphaBlend` | `int` | `Method` | `Pdb` | No (PDB) |
| `GdiFlush` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetActiveTabFromContainer` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetAncestor` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetCapture` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetCaretBlinkTime` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetClassInfoExW` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetClientRect` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetClipBox` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentObject` | `void *` | `Accessor` | `Pdb` | No (PDB) |
| `GetCursorInfo` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetCursorPos` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetDC` | `struct HDC__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetDesktopWindow` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetDeviceCaps` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetDisplayConfigBufferSizes` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDpiForMonitor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDpiForWindow` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetFocus` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetForegroundWindow` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconInfo` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetIsImmersiveColorUsingHighContrast` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetKeyState` | `short` | `Accessor` | `Pdb` | No (PDB) |
| `GetLayeredWindowAttributes` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetLowestTopMostWnd` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetMessageExtraInfo` | `int64_t` | `Accessor` | `Pdb` | No (PDB) |
| `GetMessagePos` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetMinimizedWidth` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitorRects` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetObjectW` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetParent` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetPointerInfo` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetPropW` | `void *` | `Accessor` | `Pdb` | No (PDB) |
| `GetScrollBarHeight` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetScrollBarWidth` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetStockObject` | `void *` | `Accessor` | `Pdb` | No (PDB) |
| `GetSysColor` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSysColorBrush` | `struct HBRUSH__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetSystemMetrics` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetSystemMetricsForDpi` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskbarColor` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaskbarOpacity` | `unsigned char` | `Accessor` | `Pdb` | No (PDB) |
| `GetTextMetricsW` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetThemeBool` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetThemeColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetThemeMargins` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetThemeMetric` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetThemePartSize` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrayMonitor` | `struct HMONITOR__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowCompositionAttribute` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowDC` | `struct HDC__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowLongPtrW` | `int64_t` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowLongW` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowProcessHandle` | `void *` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowRect` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `ILIsEqualByAliasOrPath` | `int` | `Method` | `Pdb` | No (PDB) |
| `InflateRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `InvalidateRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsAnimationAllowedInSku` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsCompositionActive` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsProcessDPIAware` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsRectEmpty` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindow` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindowUnicode` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindowVisible` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `KillTimer` | `int` | `Method` | `Pdb` | No (PDB) |
| `LoadCursorW` | `struct HICON__*` | `Method` | `Pdb` | No (PDB) |
| `LoadStringW` | `int` | `Method` | `Pdb` | No (PDB) |
| `LresultFromObject` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `MakeIconicThumbnailSource` | `long` | `Method` | `Pdb` | No (PDB) |
| `MapWindowPoints` | `int` | `Method` | `Pdb` | No (PDB) |
| `Mirror_IsThreadRTL` | `int` | `Method` | `Pdb` | No (PDB) |
| `MonitorFromPoint` | `struct HMONITOR__*` | `Method` | `Pdb` | No (PDB) |
| `MonitorFromRect` | `struct HMONITOR__*` | `Method` | `Pdb` | No (PDB) |
| `NotifyWinEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `OffsetRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `OpenThemeData` | `void *` | `Method` | `Pdb` | No (PDB) |
| `OpenThemeDataForDpi` | `void *` | `Method` | `Pdb` | No (PDB) |
| `Polyline` | `int` | `Method` | `Pdb` | No (PDB) |
| `PostMessageW` | `int` | `Method` | `Pdb` | No (PDB) |
| `PostTrayMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `PtInRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `QueryDisplayConfig` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `RedrawWindow` | `int` | `Method` | `Pdb` | No (PDB) |
| `RefreshImmersiveColorPolicyState` | `void` | `Method` | `Pdb` | No (PDB) |
| `RegisterClassExW` | `unsigned short` | `Method` | `Pdb` | No (PDB) |
| `RegisterClipboardFormatW` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `ReleaseCapture` | `int` | `Method` | `Pdb` | No (PDB) |
| `ReleaseDC` | `int` | `Method` | `Pdb` | No (PDB) |
| `RemoveDescriptionFromDataObject` | `void` | `Method` | `Pdb` | No (PDB) |
| `RtlNtStatusToDosError` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `RtlQueryWnfStateData` | `long` | `Method` | `Pdb` | No (PDB) |
| `SHGetDPIX` | `int` | `Method` | `Pdb` | No (PDB) |
| `SHIsParentOwnerOrSelf` | `long` | `Method` | `Pdb` | No (PDB) |
| `SHRegGetBoolValueFromHKCUHKLM` | `int` | `Method` | `Pdb` | No (PDB) |
| `SHRegGetUSDWORDW` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `SHWindowsPolicy` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `ScreenToClient` | `int` | `Method` | `Pdb` | No (PDB) |
| `SelectObject` | `void *` | `Method` | `Pdb` | No (PDB) |
| `SendMessageW` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `SendNotifyMessageW` | `int` | `Method` | `Pdb` | No (PDB) |
| `SendTrayMessage` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `SetBkMode` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetCapture` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `SetFocus` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `SetForegroundWindow` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetLayeredWindowAttributes` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetRect` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetRectEmpty` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetTextColor` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `SetThreadDpiAwarenessContext` | `struct DPI_AWARENESS_CONTEXT__*` | `Accessor` | `Pdb` | No (PDB) |
| `SetTimer` | `uint64_t` | `Accessor` | `Pdb` | No (PDB) |
| `SetTrayForeground` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowLongPtrW` | `int64_t` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowLongW` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowPos` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowTheme` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldTaskbarAnimate` | `int` | `Method` | `Pdb` | No (PDB) |
| `SwitchToDesktopOnMonitor` | `long` | `Method` | `Pdb` | No (PDB) |
| `SystemParametersInfoW` | `int` | `Method` | `Pdb` | No (PDB) |
| `TrackMouseEvent` | `int` | `Method` | `Pdb` | No (PDB) |
| `TrackPopupMenuEx` | `int` | `Method` | `Pdb` | No (PDB) |
| `TranslateArrowKey` | `int` | `Method` | `Pdb` | No (PDB) |
| `TranslateMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `UnionRect` | `int` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindow` | `int` | `Method` | `Pdb` | No (PDB) |
| `WindowFromPoint` | `struct HWND__*` | `Method` | `Pdb` | No (PDB) |
| `_GetPinnabilityInfoForAppPidl` | `long` | `Method` | `Pdb` | No (PDB) |
