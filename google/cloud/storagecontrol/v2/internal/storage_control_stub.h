// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/storage/control/v2/storage_control.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StorageControlStub {
 public:
  virtual ~StorageControlStub() = 0;

  virtual StatusOr<google::storage::control::v2::Folder> CreateFolder(
      grpc::ClientContext& context,
      google::storage::control::v2::CreateFolderRequest const& request) = 0;

  virtual Status DeleteFolder(
      grpc::ClientContext& context,
      google::storage::control::v2::DeleteFolderRequest const& request) = 0;

  virtual StatusOr<google::storage::control::v2::Folder> GetFolder(
      grpc::ClientContext& context,
      google::storage::control::v2::GetFolderRequest const& request) = 0;

  virtual StatusOr<google::storage::control::v2::ListFoldersResponse>
  ListFolders(
      grpc::ClientContext& context,
      google::storage::control::v2::ListFoldersRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRenameFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::storage::control::v2::RenameFolderRequest const& request) = 0;

  virtual StatusOr<google::storage::control::v2::StorageLayout>
  GetStorageLayout(
      grpc::ClientContext& context,
      google::storage::control::v2::GetStorageLayoutRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultStorageControlStub : public StorageControlStub {
 public:
  DefaultStorageControlStub(
      std::unique_ptr<
          google::storage::control::v2::StorageControl::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::storage::control::v2::Folder> CreateFolder(
      grpc::ClientContext& context,
      google::storage::control::v2::CreateFolderRequest const& request)
      override;

  Status DeleteFolder(grpc::ClientContext& context,
                      google::storage::control::v2::DeleteFolderRequest const&
                          request) override;

  StatusOr<google::storage::control::v2::Folder> GetFolder(
      grpc::ClientContext& context,
      google::storage::control::v2::GetFolderRequest const& request) override;

  StatusOr<google::storage::control::v2::ListFoldersResponse> ListFolders(
      grpc::ClientContext& context,
      google::storage::control::v2::ListFoldersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRenameFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::storage::control::v2::RenameFolderRequest const& request)
      override;

  StatusOr<google::storage::control::v2::StorageLayout> GetStorageLayout(
      grpc::ClientContext& context,
      google::storage::control::v2::GetStorageLayoutRequest const& request)
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
  std::unique_ptr<google::storage::control::v2::StorageControl::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_STUB_H
