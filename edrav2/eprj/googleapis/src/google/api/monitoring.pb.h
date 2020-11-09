// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/monitoring.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fmonitoring_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fmonitoring_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fmonitoring_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fmonitoring_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fmonitoring_2eproto;
namespace google {
namespace api {
class Monitoring;
class MonitoringDefaultTypeInternal;
extern MonitoringDefaultTypeInternal _Monitoring_default_instance_;
class Monitoring_MonitoringDestination;
class Monitoring_MonitoringDestinationDefaultTypeInternal;
extern Monitoring_MonitoringDestinationDefaultTypeInternal _Monitoring_MonitoringDestination_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Monitoring* Arena::CreateMaybeMessage<::google::api::Monitoring>(Arena*);
template<> ::google::api::Monitoring_MonitoringDestination* Arena::CreateMaybeMessage<::google::api::Monitoring_MonitoringDestination>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class Monitoring_MonitoringDestination :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Monitoring.MonitoringDestination) */ {
 public:
  Monitoring_MonitoringDestination();
  virtual ~Monitoring_MonitoringDestination();

  Monitoring_MonitoringDestination(const Monitoring_MonitoringDestination& from);
  Monitoring_MonitoringDestination(Monitoring_MonitoringDestination&& from) noexcept
    : Monitoring_MonitoringDestination() {
    *this = ::std::move(from);
  }

  inline Monitoring_MonitoringDestination& operator=(const Monitoring_MonitoringDestination& from) {
    CopyFrom(from);
    return *this;
  }
  inline Monitoring_MonitoringDestination& operator=(Monitoring_MonitoringDestination&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Monitoring_MonitoringDestination& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Monitoring_MonitoringDestination* internal_default_instance() {
    return reinterpret_cast<const Monitoring_MonitoringDestination*>(
               &_Monitoring_MonitoringDestination_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Monitoring_MonitoringDestination& a, Monitoring_MonitoringDestination& b) {
    a.Swap(&b);
  }
  inline void Swap(Monitoring_MonitoringDestination* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Monitoring_MonitoringDestination* New() const final {
    return CreateMaybeMessage<Monitoring_MonitoringDestination>(nullptr);
  }

  Monitoring_MonitoringDestination* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Monitoring_MonitoringDestination>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Monitoring_MonitoringDestination& from);
  void MergeFrom(const Monitoring_MonitoringDestination& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Monitoring_MonitoringDestination* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Monitoring.MonitoringDestination";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2fmonitoring_2eproto);
    return ::descriptor_table_google_2fapi_2fmonitoring_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMetricsFieldNumber = 2,
    kMonitoredResourceFieldNumber = 1,
  };
  // repeated string metrics = 2;
  int metrics_size() const;
  private:
  int _internal_metrics_size() const;
  public:
  void clear_metrics();
  const std::string& metrics(int index) const;
  std::string* mutable_metrics(int index);
  void set_metrics(int index, const std::string& value);
  void set_metrics(int index, std::string&& value);
  void set_metrics(int index, const char* value);
  void set_metrics(int index, const char* value, size_t size);
  std::string* add_metrics();
  void add_metrics(const std::string& value);
  void add_metrics(std::string&& value);
  void add_metrics(const char* value);
  void add_metrics(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& metrics() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_metrics();
  private:
  const std::string& _internal_metrics(int index) const;
  std::string* _internal_add_metrics();
  public:

  // string monitored_resource = 1;
  void clear_monitored_resource();
  const std::string& monitored_resource() const;
  void set_monitored_resource(const std::string& value);
  void set_monitored_resource(std::string&& value);
  void set_monitored_resource(const char* value);
  void set_monitored_resource(const char* value, size_t size);
  std::string* mutable_monitored_resource();
  std::string* release_monitored_resource();
  void set_allocated_monitored_resource(std::string* monitored_resource);
  private:
  const std::string& _internal_monitored_resource() const;
  void _internal_set_monitored_resource(const std::string& value);
  std::string* _internal_mutable_monitored_resource();
  public:

  // @@protoc_insertion_point(class_scope:google.api.Monitoring.MonitoringDestination)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> metrics_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr monitored_resource_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fmonitoring_2eproto;
};
// -------------------------------------------------------------------

class Monitoring :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Monitoring) */ {
 public:
  Monitoring();
  virtual ~Monitoring();

  Monitoring(const Monitoring& from);
  Monitoring(Monitoring&& from) noexcept
    : Monitoring() {
    *this = ::std::move(from);
  }

  inline Monitoring& operator=(const Monitoring& from) {
    CopyFrom(from);
    return *this;
  }
  inline Monitoring& operator=(Monitoring&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Monitoring& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Monitoring* internal_default_instance() {
    return reinterpret_cast<const Monitoring*>(
               &_Monitoring_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Monitoring& a, Monitoring& b) {
    a.Swap(&b);
  }
  inline void Swap(Monitoring* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Monitoring* New() const final {
    return CreateMaybeMessage<Monitoring>(nullptr);
  }

  Monitoring* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Monitoring>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Monitoring& from);
  void MergeFrom(const Monitoring& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Monitoring* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Monitoring";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2fmonitoring_2eproto);
    return ::descriptor_table_google_2fapi_2fmonitoring_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Monitoring_MonitoringDestination MonitoringDestination;

  // accessors -------------------------------------------------------

  enum : int {
    kProducerDestinationsFieldNumber = 1,
    kConsumerDestinationsFieldNumber = 2,
  };
  // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
  int producer_destinations_size() const;
  private:
  int _internal_producer_destinations_size() const;
  public:
  void clear_producer_destinations();
  ::google::api::Monitoring_MonitoringDestination* mutable_producer_destinations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
      mutable_producer_destinations();
  private:
  const ::google::api::Monitoring_MonitoringDestination& _internal_producer_destinations(int index) const;
  ::google::api::Monitoring_MonitoringDestination* _internal_add_producer_destinations();
  public:
  const ::google::api::Monitoring_MonitoringDestination& producer_destinations(int index) const;
  ::google::api::Monitoring_MonitoringDestination* add_producer_destinations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
      producer_destinations() const;

  // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
  int consumer_destinations_size() const;
  private:
  int _internal_consumer_destinations_size() const;
  public:
  void clear_consumer_destinations();
  ::google::api::Monitoring_MonitoringDestination* mutable_consumer_destinations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
      mutable_consumer_destinations();
  private:
  const ::google::api::Monitoring_MonitoringDestination& _internal_consumer_destinations(int index) const;
  ::google::api::Monitoring_MonitoringDestination* _internal_add_consumer_destinations();
  public:
  const ::google::api::Monitoring_MonitoringDestination& consumer_destinations(int index) const;
  ::google::api::Monitoring_MonitoringDestination* add_consumer_destinations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
      consumer_destinations() const;

  // @@protoc_insertion_point(class_scope:google.api.Monitoring)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination > producer_destinations_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination > consumer_destinations_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fmonitoring_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Monitoring_MonitoringDestination

// string monitored_resource = 1;
inline void Monitoring_MonitoringDestination::clear_monitored_resource() {
  monitored_resource_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Monitoring_MonitoringDestination::monitored_resource() const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.MonitoringDestination.monitored_resource)
  return _internal_monitored_resource();
}
inline void Monitoring_MonitoringDestination::set_monitored_resource(const std::string& value) {
  _internal_set_monitored_resource(value);
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
inline std::string* Monitoring_MonitoringDestination::mutable_monitored_resource() {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.MonitoringDestination.monitored_resource)
  return _internal_mutable_monitored_resource();
}
inline const std::string& Monitoring_MonitoringDestination::_internal_monitored_resource() const {
  return monitored_resource_.GetNoArena();
}
inline void Monitoring_MonitoringDestination::_internal_set_monitored_resource(const std::string& value) {
  
  monitored_resource_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Monitoring_MonitoringDestination::set_monitored_resource(std::string&& value) {
  
  monitored_resource_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
inline void Monitoring_MonitoringDestination::set_monitored_resource(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  monitored_resource_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
inline void Monitoring_MonitoringDestination::set_monitored_resource(const char* value, size_t size) {
  
  monitored_resource_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
inline std::string* Monitoring_MonitoringDestination::_internal_mutable_monitored_resource() {
  
  return monitored_resource_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Monitoring_MonitoringDestination::release_monitored_resource() {
  // @@protoc_insertion_point(field_release:google.api.Monitoring.MonitoringDestination.monitored_resource)
  
  return monitored_resource_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Monitoring_MonitoringDestination::set_allocated_monitored_resource(std::string* monitored_resource) {
  if (monitored_resource != nullptr) {
    
  } else {
    
  }
  monitored_resource_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), monitored_resource);
  // @@protoc_insertion_point(field_set_allocated:google.api.Monitoring.MonitoringDestination.monitored_resource)
}

// repeated string metrics = 2;
inline int Monitoring_MonitoringDestination::_internal_metrics_size() const {
  return metrics_.size();
}
inline int Monitoring_MonitoringDestination::metrics_size() const {
  return _internal_metrics_size();
}
inline void Monitoring_MonitoringDestination::clear_metrics() {
  metrics_.Clear();
}
inline std::string* Monitoring_MonitoringDestination::add_metrics() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Monitoring.MonitoringDestination.metrics)
  return _internal_add_metrics();
}
inline const std::string& Monitoring_MonitoringDestination::_internal_metrics(int index) const {
  return metrics_.Get(index);
}
inline const std::string& Monitoring_MonitoringDestination::metrics(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.MonitoringDestination.metrics)
  return _internal_metrics(index);
}
inline std::string* Monitoring_MonitoringDestination::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_.Mutable(index);
}
inline void Monitoring_MonitoringDestination::set_metrics(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.metrics)
  metrics_.Mutable(index)->assign(value);
}
inline void Monitoring_MonitoringDestination::set_metrics(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.metrics)
  metrics_.Mutable(index)->assign(std::move(value));
}
inline void Monitoring_MonitoringDestination::set_metrics(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  metrics_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Monitoring.MonitoringDestination.metrics)
}
inline void Monitoring_MonitoringDestination::set_metrics(int index, const char* value, size_t size) {
  metrics_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Monitoring.MonitoringDestination.metrics)
}
inline std::string* Monitoring_MonitoringDestination::_internal_add_metrics() {
  return metrics_.Add();
}
inline void Monitoring_MonitoringDestination::add_metrics(const std::string& value) {
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Monitoring.MonitoringDestination.metrics)
}
inline void Monitoring_MonitoringDestination::add_metrics(std::string&& value) {
  metrics_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Monitoring.MonitoringDestination.metrics)
}
inline void Monitoring_MonitoringDestination::add_metrics(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Monitoring.MonitoringDestination.metrics)
}
inline void Monitoring_MonitoringDestination::add_metrics(const char* value, size_t size) {
  metrics_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Monitoring.MonitoringDestination.metrics)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Monitoring_MonitoringDestination::metrics() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Monitoring_MonitoringDestination::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.MonitoringDestination.metrics)
  return &metrics_;
}

// -------------------------------------------------------------------

// Monitoring

// repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
inline int Monitoring::_internal_producer_destinations_size() const {
  return producer_destinations_.size();
}
inline int Monitoring::producer_destinations_size() const {
  return _internal_producer_destinations_size();
}
inline void Monitoring::clear_producer_destinations() {
  producer_destinations_.Clear();
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::mutable_producer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.producer_destinations)
  return producer_destinations_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
Monitoring::mutable_producer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.producer_destinations)
  return &producer_destinations_;
}
inline const ::google::api::Monitoring_MonitoringDestination& Monitoring::_internal_producer_destinations(int index) const {
  return producer_destinations_.Get(index);
}
inline const ::google::api::Monitoring_MonitoringDestination& Monitoring::producer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.producer_destinations)
  return _internal_producer_destinations(index);
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::_internal_add_producer_destinations() {
  return producer_destinations_.Add();
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::add_producer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Monitoring.producer_destinations)
  return _internal_add_producer_destinations();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
Monitoring::producer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.producer_destinations)
  return producer_destinations_;
}

// repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
inline int Monitoring::_internal_consumer_destinations_size() const {
  return consumer_destinations_.size();
}
inline int Monitoring::consumer_destinations_size() const {
  return _internal_consumer_destinations_size();
}
inline void Monitoring::clear_consumer_destinations() {
  consumer_destinations_.Clear();
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::mutable_consumer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
Monitoring::mutable_consumer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.consumer_destinations)
  return &consumer_destinations_;
}
inline const ::google::api::Monitoring_MonitoringDestination& Monitoring::_internal_consumer_destinations(int index) const {
  return consumer_destinations_.Get(index);
}
inline const ::google::api::Monitoring_MonitoringDestination& Monitoring::consumer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.consumer_destinations)
  return _internal_consumer_destinations(index);
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::_internal_add_consumer_destinations() {
  return consumer_destinations_.Add();
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::add_consumer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Monitoring.consumer_destinations)
  return _internal_add_consumer_destinations();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
Monitoring::consumer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fmonitoring_2eproto