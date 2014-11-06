// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef RHINO_INCLUDE_RHINO_EXPORT_H_
#define RHINO_INCLUDE_RHINO_EXPORT_H_

#if defined(COMPONENT_BUILD) && !defined(COMPILE_RHINO_STATICALLY)
#if defined(WIN32)

#if defined(RHINO_IMPLEMENTATION)
#define RHINO_EXPORT __declspec(dllexport)
#else
#define RHINO_EXPORT __declspec(dllimport)
#endif  // defined(RHINO_IMPLEMENTATION)

#else // defined(WIN32)
#if defined(RHINO_IMPLEMENTATION)
#define RHINO_EXPORT __attribute__((visibility("default")))
#else
#define RHINO_EXPORT
#endif
#endif

#else // defined(COMPONENT_BUILD)
#define RHINO_EXPORT
#endif

#endif  // RHINO_COMMON_RHINO_EXPORT_H_
