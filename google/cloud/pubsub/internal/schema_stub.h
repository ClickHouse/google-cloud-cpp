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
// source: google/pubsub/v1/schema.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_SCHEMA_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_SCHEMA_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/pubsub/v1/schema.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SchemaServiceStub {
 public:
  virtual ~SchemaServiceStub() = 0;

  virtual StatusOr<google::pubsub::v1::Schema> CreateSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::CreateSchemaRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::Schema> GetSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::GetSchemaRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::ListSchemasResponse> ListSchemas(
      grpc::ClientContext& context,
      google::pubsub::v1::ListSchemasRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::ListSchemaRevisionsResponse>
  ListSchemaRevisions(
      grpc::ClientContext& context,
      google::pubsub::v1::ListSchemaRevisionsRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::Schema> CommitSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::CommitSchemaRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::Schema> RollbackSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::RollbackSchemaRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::Schema> DeleteSchemaRevision(
      grpc::ClientContext& context,
      google::pubsub::v1::DeleteSchemaRevisionRequest const& request) = 0;

  virtual Status DeleteSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::DeleteSchemaRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::ValidateSchemaResponse> ValidateSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::ValidateSchemaRequest const& request) = 0;

  virtual StatusOr<google::pubsub::v1::ValidateMessageResponse> ValidateMessage(
      grpc::ClientContext& context,
      google::pubsub::v1::ValidateMessageRequest const& request) = 0;
};

class DefaultSchemaServiceStub : public SchemaServiceStub {
 public:
  explicit DefaultSchemaServiceStub(
      std::unique_ptr<google::pubsub::v1::SchemaService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::pubsub::v1::Schema> CreateSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::CreateSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::Schema> GetSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::GetSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::ListSchemasResponse> ListSchemas(
      grpc::ClientContext& context,
      google::pubsub::v1::ListSchemasRequest const& request) override;

  StatusOr<google::pubsub::v1::ListSchemaRevisionsResponse> ListSchemaRevisions(
      grpc::ClientContext& context,
      google::pubsub::v1::ListSchemaRevisionsRequest const& request) override;

  StatusOr<google::pubsub::v1::Schema> CommitSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::CommitSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::Schema> RollbackSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::RollbackSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::Schema> DeleteSchemaRevision(
      grpc::ClientContext& context,
      google::pubsub::v1::DeleteSchemaRevisionRequest const& request) override;

  Status DeleteSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::DeleteSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::ValidateSchemaResponse> ValidateSchema(
      grpc::ClientContext& context,
      google::pubsub::v1::ValidateSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::ValidateMessageResponse> ValidateMessage(
      grpc::ClientContext& context,
      google::pubsub::v1::ValidateMessageRequest const& request) override;

 private:
  std::unique_ptr<google::pubsub::v1::SchemaService::StubInterface> grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_SCHEMA_STUB_H
