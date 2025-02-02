/*** Autogenerated by WIDL 5.0 from ./xblidpauthmanager.idl - Do not edit ***/

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

#ifndef __xblidpauthmanager_h__
#define __xblidpauthmanager_h__

/* Forward declarations */

#ifndef __IXblIdpAuthManager_FWD_DEFINED__
#define __IXblIdpAuthManager_FWD_DEFINED__
typedef interface IXblIdpAuthManager IXblIdpAuthManager;
#ifdef __cplusplus
interface IXblIdpAuthManager;
#endif /* __cplusplus */
#endif

#ifndef __IXblIdpAuthTokenResult_FWD_DEFINED__
#define __IXblIdpAuthTokenResult_FWD_DEFINED__
typedef interface IXblIdpAuthTokenResult IXblIdpAuthTokenResult;
#ifdef __cplusplus
interface IXblIdpAuthTokenResult;
#endif /* __cplusplus */
#endif

#ifndef __IXblIdpAuthTokenResult2_FWD_DEFINED__
#define __IXblIdpAuthTokenResult2_FWD_DEFINED__
typedef interface IXblIdpAuthTokenResult2 IXblIdpAuthTokenResult2;
#ifdef __cplusplus
interface IXblIdpAuthTokenResult2;
#endif /* __cplusplus */
#endif

#ifndef __XblIdpAuthManager_FWD_DEFINED__
#define __XblIdpAuthManager_FWD_DEFINED__
#ifdef __cplusplus
typedef class XblIdpAuthManager XblIdpAuthManager;
#else
typedef struct XblIdpAuthManager XblIdpAuthManager;
#endif /* defined __cplusplus */
#endif /* defined __XblIdpAuthManager_FWD_DEFINED__ */

#ifndef __XblIdpAuthTokenResult_FWD_DEFINED__
#define __XblIdpAuthTokenResult_FWD_DEFINED__
#ifdef __cplusplus
typedef class XblIdpAuthTokenResult XblIdpAuthTokenResult;
#else
typedef struct XblIdpAuthTokenResult XblIdpAuthTokenResult;
#endif /* defined __cplusplus */
#endif /* defined __XblIdpAuthTokenResult_FWD_DEFINED__ */

/* Headers for imported files */

#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#ifndef __IXblIdpAuthTokenResult_FWD_DEFINED__
#define __IXblIdpAuthTokenResult_FWD_DEFINED__
typedef interface IXblIdpAuthTokenResult IXblIdpAuthTokenResult;
#ifdef __cplusplus
interface IXblIdpAuthTokenResult;
#endif /* __cplusplus */
#endif

typedef enum _XBL_IDP_AUTH_TOKEN_STATUS {
    XBL_IDP_AUTH_TOKEN_STATUS_SUCCESS = 0,
    XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_SUCCESS = 1,
    XBL_IDP_AUTH_TOKEN_STATUS_NO_ACCOUNT_SET = 2,
    XBL_IDP_AUTH_TOKEN_STATUS_LOAD_MSA_ACCOUNT_FAILED = 3,
    XBL_IDP_AUTH_TOKEN_STATUS_XBOX_VETO = 4,
    XBL_IDP_AUTH_TOKEN_STATUS_MSA_INTERRUPT = 5,
    XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_NO_CONSENT = 6,
    XBL_IDP_AUTH_TOKEN_STATUS_VIEW_NOT_SET = 7,
    XBL_IDP_AUTH_TOKEN_STATUS_UNKNOWN = 0xffffffff
} XBL_IDP_AUTH_TOKEN_STATUS;
/*****************************************************************************
 * IXblIdpAuthManager interface
 */
#ifndef __IXblIdpAuthManager_INTERFACE_DEFINED__
#define __IXblIdpAuthManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXblIdpAuthManager, 0xeb5ddb08, 0x8bbf, 0x449b, 0xac,0x21, 0xb0,0x2d,0xde,0xb3,0xb1,0x36);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("eb5ddb08-8bbf-449b-ac21-b02ddeb3b136")
IXblIdpAuthManager : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetGamerAccount(
        LPCWSTR msaAccountId,
        LPCWSTR xuid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetGamerAccount(
        LPWSTR *msaAccountId,
        LPWSTR *xuid) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAppViewInitialized(
        LPCWSTR appSid,
        LPCWSTR msaAccountId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEnvironment(
        LPWSTR *environment) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSandbox(
        LPWSTR *sandbox) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTokenAndSignatureWithTokenResult(
        LPCWSTR msaAccountId,
        LPCWSTR appSid,
        LPCWSTR msaTarget,
        LPCWSTR msaPolicy,
        LPCWSTR httpMethod,
        LPCWSTR uri,
        LPCWSTR headers,
        BYTE *body,
        DWORD bodySize,
        BOOL forceRefresh,
        IXblIdpAuthTokenResult **result) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXblIdpAuthManager, 0xeb5ddb08, 0x8bbf, 0x449b, 0xac,0x21, 0xb0,0x2d,0xde,0xb3,0xb1,0x36)
#endif
#else
typedef struct IXblIdpAuthManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXblIdpAuthManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXblIdpAuthManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXblIdpAuthManager *This);

    /*** IXblIdpAuthManager methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGamerAccount)(
        IXblIdpAuthManager *This,
        LPCWSTR msaAccountId,
        LPCWSTR xuid);

    HRESULT (STDMETHODCALLTYPE *GetGamerAccount)(
        IXblIdpAuthManager *This,
        LPWSTR *msaAccountId,
        LPWSTR *xuid);

    HRESULT (STDMETHODCALLTYPE *SetAppViewInitialized)(
        IXblIdpAuthManager *This,
        LPCWSTR appSid,
        LPCWSTR msaAccountId);

    HRESULT (STDMETHODCALLTYPE *GetEnvironment)(
        IXblIdpAuthManager *This,
        LPWSTR *environment);

    HRESULT (STDMETHODCALLTYPE *GetSandbox)(
        IXblIdpAuthManager *This,
        LPWSTR *sandbox);

    HRESULT (STDMETHODCALLTYPE *GetTokenAndSignatureWithTokenResult)(
        IXblIdpAuthManager *This,
        LPCWSTR msaAccountId,
        LPCWSTR appSid,
        LPCWSTR msaTarget,
        LPCWSTR msaPolicy,
        LPCWSTR httpMethod,
        LPCWSTR uri,
        LPCWSTR headers,
        BYTE *body,
        DWORD bodySize,
        BOOL forceRefresh,
        IXblIdpAuthTokenResult **result);

    END_INTERFACE
} IXblIdpAuthManagerVtbl;

interface IXblIdpAuthManager {
    CONST_VTBL IXblIdpAuthManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXblIdpAuthManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXblIdpAuthManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXblIdpAuthManager_Release(This) (This)->lpVtbl->Release(This)
/*** IXblIdpAuthManager methods ***/
#define IXblIdpAuthManager_SetGamerAccount(This,msaAccountId,xuid) (This)->lpVtbl->SetGamerAccount(This,msaAccountId,xuid)
#define IXblIdpAuthManager_GetGamerAccount(This,msaAccountId,xuid) (This)->lpVtbl->GetGamerAccount(This,msaAccountId,xuid)
#define IXblIdpAuthManager_SetAppViewInitialized(This,appSid,msaAccountId) (This)->lpVtbl->SetAppViewInitialized(This,appSid,msaAccountId)
#define IXblIdpAuthManager_GetEnvironment(This,environment) (This)->lpVtbl->GetEnvironment(This,environment)
#define IXblIdpAuthManager_GetSandbox(This,sandbox) (This)->lpVtbl->GetSandbox(This,sandbox)
#define IXblIdpAuthManager_GetTokenAndSignatureWithTokenResult(This,msaAccountId,appSid,msaTarget,msaPolicy,httpMethod,uri,headers,body,bodySize,forceRefresh,result) (This)->lpVtbl->GetTokenAndSignatureWithTokenResult(This,msaAccountId,appSid,msaTarget,msaPolicy,httpMethod,uri,headers,body,bodySize,forceRefresh,result)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IXblIdpAuthManager_QueryInterface(IXblIdpAuthManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IXblIdpAuthManager_AddRef(IXblIdpAuthManager* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IXblIdpAuthManager_Release(IXblIdpAuthManager* This) {
    return This->lpVtbl->Release(This);
}
/*** IXblIdpAuthManager methods ***/
static FORCEINLINE HRESULT IXblIdpAuthManager_SetGamerAccount(IXblIdpAuthManager* This,LPCWSTR msaAccountId,LPCWSTR xuid) {
    return This->lpVtbl->SetGamerAccount(This,msaAccountId,xuid);
}
static FORCEINLINE HRESULT IXblIdpAuthManager_GetGamerAccount(IXblIdpAuthManager* This,LPWSTR *msaAccountId,LPWSTR *xuid) {
    return This->lpVtbl->GetGamerAccount(This,msaAccountId,xuid);
}
static FORCEINLINE HRESULT IXblIdpAuthManager_SetAppViewInitialized(IXblIdpAuthManager* This,LPCWSTR appSid,LPCWSTR msaAccountId) {
    return This->lpVtbl->SetAppViewInitialized(This,appSid,msaAccountId);
}
static FORCEINLINE HRESULT IXblIdpAuthManager_GetEnvironment(IXblIdpAuthManager* This,LPWSTR *environment) {
    return This->lpVtbl->GetEnvironment(This,environment);
}
static FORCEINLINE HRESULT IXblIdpAuthManager_GetSandbox(IXblIdpAuthManager* This,LPWSTR *sandbox) {
    return This->lpVtbl->GetSandbox(This,sandbox);
}
static FORCEINLINE HRESULT IXblIdpAuthManager_GetTokenAndSignatureWithTokenResult(IXblIdpAuthManager* This,LPCWSTR msaAccountId,LPCWSTR appSid,LPCWSTR msaTarget,LPCWSTR msaPolicy,LPCWSTR httpMethod,LPCWSTR uri,LPCWSTR headers,BYTE *body,DWORD bodySize,BOOL forceRefresh,IXblIdpAuthTokenResult **result) {
    return This->lpVtbl->GetTokenAndSignatureWithTokenResult(This,msaAccountId,appSid,msaTarget,msaPolicy,httpMethod,uri,headers,body,bodySize,forceRefresh,result);
}
#endif
#endif

#endif


#endif  /* __IXblIdpAuthManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXblIdpAuthTokenResult interface
 */
#ifndef __IXblIdpAuthTokenResult_INTERFACE_DEFINED__
#define __IXblIdpAuthTokenResult_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXblIdpAuthTokenResult, 0x46ce0225, 0xf267, 0x4d68, 0xb2,0x99, 0xb2,0x76,0x25,0x52,0xde,0xc1);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("46ce0225-f267-4d68-b299-b2762552dec1")
IXblIdpAuthTokenResult : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetStatus(
        XBL_IDP_AUTH_TOKEN_STATUS *status) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetErrorCode(
        HRESULT *errorCode) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetToken(
        LPWSTR *token) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSignature(
        LPWSTR *signature) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSandbox(
        LPWSTR *sandbox) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEnvironment(
        LPWSTR *environment) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMsaAccountId(
        LPWSTR *msaAccountId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetXuid(
        LPWSTR *xuid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetGamertag(
        LPWSTR *gamertag) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAgeGroup(
        LPWSTR *ageGroup) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPrivileges(
        LPWSTR *privileges) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMsaTarget(
        LPWSTR *msaTarget) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMsaPolicy(
        LPWSTR *msaPolicy) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMsaAppId(
        LPWSTR *msaAppId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRedirect(
        LPWSTR *redirect) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMessage(
        LPWSTR *message) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetHelpId(
        LPWSTR *helpId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEnforcementBans(
        LPWSTR *enforcementBans) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRestrictions(
        LPWSTR *restrictions) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTitleRestrictions(
        LPWSTR *titleRestrictions) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXblIdpAuthTokenResult, 0x46ce0225, 0xf267, 0x4d68, 0xb2,0x99, 0xb2,0x76,0x25,0x52,0xde,0xc1)
#endif
#else
typedef struct IXblIdpAuthTokenResultVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXblIdpAuthTokenResult *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXblIdpAuthTokenResult *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXblIdpAuthTokenResult *This);

    /*** IXblIdpAuthTokenResult methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IXblIdpAuthTokenResult *This,
        XBL_IDP_AUTH_TOKEN_STATUS *status);

    HRESULT (STDMETHODCALLTYPE *GetErrorCode)(
        IXblIdpAuthTokenResult *This,
        HRESULT *errorCode);

    HRESULT (STDMETHODCALLTYPE *GetToken)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *token);

    HRESULT (STDMETHODCALLTYPE *GetSignature)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *signature);

    HRESULT (STDMETHODCALLTYPE *GetSandbox)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *sandbox);

    HRESULT (STDMETHODCALLTYPE *GetEnvironment)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *environment);

    HRESULT (STDMETHODCALLTYPE *GetMsaAccountId)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *msaAccountId);

    HRESULT (STDMETHODCALLTYPE *GetXuid)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *xuid);

    HRESULT (STDMETHODCALLTYPE *GetGamertag)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *gamertag);

    HRESULT (STDMETHODCALLTYPE *GetAgeGroup)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *ageGroup);

    HRESULT (STDMETHODCALLTYPE *GetPrivileges)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *privileges);

    HRESULT (STDMETHODCALLTYPE *GetMsaTarget)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *msaTarget);

    HRESULT (STDMETHODCALLTYPE *GetMsaPolicy)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *msaPolicy);

    HRESULT (STDMETHODCALLTYPE *GetMsaAppId)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *msaAppId);

    HRESULT (STDMETHODCALLTYPE *GetRedirect)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *redirect);

    HRESULT (STDMETHODCALLTYPE *GetMessage)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *message);

    HRESULT (STDMETHODCALLTYPE *GetHelpId)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *helpId);

    HRESULT (STDMETHODCALLTYPE *GetEnforcementBans)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *enforcementBans);

    HRESULT (STDMETHODCALLTYPE *GetRestrictions)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *restrictions);

    HRESULT (STDMETHODCALLTYPE *GetTitleRestrictions)(
        IXblIdpAuthTokenResult *This,
        LPWSTR *titleRestrictions);

    END_INTERFACE
} IXblIdpAuthTokenResultVtbl;

interface IXblIdpAuthTokenResult {
    CONST_VTBL IXblIdpAuthTokenResultVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXblIdpAuthTokenResult_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXblIdpAuthTokenResult_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXblIdpAuthTokenResult_Release(This) (This)->lpVtbl->Release(This)
/*** IXblIdpAuthTokenResult methods ***/
#define IXblIdpAuthTokenResult_GetStatus(This,status) (This)->lpVtbl->GetStatus(This,status)
#define IXblIdpAuthTokenResult_GetErrorCode(This,errorCode) (This)->lpVtbl->GetErrorCode(This,errorCode)
#define IXblIdpAuthTokenResult_GetToken(This,token) (This)->lpVtbl->GetToken(This,token)
#define IXblIdpAuthTokenResult_GetSignature(This,signature) (This)->lpVtbl->GetSignature(This,signature)
#define IXblIdpAuthTokenResult_GetSandbox(This,sandbox) (This)->lpVtbl->GetSandbox(This,sandbox)
#define IXblIdpAuthTokenResult_GetEnvironment(This,environment) (This)->lpVtbl->GetEnvironment(This,environment)
#define IXblIdpAuthTokenResult_GetMsaAccountId(This,msaAccountId) (This)->lpVtbl->GetMsaAccountId(This,msaAccountId)
#define IXblIdpAuthTokenResult_GetXuid(This,xuid) (This)->lpVtbl->GetXuid(This,xuid)
#define IXblIdpAuthTokenResult_GetGamertag(This,gamertag) (This)->lpVtbl->GetGamertag(This,gamertag)
#define IXblIdpAuthTokenResult_GetAgeGroup(This,ageGroup) (This)->lpVtbl->GetAgeGroup(This,ageGroup)
#define IXblIdpAuthTokenResult_GetPrivileges(This,privileges) (This)->lpVtbl->GetPrivileges(This,privileges)
#define IXblIdpAuthTokenResult_GetMsaTarget(This,msaTarget) (This)->lpVtbl->GetMsaTarget(This,msaTarget)
#define IXblIdpAuthTokenResult_GetMsaPolicy(This,msaPolicy) (This)->lpVtbl->GetMsaPolicy(This,msaPolicy)
#define IXblIdpAuthTokenResult_GetMsaAppId(This,msaAppId) (This)->lpVtbl->GetMsaAppId(This,msaAppId)
#define IXblIdpAuthTokenResult_GetRedirect(This,redirect) (This)->lpVtbl->GetRedirect(This,redirect)
#define IXblIdpAuthTokenResult_GetMessage(This,message) (This)->lpVtbl->GetMessage(This,message)
#define IXblIdpAuthTokenResult_GetHelpId(This,helpId) (This)->lpVtbl->GetHelpId(This,helpId)
#define IXblIdpAuthTokenResult_GetEnforcementBans(This,enforcementBans) (This)->lpVtbl->GetEnforcementBans(This,enforcementBans)
#define IXblIdpAuthTokenResult_GetRestrictions(This,restrictions) (This)->lpVtbl->GetRestrictions(This,restrictions)
#define IXblIdpAuthTokenResult_GetTitleRestrictions(This,titleRestrictions) (This)->lpVtbl->GetTitleRestrictions(This,titleRestrictions)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_QueryInterface(IXblIdpAuthTokenResult* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IXblIdpAuthTokenResult_AddRef(IXblIdpAuthTokenResult* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IXblIdpAuthTokenResult_Release(IXblIdpAuthTokenResult* This) {
    return This->lpVtbl->Release(This);
}
/*** IXblIdpAuthTokenResult methods ***/
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetStatus(IXblIdpAuthTokenResult* This,XBL_IDP_AUTH_TOKEN_STATUS *status) {
    return This->lpVtbl->GetStatus(This,status);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetErrorCode(IXblIdpAuthTokenResult* This,HRESULT *errorCode) {
    return This->lpVtbl->GetErrorCode(This,errorCode);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetToken(IXblIdpAuthTokenResult* This,LPWSTR *token) {
    return This->lpVtbl->GetToken(This,token);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetSignature(IXblIdpAuthTokenResult* This,LPWSTR *signature) {
    return This->lpVtbl->GetSignature(This,signature);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetSandbox(IXblIdpAuthTokenResult* This,LPWSTR *sandbox) {
    return This->lpVtbl->GetSandbox(This,sandbox);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetEnvironment(IXblIdpAuthTokenResult* This,LPWSTR *environment) {
    return This->lpVtbl->GetEnvironment(This,environment);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetMsaAccountId(IXblIdpAuthTokenResult* This,LPWSTR *msaAccountId) {
    return This->lpVtbl->GetMsaAccountId(This,msaAccountId);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetXuid(IXblIdpAuthTokenResult* This,LPWSTR *xuid) {
    return This->lpVtbl->GetXuid(This,xuid);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetGamertag(IXblIdpAuthTokenResult* This,LPWSTR *gamertag) {
    return This->lpVtbl->GetGamertag(This,gamertag);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetAgeGroup(IXblIdpAuthTokenResult* This,LPWSTR *ageGroup) {
    return This->lpVtbl->GetAgeGroup(This,ageGroup);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetPrivileges(IXblIdpAuthTokenResult* This,LPWSTR *privileges) {
    return This->lpVtbl->GetPrivileges(This,privileges);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetMsaTarget(IXblIdpAuthTokenResult* This,LPWSTR *msaTarget) {
    return This->lpVtbl->GetMsaTarget(This,msaTarget);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetMsaPolicy(IXblIdpAuthTokenResult* This,LPWSTR *msaPolicy) {
    return This->lpVtbl->GetMsaPolicy(This,msaPolicy);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetMsaAppId(IXblIdpAuthTokenResult* This,LPWSTR *msaAppId) {
    return This->lpVtbl->GetMsaAppId(This,msaAppId);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetRedirect(IXblIdpAuthTokenResult* This,LPWSTR *redirect) {
    return This->lpVtbl->GetRedirect(This,redirect);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetMessage(IXblIdpAuthTokenResult* This,LPWSTR *message) {
    return This->lpVtbl->GetMessage(This,message);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetHelpId(IXblIdpAuthTokenResult* This,LPWSTR *helpId) {
    return This->lpVtbl->GetHelpId(This,helpId);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetEnforcementBans(IXblIdpAuthTokenResult* This,LPWSTR *enforcementBans) {
    return This->lpVtbl->GetEnforcementBans(This,enforcementBans);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetRestrictions(IXblIdpAuthTokenResult* This,LPWSTR *restrictions) {
    return This->lpVtbl->GetRestrictions(This,restrictions);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult_GetTitleRestrictions(IXblIdpAuthTokenResult* This,LPWSTR *titleRestrictions) {
    return This->lpVtbl->GetTitleRestrictions(This,titleRestrictions);
}
#endif
#endif

#endif


#endif  /* __IXblIdpAuthTokenResult_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXblIdpAuthTokenResult2 interface
 */
#ifndef __IXblIdpAuthTokenResult2_INTERFACE_DEFINED__
#define __IXblIdpAuthTokenResult2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXblIdpAuthTokenResult2, 0x75d760b0, 0x60b9, 0x412d, 0x99,0x4f, 0x26,0xb2,0xcd,0x5f,0x78,0x12);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("75d760b0-60b9-412d-994f-26b2cd5f7812")
IXblIdpAuthTokenResult2 : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetModernGamertag(
        LPWSTR *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetModernGamertagSuffix(
        LPWSTR *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetUniqueModernGamertag(
        LPWSTR *value) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXblIdpAuthTokenResult2, 0x75d760b0, 0x60b9, 0x412d, 0x99,0x4f, 0x26,0xb2,0xcd,0x5f,0x78,0x12)
#endif
#else
typedef struct IXblIdpAuthTokenResult2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXblIdpAuthTokenResult2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXblIdpAuthTokenResult2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXblIdpAuthTokenResult2 *This);

    /*** IXblIdpAuthTokenResult2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetModernGamertag)(
        IXblIdpAuthTokenResult2 *This,
        LPWSTR *value);

    HRESULT (STDMETHODCALLTYPE *GetModernGamertagSuffix)(
        IXblIdpAuthTokenResult2 *This,
        LPWSTR *value);

    HRESULT (STDMETHODCALLTYPE *GetUniqueModernGamertag)(
        IXblIdpAuthTokenResult2 *This,
        LPWSTR *value);

    END_INTERFACE
} IXblIdpAuthTokenResult2Vtbl;

interface IXblIdpAuthTokenResult2 {
    CONST_VTBL IXblIdpAuthTokenResult2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXblIdpAuthTokenResult2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXblIdpAuthTokenResult2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXblIdpAuthTokenResult2_Release(This) (This)->lpVtbl->Release(This)
/*** IXblIdpAuthTokenResult2 methods ***/
#define IXblIdpAuthTokenResult2_GetModernGamertag(This,value) (This)->lpVtbl->GetModernGamertag(This,value)
#define IXblIdpAuthTokenResult2_GetModernGamertagSuffix(This,value) (This)->lpVtbl->GetModernGamertagSuffix(This,value)
#define IXblIdpAuthTokenResult2_GetUniqueModernGamertag(This,value) (This)->lpVtbl->GetUniqueModernGamertag(This,value)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IXblIdpAuthTokenResult2_QueryInterface(IXblIdpAuthTokenResult2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IXblIdpAuthTokenResult2_AddRef(IXblIdpAuthTokenResult2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IXblIdpAuthTokenResult2_Release(IXblIdpAuthTokenResult2* This) {
    return This->lpVtbl->Release(This);
}
/*** IXblIdpAuthTokenResult2 methods ***/
static FORCEINLINE HRESULT IXblIdpAuthTokenResult2_GetModernGamertag(IXblIdpAuthTokenResult2* This,LPWSTR *value) {
    return This->lpVtbl->GetModernGamertag(This,value);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult2_GetModernGamertagSuffix(IXblIdpAuthTokenResult2* This,LPWSTR *value) {
    return This->lpVtbl->GetModernGamertagSuffix(This,value);
}
static FORCEINLINE HRESULT IXblIdpAuthTokenResult2_GetUniqueModernGamertag(IXblIdpAuthTokenResult2* This,LPWSTR *value) {
    return This->lpVtbl->GetUniqueModernGamertag(This,value);
}
#endif
#endif

#endif


#endif  /* __IXblIdpAuthTokenResult2_INTERFACE_DEFINED__ */

#ifdef __cplusplus

class DECLSPEC_UUID("ce23534b-56d8-4978-86a2-7ee570640468")
XblIdpAuthManager;
#endif
/*****************************************************************************
 * XblIdpAuthManager coclass
 */

DEFINE_GUID(CLSID_XblIdpAuthManager, 0xce23534b, 0x56d8, 0x4978, 0x86,0xa2, 0x7e,0xe5,0x70,0x64,0x04,0x68);

#ifdef __cplusplus
class DECLSPEC_UUID("ce23534b-56d8-4978-86a2-7ee570640468") XblIdpAuthManager;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(XblIdpAuthManager, 0xce23534b, 0x56d8, 0x4978, 0x86,0xa2, 0x7e,0xe5,0x70,0x64,0x04,0x68)
#endif
#endif

#ifdef __cplusplus

class DECLSPEC_UUID("9f493441-744a-410c-ae2b-9a22f7c7731f")
XblIdpAuthTokenResult;
#endif
/*****************************************************************************
 * XblIdpAuthTokenResult coclass
 */

DEFINE_GUID(CLSID_XblIdpAuthTokenResult, 0x9f493441, 0x744a, 0x410c, 0xae,0x2b, 0x9a,0x22,0xf7,0xc7,0x73,0x1f);

#ifdef __cplusplus
class DECLSPEC_UUID("9f493441-744a-410c-ae2b-9a22f7c7731f") XblIdpAuthTokenResult;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(XblIdpAuthTokenResult, 0x9f493441, 0x744a, 0x410c, 0xae,0x2b, 0x9a,0x22,0xf7,0xc7,0x73,0x1f)
#endif
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __xblidpauthmanager_h__ */
