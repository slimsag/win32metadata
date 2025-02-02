/*** Autogenerated by WIDL 5.0 from ./ocmm.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __ocmm_h__
#define __ocmm_h__

/* Forward declarations */

#ifndef __ITimerService_FWD_DEFINED__
#define __ITimerService_FWD_DEFINED__
typedef interface ITimerService ITimerService;
#ifdef __cplusplus
interface ITimerService;
#endif /* __cplusplus */
#endif

#ifndef __ITimer_FWD_DEFINED__
#define __ITimer_FWD_DEFINED__
typedef interface ITimer ITimer;
#ifdef __cplusplus
interface ITimer;
#endif /* __cplusplus */
#endif

#ifndef __ITimerEx_FWD_DEFINED__
#define __ITimerEx_FWD_DEFINED__
typedef interface ITimerEx ITimerEx;
#ifdef __cplusplus
interface ITimerEx;
#endif /* __cplusplus */
#endif

#ifndef __ITimerSink_FWD_DEFINED__
#define __ITimerSink_FWD_DEFINED__
typedef interface ITimerSink ITimerSink;
#ifdef __cplusplus
interface ITimerSink;
#endif /* __cplusplus */
#endif

#ifndef __IMapMIMEToCLSID_FWD_DEFINED__
#define __IMapMIMEToCLSID_FWD_DEFINED__
typedef interface IMapMIMEToCLSID IMapMIMEToCLSID;
#ifdef __cplusplus
interface IMapMIMEToCLSID;
#endif /* __cplusplus */
#endif

#ifndef __IImageDecodeFilter_FWD_DEFINED__
#define __IImageDecodeFilter_FWD_DEFINED__
typedef interface IImageDecodeFilter IImageDecodeFilter;
#ifdef __cplusplus
interface IImageDecodeFilter;
#endif /* __cplusplus */
#endif

#ifndef __IImageDecodeEventSink_FWD_DEFINED__
#define __IImageDecodeEventSink_FWD_DEFINED__
typedef interface IImageDecodeEventSink IImageDecodeEventSink;
#ifdef __cplusplus
interface IImageDecodeEventSink;
#endif /* __cplusplus */
#endif

#ifndef __IImageDecodeEventSink2_FWD_DEFINED__
#define __IImageDecodeEventSink2_FWD_DEFINED__
typedef interface IImageDecodeEventSink2 IImageDecodeEventSink2;
#ifdef __cplusplus
interface IImageDecodeEventSink2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <oleidl.h>

#ifdef __cplusplus
extern "C" {
#endif

//=--------------------------------------------------------------------------=
// ocmm.h
//=--------------------------------------------------------------------------=
// (C) Copyright Microsoft Corporation.  All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=

#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define SURFACE_LOCK_EXCLUSIVE        0x01
#define SURFACE_LOCK_ALLOW_DISCARD    0x02
#define SURFACE_LOCK_WAIT             0x04

#define E_SURFACE_NOSURFACE             0x8000C000L
#define E_SURFACE_UNKNOWN_FORMAT        0x8000C001L
#define E_SURFACE_NOTMYPOINTER          0x8000C002L
#define E_SURFACE_DISCARDED             0x8000C003L
#define E_SURFACE_NODC                  0x8000C004L
#define E_SURFACE_NOTMYDC               0x8000C005L
#define S_SURFACE_DISCARDED             0x0000C003L

typedef GUID BFID;
#ifndef RGBQUAD_DEFINED
#define RGBQUAD_DEFINED
typedef struct tagRGBQUAD RGBQUAD;
#endif
EXTERN_C const GUID BFID_MONOCHROME;
EXTERN_C const GUID BFID_RGB_4;
EXTERN_C const GUID BFID_RGB_8;
EXTERN_C const GUID BFID_RGB_555;
EXTERN_C const GUID BFID_RGB_565;
EXTERN_C const GUID BFID_RGB_24;
EXTERN_C const GUID BFID_RGB_32;
EXTERN_C const GUID BFID_RGBA_32;
EXTERN_C const GUID BFID_GRAY_8;
EXTERN_C const GUID BFID_GRAY_16;

#define SID_SDirectDraw3 IID_IDirectDraw3

#define COLOR_NO_TRANSPARENT 0xFFFFFFFF

#define IMGDECODE_EVENT_PROGRESS 0x01
#define IMGDECODE_EVENT_PALETTE 0x02
#define IMGDECODE_EVENT_BEGINBITS 0x04
#define IMGDECODE_EVENT_BITSCOMPLETE 0x08
#define IMGDECODE_EVENT_USEDDRAW 0x10

#define IMGDECODE_HINT_TOPDOWN 0x01
#define IMGDECODE_HINT_BOTTOMUP 0x02
#define IMGDECODE_HINT_FULLWIDTH 0x04

#define MAPMIME_DEFAULT 0
#define MAPMIME_CLSID 1
#define MAPMIME_DISABLE 2
#define MAPMIME_DEFAULT_ALWAYS 3

#define BFID_INDEXED_RGB_8 BFID_RGB_8
#define BFID_INDEXED_RGB_4 BFID_RGB_4
#define BFID_INDEXED_RGB_1 BFID_MONOCHROME

EXTERN_C const GUID CLSID_IImageDecodeFilter;

EXTERN_C const GUID NAMEDTIMER_DRAW;

#define TIMERMODE_NORMAL            0
#define TIMERMODE_VISIBILITYAWARE   1

#ifndef __ITimerService_FWD_DEFINED__
#define __ITimerService_FWD_DEFINED__
typedef interface ITimerService ITimerService;
#ifdef __cplusplus
interface ITimerService;
#endif /* __cplusplus */
#endif

#ifndef __ITimer_FWD_DEFINED__
#define __ITimer_FWD_DEFINED__
typedef interface ITimer ITimer;
#ifdef __cplusplus
interface ITimer;
#endif /* __cplusplus */
#endif

#ifndef __ITimerEx_FWD_DEFINED__
#define __ITimerEx_FWD_DEFINED__
typedef interface ITimerEx ITimerEx;
#ifdef __cplusplus
interface ITimerEx;
#endif /* __cplusplus */
#endif

#ifndef __ITimerSink_FWD_DEFINED__
#define __ITimerSink_FWD_DEFINED__
typedef interface ITimerSink ITimerSink;
#ifdef __cplusplus
interface ITimerSink;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * ITimerService interface
 */
#ifndef __ITimerService_INTERFACE_DEFINED__
#define __ITimerService_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITimerService, 0x3050f35f, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3050f35f-98b5-11cf-bb82-00aa00bdce0b")
ITimerService : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateTimer(
        ITimer *pReferenceTimer,
        ITimer **ppNewTimer) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNamedTimer(
        REFGUID rguidName,
        ITimer **ppTimer) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetNamedTimerReference(
        REFGUID rguidName,
        ITimer *pReferenceTimer) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITimerService, 0x3050f35f, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct ITimerServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimerService *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimerService *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimerService *This);

    /*** ITimerService methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateTimer)(
        ITimerService *This,
        ITimer *pReferenceTimer,
        ITimer **ppNewTimer);

    HRESULT (STDMETHODCALLTYPE *GetNamedTimer)(
        ITimerService *This,
        REFGUID rguidName,
        ITimer **ppTimer);

    HRESULT (STDMETHODCALLTYPE *SetNamedTimerReference)(
        ITimerService *This,
        REFGUID rguidName,
        ITimer *pReferenceTimer);

    END_INTERFACE
} ITimerServiceVtbl;

interface ITimerService {
    CONST_VTBL ITimerServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITimerService_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITimerService_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITimerService_Release(This) (This)->lpVtbl->Release(This)
/*** ITimerService methods ***/
#define ITimerService_CreateTimer(This,pReferenceTimer,ppNewTimer) (This)->lpVtbl->CreateTimer(This,pReferenceTimer,ppNewTimer)
#define ITimerService_GetNamedTimer(This,rguidName,ppTimer) (This)->lpVtbl->GetNamedTimer(This,rguidName,ppTimer)
#define ITimerService_SetNamedTimerReference(This,rguidName,pReferenceTimer) (This)->lpVtbl->SetNamedTimerReference(This,rguidName,pReferenceTimer)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITimerService_QueryInterface(ITimerService* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITimerService_AddRef(ITimerService* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITimerService_Release(ITimerService* This) {
    return This->lpVtbl->Release(This);
}
/*** ITimerService methods ***/
static FORCEINLINE HRESULT ITimerService_CreateTimer(ITimerService* This,ITimer *pReferenceTimer,ITimer **ppNewTimer) {
    return This->lpVtbl->CreateTimer(This,pReferenceTimer,ppNewTimer);
}
static FORCEINLINE HRESULT ITimerService_GetNamedTimer(ITimerService* This,REFGUID rguidName,ITimer **ppTimer) {
    return This->lpVtbl->GetNamedTimer(This,rguidName,ppTimer);
}
static FORCEINLINE HRESULT ITimerService_SetNamedTimerReference(ITimerService* This,REFGUID rguidName,ITimer *pReferenceTimer) {
    return This->lpVtbl->SetNamedTimerReference(This,rguidName,pReferenceTimer);
}
#endif
#endif

#endif


#endif  /* __ITimerService_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITimer interface
 */
#ifndef __ITimer_INTERFACE_DEFINED__
#define __ITimer_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITimer, 0x3050f360, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3050f360-98b5-11cf-bb82-00aa00bdce0b")
ITimer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Advise(
        VARIANT vtimeMin,
        VARIANT vtimeMax,
        VARIANT vtimeInterval,
        DWORD dwFlags,
        ITimerSink *pTimerSink,
        DWORD *pdwCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE Unadvise(
        DWORD dwCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE Freeze(
        BOOL fFreeze) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTime(
        VARIANT *pvtime) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITimer, 0x3050f360, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct ITimerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimer *This);

    /*** ITimer methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        ITimer *This,
        VARIANT vtimeMin,
        VARIANT vtimeMax,
        VARIANT vtimeInterval,
        DWORD dwFlags,
        ITimerSink *pTimerSink,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        ITimer *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *Freeze)(
        ITimer *This,
        BOOL fFreeze);

    HRESULT (STDMETHODCALLTYPE *GetTime)(
        ITimer *This,
        VARIANT *pvtime);

    END_INTERFACE
} ITimerVtbl;

interface ITimer {
    CONST_VTBL ITimerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITimer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITimer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITimer_Release(This) (This)->lpVtbl->Release(This)
/*** ITimer methods ***/
#define ITimer_Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie) (This)->lpVtbl->Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)
#define ITimer_Unadvise(This,dwCookie) (This)->lpVtbl->Unadvise(This,dwCookie)
#define ITimer_Freeze(This,fFreeze) (This)->lpVtbl->Freeze(This,fFreeze)
#define ITimer_GetTime(This,pvtime) (This)->lpVtbl->GetTime(This,pvtime)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITimer_QueryInterface(ITimer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITimer_AddRef(ITimer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITimer_Release(ITimer* This) {
    return This->lpVtbl->Release(This);
}
/*** ITimer methods ***/
static FORCEINLINE HRESULT ITimer_Advise(ITimer* This,VARIANT vtimeMin,VARIANT vtimeMax,VARIANT vtimeInterval,DWORD dwFlags,ITimerSink *pTimerSink,DWORD *pdwCookie) {
    return This->lpVtbl->Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie);
}
static FORCEINLINE HRESULT ITimer_Unadvise(ITimer* This,DWORD dwCookie) {
    return This->lpVtbl->Unadvise(This,dwCookie);
}
static FORCEINLINE HRESULT ITimer_Freeze(ITimer* This,BOOL fFreeze) {
    return This->lpVtbl->Freeze(This,fFreeze);
}
static FORCEINLINE HRESULT ITimer_GetTime(ITimer* This,VARIANT *pvtime) {
    return This->lpVtbl->GetTime(This,pvtime);
}
#endif
#endif

#endif


#endif  /* __ITimer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITimerEx interface
 */
#ifndef __ITimerEx_INTERFACE_DEFINED__
#define __ITimerEx_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITimerEx, 0x30510414, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("30510414-98b5-11cf-bb82-00aa00bdce0b")
ITimerEx : public ITimer
{
    virtual HRESULT STDMETHODCALLTYPE SetMode(
        DWORD dwMode) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITimerEx, 0x30510414, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct ITimerExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimerEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimerEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimerEx *This);

    /*** ITimer methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        ITimerEx *This,
        VARIANT vtimeMin,
        VARIANT vtimeMax,
        VARIANT vtimeInterval,
        DWORD dwFlags,
        ITimerSink *pTimerSink,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        ITimerEx *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *Freeze)(
        ITimerEx *This,
        BOOL fFreeze);

    HRESULT (STDMETHODCALLTYPE *GetTime)(
        ITimerEx *This,
        VARIANT *pvtime);

    /*** ITimerEx methods ***/
    HRESULT (STDMETHODCALLTYPE *SetMode)(
        ITimerEx *This,
        DWORD dwMode);

    END_INTERFACE
} ITimerExVtbl;

interface ITimerEx {
    CONST_VTBL ITimerExVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITimerEx_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITimerEx_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITimerEx_Release(This) (This)->lpVtbl->Release(This)
/*** ITimer methods ***/
#define ITimerEx_Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie) (This)->lpVtbl->Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)
#define ITimerEx_Unadvise(This,dwCookie) (This)->lpVtbl->Unadvise(This,dwCookie)
#define ITimerEx_Freeze(This,fFreeze) (This)->lpVtbl->Freeze(This,fFreeze)
#define ITimerEx_GetTime(This,pvtime) (This)->lpVtbl->GetTime(This,pvtime)
/*** ITimerEx methods ***/
#define ITimerEx_SetMode(This,dwMode) (This)->lpVtbl->SetMode(This,dwMode)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITimerEx_QueryInterface(ITimerEx* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITimerEx_AddRef(ITimerEx* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITimerEx_Release(ITimerEx* This) {
    return This->lpVtbl->Release(This);
}
/*** ITimer methods ***/
static FORCEINLINE HRESULT ITimerEx_Advise(ITimerEx* This,VARIANT vtimeMin,VARIANT vtimeMax,VARIANT vtimeInterval,DWORD dwFlags,ITimerSink *pTimerSink,DWORD *pdwCookie) {
    return This->lpVtbl->Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie);
}
static FORCEINLINE HRESULT ITimerEx_Unadvise(ITimerEx* This,DWORD dwCookie) {
    return This->lpVtbl->Unadvise(This,dwCookie);
}
static FORCEINLINE HRESULT ITimerEx_Freeze(ITimerEx* This,BOOL fFreeze) {
    return This->lpVtbl->Freeze(This,fFreeze);
}
static FORCEINLINE HRESULT ITimerEx_GetTime(ITimerEx* This,VARIANT *pvtime) {
    return This->lpVtbl->GetTime(This,pvtime);
}
/*** ITimerEx methods ***/
static FORCEINLINE HRESULT ITimerEx_SetMode(ITimerEx* This,DWORD dwMode) {
    return This->lpVtbl->SetMode(This,dwMode);
}
#endif
#endif

#endif


#endif  /* __ITimerEx_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITimerSink interface
 */
#ifndef __ITimerSink_INTERFACE_DEFINED__
#define __ITimerSink_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITimerSink, 0x3050f361, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3050f361-98b5-11cf-bb82-00aa00bdce0b")
ITimerSink : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnTimer(
        VARIANT vtimeAdvise) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITimerSink, 0x3050f361, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct ITimerSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimerSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimerSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimerSink *This);

    /*** ITimerSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnTimer)(
        ITimerSink *This,
        VARIANT vtimeAdvise);

    END_INTERFACE
} ITimerSinkVtbl;

interface ITimerSink {
    CONST_VTBL ITimerSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITimerSink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITimerSink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITimerSink_Release(This) (This)->lpVtbl->Release(This)
/*** ITimerSink methods ***/
#define ITimerSink_OnTimer(This,vtimeAdvise) (This)->lpVtbl->OnTimer(This,vtimeAdvise)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITimerSink_QueryInterface(ITimerSink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITimerSink_AddRef(ITimerSink* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITimerSink_Release(ITimerSink* This) {
    return This->lpVtbl->Release(This);
}
/*** ITimerSink methods ***/
static FORCEINLINE HRESULT ITimerSink_OnTimer(ITimerSink* This,VARIANT vtimeAdvise) {
    return This->lpVtbl->OnTimer(This,vtimeAdvise);
}
#endif
#endif

#endif


#endif  /* __ITimerSink_INTERFACE_DEFINED__ */

#define SID_STimerService IID_ITimerService

#ifndef __IMapMIMEToCLSID_FWD_DEFINED__
#define __IMapMIMEToCLSID_FWD_DEFINED__
typedef interface IMapMIMEToCLSID IMapMIMEToCLSID;
#ifdef __cplusplus
interface IMapMIMEToCLSID;
#endif /* __cplusplus */
#endif

#ifndef __IImageDecodeFilter_FWD_DEFINED__
#define __IImageDecodeFilter_FWD_DEFINED__
typedef interface IImageDecodeFilter IImageDecodeFilter;
#ifdef __cplusplus
interface IImageDecodeFilter;
#endif /* __cplusplus */
#endif

#ifndef __IImageDecodeEventSink_FWD_DEFINED__
#define __IImageDecodeEventSink_FWD_DEFINED__
typedef interface IImageDecodeEventSink IImageDecodeEventSink;
#ifdef __cplusplus
interface IImageDecodeEventSink;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IMapMIMEToCLSID interface
 */
#ifndef __IMapMIMEToCLSID_INTERFACE_DEFINED__
#define __IMapMIMEToCLSID_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMapMIMEToCLSID, 0xd9e89500, 0x30fa, 0x11d0, 0xb7,0x24, 0x00,0xaa,0x00,0x6c,0x1a,0x01);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d9e89500-30fa-11d0-b724-00aa006c1a01")
IMapMIMEToCLSID : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE EnableDefaultMappings(
        BOOL bEnable) = 0;

    virtual HRESULT STDMETHODCALLTYPE MapMIMEToCLSID(
        LPCOLESTR pszMIMEType,
        CLSID *pCLSID) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetMapping(
        LPCOLESTR pszMIMEType,
        DWORD dwMapMode,
        REFCLSID clsid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMapMIMEToCLSID, 0xd9e89500, 0x30fa, 0x11d0, 0xb7,0x24, 0x00,0xaa,0x00,0x6c,0x1a,0x01)
#endif
#else
typedef struct IMapMIMEToCLSIDVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMapMIMEToCLSID *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMapMIMEToCLSID *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMapMIMEToCLSID *This);

    /*** IMapMIMEToCLSID methods ***/
    HRESULT (STDMETHODCALLTYPE *EnableDefaultMappings)(
        IMapMIMEToCLSID *This,
        BOOL bEnable);

    HRESULT (STDMETHODCALLTYPE *MapMIMEToCLSID)(
        IMapMIMEToCLSID *This,
        LPCOLESTR pszMIMEType,
        CLSID *pCLSID);

    HRESULT (STDMETHODCALLTYPE *SetMapping)(
        IMapMIMEToCLSID *This,
        LPCOLESTR pszMIMEType,
        DWORD dwMapMode,
        REFCLSID clsid);

    END_INTERFACE
} IMapMIMEToCLSIDVtbl;

interface IMapMIMEToCLSID {
    CONST_VTBL IMapMIMEToCLSIDVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMapMIMEToCLSID_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMapMIMEToCLSID_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMapMIMEToCLSID_Release(This) (This)->lpVtbl->Release(This)
/*** IMapMIMEToCLSID methods ***/
#define IMapMIMEToCLSID_EnableDefaultMappings(This,bEnable) (This)->lpVtbl->EnableDefaultMappings(This,bEnable)
#define IMapMIMEToCLSID_MapMIMEToCLSID(This,pszMIMEType,pCLSID) (This)->lpVtbl->MapMIMEToCLSID(This,pszMIMEType,pCLSID)
#define IMapMIMEToCLSID_SetMapping(This,pszMIMEType,dwMapMode,clsid) (This)->lpVtbl->SetMapping(This,pszMIMEType,dwMapMode,clsid)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMapMIMEToCLSID_QueryInterface(IMapMIMEToCLSID* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMapMIMEToCLSID_AddRef(IMapMIMEToCLSID* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMapMIMEToCLSID_Release(IMapMIMEToCLSID* This) {
    return This->lpVtbl->Release(This);
}
/*** IMapMIMEToCLSID methods ***/
static FORCEINLINE HRESULT IMapMIMEToCLSID_EnableDefaultMappings(IMapMIMEToCLSID* This,BOOL bEnable) {
    return This->lpVtbl->EnableDefaultMappings(This,bEnable);
}
static FORCEINLINE HRESULT IMapMIMEToCLSID_MapMIMEToCLSID(IMapMIMEToCLSID* This,LPCOLESTR pszMIMEType,CLSID *pCLSID) {
    return This->lpVtbl->MapMIMEToCLSID(This,pszMIMEType,pCLSID);
}
static FORCEINLINE HRESULT IMapMIMEToCLSID_SetMapping(IMapMIMEToCLSID* This,LPCOLESTR pszMIMEType,DWORD dwMapMode,REFCLSID clsid) {
    return This->lpVtbl->SetMapping(This,pszMIMEType,dwMapMode,clsid);
}
#endif
#endif

#endif


#endif  /* __IMapMIMEToCLSID_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IImageDecodeFilter interface
 */
#ifndef __IImageDecodeFilter_INTERFACE_DEFINED__
#define __IImageDecodeFilter_INTERFACE_DEFINED__

DEFINE_GUID(IID_IImageDecodeFilter, 0xa3ccedf3, 0x2de2, 0x11d0, 0x86,0xf4, 0x00,0xa0,0xc9,0x13,0xf7,0x50);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a3ccedf3-2de2-11d0-86f4-00a0c913f750")
IImageDecodeFilter : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        IImageDecodeEventSink *pEventSink) = 0;

    virtual HRESULT STDMETHODCALLTYPE Process(
        IStream *pStream) = 0;

    virtual HRESULT STDMETHODCALLTYPE Terminate(
        HRESULT hrStatus) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IImageDecodeFilter, 0xa3ccedf3, 0x2de2, 0x11d0, 0x86,0xf4, 0x00,0xa0,0xc9,0x13,0xf7,0x50)
#endif
#else
typedef struct IImageDecodeFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageDecodeFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageDecodeFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageDecodeFilter *This);

    /*** IImageDecodeFilter methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IImageDecodeFilter *This,
        IImageDecodeEventSink *pEventSink);

    HRESULT (STDMETHODCALLTYPE *Process)(
        IImageDecodeFilter *This,
        IStream *pStream);

    HRESULT (STDMETHODCALLTYPE *Terminate)(
        IImageDecodeFilter *This,
        HRESULT hrStatus);

    END_INTERFACE
} IImageDecodeFilterVtbl;

interface IImageDecodeFilter {
    CONST_VTBL IImageDecodeFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IImageDecodeFilter_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IImageDecodeFilter_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IImageDecodeFilter_Release(This) (This)->lpVtbl->Release(This)
/*** IImageDecodeFilter methods ***/
#define IImageDecodeFilter_Initialize(This,pEventSink) (This)->lpVtbl->Initialize(This,pEventSink)
#define IImageDecodeFilter_Process(This,pStream) (This)->lpVtbl->Process(This,pStream)
#define IImageDecodeFilter_Terminate(This,hrStatus) (This)->lpVtbl->Terminate(This,hrStatus)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IImageDecodeFilter_QueryInterface(IImageDecodeFilter* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IImageDecodeFilter_AddRef(IImageDecodeFilter* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IImageDecodeFilter_Release(IImageDecodeFilter* This) {
    return This->lpVtbl->Release(This);
}
/*** IImageDecodeFilter methods ***/
static FORCEINLINE HRESULT IImageDecodeFilter_Initialize(IImageDecodeFilter* This,IImageDecodeEventSink *pEventSink) {
    return This->lpVtbl->Initialize(This,pEventSink);
}
static FORCEINLINE HRESULT IImageDecodeFilter_Process(IImageDecodeFilter* This,IStream *pStream) {
    return This->lpVtbl->Process(This,pStream);
}
static FORCEINLINE HRESULT IImageDecodeFilter_Terminate(IImageDecodeFilter* This,HRESULT hrStatus) {
    return This->lpVtbl->Terminate(This,hrStatus);
}
#endif
#endif

#endif


#endif  /* __IImageDecodeFilter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IImageDecodeEventSink interface
 */
#ifndef __IImageDecodeEventSink_INTERFACE_DEFINED__
#define __IImageDecodeEventSink_INTERFACE_DEFINED__

DEFINE_GUID(IID_IImageDecodeEventSink, 0xbaa342a0, 0x2ded, 0x11d0, 0x86,0xf4, 0x00,0xa0,0xc9,0x13,0xf7,0x50);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("baa342a0-2ded-11d0-86f4-00a0c913f750")
IImageDecodeEventSink : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetSurface(
        LONG nWidth,
        LONG nHeight,
        REFGUID bfid,
        ULONG nPasses,
        DWORD dwHints,
        IUnknown **ppSurface) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnBeginDecode(
        DWORD *pdwEvents,
        ULONG *pnFormats,
        BFID **ppFormats) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnBitsComplete(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnDecodeComplete(
        HRESULT hrStatus) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnPalette(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnProgress(
        RECT *pBounds,
        BOOL bComplete) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IImageDecodeEventSink, 0xbaa342a0, 0x2ded, 0x11d0, 0x86,0xf4, 0x00,0xa0,0xc9,0x13,0xf7,0x50)
#endif
#else
typedef struct IImageDecodeEventSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageDecodeEventSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageDecodeEventSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageDecodeEventSink *This);

    /*** IImageDecodeEventSink methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSurface)(
        IImageDecodeEventSink *This,
        LONG nWidth,
        LONG nHeight,
        REFGUID bfid,
        ULONG nPasses,
        DWORD dwHints,
        IUnknown **ppSurface);

    HRESULT (STDMETHODCALLTYPE *OnBeginDecode)(
        IImageDecodeEventSink *This,
        DWORD *pdwEvents,
        ULONG *pnFormats,
        BFID **ppFormats);

    HRESULT (STDMETHODCALLTYPE *OnBitsComplete)(
        IImageDecodeEventSink *This);

    HRESULT (STDMETHODCALLTYPE *OnDecodeComplete)(
        IImageDecodeEventSink *This,
        HRESULT hrStatus);

    HRESULT (STDMETHODCALLTYPE *OnPalette)(
        IImageDecodeEventSink *This);

    HRESULT (STDMETHODCALLTYPE *OnProgress)(
        IImageDecodeEventSink *This,
        RECT *pBounds,
        BOOL bComplete);

    END_INTERFACE
} IImageDecodeEventSinkVtbl;

interface IImageDecodeEventSink {
    CONST_VTBL IImageDecodeEventSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IImageDecodeEventSink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IImageDecodeEventSink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IImageDecodeEventSink_Release(This) (This)->lpVtbl->Release(This)
/*** IImageDecodeEventSink methods ***/
#define IImageDecodeEventSink_GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface) (This)->lpVtbl->GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)
#define IImageDecodeEventSink_OnBeginDecode(This,pdwEvents,pnFormats,ppFormats) (This)->lpVtbl->OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)
#define IImageDecodeEventSink_OnBitsComplete(This) (This)->lpVtbl->OnBitsComplete(This)
#define IImageDecodeEventSink_OnDecodeComplete(This,hrStatus) (This)->lpVtbl->OnDecodeComplete(This,hrStatus)
#define IImageDecodeEventSink_OnPalette(This) (This)->lpVtbl->OnPalette(This)
#define IImageDecodeEventSink_OnProgress(This,pBounds,bComplete) (This)->lpVtbl->OnProgress(This,pBounds,bComplete)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IImageDecodeEventSink_QueryInterface(IImageDecodeEventSink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IImageDecodeEventSink_AddRef(IImageDecodeEventSink* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IImageDecodeEventSink_Release(IImageDecodeEventSink* This) {
    return This->lpVtbl->Release(This);
}
/*** IImageDecodeEventSink methods ***/
static FORCEINLINE HRESULT IImageDecodeEventSink_GetSurface(IImageDecodeEventSink* This,LONG nWidth,LONG nHeight,REFGUID bfid,ULONG nPasses,DWORD dwHints,IUnknown **ppSurface) {
    return This->lpVtbl->GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface);
}
static FORCEINLINE HRESULT IImageDecodeEventSink_OnBeginDecode(IImageDecodeEventSink* This,DWORD *pdwEvents,ULONG *pnFormats,BFID **ppFormats) {
    return This->lpVtbl->OnBeginDecode(This,pdwEvents,pnFormats,ppFormats);
}
static FORCEINLINE HRESULT IImageDecodeEventSink_OnBitsComplete(IImageDecodeEventSink* This) {
    return This->lpVtbl->OnBitsComplete(This);
}
static FORCEINLINE HRESULT IImageDecodeEventSink_OnDecodeComplete(IImageDecodeEventSink* This,HRESULT hrStatus) {
    return This->lpVtbl->OnDecodeComplete(This,hrStatus);
}
static FORCEINLINE HRESULT IImageDecodeEventSink_OnPalette(IImageDecodeEventSink* This) {
    return This->lpVtbl->OnPalette(This);
}
static FORCEINLINE HRESULT IImageDecodeEventSink_OnProgress(IImageDecodeEventSink* This,RECT *pBounds,BOOL bComplete) {
    return This->lpVtbl->OnProgress(This,pBounds,bComplete);
}
#endif
#endif

#endif


#endif  /* __IImageDecodeEventSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IImageDecodeEventSink2 interface
 */
#ifndef __IImageDecodeEventSink2_INTERFACE_DEFINED__
#define __IImageDecodeEventSink2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IImageDecodeEventSink2, 0x8ebd8a57, 0x8a96, 0x48c9, 0x84,0xa6, 0x96,0x2e,0x2d,0xb9,0xc9,0x31);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("8ebd8a57-8a96-48c9-84a6-962e2db9c931")
IImageDecodeEventSink2 : public IImageDecodeEventSink
{
    virtual HRESULT STDMETHODCALLTYPE IsAlphaPremultRequired(
        BOOL *pfPremultAlpha) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IImageDecodeEventSink2, 0x8ebd8a57, 0x8a96, 0x48c9, 0x84,0xa6, 0x96,0x2e,0x2d,0xb9,0xc9,0x31)
#endif
#else
typedef struct IImageDecodeEventSink2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageDecodeEventSink2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageDecodeEventSink2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageDecodeEventSink2 *This);

    /*** IImageDecodeEventSink methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSurface)(
        IImageDecodeEventSink2 *This,
        LONG nWidth,
        LONG nHeight,
        REFGUID bfid,
        ULONG nPasses,
        DWORD dwHints,
        IUnknown **ppSurface);

    HRESULT (STDMETHODCALLTYPE *OnBeginDecode)(
        IImageDecodeEventSink2 *This,
        DWORD *pdwEvents,
        ULONG *pnFormats,
        BFID **ppFormats);

    HRESULT (STDMETHODCALLTYPE *OnBitsComplete)(
        IImageDecodeEventSink2 *This);

    HRESULT (STDMETHODCALLTYPE *OnDecodeComplete)(
        IImageDecodeEventSink2 *This,
        HRESULT hrStatus);

    HRESULT (STDMETHODCALLTYPE *OnPalette)(
        IImageDecodeEventSink2 *This);

    HRESULT (STDMETHODCALLTYPE *OnProgress)(
        IImageDecodeEventSink2 *This,
        RECT *pBounds,
        BOOL bComplete);

    /*** IImageDecodeEventSink2 methods ***/
    HRESULT (STDMETHODCALLTYPE *IsAlphaPremultRequired)(
        IImageDecodeEventSink2 *This,
        BOOL *pfPremultAlpha);

    END_INTERFACE
} IImageDecodeEventSink2Vtbl;

interface IImageDecodeEventSink2 {
    CONST_VTBL IImageDecodeEventSink2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IImageDecodeEventSink2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IImageDecodeEventSink2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IImageDecodeEventSink2_Release(This) (This)->lpVtbl->Release(This)
/*** IImageDecodeEventSink methods ***/
#define IImageDecodeEventSink2_GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface) (This)->lpVtbl->GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)
#define IImageDecodeEventSink2_OnBeginDecode(This,pdwEvents,pnFormats,ppFormats) (This)->lpVtbl->OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)
#define IImageDecodeEventSink2_OnBitsComplete(This) (This)->lpVtbl->OnBitsComplete(This)
#define IImageDecodeEventSink2_OnDecodeComplete(This,hrStatus) (This)->lpVtbl->OnDecodeComplete(This,hrStatus)
#define IImageDecodeEventSink2_OnPalette(This) (This)->lpVtbl->OnPalette(This)
#define IImageDecodeEventSink2_OnProgress(This,pBounds,bComplete) (This)->lpVtbl->OnProgress(This,pBounds,bComplete)
/*** IImageDecodeEventSink2 methods ***/
#define IImageDecodeEventSink2_IsAlphaPremultRequired(This,pfPremultAlpha) (This)->lpVtbl->IsAlphaPremultRequired(This,pfPremultAlpha)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IImageDecodeEventSink2_QueryInterface(IImageDecodeEventSink2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IImageDecodeEventSink2_AddRef(IImageDecodeEventSink2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IImageDecodeEventSink2_Release(IImageDecodeEventSink2* This) {
    return This->lpVtbl->Release(This);
}
/*** IImageDecodeEventSink methods ***/
static FORCEINLINE HRESULT IImageDecodeEventSink2_GetSurface(IImageDecodeEventSink2* This,LONG nWidth,LONG nHeight,REFGUID bfid,ULONG nPasses,DWORD dwHints,IUnknown **ppSurface) {
    return This->lpVtbl->GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface);
}
static FORCEINLINE HRESULT IImageDecodeEventSink2_OnBeginDecode(IImageDecodeEventSink2* This,DWORD *pdwEvents,ULONG *pnFormats,BFID **ppFormats) {
    return This->lpVtbl->OnBeginDecode(This,pdwEvents,pnFormats,ppFormats);
}
static FORCEINLINE HRESULT IImageDecodeEventSink2_OnBitsComplete(IImageDecodeEventSink2* This) {
    return This->lpVtbl->OnBitsComplete(This);
}
static FORCEINLINE HRESULT IImageDecodeEventSink2_OnDecodeComplete(IImageDecodeEventSink2* This,HRESULT hrStatus) {
    return This->lpVtbl->OnDecodeComplete(This,hrStatus);
}
static FORCEINLINE HRESULT IImageDecodeEventSink2_OnPalette(IImageDecodeEventSink2* This) {
    return This->lpVtbl->OnPalette(This);
}
static FORCEINLINE HRESULT IImageDecodeEventSink2_OnProgress(IImageDecodeEventSink2* This,RECT *pBounds,BOOL bComplete) {
    return This->lpVtbl->OnProgress(This,pBounds,bComplete);
}
/*** IImageDecodeEventSink2 methods ***/
static FORCEINLINE HRESULT IImageDecodeEventSink2_IsAlphaPremultRequired(IImageDecodeEventSink2* This,BOOL *pfPremultAlpha) {
    return This->lpVtbl->IsAlphaPremultRequired(This,pfPremultAlpha);
}
#endif
#endif

#endif


#endif  /* __IImageDecodeEventSink2_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ocmm_h__ */
