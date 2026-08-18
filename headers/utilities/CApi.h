#pragma once
#include "../windissect_forwards.h"

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
