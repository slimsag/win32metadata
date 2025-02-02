/*** Autogenerated by WIDL 5.0 from ./searchlanguagesupport.idl - Do not edit ***/

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

#ifndef __searchlanguagesupport_h__
#define __searchlanguagesupport_h__

/* Forward declarations */

#ifndef __ISearchLanguageSupport_FWD_DEFINED__
#define __ISearchLanguageSupport_FWD_DEFINED__
typedef interface ISearchLanguageSupport ISearchLanguageSupport;
#ifdef __cplusplus
interface ISearchLanguageSupport;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_CSearchLanguageSupport;
#ifdef __cplusplus
class DECLSPEC_UUID("6A68CC80-4337-4dbc-BD27-FBFB1053820B")
CSearchLanguageSupport;
#endif
/*****************************************************************************
 * ISearchLanguageSupport interface
 */
#ifndef __ISearchLanguageSupport_INTERFACE_DEFINED__
#define __ISearchLanguageSupport_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISearchLanguageSupport, 0x24c3cbaa, 0xebc1, 0x491a, 0x9e,0xf1, 0x9f,0x6d,0x8d,0xeb,0x1b,0x8f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("24c3cbaa-ebc1-491a-9ef1-9f6d8deb1b8f")
ISearchLanguageSupport : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetDiacriticSensitivity(
        BOOL fDiacriticSensitive) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDiacriticSensitivity(
        BOOL *pfDiacriticSensitive) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadWordBreaker(
        LCID lcid,
        REFIID riid,
        void **ppWordBreaker,
        LCID *pLcidUsed) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadStemmer(
        LCID lcid,
        REFIID riid,
        void **ppStemmer,
        LCID *pLcidUsed) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsPrefixNormalized(
        LPCWSTR pwcsQueryToken,
        ULONG cwcQueryToken,
        LPCWSTR pwcsDocumentToken,
        ULONG cwcDocumentToken,
        ULONG *pulPrefixLength) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISearchLanguageSupport, 0x24c3cbaa, 0xebc1, 0x491a, 0x9e,0xf1, 0x9f,0x6d,0x8d,0xeb,0x1b,0x8f)
#endif
#else
typedef struct ISearchLanguageSupportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISearchLanguageSupport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISearchLanguageSupport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISearchLanguageSupport *This);

    /*** ISearchLanguageSupport methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDiacriticSensitivity)(
        ISearchLanguageSupport *This,
        BOOL fDiacriticSensitive);

    HRESULT (STDMETHODCALLTYPE *GetDiacriticSensitivity)(
        ISearchLanguageSupport *This,
        BOOL *pfDiacriticSensitive);

    HRESULT (STDMETHODCALLTYPE *LoadWordBreaker)(
        ISearchLanguageSupport *This,
        LCID lcid,
        REFIID riid,
        void **ppWordBreaker,
        LCID *pLcidUsed);

    HRESULT (STDMETHODCALLTYPE *LoadStemmer)(
        ISearchLanguageSupport *This,
        LCID lcid,
        REFIID riid,
        void **ppStemmer,
        LCID *pLcidUsed);

    HRESULT (STDMETHODCALLTYPE *IsPrefixNormalized)(
        ISearchLanguageSupport *This,
        LPCWSTR pwcsQueryToken,
        ULONG cwcQueryToken,
        LPCWSTR pwcsDocumentToken,
        ULONG cwcDocumentToken,
        ULONG *pulPrefixLength);

    END_INTERFACE
} ISearchLanguageSupportVtbl;

interface ISearchLanguageSupport {
    CONST_VTBL ISearchLanguageSupportVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISearchLanguageSupport_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISearchLanguageSupport_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISearchLanguageSupport_Release(This) (This)->lpVtbl->Release(This)
/*** ISearchLanguageSupport methods ***/
#define ISearchLanguageSupport_SetDiacriticSensitivity(This,fDiacriticSensitive) (This)->lpVtbl->SetDiacriticSensitivity(This,fDiacriticSensitive)
#define ISearchLanguageSupport_GetDiacriticSensitivity(This,pfDiacriticSensitive) (This)->lpVtbl->GetDiacriticSensitivity(This,pfDiacriticSensitive)
#define ISearchLanguageSupport_LoadWordBreaker(This,lcid,riid,ppWordBreaker,pLcidUsed) (This)->lpVtbl->LoadWordBreaker(This,lcid,riid,ppWordBreaker,pLcidUsed)
#define ISearchLanguageSupport_LoadStemmer(This,lcid,riid,ppStemmer,pLcidUsed) (This)->lpVtbl->LoadStemmer(This,lcid,riid,ppStemmer,pLcidUsed)
#define ISearchLanguageSupport_IsPrefixNormalized(This,pwcsQueryToken,cwcQueryToken,pwcsDocumentToken,cwcDocumentToken,pulPrefixLength) (This)->lpVtbl->IsPrefixNormalized(This,pwcsQueryToken,cwcQueryToken,pwcsDocumentToken,cwcDocumentToken,pulPrefixLength)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISearchLanguageSupport_QueryInterface(ISearchLanguageSupport* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISearchLanguageSupport_AddRef(ISearchLanguageSupport* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISearchLanguageSupport_Release(ISearchLanguageSupport* This) {
    return This->lpVtbl->Release(This);
}
/*** ISearchLanguageSupport methods ***/
static FORCEINLINE HRESULT ISearchLanguageSupport_SetDiacriticSensitivity(ISearchLanguageSupport* This,BOOL fDiacriticSensitive) {
    return This->lpVtbl->SetDiacriticSensitivity(This,fDiacriticSensitive);
}
static FORCEINLINE HRESULT ISearchLanguageSupport_GetDiacriticSensitivity(ISearchLanguageSupport* This,BOOL *pfDiacriticSensitive) {
    return This->lpVtbl->GetDiacriticSensitivity(This,pfDiacriticSensitive);
}
static FORCEINLINE HRESULT ISearchLanguageSupport_LoadWordBreaker(ISearchLanguageSupport* This,LCID lcid,REFIID riid,void **ppWordBreaker,LCID *pLcidUsed) {
    return This->lpVtbl->LoadWordBreaker(This,lcid,riid,ppWordBreaker,pLcidUsed);
}
static FORCEINLINE HRESULT ISearchLanguageSupport_LoadStemmer(ISearchLanguageSupport* This,LCID lcid,REFIID riid,void **ppStemmer,LCID *pLcidUsed) {
    return This->lpVtbl->LoadStemmer(This,lcid,riid,ppStemmer,pLcidUsed);
}
static FORCEINLINE HRESULT ISearchLanguageSupport_IsPrefixNormalized(ISearchLanguageSupport* This,LPCWSTR pwcsQueryToken,ULONG cwcQueryToken,LPCWSTR pwcsDocumentToken,ULONG cwcDocumentToken,ULONG *pulPrefixLength) {
    return This->lpVtbl->IsPrefixNormalized(This,pwcsQueryToken,cwcQueryToken,pwcsDocumentToken,cwcDocumentToken,pulPrefixLength);
}
#endif
#endif

#endif


#endif  /* __ISearchLanguageSupport_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __searchlanguagesupport_h__ */
