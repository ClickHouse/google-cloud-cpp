// Copyright 2021 Google LLC
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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_INTERNAL_BIGQUERY_READ_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_INTERNAL_BIGQUERY_READ_STUB_H

#include "google/cloud/internal/streaming_read_rpc.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/storage/v1/storage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigQueryReadStub {
 public:
  virtual ~BigQueryReadStub() = 0;

  virtual StatusOr<google::cloud::bigquery::storage::v1::ReadSession>
  CreateReadSession(
      grpc::ClientContext& context,
      google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
          request) = 0;

  virtual std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::cloud::bigquery::storage::v1::ReadRowsResponse>>
  ReadRows(
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::bigquery::storage::v1::ReadRowsRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
  SplitReadStream(
      grpc::ClientContext& context,
      google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
          request) = 0;
};

class DefaultBigQueryReadStub : public BigQueryReadStub {
 public:
  explicit DefaultBigQueryReadStub(
      std::unique_ptr<
          google::cloud::bigquery::storage::v1::BigQueryRead::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::bigquery::storage::v1::ReadSession> CreateReadSession(
      grpc::ClientContext& context,
      google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
          request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::cloud::bigquery::storage::v1::ReadRowsResponse>>
  ReadRows(std::shared_ptr<grpc::ClientContext> context, Options const& options,
           google::cloud::bigquery::storage::v1::ReadRowsRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
  SplitReadStream(
      grpc::ClientContext& context,
      google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
          request) override;

 private:
  std::unique_ptr<
      google::cloud::bigquery::storage::v1::BigQueryRead::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_INTERNAL_BIGQUERY_READ_STUB_H
