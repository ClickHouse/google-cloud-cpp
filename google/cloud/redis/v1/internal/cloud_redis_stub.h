// Copyright 2022 Google LLC
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
// source: google/cloud/redis/v1/cloud_redis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/redis/v1/cloud_redis.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace redis_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudRedisStub {
 public:
  virtual ~CloudRedisStub() = 0;

  virtual StatusOr<google::cloud::redis::v1::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context,
      google::cloud::redis::v1::ListInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::redis::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::redis::v1::GetInstanceRequest const& request) = 0;

  virtual StatusOr<google::cloud::redis::v1::InstanceAuthString>
  GetInstanceAuthString(
      grpc::ClientContext& context,
      google::cloud::redis::v1::GetInstanceAuthStringRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::CreateInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::UpdateInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::UpgradeInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncImportInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::ImportInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncExportInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::ExportInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncFailoverInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::FailoverInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::DeleteInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRescheduleMaintenance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::RescheduleMaintenanceRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultCloudRedisStub : public CloudRedisStub {
 public:
  DefaultCloudRedisStub(
      std::unique_ptr<google::cloud::redis::v1::CloudRedis::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::redis::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context,
      google::cloud::redis::v1::ListInstancesRequest const& request) override;

  StatusOr<google::cloud::redis::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::redis::v1::GetInstanceRequest const& request) override;

  StatusOr<google::cloud::redis::v1::InstanceAuthString> GetInstanceAuthString(
      grpc::ClientContext& context,
      google::cloud::redis::v1::GetInstanceAuthStringRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::CreateInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::UpdateInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::UpgradeInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::ImportInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::ExportInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncFailoverInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::FailoverInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::DeleteInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRescheduleMaintenance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::v1::RescheduleMaintenanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::redis::v1::CloudRedis::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_STUB_H
