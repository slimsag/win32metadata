/*** Autogenerated by WIDL 5.0 from ./deletebrowsinghistory.idl - Do not edit ***/

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

#ifndef __deletebrowsinghistory_h__
#define __deletebrowsinghistory_h__

/* Forward declarations */

#ifndef __IDeleteBrowsingHistory_FWD_DEFINED__
#define __IDeleteBrowsingHistory_FWD_DEFINED__
typedef interface IDeleteBrowsingHistory IDeleteBrowsingHistory;
#ifdef __cplusplus
interface IDeleteBrowsingHistory;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
// {31caf6e4-d6aa-4090-a050-a5ac8972e9ef} 
DEFINE_GUID( CATID_DeleteBrowsingHistory, 0x31caf6e4,0xd6aa,0x4090,0xa0,0x50,0xa5,0xac,0x89,0x72,0xe9,0xef);
EXTERN_C const GUID CATID_DeleteBrowsingHistory;
#define DELETE_BROWSING_HISTORY_HISTORY              0x0001   // Indicates that the History checkbox was selected.
#define DELETE_BROWSING_HISTORY_COOKIES              0x0002   // Indicates that the Cookies checkbox was selected.
#define DELETE_BROWSING_HISTORY_TIF                  0x0004   // Indicates that the Temporary Internet Files checkbox was selected.
#define DELETE_BROWSING_HISTORY_FORMDATA             0x0008   // Indicates that the Form data checkbox was selected.
#define DELETE_BROWSING_HISTORY_PASSWORDS            0x0010   // Indicates that the Passwords checkbox was selected.
#define DELETE_BROWSING_HISTORY_PRESERVEFAVORITES    0x0020   // Indicates that the Preseve Favorite website data checkbox is selected.
#define DELETE_BROWSING_HISTORY_DOWNLOADHISTORY      0x0040   // Indicates that the Download History checkbox was selected.
/*****************************************************************************
 * IDeleteBrowsingHistory interface
 */
#ifndef __IDeleteBrowsingHistory_INTERFACE_DEFINED__
#define __IDeleteBrowsingHistory_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDeleteBrowsingHistory, 0xcf38ed4b, 0x2be7, 0x4461, 0x8b,0x5e, 0x9a,0x46,0x6d,0xc8,0x2a,0xe3);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cf38ed4b-2be7-4461-8b5e-9a466dc82ae3")
IDeleteBrowsingHistory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE DeleteBrowsingHistory(
        DWORD dwFlags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDeleteBrowsingHistory, 0xcf38ed4b, 0x2be7, 0x4461, 0x8b,0x5e, 0x9a,0x46,0x6d,0xc8,0x2a,0xe3)
#endif
#else
typedef struct IDeleteBrowsingHistoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDeleteBrowsingHistory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDeleteBrowsingHistory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDeleteBrowsingHistory *This);

    /*** IDeleteBrowsingHistory methods ***/
    HRESULT (STDMETHODCALLTYPE *DeleteBrowsingHistory)(
        IDeleteBrowsingHistory *This,
        DWORD dwFlags);

    END_INTERFACE
} IDeleteBrowsingHistoryVtbl;

interface IDeleteBrowsingHistory {
    CONST_VTBL IDeleteBrowsingHistoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDeleteBrowsingHistory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDeleteBrowsingHistory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDeleteBrowsingHistory_Release(This) (This)->lpVtbl->Release(This)
/*** IDeleteBrowsingHistory methods ***/
#define IDeleteBrowsingHistory_DeleteBrowsingHistory(This,dwFlags) (This)->lpVtbl->DeleteBrowsingHistory(This,dwFlags)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDeleteBrowsingHistory_QueryInterface(IDeleteBrowsingHistory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDeleteBrowsingHistory_AddRef(IDeleteBrowsingHistory* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDeleteBrowsingHistory_Release(IDeleteBrowsingHistory* This) {
    return This->lpVtbl->Release(This);
}
/*** IDeleteBrowsingHistory methods ***/
static FORCEINLINE HRESULT IDeleteBrowsingHistory_DeleteBrowsingHistory(IDeleteBrowsingHistory* This,DWORD dwFlags) {
    return This->lpVtbl->DeleteBrowsingHistory(This,dwFlags);
}
#endif
#endif

#endif


#endif  /* __IDeleteBrowsingHistory_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __deletebrowsinghistory_h__ */
