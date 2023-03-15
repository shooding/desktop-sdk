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
// $hash=eb0606f224a27ce105e25497a183c20639f82862$
//

#include "libcef_dll/cpptoc/download_handler_cpptoc.h"
#include "libcef_dll/ctocpp/before_download_callback_ctocpp.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/download_item_callback_ctocpp.h"
#include "libcef_dll/ctocpp/download_item_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
download_handler_can_download(struct _cef_download_handler_t* self,
                              cef_browser_t* browser,
                              const cef_string_t* url,
                              const cef_string_t* request_method) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return 0;
  // Verify param: request_method; type: string_byref_const
  DCHECK(request_method);
  if (!request_method)
    return 0;

  // Execute
  bool _retval = CefDownloadHandlerCppToC::Get(self)->CanDownload(
      CefBrowserCToCpp::Wrap(browser), CefString(url),
      CefString(request_method));

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
download_handler_on_before_download(struct _cef_download_handler_t* self,
                                    cef_browser_t* browser,
                                    struct _cef_download_item_t* download_item,
                                    const cef_string_t* suggested_name,
                                    cef_before_download_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: download_item; type: refptr_diff
  DCHECK(download_item);
  if (!download_item)
    return;
  // Verify param: suggested_name; type: string_byref_const
  DCHECK(suggested_name);
  if (!suggested_name)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return;

  // Execute
  CefDownloadHandlerCppToC::Get(self)->OnBeforeDownload(
      CefBrowserCToCpp::Wrap(browser),
      CefDownloadItemCToCpp::Wrap(download_item), CefString(suggested_name),
      CefBeforeDownloadCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
download_handler_on_download_updated(struct _cef_download_handler_t* self,
                                     cef_browser_t* browser,
                                     struct _cef_download_item_t* download_item,
                                     cef_download_item_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: download_item; type: refptr_diff
  DCHECK(download_item);
  if (!download_item)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return;

  // Execute
  CefDownloadHandlerCppToC::Get(self)->OnDownloadUpdated(
      CefBrowserCToCpp::Wrap(browser),
      CefDownloadItemCToCpp::Wrap(download_item),
      CefDownloadItemCallbackCToCpp::Wrap(callback));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefDownloadHandlerCppToC::CefDownloadHandlerCppToC() {
  GetStruct()->can_download = download_handler_can_download;
  GetStruct()->on_before_download = download_handler_on_before_download;
  GetStruct()->on_download_updated = download_handler_on_download_updated;
}

// DESTRUCTOR - Do not edit by hand.

CefDownloadHandlerCppToC::~CefDownloadHandlerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefDownloadHandler> CefCppToCRefCounted<
    CefDownloadHandlerCppToC,
    CefDownloadHandler,
    cef_download_handler_t>::UnwrapDerived(CefWrapperType type,
                                           cef_download_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefDownloadHandlerCppToC,
                                   CefDownloadHandler,
                                   cef_download_handler_t>::kWrapperType =
    WT_DOWNLOAD_HANDLER;
