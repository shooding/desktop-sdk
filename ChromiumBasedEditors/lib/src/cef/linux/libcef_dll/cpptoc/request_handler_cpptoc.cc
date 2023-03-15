// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=d8188baecddc69aae0e6f833325a46ae6a83a4ac$
//

#include "libcef_dll/cpptoc/request_handler_cpptoc.h"
#include "libcef_dll/cpptoc/resource_request_handler_cpptoc.h"
#include "libcef_dll/ctocpp/auth_callback_ctocpp.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/callback_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/select_client_certificate_callback_ctocpp.h"
#include "libcef_dll/ctocpp/sslinfo_ctocpp.h"
#include "libcef_dll/ctocpp/x509certificate_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
request_handler_on_before_browse(struct _cef_request_handler_t* self,
                                 cef_browser_t* browser,
                                 cef_frame_t* frame,
                                 cef_request_t* request,
                                 int user_gesture,
                                 int is_redirect) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return 0;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return 0;

  // Execute
  bool _retval = CefRequestHandlerCppToC::Get(self)->OnBeforeBrowse(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
      CefRequestCToCpp::Wrap(request), user_gesture ? true : false,
      is_redirect ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK request_handler_on_open_urlfrom_tab(
    struct _cef_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    const cef_string_t* target_url,
    cef_window_open_disposition_t target_disposition,
    int user_gesture) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return 0;
  // Verify param: target_url; type: string_byref_const
  DCHECK(target_url);
  if (!target_url)
    return 0;

  // Execute
  bool _retval = CefRequestHandlerCppToC::Get(self)->OnOpenURLFromTab(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
      CefString(target_url), target_disposition, user_gesture ? true : false);

  // Return type: bool
  return _retval;
}

struct _cef_resource_request_handler_t* CEF_CALLBACK
request_handler_get_resource_request_handler(
    struct _cef_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    int is_navigation,
    int is_download,
    const cef_string_t* request_initiator,
    int* disable_default_handling) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return NULL;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return NULL;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return NULL;
  // Verify param: disable_default_handling; type: bool_byref
  DCHECK(disable_default_handling);
  if (!disable_default_handling)
    return NULL;
  // Unverified params: request_initiator

  // Translate param: disable_default_handling; type: bool_byref
  bool disable_default_handlingBool =
      (disable_default_handling && *disable_default_handling) ? true : false;

  // Execute
  CefRefPtr<CefResourceRequestHandler> _retval =
      CefRequestHandlerCppToC::Get(self)->GetResourceRequestHandler(
          CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
          CefRequestCToCpp::Wrap(request), is_navigation ? true : false,
          is_download ? true : false, CefString(request_initiator),
          disable_default_handlingBool);

  // Restore param: disable_default_handling; type: bool_byref
  if (disable_default_handling)
    *disable_default_handling = disable_default_handlingBool ? true : false;

  // Return type: refptr_same
  return CefResourceRequestHandlerCppToC::Wrap(_retval);
}

int CEF_CALLBACK
request_handler_get_auth_credentials(struct _cef_request_handler_t* self,
                                     cef_browser_t* browser,
                                     const cef_string_t* origin_url,
                                     int isProxy,
                                     const cef_string_t* host,
                                     int port,
                                     const cef_string_t* realm,
                                     const cef_string_t* scheme,
                                     cef_auth_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: origin_url; type: string_byref_const
  DCHECK(origin_url);
  if (!origin_url)
    return 0;
  // Verify param: host; type: string_byref_const
  DCHECK(host);
  if (!host)
    return 0;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;
  // Unverified params: realm, scheme

  // Execute
  bool _retval = CefRequestHandlerCppToC::Get(self)->GetAuthCredentials(
      CefBrowserCToCpp::Wrap(browser), CefString(origin_url),
      isProxy ? true : false, CefString(host), port, CefString(realm),
      CefString(scheme), CefAuthCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
request_handler_on_certificate_error(struct _cef_request_handler_t* self,
                                     cef_browser_t* browser,
                                     cef_errorcode_t cert_error,
                                     const cef_string_t* request_url,
                                     struct _cef_sslinfo_t* ssl_info,
                                     cef_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: request_url; type: string_byref_const
  DCHECK(request_url);
  if (!request_url)
    return 0;
  // Verify param: ssl_info; type: refptr_diff
  DCHECK(ssl_info);
  if (!ssl_info)
    return 0;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;

  // Execute
  bool _retval = CefRequestHandlerCppToC::Get(self)->OnCertificateError(
      CefBrowserCToCpp::Wrap(browser), cert_error, CefString(request_url),
      CefSSLInfoCToCpp::Wrap(ssl_info), CefCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK request_handler_on_select_client_certificate(
    struct _cef_request_handler_t* self,
    cef_browser_t* browser,
    int isProxy,
    const cef_string_t* host,
    int port,
    size_t certificatesCount,
    struct _cef_x509certificate_t* const* certificates,
    cef_select_client_certificate_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: host; type: string_byref_const
  DCHECK(host);
  if (!host)
    return 0;
  // Verify param: certificates; type: refptr_vec_diff_byref_const
  DCHECK(certificatesCount == 0 || certificates);
  if (certificatesCount > 0 && !certificates)
    return 0;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;

  // Translate param: certificates; type: refptr_vec_diff_byref_const
  std::vector<CefRefPtr<CefX509Certificate>> certificatesList;
  if (certificatesCount > 0) {
    for (size_t i = 0; i < certificatesCount; ++i) {
      CefRefPtr<CefX509Certificate> certificatesVal =
          CefX509CertificateCToCpp::Wrap(certificates[i]);
      certificatesList.push_back(certificatesVal);
    }
  }

  // Execute
  bool _retval = CefRequestHandlerCppToC::Get(self)->OnSelectClientCertificate(
      CefBrowserCToCpp::Wrap(browser), isProxy ? true : false, CefString(host),
      port, certificatesList,
      CefSelectClientCertificateCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
request_handler_on_render_view_ready(struct _cef_request_handler_t* self,
                                     cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefRequestHandlerCppToC::Get(self)->OnRenderViewReady(
      CefBrowserCToCpp::Wrap(browser));
}

void CEF_CALLBACK request_handler_on_render_process_terminated(
    struct _cef_request_handler_t* self,
    cef_browser_t* browser,
    cef_termination_status_t status) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefRequestHandlerCppToC::Get(self)->OnRenderProcessTerminated(
      CefBrowserCToCpp::Wrap(browser), status);
}

void CEF_CALLBACK request_handler_on_document_available_in_main_frame(
    struct _cef_request_handler_t* self,
    cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefRequestHandlerCppToC::Get(self)->OnDocumentAvailableInMainFrame(
      CefBrowserCToCpp::Wrap(browser));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRequestHandlerCppToC::CefRequestHandlerCppToC() {
  GetStruct()->on_before_browse = request_handler_on_before_browse;
  GetStruct()->on_open_urlfrom_tab = request_handler_on_open_urlfrom_tab;
  GetStruct()->get_resource_request_handler =
      request_handler_get_resource_request_handler;
  GetStruct()->get_auth_credentials = request_handler_get_auth_credentials;
  GetStruct()->on_certificate_error = request_handler_on_certificate_error;
  GetStruct()->on_select_client_certificate =
      request_handler_on_select_client_certificate;
  GetStruct()->on_render_view_ready = request_handler_on_render_view_ready;
  GetStruct()->on_render_process_terminated =
      request_handler_on_render_process_terminated;
  GetStruct()->on_document_available_in_main_frame =
      request_handler_on_document_available_in_main_frame;
}

// DESTRUCTOR - Do not edit by hand.

CefRequestHandlerCppToC::~CefRequestHandlerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefRequestHandler> CefCppToCRefCounted<
    CefRequestHandlerCppToC,
    CefRequestHandler,
    cef_request_handler_t>::UnwrapDerived(CefWrapperType type,
                                          cef_request_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefRequestHandlerCppToC,
                                   CefRequestHandler,
                                   cef_request_handler_t>::kWrapperType =
    WT_REQUEST_HANDLER;
