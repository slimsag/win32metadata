/*** Autogenerated by WIDL 5.0 from ./um/spatialinteractionmanagerinterop.idl - Do not edit ***/

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

#ifndef __spatialinteractionmanagerinterop_h__
#define __spatialinteractionmanagerinterop_h__

/* Forward declarations */

#ifndef __ISpatialInteractionManagerInterop_FWD_DEFINED__
#define __ISpatialInteractionManagerInterop_FWD_DEFINED__
typedef interface ISpatialInteractionManagerInterop ISpatialInteractionManagerInterop;
#ifdef __cplusplus
interface ISpatialInteractionManagerInterop;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * ISpatialInteractionManagerInterop interface
 */
#ifndef __ISpatialInteractionManagerInterop_INTERFACE_DEFINED__
#define __ISpatialInteractionManagerInterop_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialInteractionManagerInterop, 0x5c4ee536, 0x6a98, 0x4b86, 0xa1,0x70, 0x58,0x70,0x13,0xd6,0xfd,0x4b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5c4ee536-6a98-4b86-a170-587013d6fd4b")
ISpatialInteractionManagerInterop : public IInspectable
{
    virtual HRESULT STDMETHODCALLTYPE GetForWindow(
        HWND window,
        REFIID riid,
        void **spatialInteractionManager) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialInteractionManagerInterop, 0x5c4ee536, 0x6a98, 0x4b86, 0xa1,0x70, 0x58,0x70,0x13,0xd6,0xfd,0x4b)
#endif
#else
typedef struct ISpatialInteractionManagerInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialInteractionManagerInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialInteractionManagerInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialInteractionManagerInterop *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        ISpatialInteractionManagerInterop *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        ISpatialInteractionManagerInterop *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        ISpatialInteractionManagerInterop *This,
        TrustLevel *trustLevel);

    /*** ISpatialInteractionManagerInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *GetForWindow)(
        ISpatialInteractionManagerInterop *This,
        HWND window,
        REFIID riid,
        void **spatialInteractionManager);

    END_INTERFACE
} ISpatialInteractionManagerInteropVtbl;

interface ISpatialInteractionManagerInterop {
    CONST_VTBL ISpatialInteractionManagerInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialInteractionManagerInterop_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialInteractionManagerInterop_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialInteractionManagerInterop_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define ISpatialInteractionManagerInterop_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define ISpatialInteractionManagerInterop_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define ISpatialInteractionManagerInterop_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** ISpatialInteractionManagerInterop methods ***/
#define ISpatialInteractionManagerInterop_GetForWindow(This,window,riid,spatialInteractionManager) (This)->lpVtbl->GetForWindow(This,window,riid,spatialInteractionManager)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialInteractionManagerInterop_QueryInterface(ISpatialInteractionManagerInterop* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialInteractionManagerInterop_AddRef(ISpatialInteractionManagerInterop* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialInteractionManagerInterop_Release(ISpatialInteractionManagerInterop* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT ISpatialInteractionManagerInterop_GetIids(ISpatialInteractionManagerInterop* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT ISpatialInteractionManagerInterop_GetRuntimeClassName(ISpatialInteractionManagerInterop* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT ISpatialInteractionManagerInterop_GetTrustLevel(ISpatialInteractionManagerInterop* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** ISpatialInteractionManagerInterop methods ***/
static FORCEINLINE HRESULT ISpatialInteractionManagerInterop_GetForWindow(ISpatialInteractionManagerInterop* This,HWND window,REFIID riid,void **spatialInteractionManager) {
    return This->lpVtbl->GetForWindow(This,window,riid,spatialInteractionManager);
}
#endif
#endif

#endif


#endif  /* __ISpatialInteractionManagerInterop_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#endif //(NTDDI_VERSION >= NTDDI_WIN10)
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __spatialinteractionmanagerinterop_h__ */
