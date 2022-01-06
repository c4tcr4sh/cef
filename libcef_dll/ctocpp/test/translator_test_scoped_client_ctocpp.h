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
// $hash=d0a9d6ca17834c09fbd63e06ebb38c337dc64f62$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_SCOPED_CLIENT_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_SCOPED_CLIENT_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/test/cef_translator_test_capi.h"
#include "include/test/cef_translator_test.h"
#include "libcef_dll/ctocpp/ctocpp_scoped.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefTranslatorTestScopedClientCToCpp
    : public CefCToCppScoped<CefTranslatorTestScopedClientCToCpp,
                             CefTranslatorTestScopedClient,
                             cef_translator_test_scoped_client_t> {
 public:
  CefTranslatorTestScopedClientCToCpp();
  virtual ~CefTranslatorTestScopedClientCToCpp();

  // CefTranslatorTestScopedClient methods.
  int GetValue() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_SCOPED_CLIENT_CTOCPP_H_
