// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/datastore/v1/datastore.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_V1_INTERNAL_DATASTORE_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_V1_INTERNAL_DATASTORE_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/datastore/v1/datastore.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatastoreStub {
 public:
  virtual ~DatastoreStub() = 0;

  virtual StatusOr<google::datastore::v1::LookupResponse> Lookup(
      grpc::ClientContext& context,
      google::datastore::v1::LookupRequest const& request) = 0;

  virtual StatusOr<google::datastore::v1::RunQueryResponse> RunQuery(
      grpc::ClientContext& context,
      google::datastore::v1::RunQueryRequest const& request) = 0;

  virtual StatusOr<google::datastore::v1::RunAggregationQueryResponse>
  RunAggregationQuery(
      grpc::ClientContext& context,
      google::datastore::v1::RunAggregationQueryRequest const& request) = 0;

  virtual StatusOr<google::datastore::v1::BeginTransactionResponse>
  BeginTransaction(
      grpc::ClientContext& context,
      google::datastore::v1::BeginTransactionRequest const& request) = 0;

  virtual StatusOr<google::datastore::v1::CommitResponse> Commit(
      grpc::ClientContext& context,
      google::datastore::v1::CommitRequest const& request) = 0;

  virtual StatusOr<google::datastore::v1::RollbackResponse> Rollback(
      grpc::ClientContext& context,
      google::datastore::v1::RollbackRequest const& request) = 0;

  virtual StatusOr<google::datastore::v1::AllocateIdsResponse> AllocateIds(
      grpc::ClientContext& context,
      google::datastore::v1::AllocateIdsRequest const& request) = 0;

  virtual StatusOr<google::datastore::v1::ReserveIdsResponse> ReserveIds(
      grpc::ClientContext& context,
      google::datastore::v1::ReserveIdsRequest const& request) = 0;
};

class DefaultDatastoreStub : public DatastoreStub {
 public:
  explicit DefaultDatastoreStub(
      std::unique_ptr<google::datastore::v1::Datastore::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::datastore::v1::LookupResponse> Lookup(
      grpc::ClientContext& context,
      google::datastore::v1::LookupRequest const& request) override;

  StatusOr<google::datastore::v1::RunQueryResponse> RunQuery(
      grpc::ClientContext& context,
      google::datastore::v1::RunQueryRequest const& request) override;

  StatusOr<google::datastore::v1::RunAggregationQueryResponse>
  RunAggregationQuery(grpc::ClientContext& context,
                      google::datastore::v1::RunAggregationQueryRequest const&
                          request) override;

  StatusOr<google::datastore::v1::BeginTransactionResponse> BeginTransaction(
      grpc::ClientContext& context,
      google::datastore::v1::BeginTransactionRequest const& request) override;

  StatusOr<google::datastore::v1::CommitResponse> Commit(
      grpc::ClientContext& context,
      google::datastore::v1::CommitRequest const& request) override;

  StatusOr<google::datastore::v1::RollbackResponse> Rollback(
      grpc::ClientContext& context,
      google::datastore::v1::RollbackRequest const& request) override;

  StatusOr<google::datastore::v1::AllocateIdsResponse> AllocateIds(
      grpc::ClientContext& context,
      google::datastore::v1::AllocateIdsRequest const& request) override;

  StatusOr<google::datastore::v1::ReserveIdsResponse> ReserveIds(
      grpc::ClientContext& context,
      google::datastore::v1::ReserveIdsRequest const& request) override;

 private:
  std::unique_ptr<google::datastore::v1::Datastore::StubInterface> grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_V1_INTERNAL_DATASTORE_STUB_H
