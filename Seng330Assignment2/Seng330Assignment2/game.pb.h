// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#ifndef PROTOBUF_game_2eproto__INCLUDED
#define PROTOBUF_game_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace game {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_game_2eproto();
void protobuf_AssignDesc_game_2eproto();
void protobuf_ShutdownFile_game_2eproto();

class Player;
class Room;
class Item;

// ===================================================================

class Player : public ::google::protobuf::Message {
 public:
  Player();
  virtual ~Player();

  Player(const Player& from);

  inline Player& operator=(const Player& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Player& default_instance();

  void Swap(Player* other);

  // implements Message ----------------------------------------------

  Player* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Player& from);
  void MergeFrom(const Player& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:game.Player)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  friend void  protobuf_AddDesc_game_2eproto();
  friend void protobuf_AssignDesc_game_2eproto();
  friend void protobuf_ShutdownFile_game_2eproto();

  void InitAsDefaultInstance();
  static Player* default_instance_;
};
// -------------------------------------------------------------------

class Room : public ::google::protobuf::Message {
 public:
  Room();
  virtual ~Room();

  Room(const Room& from);

  inline Room& operator=(const Room& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Room& default_instance();

  void Swap(Room* other);

  // implements Message ----------------------------------------------

  Room* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Room& from);
  void MergeFrom(const Room& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string description = 1;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 1;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  inline void set_allocated_description(::std::string* description);

  // @@protoc_insertion_point(class_scope:game.Room)
 private:
  inline void set_has_description();
  inline void clear_has_description();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* description_;
  friend void  protobuf_AddDesc_game_2eproto();
  friend void protobuf_AssignDesc_game_2eproto();
  friend void protobuf_ShutdownFile_game_2eproto();

  void InitAsDefaultInstance();
  static Room* default_instance_;
};
// -------------------------------------------------------------------

class Item : public ::google::protobuf::Message {
 public:
  Item();
  virtual ~Item();

  Item(const Item& from);

  inline Item& operator=(const Item& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Item& default_instance();

  void Swap(Item* other);

  // implements Message ----------------------------------------------

  Item* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Item& from);
  void MergeFrom(const Item& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string description = 1;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 1;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  inline void set_allocated_description(::std::string* description);

  // required bool isKey = 2;
  inline bool has_iskey() const;
  inline void clear_iskey();
  static const int kIsKeyFieldNumber = 2;
  inline bool iskey() const;
  inline void set_iskey(bool value);

  // @@protoc_insertion_point(class_scope:game.Item)
 private:
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_iskey();
  inline void clear_has_iskey();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* description_;
  bool iskey_;
  friend void  protobuf_AddDesc_game_2eproto();
  friend void protobuf_AssignDesc_game_2eproto();
  friend void protobuf_ShutdownFile_game_2eproto();

  void InitAsDefaultInstance();
  static Item* default_instance_;
};
// ===================================================================


// ===================================================================

// Player

// required string name = 1;
inline bool Player::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Player::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Player::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Player::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Player::name() const {
  // @@protoc_insertion_point(field_get:game.Player.name)
  return *name_;
}
inline void Player::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:game.Player.name)
}
inline void Player::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:game.Player.name)
}
inline void Player::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:game.Player.name)
}
inline ::std::string* Player::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:game.Player.name)
  return name_;
}
inline ::std::string* Player::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Player::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:game.Player.name)
}

// -------------------------------------------------------------------

// Room

// required string description = 1;
inline bool Room::has_description() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Room::set_has_description() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Room::clear_has_description() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Room::clear_description() {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& Room::description() const {
  // @@protoc_insertion_point(field_get:game.Room.description)
  return *description_;
}
inline void Room::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set:game.Room.description)
}
inline void Room::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set_char:game.Room.description)
}
inline void Room::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:game.Room.description)
}
inline ::std::string* Room::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:game.Room.description)
  return description_;
}
inline ::std::string* Room::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Room::set_allocated_description(::std::string* description) {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete description_;
  }
  if (description) {
    set_has_description();
    description_ = description;
  } else {
    clear_has_description();
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:game.Room.description)
}

// -------------------------------------------------------------------

// Item

// required string description = 1;
inline bool Item::has_description() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Item::set_has_description() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Item::clear_has_description() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Item::clear_description() {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& Item::description() const {
  // @@protoc_insertion_point(field_get:game.Item.description)
  return *description_;
}
inline void Item::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set:game.Item.description)
}
inline void Item::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set_char:game.Item.description)
}
inline void Item::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:game.Item.description)
}
inline ::std::string* Item::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:game.Item.description)
  return description_;
}
inline ::std::string* Item::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Item::set_allocated_description(::std::string* description) {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete description_;
  }
  if (description) {
    set_has_description();
    description_ = description;
  } else {
    clear_has_description();
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:game.Item.description)
}

// required bool isKey = 2;
inline bool Item::has_iskey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Item::set_has_iskey() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Item::clear_has_iskey() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Item::clear_iskey() {
  iskey_ = false;
  clear_has_iskey();
}
inline bool Item::iskey() const {
  // @@protoc_insertion_point(field_get:game.Item.isKey)
  return iskey_;
}
inline void Item::set_iskey(bool value) {
  set_has_iskey();
  iskey_ = value;
  // @@protoc_insertion_point(field_set:game.Item.isKey)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace game

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_game_2eproto__INCLUDED