// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_menu_model.h"
#include "include/capi/cef_menu_model_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefMenuModelCToCpp
    : public CefCToCpp<CefMenuModelCToCpp, CefMenuModel, cef_menu_model_t> {
 public:
  explicit CefMenuModelCToCpp(cef_menu_model_t* str)
      : CefCToCpp<CefMenuModelCToCpp, CefMenuModel, cef_menu_model_t>(str) {}
  virtual ~CefMenuModelCToCpp() {}

  // CefMenuModel methods
  virtual bool Clear() OVERRIDE;
  virtual int GetCount() OVERRIDE;
  virtual bool AddSeparator() OVERRIDE;
  virtual bool AddItem(int command_id, const CefString& label) OVERRIDE;
  virtual bool AddCheckItem(int command_id, const CefString& label) OVERRIDE;
  virtual bool AddRadioItem(int command_id, const CefString& label,
      int group_id) OVERRIDE;
  virtual CefRefPtr<CefMenuModel> AddSubMenu(int command_id,
      const CefString& label) OVERRIDE;
  virtual bool InsertSeparatorAt(int index) OVERRIDE;
  virtual bool InsertItemAt(int index, int command_id,
      const CefString& label) OVERRIDE;
  virtual bool InsertCheckItemAt(int index, int command_id,
      const CefString& label) OVERRIDE;
  virtual bool InsertRadioItemAt(int index, int command_id,
      const CefString& label, int group_id) OVERRIDE;
  virtual CefRefPtr<CefMenuModel> InsertSubMenuAt(int index, int command_id,
      const CefString& label) OVERRIDE;
  virtual bool Remove(int command_id) OVERRIDE;
  virtual bool RemoveAt(int index) OVERRIDE;
  virtual int GetIndexOf(int command_id) OVERRIDE;
  virtual int GetCommandIdAt(int index) OVERRIDE;
  virtual bool SetCommandIdAt(int index, int command_id) OVERRIDE;
  virtual CefString GetLabel(int command_id) OVERRIDE;
  virtual CefString GetLabelAt(int index) OVERRIDE;
  virtual bool SetLabel(int command_id, const CefString& label) OVERRIDE;
  virtual bool SetLabelAt(int index, const CefString& label) OVERRIDE;
  virtual MenuItemType GetType(int command_id) OVERRIDE;
  virtual MenuItemType GetTypeAt(int index) OVERRIDE;
  virtual int GetGroupId(int command_id) OVERRIDE;
  virtual int GetGroupIdAt(int index) OVERRIDE;
  virtual bool SetGroupId(int command_id, int group_id) OVERRIDE;
  virtual bool SetGroupIdAt(int index, int group_id) OVERRIDE;
  virtual CefRefPtr<CefMenuModel> GetSubMenu(int command_id) OVERRIDE;
  virtual CefRefPtr<CefMenuModel> GetSubMenuAt(int index) OVERRIDE;
  virtual bool IsVisible(int command_id) OVERRIDE;
  virtual bool IsVisibleAt(int index) OVERRIDE;
  virtual bool SetVisible(int command_id, bool visible) OVERRIDE;
  virtual bool SetVisibleAt(int index, bool visible) OVERRIDE;
  virtual bool IsEnabled(int command_id) OVERRIDE;
  virtual bool IsEnabledAt(int index) OVERRIDE;
  virtual bool SetEnabled(int command_id, bool enabled) OVERRIDE;
  virtual bool SetEnabledAt(int index, bool enabled) OVERRIDE;
  virtual bool IsChecked(int command_id) OVERRIDE;
  virtual bool IsCheckedAt(int index) OVERRIDE;
  virtual bool SetChecked(int command_id, bool checked) OVERRIDE;
  virtual bool SetCheckedAt(int index, bool checked) OVERRIDE;
  virtual bool HasAccelerator(int command_id) OVERRIDE;
  virtual bool HasAcceleratorAt(int index) OVERRIDE;
  virtual bool SetAccelerator(int command_id, int key_code, bool shift_pressed,
      bool ctrl_pressed, bool alt_pressed) OVERRIDE;
  virtual bool SetAcceleratorAt(int index, int key_code, bool shift_pressed,
      bool ctrl_pressed, bool alt_pressed) OVERRIDE;
  virtual bool RemoveAccelerator(int command_id) OVERRIDE;
  virtual bool RemoveAcceleratorAt(int index) OVERRIDE;
  virtual bool GetAccelerator(int command_id, int& key_code,
      bool& shift_pressed, bool& ctrl_pressed, bool& alt_pressed) OVERRIDE;
  virtual bool GetAcceleratorAt(int index, int& key_code, bool& shift_pressed,
      bool& ctrl_pressed, bool& alt_pressed) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_

