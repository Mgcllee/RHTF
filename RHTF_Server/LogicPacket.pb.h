// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LogicPacket.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_LogicPacket_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_LogicPacket_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_LogicPacket_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_LogicPacket_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_LogicPacket_2eproto;
namespace User {
class C2SPCLoginUserReq;
struct C2SPCLoginUserReqDefaultTypeInternal;
extern C2SPCLoginUserReqDefaultTypeInternal _C2SPCLoginUserReq_default_instance_;
class PacketType;
struct PacketTypeDefaultTypeInternal;
extern PacketTypeDefaultTypeInternal _PacketType_default_instance_;
class S2CPCLoginUserRes;
struct S2CPCLoginUserResDefaultTypeInternal;
extern S2CPCLoginUserResDefaultTypeInternal _S2CPCLoginUserRes_default_instance_;
}  // namespace User
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace User {

// ===================================================================


// -------------------------------------------------------------------

class S2CPCLoginUserRes final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:User.S2CPCLoginUserRes) */ {
 public:
  inline S2CPCLoginUserRes() : S2CPCLoginUserRes(nullptr) {}
  ~S2CPCLoginUserRes() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR S2CPCLoginUserRes(::google::protobuf::internal::ConstantInitialized);

  inline S2CPCLoginUserRes(const S2CPCLoginUserRes& from)
      : S2CPCLoginUserRes(nullptr, from) {}
  S2CPCLoginUserRes(S2CPCLoginUserRes&& from) noexcept
    : S2CPCLoginUserRes() {
    *this = ::std::move(from);
  }

  inline S2CPCLoginUserRes& operator=(const S2CPCLoginUserRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline S2CPCLoginUserRes& operator=(S2CPCLoginUserRes&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const S2CPCLoginUserRes& default_instance() {
    return *internal_default_instance();
  }
  static inline const S2CPCLoginUserRes* internal_default_instance() {
    return reinterpret_cast<const S2CPCLoginUserRes*>(
               &_S2CPCLoginUserRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(S2CPCLoginUserRes& a, S2CPCLoginUserRes& b) {
    a.Swap(&b);
  }
  inline void Swap(S2CPCLoginUserRes* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(S2CPCLoginUserRes* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  S2CPCLoginUserRes* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<S2CPCLoginUserRes>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const S2CPCLoginUserRes& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const S2CPCLoginUserRes& from) {
    S2CPCLoginUserRes::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(S2CPCLoginUserRes* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "User.S2CPCLoginUserRes";
  }
  protected:
  explicit S2CPCLoginUserRes(::google::protobuf::Arena* arena);
  S2CPCLoginUserRes(::google::protobuf::Arena* arena, const S2CPCLoginUserRes& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserNameFieldNumber = 2,
    kUserIDFieldNumber = 1,
    kUserLevelFieldNumber = 3,
  };
  // string UserName = 2;
  void clear_username() ;
  const std::string& username() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_username(Arg_&& arg, Args_... args);
  std::string* mutable_username();
  PROTOBUF_NODISCARD std::string* release_username();
  void set_allocated_username(std::string* value);

  private:
  const std::string& _internal_username() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_username(
      const std::string& value);
  std::string* _internal_mutable_username();

  public:
  // uint32 UserID = 1;
  void clear_userid() ;
  ::uint32_t userid() const;
  void set_userid(::uint32_t value);

  private:
  ::uint32_t _internal_userid() const;
  void _internal_set_userid(::uint32_t value);

  public:
  // uint32 UserLevel = 3;
  void clear_userlevel() ;
  ::uint32_t userlevel() const;
  void set_userlevel(::uint32_t value);

  private:
  ::uint32_t _internal_userlevel() const;
  void _internal_set_userlevel(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:User.S2CPCLoginUserRes)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      39, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr username_;
    ::uint32_t userid_;
    ::uint32_t userlevel_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_LogicPacket_2eproto;
};// -------------------------------------------------------------------

class C2SPCLoginUserReq final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:User.C2SPCLoginUserReq) */ {
 public:
  inline C2SPCLoginUserReq() : C2SPCLoginUserReq(nullptr) {}
  ~C2SPCLoginUserReq() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR C2SPCLoginUserReq(::google::protobuf::internal::ConstantInitialized);

  inline C2SPCLoginUserReq(const C2SPCLoginUserReq& from)
      : C2SPCLoginUserReq(nullptr, from) {}
  C2SPCLoginUserReq(C2SPCLoginUserReq&& from) noexcept
    : C2SPCLoginUserReq() {
    *this = ::std::move(from);
  }

  inline C2SPCLoginUserReq& operator=(const C2SPCLoginUserReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline C2SPCLoginUserReq& operator=(C2SPCLoginUserReq&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const C2SPCLoginUserReq& default_instance() {
    return *internal_default_instance();
  }
  static inline const C2SPCLoginUserReq* internal_default_instance() {
    return reinterpret_cast<const C2SPCLoginUserReq*>(
               &_C2SPCLoginUserReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(C2SPCLoginUserReq& a, C2SPCLoginUserReq& b) {
    a.Swap(&b);
  }
  inline void Swap(C2SPCLoginUserReq* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(C2SPCLoginUserReq* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  C2SPCLoginUserReq* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<C2SPCLoginUserReq>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const C2SPCLoginUserReq& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const C2SPCLoginUserReq& from) {
    C2SPCLoginUserReq::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(C2SPCLoginUserReq* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "User.C2SPCLoginUserReq";
  }
  protected:
  explicit C2SPCLoginUserReq(::google::protobuf::Arena* arena);
  C2SPCLoginUserReq(::google::protobuf::Arena* arena, const C2SPCLoginUserReq& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIDFieldNumber = 1,
  };
  // uint32 UserID = 1;
  void clear_userid() ;
  ::uint32_t userid() const;
  void set_userid(::uint32_t value);

  private:
  ::uint32_t _internal_userid() const;
  void _internal_set_userid(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:User.C2SPCLoginUserReq)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::uint32_t userid_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_LogicPacket_2eproto;
};// -------------------------------------------------------------------

class PacketType final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:User.PacketType) */ {
 public:
  inline PacketType() : PacketType(nullptr) {}
  ~PacketType() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PacketType(::google::protobuf::internal::ConstantInitialized);

  inline PacketType(const PacketType& from)
      : PacketType(nullptr, from) {}
  PacketType(PacketType&& from) noexcept
    : PacketType() {
    *this = ::std::move(from);
  }

  inline PacketType& operator=(const PacketType& from) {
    CopyFrom(from);
    return *this;
  }
  inline PacketType& operator=(PacketType&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PacketType& default_instance() {
    return *internal_default_instance();
  }
  enum TypeCase {
    kC2SLoginUserReq = 1,
    kS2CLoginUserRes = 2,
    TYPE_NOT_SET = 0,
  };

  static inline const PacketType* internal_default_instance() {
    return reinterpret_cast<const PacketType*>(
               &_PacketType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PacketType& a, PacketType& b) {
    a.Swap(&b);
  }
  inline void Swap(PacketType* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PacketType* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PacketType* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PacketType>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const PacketType& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const PacketType& from) {
    PacketType::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(PacketType* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "User.PacketType";
  }
  protected:
  explicit PacketType(::google::protobuf::Arena* arena);
  PacketType(::google::protobuf::Arena* arena, const PacketType& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kC2SLoginUserReqFieldNumber = 1,
    kS2CLoginUserResFieldNumber = 2,
  };
  // .User.C2SPCLoginUserReq C2SLoginUserReq = 1;
  bool has_c2sloginuserreq() const;
  private:
  bool _internal_has_c2sloginuserreq() const;

  public:
  void clear_c2sloginuserreq() ;
  const ::User::C2SPCLoginUserReq& c2sloginuserreq() const;
  PROTOBUF_NODISCARD ::User::C2SPCLoginUserReq* release_c2sloginuserreq();
  ::User::C2SPCLoginUserReq* mutable_c2sloginuserreq();
  void set_allocated_c2sloginuserreq(::User::C2SPCLoginUserReq* value);
  void unsafe_arena_set_allocated_c2sloginuserreq(::User::C2SPCLoginUserReq* value);
  ::User::C2SPCLoginUserReq* unsafe_arena_release_c2sloginuserreq();

  private:
  const ::User::C2SPCLoginUserReq& _internal_c2sloginuserreq() const;
  ::User::C2SPCLoginUserReq* _internal_mutable_c2sloginuserreq();

  public:
  // .User.S2CPCLoginUserRes S2CLoginUserRes = 2;
  bool has_s2cloginuserres() const;
  private:
  bool _internal_has_s2cloginuserres() const;

  public:
  void clear_s2cloginuserres() ;
  const ::User::S2CPCLoginUserRes& s2cloginuserres() const;
  PROTOBUF_NODISCARD ::User::S2CPCLoginUserRes* release_s2cloginuserres();
  ::User::S2CPCLoginUserRes* mutable_s2cloginuserres();
  void set_allocated_s2cloginuserres(::User::S2CPCLoginUserRes* value);
  void unsafe_arena_set_allocated_s2cloginuserres(::User::S2CPCLoginUserRes* value);
  ::User::S2CPCLoginUserRes* unsafe_arena_release_s2cloginuserres();

  private:
  const ::User::S2CPCLoginUserRes& _internal_s2cloginuserres() const;
  ::User::S2CPCLoginUserRes* _internal_mutable_s2cloginuserres();

  public:
  void clear_Type();
  TypeCase Type_case() const;
  // @@protoc_insertion_point(class_scope:User.PacketType)
 private:
  class _Internal;
  void set_has_c2sloginuserreq();
  void set_has_s2cloginuserres();

  inline bool has_Type() const;
  inline void clear_has_Type();

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 2, 2,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    union TypeUnion {
      constexpr TypeUnion() : _constinit_{} {}
        ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::User::C2SPCLoginUserReq* c2sloginuserreq_;
      ::User::S2CPCLoginUserRes* s2cloginuserres_;
    } Type_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];

    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_LogicPacket_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PacketType

// .User.C2SPCLoginUserReq C2SLoginUserReq = 1;
inline bool PacketType::has_c2sloginuserreq() const {
  return Type_case() == kC2SLoginUserReq;
}
inline bool PacketType::_internal_has_c2sloginuserreq() const {
  return Type_case() == kC2SLoginUserReq;
}
inline void PacketType::set_has_c2sloginuserreq() {
  _impl_._oneof_case_[0] = kC2SLoginUserReq;
}
inline void PacketType::clear_c2sloginuserreq() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (Type_case() == kC2SLoginUserReq) {
    if (GetArena() == nullptr) {
      delete _impl_.Type_.c2sloginuserreq_;
    }
    clear_has_Type();
  }
}
inline ::User::C2SPCLoginUserReq* PacketType::release_c2sloginuserreq() {
  // @@protoc_insertion_point(field_release:User.PacketType.C2SLoginUserReq)
  if (Type_case() == kC2SLoginUserReq) {
    clear_has_Type();
    auto* temp = _impl_.Type_.c2sloginuserreq_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.Type_.c2sloginuserreq_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::User::C2SPCLoginUserReq& PacketType::_internal_c2sloginuserreq() const {
  return Type_case() == kC2SLoginUserReq ? *_impl_.Type_.c2sloginuserreq_ : reinterpret_cast<::User::C2SPCLoginUserReq&>(::User::_C2SPCLoginUserReq_default_instance_);
}
inline const ::User::C2SPCLoginUserReq& PacketType::c2sloginuserreq() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.PacketType.C2SLoginUserReq)
  return _internal_c2sloginuserreq();
}
inline ::User::C2SPCLoginUserReq* PacketType::unsafe_arena_release_c2sloginuserreq() {
  // @@protoc_insertion_point(field_unsafe_arena_release:User.PacketType.C2SLoginUserReq)
  if (Type_case() == kC2SLoginUserReq) {
    clear_has_Type();
    auto* temp = _impl_.Type_.c2sloginuserreq_;
    _impl_.Type_.c2sloginuserreq_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void PacketType::unsafe_arena_set_allocated_c2sloginuserreq(::User::C2SPCLoginUserReq* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_Type();
  if (value) {
    set_has_c2sloginuserreq();
    _impl_.Type_.c2sloginuserreq_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:User.PacketType.C2SLoginUserReq)
}
inline ::User::C2SPCLoginUserReq* PacketType::_internal_mutable_c2sloginuserreq() {
  if (Type_case() != kC2SLoginUserReq) {
    clear_Type();
    set_has_c2sloginuserreq();
    _impl_.Type_.c2sloginuserreq_ = CreateMaybeMessage<::User::C2SPCLoginUserReq>(GetArena());
  }
  return _impl_.Type_.c2sloginuserreq_;
}
inline ::User::C2SPCLoginUserReq* PacketType::mutable_c2sloginuserreq() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::User::C2SPCLoginUserReq* _msg = _internal_mutable_c2sloginuserreq();
  // @@protoc_insertion_point(field_mutable:User.PacketType.C2SLoginUserReq)
  return _msg;
}

// .User.S2CPCLoginUserRes S2CLoginUserRes = 2;
inline bool PacketType::has_s2cloginuserres() const {
  return Type_case() == kS2CLoginUserRes;
}
inline bool PacketType::_internal_has_s2cloginuserres() const {
  return Type_case() == kS2CLoginUserRes;
}
inline void PacketType::set_has_s2cloginuserres() {
  _impl_._oneof_case_[0] = kS2CLoginUserRes;
}
inline void PacketType::clear_s2cloginuserres() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (Type_case() == kS2CLoginUserRes) {
    if (GetArena() == nullptr) {
      delete _impl_.Type_.s2cloginuserres_;
    }
    clear_has_Type();
  }
}
inline ::User::S2CPCLoginUserRes* PacketType::release_s2cloginuserres() {
  // @@protoc_insertion_point(field_release:User.PacketType.S2CLoginUserRes)
  if (Type_case() == kS2CLoginUserRes) {
    clear_has_Type();
    auto* temp = _impl_.Type_.s2cloginuserres_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.Type_.s2cloginuserres_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::User::S2CPCLoginUserRes& PacketType::_internal_s2cloginuserres() const {
  return Type_case() == kS2CLoginUserRes ? *_impl_.Type_.s2cloginuserres_ : reinterpret_cast<::User::S2CPCLoginUserRes&>(::User::_S2CPCLoginUserRes_default_instance_);
}
inline const ::User::S2CPCLoginUserRes& PacketType::s2cloginuserres() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.PacketType.S2CLoginUserRes)
  return _internal_s2cloginuserres();
}
inline ::User::S2CPCLoginUserRes* PacketType::unsafe_arena_release_s2cloginuserres() {
  // @@protoc_insertion_point(field_unsafe_arena_release:User.PacketType.S2CLoginUserRes)
  if (Type_case() == kS2CLoginUserRes) {
    clear_has_Type();
    auto* temp = _impl_.Type_.s2cloginuserres_;
    _impl_.Type_.s2cloginuserres_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void PacketType::unsafe_arena_set_allocated_s2cloginuserres(::User::S2CPCLoginUserRes* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_Type();
  if (value) {
    set_has_s2cloginuserres();
    _impl_.Type_.s2cloginuserres_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:User.PacketType.S2CLoginUserRes)
}
inline ::User::S2CPCLoginUserRes* PacketType::_internal_mutable_s2cloginuserres() {
  if (Type_case() != kS2CLoginUserRes) {
    clear_Type();
    set_has_s2cloginuserres();
    _impl_.Type_.s2cloginuserres_ = CreateMaybeMessage<::User::S2CPCLoginUserRes>(GetArena());
  }
  return _impl_.Type_.s2cloginuserres_;
}
inline ::User::S2CPCLoginUserRes* PacketType::mutable_s2cloginuserres() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::User::S2CPCLoginUserRes* _msg = _internal_mutable_s2cloginuserres();
  // @@protoc_insertion_point(field_mutable:User.PacketType.S2CLoginUserRes)
  return _msg;
}

inline bool PacketType::has_Type() const {
  return Type_case() != TYPE_NOT_SET;
}
inline void PacketType::clear_has_Type() {
  _impl_._oneof_case_[0] = TYPE_NOT_SET;
}
inline PacketType::TypeCase PacketType::Type_case() const {
  return PacketType::TypeCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// C2SPCLoginUserReq

// uint32 UserID = 1;
inline void C2SPCLoginUserReq::clear_userid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.userid_ = 0u;
}
inline ::uint32_t C2SPCLoginUserReq::userid() const {
  // @@protoc_insertion_point(field_get:User.C2SPCLoginUserReq.UserID)
  return _internal_userid();
}
inline void C2SPCLoginUserReq::set_userid(::uint32_t value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:User.C2SPCLoginUserReq.UserID)
}
inline ::uint32_t C2SPCLoginUserReq::_internal_userid() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.userid_;
}
inline void C2SPCLoginUserReq::_internal_set_userid(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.userid_ = value;
}

// -------------------------------------------------------------------

// S2CPCLoginUserRes

// uint32 UserID = 1;
inline void S2CPCLoginUserRes::clear_userid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.userid_ = 0u;
}
inline ::uint32_t S2CPCLoginUserRes::userid() const {
  // @@protoc_insertion_point(field_get:User.S2CPCLoginUserRes.UserID)
  return _internal_userid();
}
inline void S2CPCLoginUserRes::set_userid(::uint32_t value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:User.S2CPCLoginUserRes.UserID)
}
inline ::uint32_t S2CPCLoginUserRes::_internal_userid() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.userid_;
}
inline void S2CPCLoginUserRes::_internal_set_userid(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.userid_ = value;
}

// string UserName = 2;
inline void S2CPCLoginUserRes::clear_username() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.username_.ClearToEmpty();
}
inline const std::string& S2CPCLoginUserRes::username() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.S2CPCLoginUserRes.UserName)
  return _internal_username();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void S2CPCLoginUserRes::set_username(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.username_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:User.S2CPCLoginUserRes.UserName)
}
inline std::string* S2CPCLoginUserRes::mutable_username() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_username();
  // @@protoc_insertion_point(field_mutable:User.S2CPCLoginUserRes.UserName)
  return _s;
}
inline const std::string& S2CPCLoginUserRes::_internal_username() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.username_.Get();
}
inline void S2CPCLoginUserRes::_internal_set_username(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.username_.Set(value, GetArena());
}
inline std::string* S2CPCLoginUserRes::_internal_mutable_username() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.username_.Mutable( GetArena());
}
inline std::string* S2CPCLoginUserRes::release_username() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:User.S2CPCLoginUserRes.UserName)
  return _impl_.username_.Release();
}
inline void S2CPCLoginUserRes::set_allocated_username(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.username_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.username_.IsDefault()) {
          _impl_.username_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:User.S2CPCLoginUserRes.UserName)
}

// uint32 UserLevel = 3;
inline void S2CPCLoginUserRes::clear_userlevel() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.userlevel_ = 0u;
}
inline ::uint32_t S2CPCLoginUserRes::userlevel() const {
  // @@protoc_insertion_point(field_get:User.S2CPCLoginUserRes.UserLevel)
  return _internal_userlevel();
}
inline void S2CPCLoginUserRes::set_userlevel(::uint32_t value) {
  _internal_set_userlevel(value);
  // @@protoc_insertion_point(field_set:User.S2CPCLoginUserRes.UserLevel)
}
inline ::uint32_t S2CPCLoginUserRes::_internal_userlevel() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.userlevel_;
}
inline void S2CPCLoginUserRes::_internal_set_userlevel(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.userlevel_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace User


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_LogicPacket_2eproto_2epb_2eh
