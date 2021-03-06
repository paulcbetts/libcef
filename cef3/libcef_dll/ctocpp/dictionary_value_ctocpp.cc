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

#include "libcef_dll/ctocpp/binary_value_ctocpp.h"
#include "libcef_dll/ctocpp/dictionary_value_ctocpp.h"
#include "libcef_dll/ctocpp/list_value_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefDictionaryValue> CefDictionaryValue::Create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_dictionary_value_t* _retval = cef_dictionary_value_create();

  // Return type: refptr_same
  return CefDictionaryValueCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefDictionaryValueCToCpp::IsValid() {
  if (CEF_MEMBER_MISSING(struct_, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_valid(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::IsOwned() {
  if (CEF_MEMBER_MISSING(struct_, is_owned))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_owned(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::IsReadOnly() {
  if (CEF_MEMBER_MISSING(struct_, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_read_only(struct_);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefDictionaryValue> CefDictionaryValueCToCpp::Copy(
    bool exclude_empty_children) {
  if (CEF_MEMBER_MISSING(struct_, copy))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_dictionary_value_t* _retval = struct_->copy(struct_,
      exclude_empty_children);

  // Return type: refptr_same
  return CefDictionaryValueCToCpp::Wrap(_retval);
}

size_t CefDictionaryValueCToCpp::GetSize() {
  if (CEF_MEMBER_MISSING(struct_, get_size))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = struct_->get_size(struct_);

  // Return type: simple
  return _retval;
}

bool CefDictionaryValueCToCpp::Clear() {
  if (CEF_MEMBER_MISSING(struct_, clear))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->clear(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::HasKey(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, has_key))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;

  // Execute
  int _retval = struct_->has_key(struct_,
      key.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::GetKeys(KeyList& keys) {
  if (CEF_MEMBER_MISSING(struct_, get_keys))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: keys; type: string_vec_byref
  cef_string_list_t keysList = cef_string_list_alloc();
  DCHECK(keysList);
  if (keysList)
    transfer_string_list_contents(keys, keysList);

  // Execute
  int _retval = struct_->get_keys(struct_,
      keysList);

  // Restore param:keys; type: string_vec_byref
  if (keysList) {
    keys.clear();
    transfer_string_list_contents(keysList, keys);
    cef_string_list_free(keysList);
  }

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::Remove(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, remove))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;

  // Execute
  int _retval = struct_->remove(struct_,
      key.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CefValueType CefDictionaryValueCToCpp::GetType(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_type))
    return VTYPE_INVALID;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return VTYPE_INVALID;

  // Execute
  cef_value_type_t _retval = struct_->get_type(struct_,
      key.GetStruct());

  // Return type: simple
  return _retval;
}

bool CefDictionaryValueCToCpp::GetBool(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_bool))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;

  // Execute
  int _retval = struct_->get_bool(struct_,
      key.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

int CefDictionaryValueCToCpp::GetInt(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_int))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return 0;

  // Execute
  int _retval = struct_->get_int(struct_,
      key.GetStruct());

  // Return type: simple
  return _retval;
}

double CefDictionaryValueCToCpp::GetDouble(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_double))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return 0;

  // Execute
  double _retval = struct_->get_double(struct_,
      key.GetStruct());

  // Return type: simple
  return _retval;
}

CefString CefDictionaryValueCToCpp::GetString(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_string))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return CefString();

  // Execute
  cef_string_userfree_t _retval = struct_->get_string(struct_,
      key.GetStruct());

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRefPtr<CefBinaryValue> CefDictionaryValueCToCpp::GetBinary(
    const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_binary))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return NULL;

  // Execute
  cef_binary_value_t* _retval = struct_->get_binary(struct_,
      key.GetStruct());

  // Return type: refptr_same
  return CefBinaryValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefDictionaryValue> CefDictionaryValueCToCpp::GetDictionary(
    const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_dictionary))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return NULL;

  // Execute
  cef_dictionary_value_t* _retval = struct_->get_dictionary(struct_,
      key.GetStruct());

  // Return type: refptr_same
  return CefDictionaryValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefListValue> CefDictionaryValueCToCpp::GetList(
    const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_list))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return NULL;

  // Execute
  cef_list_value_t* _retval = struct_->get_list(struct_,
      key.GetStruct());

  // Return type: refptr_same
  return CefListValueCToCpp::Wrap(_retval);
}

bool CefDictionaryValueCToCpp::SetNull(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, set_null))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;

  // Execute
  int _retval = struct_->set_null(struct_,
      key.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::SetBool(const CefString& key, bool value) {
  if (CEF_MEMBER_MISSING(struct_, set_bool))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;

  // Execute
  int _retval = struct_->set_bool(struct_,
      key.GetStruct(),
      value);

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::SetInt(const CefString& key, int value) {
  if (CEF_MEMBER_MISSING(struct_, set_int))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;

  // Execute
  int _retval = struct_->set_int(struct_,
      key.GetStruct(),
      value);

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::SetDouble(const CefString& key, double value) {
  if (CEF_MEMBER_MISSING(struct_, set_double))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;

  // Execute
  int _retval = struct_->set_double(struct_,
      key.GetStruct(),
      value);

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::SetString(const CefString& key,
    const CefString& value) {
  if (CEF_MEMBER_MISSING(struct_, set_string))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;
  // Unverified params: value

  // Execute
  int _retval = struct_->set_string(struct_,
      key.GetStruct(),
      value.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::SetBinary(const CefString& key,
    CefRefPtr<CefBinaryValue> value) {
  if (CEF_MEMBER_MISSING(struct_, set_binary))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;
  // Verify param: value; type: refptr_same
  DCHECK(value.get());
  if (!value.get())
    return false;

  // Execute
  int _retval = struct_->set_binary(struct_,
      key.GetStruct(),
      CefBinaryValueCToCpp::Unwrap(value));

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::SetDictionary(const CefString& key,
    CefRefPtr<CefDictionaryValue> value) {
  if (CEF_MEMBER_MISSING(struct_, set_dictionary))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;
  // Verify param: value; type: refptr_same
  DCHECK(value.get());
  if (!value.get())
    return false;

  // Execute
  int _retval = struct_->set_dictionary(struct_,
      key.GetStruct(),
      CefDictionaryValueCToCpp::Unwrap(value));

  // Return type: bool
  return _retval?true:false;
}

bool CefDictionaryValueCToCpp::SetList(const CefString& key,
    CefRefPtr<CefListValue> value) {
  if (CEF_MEMBER_MISSING(struct_, set_list))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;
  // Verify param: value; type: refptr_same
  DCHECK(value.get());
  if (!value.get())
    return false;

  // Execute
  int _retval = struct_->set_list(struct_,
      key.GetStruct(),
      CefListValueCToCpp::Unwrap(value));

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefDictionaryValueCToCpp, CefDictionaryValue,
    cef_dictionary_value_t>::DebugObjCt = 0;
#endif

