/*** Autogenerated by WIDL 5.0 from ./iedial.idl - Do not edit ***/

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

#ifndef __iedial_h__
#define __iedial_h__

/* Forward declarations */

#ifndef __IDialEventSink_FWD_DEFINED__
#define __IDialEventSink_FWD_DEFINED__
typedef interface IDialEventSink IDialEventSink;
#ifdef __cplusplus
interface IDialEventSink;
#endif /* __cplusplus */
#endif

#ifndef __IDialEngine_FWD_DEFINED__
#define __IDialEngine_FWD_DEFINED__
typedef interface IDialEngine IDialEngine;
#ifdef __cplusplus
interface IDialEngine;
#endif /* __cplusplus */
#endif

#ifndef __IDialBranding_FWD_DEFINED__
#define __IDialBranding_FWD_DEFINED__
typedef interface IDialBranding IDialBranding;
#ifdef __cplusplus
interface IDialBranding;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <ocidl.h>
#include <oleidl.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

//=--------------------------------------------------------------------------=
// iedial.h
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
#pragma comment(lib,"uuid.lib")

//---------------------------------------------------------------------------=

/*****************************************************************************
 * IDialEventSink interface
 */
#ifndef __IDialEventSink_INTERFACE_DEFINED__
#define __IDialEventSink_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDialEventSink, 0x2d86f4ff, 0x6e2d, 0x4488, 0xb2,0xe9, 0x69,0x34,0xaf,0xd4,0x1b,0xea);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("2d86f4ff-6e2d-4488-b2e9-6934afd41bea")
IDialEventSink : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnEvent(
        DWORD dwEvent,
        DWORD dwStatus) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDialEventSink, 0x2d86f4ff, 0x6e2d, 0x4488, 0xb2,0xe9, 0x69,0x34,0xaf,0xd4,0x1b,0xea)
#endif
#else
typedef struct IDialEventSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDialEventSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDialEventSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDialEventSink *This);

    /*** IDialEventSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnEvent)(
        IDialEventSink *This,
        DWORD dwEvent,
        DWORD dwStatus);

    END_INTERFACE
} IDialEventSinkVtbl;

interface IDialEventSink {
    CONST_VTBL IDialEventSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDialEventSink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDialEventSink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDialEventSink_Release(This) (This)->lpVtbl->Release(This)
/*** IDialEventSink methods ***/
#define IDialEventSink_OnEvent(This,dwEvent,dwStatus) (This)->lpVtbl->OnEvent(This,dwEvent,dwStatus)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDialEventSink_QueryInterface(IDialEventSink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDialEventSink_AddRef(IDialEventSink* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDialEventSink_Release(IDialEventSink* This) {
    return This->lpVtbl->Release(This);
}
/*** IDialEventSink methods ***/
static FORCEINLINE HRESULT IDialEventSink_OnEvent(IDialEventSink* This,DWORD dwEvent,DWORD dwStatus) {
    return This->lpVtbl->OnEvent(This,dwEvent,dwStatus);
}
#endif
#endif

#endif


#endif  /* __IDialEventSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDialEngine interface
 */
#ifndef __IDialEngine_INTERFACE_DEFINED__
#define __IDialEngine_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDialEngine, 0x39fd782b, 0x7905, 0x40d5, 0x91,0x48, 0x3c,0x9b,0x19,0x04,0x23,0xd5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("39fd782b-7905-40d5-9148-3c9b190423d5")
IDialEngine : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        LPCWSTR pwzConnectoid,
        IDialEventSink *pIDES) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        LPCWSTR pwzProperty,
        LPWSTR pwzValue,
        DWORD dwBufSize) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProperty(
        LPCWSTR pwzProperty,
        LPCWSTR pwzValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE Dial(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE HangUp(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetConnectedState(
        DWORD *pdwState) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetConnectHandle(
        DWORD_PTR *pdwHandle) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDialEngine, 0x39fd782b, 0x7905, 0x40d5, 0x91,0x48, 0x3c,0x9b,0x19,0x04,0x23,0xd5)
#endif
#else
typedef struct IDialEngineVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDialEngine *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDialEngine *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDialEngine *This);

    /*** IDialEngine methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IDialEngine *This,
        LPCWSTR pwzConnectoid,
        IDialEventSink *pIDES);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IDialEngine *This,
        LPCWSTR pwzProperty,
        LPWSTR pwzValue,
        DWORD dwBufSize);

    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IDialEngine *This,
        LPCWSTR pwzProperty,
        LPCWSTR pwzValue);

    HRESULT (STDMETHODCALLTYPE *Dial)(
        IDialEngine *This);

    HRESULT (STDMETHODCALLTYPE *HangUp)(
        IDialEngine *This);

    HRESULT (STDMETHODCALLTYPE *GetConnectedState)(
        IDialEngine *This,
        DWORD *pdwState);

    HRESULT (STDMETHODCALLTYPE *GetConnectHandle)(
        IDialEngine *This,
        DWORD_PTR *pdwHandle);

    END_INTERFACE
} IDialEngineVtbl;

interface IDialEngine {
    CONST_VTBL IDialEngineVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDialEngine_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDialEngine_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDialEngine_Release(This) (This)->lpVtbl->Release(This)
/*** IDialEngine methods ***/
#define IDialEngine_Initialize(This,pwzConnectoid,pIDES) (This)->lpVtbl->Initialize(This,pwzConnectoid,pIDES)
#define IDialEngine_GetProperty(This,pwzProperty,pwzValue,dwBufSize) (This)->lpVtbl->GetProperty(This,pwzProperty,pwzValue,dwBufSize)
#define IDialEngine_SetProperty(This,pwzProperty,pwzValue) (This)->lpVtbl->SetProperty(This,pwzProperty,pwzValue)
#define IDialEngine_Dial(This) (This)->lpVtbl->Dial(This)
#define IDialEngine_HangUp(This) (This)->lpVtbl->HangUp(This)
#define IDialEngine_GetConnectedState(This,pdwState) (This)->lpVtbl->GetConnectedState(This,pdwState)
#define IDialEngine_GetConnectHandle(This,pdwHandle) (This)->lpVtbl->GetConnectHandle(This,pdwHandle)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDialEngine_QueryInterface(IDialEngine* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDialEngine_AddRef(IDialEngine* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDialEngine_Release(IDialEngine* This) {
    return This->lpVtbl->Release(This);
}
/*** IDialEngine methods ***/
static FORCEINLINE HRESULT IDialEngine_Initialize(IDialEngine* This,LPCWSTR pwzConnectoid,IDialEventSink *pIDES) {
    return This->lpVtbl->Initialize(This,pwzConnectoid,pIDES);
}
static FORCEINLINE HRESULT IDialEngine_GetProperty(IDialEngine* This,LPCWSTR pwzProperty,LPWSTR pwzValue,DWORD dwBufSize) {
    return This->lpVtbl->GetProperty(This,pwzProperty,pwzValue,dwBufSize);
}
static FORCEINLINE HRESULT IDialEngine_SetProperty(IDialEngine* This,LPCWSTR pwzProperty,LPCWSTR pwzValue) {
    return This->lpVtbl->SetProperty(This,pwzProperty,pwzValue);
}
static FORCEINLINE HRESULT IDialEngine_Dial(IDialEngine* This) {
    return This->lpVtbl->Dial(This);
}
static FORCEINLINE HRESULT IDialEngine_HangUp(IDialEngine* This) {
    return This->lpVtbl->HangUp(This);
}
static FORCEINLINE HRESULT IDialEngine_GetConnectedState(IDialEngine* This,DWORD *pdwState) {
    return This->lpVtbl->GetConnectedState(This,pdwState);
}
static FORCEINLINE HRESULT IDialEngine_GetConnectHandle(IDialEngine* This,DWORD_PTR *pdwHandle) {
    return This->lpVtbl->GetConnectHandle(This,pdwHandle);
}
#endif
#endif

#endif


#endif  /* __IDialEngine_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDialBranding interface
 */
#ifndef __IDialBranding_INTERFACE_DEFINED__
#define __IDialBranding_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDialBranding, 0x8aecafa9, 0x4306, 0x43cc, 0x8c,0x5a, 0x76,0x5f,0x29,0x79,0xcc,0x16);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("8aecafa9-4306-43cc-8c5a-765f2979cc16")
IDialBranding : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        LPCWSTR pwzConnectoid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBitmap(
        DWORD dwIndex,
        HBITMAP *phBitmap) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDialBranding, 0x8aecafa9, 0x4306, 0x43cc, 0x8c,0x5a, 0x76,0x5f,0x29,0x79,0xcc,0x16)
#endif
#else
typedef struct IDialBrandingVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDialBranding *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDialBranding *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDialBranding *This);

    /*** IDialBranding methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IDialBranding *This,
        LPCWSTR pwzConnectoid);

    HRESULT (STDMETHODCALLTYPE *GetBitmap)(
        IDialBranding *This,
        DWORD dwIndex,
        HBITMAP *phBitmap);

    END_INTERFACE
} IDialBrandingVtbl;

interface IDialBranding {
    CONST_VTBL IDialBrandingVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDialBranding_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDialBranding_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDialBranding_Release(This) (This)->lpVtbl->Release(This)
/*** IDialBranding methods ***/
#define IDialBranding_Initialize(This,pwzConnectoid) (This)->lpVtbl->Initialize(This,pwzConnectoid)
#define IDialBranding_GetBitmap(This,dwIndex,phBitmap) (This)->lpVtbl->GetBitmap(This,dwIndex,phBitmap)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDialBranding_QueryInterface(IDialBranding* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDialBranding_AddRef(IDialBranding* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDialBranding_Release(IDialBranding* This) {
    return This->lpVtbl->Release(This);
}
/*** IDialBranding methods ***/
static FORCEINLINE HRESULT IDialBranding_Initialize(IDialBranding* This,LPCWSTR pwzConnectoid) {
    return This->lpVtbl->Initialize(This,pwzConnectoid);
}
static FORCEINLINE HRESULT IDialBranding_GetBitmap(IDialBranding* This,DWORD dwIndex,HBITMAP *phBitmap) {
    return This->lpVtbl->GetBitmap(This,dwIndex,phBitmap);
}
#endif
#endif

#endif


#endif  /* __IDialBranding_INTERFACE_DEFINED__ */

#define DIALPROP_USERNAME       L"UserName"        
#define DIALPROP_PASSWORD       L"Password"        
#define DIALPROP_DOMAIN         L"Domain"          
#define DIALPROP_SAVEPASSWORD   L"SavePassword"    
#define DIALPROP_REDIALCOUNT    L"RedialCount"     
#define DIALPROP_REDIALINTERVAL L"RedialInterval"  
#define DIALPROP_PHONENUMBER    L"PhoneNumber"     
#define DIALPROP_LASTERROR      L"LastError"       
#define DIALPROP_RESOLVEDPHONE  L"ResolvedPhone"   

#define DIALENG_OperationComplete   0x10000          
#define DIALENG_RedialAttempt       0x10001          
#define DIALENG_RedialWait          0x10002          
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HBITMAP_UserSize     (ULONG *, ULONG, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserMarshal  (ULONG *, unsigned char *, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(ULONG *, unsigned char *, HBITMAP *);
void            __RPC_USER HBITMAP_UserFree     (ULONG *, HBITMAP *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __iedial_h__ */
