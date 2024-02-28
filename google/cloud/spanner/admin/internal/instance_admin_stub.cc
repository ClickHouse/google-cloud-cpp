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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/spanner/admin/instance/v1/spanner_instance_admin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminStub::~InstanceAdminStub() = default;

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
DefaultInstanceAdminStub::ListInstanceConfigs(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  google::spanner::admin::instance::v1::ListInstanceConfigsResponse response;
  auto status = grpc_stub_->ListInstanceConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
DefaultInstanceAdminStub::GetInstanceConfig(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  google::spanner::admin::instance::v1::InstanceConfig response;
  auto status = grpc_stub_->GetInstanceConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminStub::AsyncCreateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::instance::v1::
                 CreateInstanceConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstanceConfig(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminStub::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::instance::v1::
                 UpdateInstanceConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstanceConfig(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultInstanceAdminStub::DeleteInstanceConfig(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteInstanceConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
DefaultInstanceAdminStub::ListInstanceConfigOperations(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse
      response;
  auto status =
      grpc_stub_->ListInstanceConfigOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
DefaultInstanceAdminStub::ListInstances(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  google::spanner::admin::instance::v1::ListInstancesResponse response;
  auto status = grpc_stub_->ListInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::instance::v1::ListInstancePartitionsResponse>
DefaultInstanceAdminStub::ListInstancePartitions(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::ListInstancePartitionsRequest const&
        request) {
  google::spanner::admin::instance::v1::ListInstancePartitionsResponse response;
  auto status =
      grpc_stub_->ListInstancePartitions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::instance::v1::Instance>
DefaultInstanceAdminStub::GetInstance(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  google::spanner::admin::instance::v1::Instance response;
  auto status = grpc_stub_->GetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::instance::v1::CreateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::instance::v1::CreateInstanceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::instance::v1::UpdateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::instance::v1::UpdateInstanceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstance(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultInstanceAdminStub::DeleteInstance(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::iam::v1::Policy> DefaultInstanceAdminStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultInstanceAdminStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultInstanceAdminStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::instance::v1::InstancePartition>
DefaultInstanceAdminStub::GetInstancePartition(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::GetInstancePartitionRequest const&
        request) {
  google::spanner::admin::instance::v1::InstancePartition response;
  auto status = grpc_stub_->GetInstancePartition(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminStub::AsyncCreateInstancePartition(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::instance::v1::CreateInstancePartitionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::instance::v1::
                 CreateInstancePartitionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstancePartition(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultInstanceAdminStub::DeleteInstancePartition(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::DeleteInstancePartitionRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteInstancePartition(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminStub::AsyncUpdateInstancePartition(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::instance::v1::UpdateInstancePartitionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::instance::v1::
                 UpdateInstancePartitionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstancePartition(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::spanner::admin::instance::v1::
             ListInstancePartitionOperationsResponse>
DefaultInstanceAdminStub::ListInstancePartitionOperations(
    grpc::ClientContext& context, Options const&,
    google::spanner::admin::instance::v1::
        ListInstancePartitionOperationsRequest const& request) {
  google::spanner::admin::instance::v1::ListInstancePartitionOperationsResponse
      response;
  auto status =
      grpc_stub_->ListInstancePartitionOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultInstanceAdminStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
