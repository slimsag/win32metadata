/*** Autogenerated by WIDL 5.0 from ./opcparturi.idl - Do not edit ***/

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

#ifndef __opcparturi_h__
#define __opcparturi_h__

/* Forward declarations */

#ifndef __IOpcUri_FWD_DEFINED__
#define __IOpcUri_FWD_DEFINED__
typedef interface IOpcUri IOpcUri;
#ifdef __cplusplus
interface IOpcUri;
#endif /* __cplusplus */
#endif

#ifndef __IOpcPartUri_FWD_DEFINED__
#define __IOpcPartUri_FWD_DEFINED__
typedef interface IOpcPartUri IOpcPartUri;
#ifdef __cplusplus
interface IOpcPartUri;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <urlmon.h>

#ifdef __cplusplus
extern "C" {
#endif

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//--------------------------------------------------------------------------
#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#if (NTDDI_VERSION >= NTDDI_WIN7)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#ifndef __IOpcUri_FWD_DEFINED__
#define __IOpcUri_FWD_DEFINED__
typedef interface IOpcUri IOpcUri;
#ifdef __cplusplus
interface IOpcUri;
#endif /* __cplusplus */
#endif

#ifndef __IOpcPartUri_FWD_DEFINED__
#define __IOpcPartUri_FWD_DEFINED__
typedef interface IOpcPartUri IOpcPartUri;
#ifdef __cplusplus
interface IOpcPartUri;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IOpcUri interface
 */
#ifndef __IOpcUri_INTERFACE_DEFINED__
#define __IOpcUri_INTERFACE_DEFINED__

DEFINE_GUID(IID_IOpcUri, 0xbc9c1b9b, 0xd62c, 0x49eb, 0xae,0xf0, 0x3b,0x4e,0x0b,0x28,0xeb,0xed);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bc9c1b9b-d62c-49eb-aef0-3b4e0b28ebed")
IOpcUri : public IUri
{
    virtual HRESULT STDMETHODCALLTYPE GetRelationshipsPartUri(
        IOpcPartUri **relationshipPartUri) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRelativeUri(
        IOpcPartUri *targetPartUri,
        IUri **relativeUri) = 0;

    virtual HRESULT STDMETHODCALLTYPE CombinePartUri(
        IUri *relativeUri,
        IOpcPartUri **combinedUri) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IOpcUri, 0xbc9c1b9b, 0xd62c, 0x49eb, 0xae,0xf0, 0x3b,0x4e,0x0b,0x28,0xeb,0xed)
#endif
#else
typedef struct IOpcUriVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOpcUri *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOpcUri *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOpcUri *This);

    /*** IUri methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPropertyBSTR)(
        IOpcUri *This,
        Uri_PROPERTY uriProp,
        BSTR *pbstrProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetPropertyLength)(
        IOpcUri *This,
        Uri_PROPERTY uriProp,
        DWORD *pcchProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetPropertyDWORD)(
        IOpcUri *This,
        Uri_PROPERTY uriProp,
        DWORD *pdwProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *HasProperty)(
        IOpcUri *This,
        Uri_PROPERTY uriProp,
        BOOL *pfHasProperty);

    HRESULT (STDMETHODCALLTYPE *GetAbsoluteUri)(
        IOpcUri *This,
        BSTR *pbstrAbsoluteUri);

    HRESULT (STDMETHODCALLTYPE *GetAuthority)(
        IOpcUri *This,
        BSTR *pbstrAuthority);

    HRESULT (STDMETHODCALLTYPE *GetDisplayUri)(
        IOpcUri *This,
        BSTR *pbstrDisplayString);

    HRESULT (STDMETHODCALLTYPE *GetDomain)(
        IOpcUri *This,
        BSTR *pbstrDomain);

    HRESULT (STDMETHODCALLTYPE *GetExtension)(
        IOpcUri *This,
        BSTR *pbstrExtension);

    HRESULT (STDMETHODCALLTYPE *GetFragment)(
        IOpcUri *This,
        BSTR *pbstrFragment);

    HRESULT (STDMETHODCALLTYPE *GetHost)(
        IOpcUri *This,
        BSTR *pbstrHost);

    HRESULT (STDMETHODCALLTYPE *GetPassword)(
        IOpcUri *This,
        BSTR *pbstrPassword);

    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IOpcUri *This,
        BSTR *pbstrPath);

    HRESULT (STDMETHODCALLTYPE *GetPathAndQuery)(
        IOpcUri *This,
        BSTR *pbstrPathAndQuery);

    HRESULT (STDMETHODCALLTYPE *GetQuery)(
        IOpcUri *This,
        BSTR *pbstrQuery);

    HRESULT (STDMETHODCALLTYPE *GetRawUri)(
        IOpcUri *This,
        BSTR *pbstrRawUri);

    HRESULT (STDMETHODCALLTYPE *GetSchemeName)(
        IOpcUri *This,
        BSTR *pbstrSchemeName);

    HRESULT (STDMETHODCALLTYPE *GetUserInfo)(
        IOpcUri *This,
        BSTR *pbstrUserInfo);

    HRESULT (STDMETHODCALLTYPE *GetUserName)(
        IOpcUri *This,
        BSTR *pbstrUserName);

    HRESULT (STDMETHODCALLTYPE *GetHostType)(
        IOpcUri *This,
        DWORD *pdwHostType);

    HRESULT (STDMETHODCALLTYPE *GetPort)(
        IOpcUri *This,
        DWORD *pdwPort);

    HRESULT (STDMETHODCALLTYPE *GetScheme)(
        IOpcUri *This,
        DWORD *pdwScheme);

    HRESULT (STDMETHODCALLTYPE *GetZone)(
        IOpcUri *This,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IOpcUri *This,
        LPDWORD pdwFlags);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IOpcUri *This,
        IUri *pUri,
        BOOL *pfEqual);

    /*** IOpcUri methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRelationshipsPartUri)(
        IOpcUri *This,
        IOpcPartUri **relationshipPartUri);

    HRESULT (STDMETHODCALLTYPE *GetRelativeUri)(
        IOpcUri *This,
        IOpcPartUri *targetPartUri,
        IUri **relativeUri);

    HRESULT (STDMETHODCALLTYPE *CombinePartUri)(
        IOpcUri *This,
        IUri *relativeUri,
        IOpcPartUri **combinedUri);

    END_INTERFACE
} IOpcUriVtbl;

interface IOpcUri {
    CONST_VTBL IOpcUriVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IOpcUri_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IOpcUri_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IOpcUri_Release(This) (This)->lpVtbl->Release(This)
/*** IUri methods ***/
#define IOpcUri_GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) (This)->lpVtbl->GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags)
#define IOpcUri_GetPropertyLength(This,uriProp,pcchProperty,dwFlags) (This)->lpVtbl->GetPropertyLength(This,uriProp,pcchProperty,dwFlags)
#define IOpcUri_GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) (This)->lpVtbl->GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags)
#define IOpcUri_HasProperty(This,uriProp,pfHasProperty) (This)->lpVtbl->HasProperty(This,uriProp,pfHasProperty)
#define IOpcUri_GetAbsoluteUri(This,pbstrAbsoluteUri) (This)->lpVtbl->GetAbsoluteUri(This,pbstrAbsoluteUri)
#define IOpcUri_GetAuthority(This,pbstrAuthority) (This)->lpVtbl->GetAuthority(This,pbstrAuthority)
#define IOpcUri_GetDisplayUri(This,pbstrDisplayString) (This)->lpVtbl->GetDisplayUri(This,pbstrDisplayString)
#define IOpcUri_GetDomain(This,pbstrDomain) (This)->lpVtbl->GetDomain(This,pbstrDomain)
#define IOpcUri_GetExtension(This,pbstrExtension) (This)->lpVtbl->GetExtension(This,pbstrExtension)
#define IOpcUri_GetFragment(This,pbstrFragment) (This)->lpVtbl->GetFragment(This,pbstrFragment)
#define IOpcUri_GetHost(This,pbstrHost) (This)->lpVtbl->GetHost(This,pbstrHost)
#define IOpcUri_GetPassword(This,pbstrPassword) (This)->lpVtbl->GetPassword(This,pbstrPassword)
#define IOpcUri_GetPath(This,pbstrPath) (This)->lpVtbl->GetPath(This,pbstrPath)
#define IOpcUri_GetPathAndQuery(This,pbstrPathAndQuery) (This)->lpVtbl->GetPathAndQuery(This,pbstrPathAndQuery)
#define IOpcUri_GetQuery(This,pbstrQuery) (This)->lpVtbl->GetQuery(This,pbstrQuery)
#define IOpcUri_GetRawUri(This,pbstrRawUri) (This)->lpVtbl->GetRawUri(This,pbstrRawUri)
#define IOpcUri_GetSchemeName(This,pbstrSchemeName) (This)->lpVtbl->GetSchemeName(This,pbstrSchemeName)
#define IOpcUri_GetUserInfo(This,pbstrUserInfo) (This)->lpVtbl->GetUserInfo(This,pbstrUserInfo)
#define IOpcUri_GetUserName(This,pbstrUserName) (This)->lpVtbl->GetUserName(This,pbstrUserName)
#define IOpcUri_GetHostType(This,pdwHostType) (This)->lpVtbl->GetHostType(This,pdwHostType)
#define IOpcUri_GetPort(This,pdwPort) (This)->lpVtbl->GetPort(This,pdwPort)
#define IOpcUri_GetScheme(This,pdwScheme) (This)->lpVtbl->GetScheme(This,pdwScheme)
#define IOpcUri_GetZone(This,pdwZone) (This)->lpVtbl->GetZone(This,pdwZone)
#define IOpcUri_GetProperties(This,pdwFlags) (This)->lpVtbl->GetProperties(This,pdwFlags)
#define IOpcUri_IsEqual(This,pUri,pfEqual) (This)->lpVtbl->IsEqual(This,pUri,pfEqual)
/*** IOpcUri methods ***/
#define IOpcUri_GetRelationshipsPartUri(This,relationshipPartUri) (This)->lpVtbl->GetRelationshipsPartUri(This,relationshipPartUri)
#define IOpcUri_GetRelativeUri(This,targetPartUri,relativeUri) (This)->lpVtbl->GetRelativeUri(This,targetPartUri,relativeUri)
#define IOpcUri_CombinePartUri(This,relativeUri,combinedUri) (This)->lpVtbl->CombinePartUri(This,relativeUri,combinedUri)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IOpcUri_QueryInterface(IOpcUri* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IOpcUri_AddRef(IOpcUri* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IOpcUri_Release(IOpcUri* This) {
    return This->lpVtbl->Release(This);
}
/*** IUri methods ***/
static FORCEINLINE HRESULT IOpcUri_GetPropertyBSTR(IOpcUri* This,Uri_PROPERTY uriProp,BSTR *pbstrProperty,DWORD dwFlags) {
    return This->lpVtbl->GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags);
}
static FORCEINLINE HRESULT IOpcUri_GetPropertyLength(IOpcUri* This,Uri_PROPERTY uriProp,DWORD *pcchProperty,DWORD dwFlags) {
    return This->lpVtbl->GetPropertyLength(This,uriProp,pcchProperty,dwFlags);
}
static FORCEINLINE HRESULT IOpcUri_GetPropertyDWORD(IOpcUri* This,Uri_PROPERTY uriProp,DWORD *pdwProperty,DWORD dwFlags) {
    return This->lpVtbl->GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags);
}
static FORCEINLINE HRESULT IOpcUri_HasProperty(IOpcUri* This,Uri_PROPERTY uriProp,BOOL *pfHasProperty) {
    return This->lpVtbl->HasProperty(This,uriProp,pfHasProperty);
}
static FORCEINLINE HRESULT IOpcUri_GetAbsoluteUri(IOpcUri* This,BSTR *pbstrAbsoluteUri) {
    return This->lpVtbl->GetAbsoluteUri(This,pbstrAbsoluteUri);
}
static FORCEINLINE HRESULT IOpcUri_GetAuthority(IOpcUri* This,BSTR *pbstrAuthority) {
    return This->lpVtbl->GetAuthority(This,pbstrAuthority);
}
static FORCEINLINE HRESULT IOpcUri_GetDisplayUri(IOpcUri* This,BSTR *pbstrDisplayString) {
    return This->lpVtbl->GetDisplayUri(This,pbstrDisplayString);
}
static FORCEINLINE HRESULT IOpcUri_GetDomain(IOpcUri* This,BSTR *pbstrDomain) {
    return This->lpVtbl->GetDomain(This,pbstrDomain);
}
static FORCEINLINE HRESULT IOpcUri_GetExtension(IOpcUri* This,BSTR *pbstrExtension) {
    return This->lpVtbl->GetExtension(This,pbstrExtension);
}
static FORCEINLINE HRESULT IOpcUri_GetFragment(IOpcUri* This,BSTR *pbstrFragment) {
    return This->lpVtbl->GetFragment(This,pbstrFragment);
}
static FORCEINLINE HRESULT IOpcUri_GetHost(IOpcUri* This,BSTR *pbstrHost) {
    return This->lpVtbl->GetHost(This,pbstrHost);
}
static FORCEINLINE HRESULT IOpcUri_GetPassword(IOpcUri* This,BSTR *pbstrPassword) {
    return This->lpVtbl->GetPassword(This,pbstrPassword);
}
static FORCEINLINE HRESULT IOpcUri_GetPath(IOpcUri* This,BSTR *pbstrPath) {
    return This->lpVtbl->GetPath(This,pbstrPath);
}
static FORCEINLINE HRESULT IOpcUri_GetPathAndQuery(IOpcUri* This,BSTR *pbstrPathAndQuery) {
    return This->lpVtbl->GetPathAndQuery(This,pbstrPathAndQuery);
}
static FORCEINLINE HRESULT IOpcUri_GetQuery(IOpcUri* This,BSTR *pbstrQuery) {
    return This->lpVtbl->GetQuery(This,pbstrQuery);
}
static FORCEINLINE HRESULT IOpcUri_GetRawUri(IOpcUri* This,BSTR *pbstrRawUri) {
    return This->lpVtbl->GetRawUri(This,pbstrRawUri);
}
static FORCEINLINE HRESULT IOpcUri_GetSchemeName(IOpcUri* This,BSTR *pbstrSchemeName) {
    return This->lpVtbl->GetSchemeName(This,pbstrSchemeName);
}
static FORCEINLINE HRESULT IOpcUri_GetUserInfo(IOpcUri* This,BSTR *pbstrUserInfo) {
    return This->lpVtbl->GetUserInfo(This,pbstrUserInfo);
}
static FORCEINLINE HRESULT IOpcUri_GetUserName(IOpcUri* This,BSTR *pbstrUserName) {
    return This->lpVtbl->GetUserName(This,pbstrUserName);
}
static FORCEINLINE HRESULT IOpcUri_GetHostType(IOpcUri* This,DWORD *pdwHostType) {
    return This->lpVtbl->GetHostType(This,pdwHostType);
}
static FORCEINLINE HRESULT IOpcUri_GetPort(IOpcUri* This,DWORD *pdwPort) {
    return This->lpVtbl->GetPort(This,pdwPort);
}
static FORCEINLINE HRESULT IOpcUri_GetScheme(IOpcUri* This,DWORD *pdwScheme) {
    return This->lpVtbl->GetScheme(This,pdwScheme);
}
static FORCEINLINE HRESULT IOpcUri_GetZone(IOpcUri* This,DWORD *pdwZone) {
    return This->lpVtbl->GetZone(This,pdwZone);
}
static FORCEINLINE HRESULT IOpcUri_GetProperties(IOpcUri* This,LPDWORD pdwFlags) {
    return This->lpVtbl->GetProperties(This,pdwFlags);
}
static FORCEINLINE HRESULT IOpcUri_IsEqual(IOpcUri* This,IUri *pUri,BOOL *pfEqual) {
    return This->lpVtbl->IsEqual(This,pUri,pfEqual);
}
/*** IOpcUri methods ***/
static FORCEINLINE HRESULT IOpcUri_GetRelationshipsPartUri(IOpcUri* This,IOpcPartUri **relationshipPartUri) {
    return This->lpVtbl->GetRelationshipsPartUri(This,relationshipPartUri);
}
static FORCEINLINE HRESULT IOpcUri_GetRelativeUri(IOpcUri* This,IOpcPartUri *targetPartUri,IUri **relativeUri) {
    return This->lpVtbl->GetRelativeUri(This,targetPartUri,relativeUri);
}
static FORCEINLINE HRESULT IOpcUri_CombinePartUri(IOpcUri* This,IUri *relativeUri,IOpcPartUri **combinedUri) {
    return This->lpVtbl->CombinePartUri(This,relativeUri,combinedUri);
}
#endif
#endif

#endif


#endif  /* __IOpcUri_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOpcPartUri interface
 */
#ifndef __IOpcPartUri_INTERFACE_DEFINED__
#define __IOpcPartUri_INTERFACE_DEFINED__

DEFINE_GUID(IID_IOpcPartUri, 0x7d3babe7, 0x88b2, 0x46ba, 0x85,0xcb, 0x42,0x03,0xcb,0x01,0x6c,0x87);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7d3babe7-88b2-46ba-85cb-4203cb016c87")
IOpcPartUri : public IOpcUri
{
    virtual HRESULT STDMETHODCALLTYPE ComparePartUri(
        IOpcPartUri *partUri,
        INT32 *comparisonResult) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSourceUri(
        IOpcUri **sourceUri) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsRelationshipsPartUri(
        BOOL *isRelationshipUri) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IOpcPartUri, 0x7d3babe7, 0x88b2, 0x46ba, 0x85,0xcb, 0x42,0x03,0xcb,0x01,0x6c,0x87)
#endif
#else
typedef struct IOpcPartUriVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOpcPartUri *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOpcPartUri *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOpcPartUri *This);

    /*** IUri methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPropertyBSTR)(
        IOpcPartUri *This,
        Uri_PROPERTY uriProp,
        BSTR *pbstrProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetPropertyLength)(
        IOpcPartUri *This,
        Uri_PROPERTY uriProp,
        DWORD *pcchProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetPropertyDWORD)(
        IOpcPartUri *This,
        Uri_PROPERTY uriProp,
        DWORD *pdwProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *HasProperty)(
        IOpcPartUri *This,
        Uri_PROPERTY uriProp,
        BOOL *pfHasProperty);

    HRESULT (STDMETHODCALLTYPE *GetAbsoluteUri)(
        IOpcPartUri *This,
        BSTR *pbstrAbsoluteUri);

    HRESULT (STDMETHODCALLTYPE *GetAuthority)(
        IOpcPartUri *This,
        BSTR *pbstrAuthority);

    HRESULT (STDMETHODCALLTYPE *GetDisplayUri)(
        IOpcPartUri *This,
        BSTR *pbstrDisplayString);

    HRESULT (STDMETHODCALLTYPE *GetDomain)(
        IOpcPartUri *This,
        BSTR *pbstrDomain);

    HRESULT (STDMETHODCALLTYPE *GetExtension)(
        IOpcPartUri *This,
        BSTR *pbstrExtension);

    HRESULT (STDMETHODCALLTYPE *GetFragment)(
        IOpcPartUri *This,
        BSTR *pbstrFragment);

    HRESULT (STDMETHODCALLTYPE *GetHost)(
        IOpcPartUri *This,
        BSTR *pbstrHost);

    HRESULT (STDMETHODCALLTYPE *GetPassword)(
        IOpcPartUri *This,
        BSTR *pbstrPassword);

    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IOpcPartUri *This,
        BSTR *pbstrPath);

    HRESULT (STDMETHODCALLTYPE *GetPathAndQuery)(
        IOpcPartUri *This,
        BSTR *pbstrPathAndQuery);

    HRESULT (STDMETHODCALLTYPE *GetQuery)(
        IOpcPartUri *This,
        BSTR *pbstrQuery);

    HRESULT (STDMETHODCALLTYPE *GetRawUri)(
        IOpcPartUri *This,
        BSTR *pbstrRawUri);

    HRESULT (STDMETHODCALLTYPE *GetSchemeName)(
        IOpcPartUri *This,
        BSTR *pbstrSchemeName);

    HRESULT (STDMETHODCALLTYPE *GetUserInfo)(
        IOpcPartUri *This,
        BSTR *pbstrUserInfo);

    HRESULT (STDMETHODCALLTYPE *GetUserName)(
        IOpcPartUri *This,
        BSTR *pbstrUserName);

    HRESULT (STDMETHODCALLTYPE *GetHostType)(
        IOpcPartUri *This,
        DWORD *pdwHostType);

    HRESULT (STDMETHODCALLTYPE *GetPort)(
        IOpcPartUri *This,
        DWORD *pdwPort);

    HRESULT (STDMETHODCALLTYPE *GetScheme)(
        IOpcPartUri *This,
        DWORD *pdwScheme);

    HRESULT (STDMETHODCALLTYPE *GetZone)(
        IOpcPartUri *This,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IOpcPartUri *This,
        LPDWORD pdwFlags);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IOpcPartUri *This,
        IUri *pUri,
        BOOL *pfEqual);

    /*** IOpcUri methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRelationshipsPartUri)(
        IOpcPartUri *This,
        IOpcPartUri **relationshipPartUri);

    HRESULT (STDMETHODCALLTYPE *GetRelativeUri)(
        IOpcPartUri *This,
        IOpcPartUri *targetPartUri,
        IUri **relativeUri);

    HRESULT (STDMETHODCALLTYPE *CombinePartUri)(
        IOpcPartUri *This,
        IUri *relativeUri,
        IOpcPartUri **combinedUri);

    /*** IOpcPartUri methods ***/
    HRESULT (STDMETHODCALLTYPE *ComparePartUri)(
        IOpcPartUri *This,
        IOpcPartUri *partUri,
        INT32 *comparisonResult);

    HRESULT (STDMETHODCALLTYPE *GetSourceUri)(
        IOpcPartUri *This,
        IOpcUri **sourceUri);

    HRESULT (STDMETHODCALLTYPE *IsRelationshipsPartUri)(
        IOpcPartUri *This,
        BOOL *isRelationshipUri);

    END_INTERFACE
} IOpcPartUriVtbl;

interface IOpcPartUri {
    CONST_VTBL IOpcPartUriVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IOpcPartUri_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IOpcPartUri_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IOpcPartUri_Release(This) (This)->lpVtbl->Release(This)
/*** IUri methods ***/
#define IOpcPartUri_GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) (This)->lpVtbl->GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags)
#define IOpcPartUri_GetPropertyLength(This,uriProp,pcchProperty,dwFlags) (This)->lpVtbl->GetPropertyLength(This,uriProp,pcchProperty,dwFlags)
#define IOpcPartUri_GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) (This)->lpVtbl->GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags)
#define IOpcPartUri_HasProperty(This,uriProp,pfHasProperty) (This)->lpVtbl->HasProperty(This,uriProp,pfHasProperty)
#define IOpcPartUri_GetAbsoluteUri(This,pbstrAbsoluteUri) (This)->lpVtbl->GetAbsoluteUri(This,pbstrAbsoluteUri)
#define IOpcPartUri_GetAuthority(This,pbstrAuthority) (This)->lpVtbl->GetAuthority(This,pbstrAuthority)
#define IOpcPartUri_GetDisplayUri(This,pbstrDisplayString) (This)->lpVtbl->GetDisplayUri(This,pbstrDisplayString)
#define IOpcPartUri_GetDomain(This,pbstrDomain) (This)->lpVtbl->GetDomain(This,pbstrDomain)
#define IOpcPartUri_GetExtension(This,pbstrExtension) (This)->lpVtbl->GetExtension(This,pbstrExtension)
#define IOpcPartUri_GetFragment(This,pbstrFragment) (This)->lpVtbl->GetFragment(This,pbstrFragment)
#define IOpcPartUri_GetHost(This,pbstrHost) (This)->lpVtbl->GetHost(This,pbstrHost)
#define IOpcPartUri_GetPassword(This,pbstrPassword) (This)->lpVtbl->GetPassword(This,pbstrPassword)
#define IOpcPartUri_GetPath(This,pbstrPath) (This)->lpVtbl->GetPath(This,pbstrPath)
#define IOpcPartUri_GetPathAndQuery(This,pbstrPathAndQuery) (This)->lpVtbl->GetPathAndQuery(This,pbstrPathAndQuery)
#define IOpcPartUri_GetQuery(This,pbstrQuery) (This)->lpVtbl->GetQuery(This,pbstrQuery)
#define IOpcPartUri_GetRawUri(This,pbstrRawUri) (This)->lpVtbl->GetRawUri(This,pbstrRawUri)
#define IOpcPartUri_GetSchemeName(This,pbstrSchemeName) (This)->lpVtbl->GetSchemeName(This,pbstrSchemeName)
#define IOpcPartUri_GetUserInfo(This,pbstrUserInfo) (This)->lpVtbl->GetUserInfo(This,pbstrUserInfo)
#define IOpcPartUri_GetUserName(This,pbstrUserName) (This)->lpVtbl->GetUserName(This,pbstrUserName)
#define IOpcPartUri_GetHostType(This,pdwHostType) (This)->lpVtbl->GetHostType(This,pdwHostType)
#define IOpcPartUri_GetPort(This,pdwPort) (This)->lpVtbl->GetPort(This,pdwPort)
#define IOpcPartUri_GetScheme(This,pdwScheme) (This)->lpVtbl->GetScheme(This,pdwScheme)
#define IOpcPartUri_GetZone(This,pdwZone) (This)->lpVtbl->GetZone(This,pdwZone)
#define IOpcPartUri_GetProperties(This,pdwFlags) (This)->lpVtbl->GetProperties(This,pdwFlags)
#define IOpcPartUri_IsEqual(This,pUri,pfEqual) (This)->lpVtbl->IsEqual(This,pUri,pfEqual)
/*** IOpcUri methods ***/
#define IOpcPartUri_GetRelationshipsPartUri(This,relationshipPartUri) (This)->lpVtbl->GetRelationshipsPartUri(This,relationshipPartUri)
#define IOpcPartUri_GetRelativeUri(This,targetPartUri,relativeUri) (This)->lpVtbl->GetRelativeUri(This,targetPartUri,relativeUri)
#define IOpcPartUri_CombinePartUri(This,relativeUri,combinedUri) (This)->lpVtbl->CombinePartUri(This,relativeUri,combinedUri)
/*** IOpcPartUri methods ***/
#define IOpcPartUri_ComparePartUri(This,partUri,comparisonResult) (This)->lpVtbl->ComparePartUri(This,partUri,comparisonResult)
#define IOpcPartUri_GetSourceUri(This,sourceUri) (This)->lpVtbl->GetSourceUri(This,sourceUri)
#define IOpcPartUri_IsRelationshipsPartUri(This,isRelationshipUri) (This)->lpVtbl->IsRelationshipsPartUri(This,isRelationshipUri)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IOpcPartUri_QueryInterface(IOpcPartUri* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IOpcPartUri_AddRef(IOpcPartUri* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IOpcPartUri_Release(IOpcPartUri* This) {
    return This->lpVtbl->Release(This);
}
/*** IUri methods ***/
static FORCEINLINE HRESULT IOpcPartUri_GetPropertyBSTR(IOpcPartUri* This,Uri_PROPERTY uriProp,BSTR *pbstrProperty,DWORD dwFlags) {
    return This->lpVtbl->GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags);
}
static FORCEINLINE HRESULT IOpcPartUri_GetPropertyLength(IOpcPartUri* This,Uri_PROPERTY uriProp,DWORD *pcchProperty,DWORD dwFlags) {
    return This->lpVtbl->GetPropertyLength(This,uriProp,pcchProperty,dwFlags);
}
static FORCEINLINE HRESULT IOpcPartUri_GetPropertyDWORD(IOpcPartUri* This,Uri_PROPERTY uriProp,DWORD *pdwProperty,DWORD dwFlags) {
    return This->lpVtbl->GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags);
}
static FORCEINLINE HRESULT IOpcPartUri_HasProperty(IOpcPartUri* This,Uri_PROPERTY uriProp,BOOL *pfHasProperty) {
    return This->lpVtbl->HasProperty(This,uriProp,pfHasProperty);
}
static FORCEINLINE HRESULT IOpcPartUri_GetAbsoluteUri(IOpcPartUri* This,BSTR *pbstrAbsoluteUri) {
    return This->lpVtbl->GetAbsoluteUri(This,pbstrAbsoluteUri);
}
static FORCEINLINE HRESULT IOpcPartUri_GetAuthority(IOpcPartUri* This,BSTR *pbstrAuthority) {
    return This->lpVtbl->GetAuthority(This,pbstrAuthority);
}
static FORCEINLINE HRESULT IOpcPartUri_GetDisplayUri(IOpcPartUri* This,BSTR *pbstrDisplayString) {
    return This->lpVtbl->GetDisplayUri(This,pbstrDisplayString);
}
static FORCEINLINE HRESULT IOpcPartUri_GetDomain(IOpcPartUri* This,BSTR *pbstrDomain) {
    return This->lpVtbl->GetDomain(This,pbstrDomain);
}
static FORCEINLINE HRESULT IOpcPartUri_GetExtension(IOpcPartUri* This,BSTR *pbstrExtension) {
    return This->lpVtbl->GetExtension(This,pbstrExtension);
}
static FORCEINLINE HRESULT IOpcPartUri_GetFragment(IOpcPartUri* This,BSTR *pbstrFragment) {
    return This->lpVtbl->GetFragment(This,pbstrFragment);
}
static FORCEINLINE HRESULT IOpcPartUri_GetHost(IOpcPartUri* This,BSTR *pbstrHost) {
    return This->lpVtbl->GetHost(This,pbstrHost);
}
static FORCEINLINE HRESULT IOpcPartUri_GetPassword(IOpcPartUri* This,BSTR *pbstrPassword) {
    return This->lpVtbl->GetPassword(This,pbstrPassword);
}
static FORCEINLINE HRESULT IOpcPartUri_GetPath(IOpcPartUri* This,BSTR *pbstrPath) {
    return This->lpVtbl->GetPath(This,pbstrPath);
}
static FORCEINLINE HRESULT IOpcPartUri_GetPathAndQuery(IOpcPartUri* This,BSTR *pbstrPathAndQuery) {
    return This->lpVtbl->GetPathAndQuery(This,pbstrPathAndQuery);
}
static FORCEINLINE HRESULT IOpcPartUri_GetQuery(IOpcPartUri* This,BSTR *pbstrQuery) {
    return This->lpVtbl->GetQuery(This,pbstrQuery);
}
static FORCEINLINE HRESULT IOpcPartUri_GetRawUri(IOpcPartUri* This,BSTR *pbstrRawUri) {
    return This->lpVtbl->GetRawUri(This,pbstrRawUri);
}
static FORCEINLINE HRESULT IOpcPartUri_GetSchemeName(IOpcPartUri* This,BSTR *pbstrSchemeName) {
    return This->lpVtbl->GetSchemeName(This,pbstrSchemeName);
}
static FORCEINLINE HRESULT IOpcPartUri_GetUserInfo(IOpcPartUri* This,BSTR *pbstrUserInfo) {
    return This->lpVtbl->GetUserInfo(This,pbstrUserInfo);
}
static FORCEINLINE HRESULT IOpcPartUri_GetUserName(IOpcPartUri* This,BSTR *pbstrUserName) {
    return This->lpVtbl->GetUserName(This,pbstrUserName);
}
static FORCEINLINE HRESULT IOpcPartUri_GetHostType(IOpcPartUri* This,DWORD *pdwHostType) {
    return This->lpVtbl->GetHostType(This,pdwHostType);
}
static FORCEINLINE HRESULT IOpcPartUri_GetPort(IOpcPartUri* This,DWORD *pdwPort) {
    return This->lpVtbl->GetPort(This,pdwPort);
}
static FORCEINLINE HRESULT IOpcPartUri_GetScheme(IOpcPartUri* This,DWORD *pdwScheme) {
    return This->lpVtbl->GetScheme(This,pdwScheme);
}
static FORCEINLINE HRESULT IOpcPartUri_GetZone(IOpcPartUri* This,DWORD *pdwZone) {
    return This->lpVtbl->GetZone(This,pdwZone);
}
static FORCEINLINE HRESULT IOpcPartUri_GetProperties(IOpcPartUri* This,LPDWORD pdwFlags) {
    return This->lpVtbl->GetProperties(This,pdwFlags);
}
static FORCEINLINE HRESULT IOpcPartUri_IsEqual(IOpcPartUri* This,IUri *pUri,BOOL *pfEqual) {
    return This->lpVtbl->IsEqual(This,pUri,pfEqual);
}
/*** IOpcUri methods ***/
static FORCEINLINE HRESULT IOpcPartUri_GetRelationshipsPartUri(IOpcPartUri* This,IOpcPartUri **relationshipPartUri) {
    return This->lpVtbl->GetRelationshipsPartUri(This,relationshipPartUri);
}
static FORCEINLINE HRESULT IOpcPartUri_GetRelativeUri(IOpcPartUri* This,IOpcPartUri *targetPartUri,IUri **relativeUri) {
    return This->lpVtbl->GetRelativeUri(This,targetPartUri,relativeUri);
}
static FORCEINLINE HRESULT IOpcPartUri_CombinePartUri(IOpcPartUri* This,IUri *relativeUri,IOpcPartUri **combinedUri) {
    return This->lpVtbl->CombinePartUri(This,relativeUri,combinedUri);
}
/*** IOpcPartUri methods ***/
static FORCEINLINE HRESULT IOpcPartUri_ComparePartUri(IOpcPartUri* This,IOpcPartUri *partUri,INT32 *comparisonResult) {
    return This->lpVtbl->ComparePartUri(This,partUri,comparisonResult);
}
static FORCEINLINE HRESULT IOpcPartUri_GetSourceUri(IOpcPartUri* This,IOpcUri **sourceUri) {
    return This->lpVtbl->GetSourceUri(This,sourceUri);
}
static FORCEINLINE HRESULT IOpcPartUri_IsRelationshipsPartUri(IOpcPartUri* This,BOOL *isRelationshipUri) {
    return This->lpVtbl->IsRelationshipsPartUri(This,isRelationshipUri);
}
#endif
#endif

#endif


#endif  /* __IOpcPartUri_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#endif // (NTDDI >= NTDDI_WIN7)
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __opcparturi_h__ */
