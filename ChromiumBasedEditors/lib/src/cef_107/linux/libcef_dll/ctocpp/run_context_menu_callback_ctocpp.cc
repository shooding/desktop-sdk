// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
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
// $hash=427fe84b74eec6346d7da729cba2fdf52d1c0fd7$
//

#include "libcef_dll/ctocpp/run_context_menu_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefRunContextMenuCallbackCToCpp::Continue(int command_id,
                                               cef_event_flags_t event_flags) {
  shutdown_checker::AssertNotShutdown();

  cef_run_context_menu_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cont(_struct, command_id, event_flags);
}

NO_SANITIZE("cfi-icall") void CefRunContextMenuCallbackCToCpp::Cancel() {
  shutdown_checker::AssertNotShutdown();

  cef_run_context_menu_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cancel))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cancel(_struct);
}

// CONSTRUCTOR - Do not edit by hand.

CefRunContextMenuCallbackCToCpp::CefRunContextMenuCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefRunContextMenuCallbackCToCpp::~CefRunContextMenuCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_run_context_menu_callback_t* CefCToCppRefCounted<
    CefRunContextMenuCallbackCToCpp,
    CefRunContextMenuCallback,
    cef_run_context_menu_callback_t>::UnwrapDerived(CefWrapperType type,
                                                    CefRunContextMenuCallback*
                                                        c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefRunContextMenuCallbackCToCpp,
                        CefRunContextMenuCallback,
                        cef_run_context_menu_callback_t>::kWrapperType =
        WT_RUN_CONTEXT_MENU_CALLBACK;
