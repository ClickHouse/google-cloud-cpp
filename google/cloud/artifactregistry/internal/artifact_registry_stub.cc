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
// source: google/devtools/artifactregistry/v1/service.proto

#include "google/cloud/artifactregistry/internal/artifact_registry_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/devtools/artifactregistry/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ArtifactRegistryStub::~ArtifactRegistryStub() = default;

StatusOr<google::devtools::artifactregistry::v1::ListDockerImagesResponse>
DefaultArtifactRegistryStub::ListDockerImages(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListDockerImagesRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListDockerImagesResponse response;
  auto status =
      grpc_stub_->ListDockerImages(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::DockerImage>
DefaultArtifactRegistryStub::GetDockerImage(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetDockerImageRequest const&
        request) {
  google::devtools::artifactregistry::v1::DockerImage response;
  auto status = grpc_stub_->GetDockerImage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::ListMavenArtifactsResponse>
DefaultArtifactRegistryStub::ListMavenArtifacts(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListMavenArtifactsRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListMavenArtifactsResponse response;
  auto status =
      grpc_stub_->ListMavenArtifacts(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::MavenArtifact>
DefaultArtifactRegistryStub::GetMavenArtifact(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
        request) {
  google::devtools::artifactregistry::v1::MavenArtifact response;
  auto status =
      grpc_stub_->GetMavenArtifact(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::ListNpmPackagesResponse>
DefaultArtifactRegistryStub::ListNpmPackages(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListNpmPackagesRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListNpmPackagesResponse response;
  auto status =
      grpc_stub_->ListNpmPackages(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::NpmPackage>
DefaultArtifactRegistryStub::GetNpmPackage(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
        request) {
  google::devtools::artifactregistry::v1::NpmPackage response;
  auto status = grpc_stub_->GetNpmPackage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::ListPythonPackagesResponse>
DefaultArtifactRegistryStub::ListPythonPackages(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListPythonPackagesRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListPythonPackagesResponse response;
  auto status =
      grpc_stub_->ListPythonPackages(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::PythonPackage>
DefaultArtifactRegistryStub::GetPythonPackage(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
        request) {
  google::devtools::artifactregistry::v1::PythonPackage response;
  auto status =
      grpc_stub_->GetPythonPackage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultArtifactRegistryStub::AsyncImportAptArtifacts(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::devtools::artifactregistry::v1::
                 ImportAptArtifactsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportAptArtifacts(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultArtifactRegistryStub::AsyncImportYumArtifacts(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::devtools::artifactregistry::v1::
                 ImportYumArtifactsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportYumArtifacts(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::artifactregistry::v1::ListRepositoriesResponse>
DefaultArtifactRegistryStub::ListRepositories(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListRepositoriesRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListRepositoriesResponse response;
  auto status =
      grpc_stub_->ListRepositories(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
DefaultArtifactRegistryStub::GetRepository(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&
        request) {
  google::devtools::artifactregistry::v1::Repository response;
  auto status = grpc_stub_->GetRepository(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultArtifactRegistryStub::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](
          grpc::ClientContext* context,
          google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRepository(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
DefaultArtifactRegistryStub::UpdateRepository(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
        request) {
  google::devtools::artifactregistry::v1::Repository response;
  auto status =
      grpc_stub_->UpdateRepository(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultArtifactRegistryStub::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](
          grpc::ClientContext* context,
          google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRepository(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::artifactregistry::v1::ListPackagesResponse>
DefaultArtifactRegistryStub::ListPackages(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListPackagesRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListPackagesResponse response;
  auto status = grpc_stub_->ListPackages(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::Package>
DefaultArtifactRegistryStub::GetPackage(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetPackageRequest const& request) {
  google::devtools::artifactregistry::v1::Package response;
  auto status = grpc_stub_->GetPackage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultArtifactRegistryStub::AsyncDeletePackage(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeletePackageRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::devtools::artifactregistry::v1::DeletePackageRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeletePackage(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::artifactregistry::v1::ListVersionsResponse>
DefaultArtifactRegistryStub::ListVersions(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListVersionsRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListVersionsResponse response;
  auto status = grpc_stub_->ListVersions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::Version>
DefaultArtifactRegistryStub::GetVersion(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetVersionRequest const& request) {
  google::devtools::artifactregistry::v1::Version response;
  auto status = grpc_stub_->GetVersion(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultArtifactRegistryStub::AsyncDeleteVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeleteVersionRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::devtools::artifactregistry::v1::DeleteVersionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteVersion(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::artifactregistry::v1::ListFilesResponse>
DefaultArtifactRegistryStub::ListFiles(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListFilesRequest const& request) {
  google::devtools::artifactregistry::v1::ListFilesResponse response;
  auto status = grpc_stub_->ListFiles(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::File>
DefaultArtifactRegistryStub::GetFile(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetFileRequest const& request) {
  google::devtools::artifactregistry::v1::File response;
  auto status = grpc_stub_->GetFile(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::ListTagsResponse>
DefaultArtifactRegistryStub::ListTags(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListTagsRequest const& request) {
  google::devtools::artifactregistry::v1::ListTagsResponse response;
  auto status = grpc_stub_->ListTags(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
DefaultArtifactRegistryStub::GetTag(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetTagRequest const& request) {
  google::devtools::artifactregistry::v1::Tag response;
  auto status = grpc_stub_->GetTag(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
DefaultArtifactRegistryStub::CreateTag(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::CreateTagRequest const& request) {
  google::devtools::artifactregistry::v1::Tag response;
  auto status = grpc_stub_->CreateTag(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
DefaultArtifactRegistryStub::UpdateTag(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::UpdateTagRequest const& request) {
  google::devtools::artifactregistry::v1::Tag response;
  auto status = grpc_stub_->UpdateTag(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultArtifactRegistryStub::DeleteTag(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::DeleteTagRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTag(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::iam::v1::Policy> DefaultArtifactRegistryStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultArtifactRegistryStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultArtifactRegistryStub::TestIamPermissions(
    grpc::ClientContext& client_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      grpc_stub_->TestIamPermissions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
DefaultArtifactRegistryStub::GetProjectSettings(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
        request) {
  google::devtools::artifactregistry::v1::ProjectSettings response;
  auto status =
      grpc_stub_->GetProjectSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
DefaultArtifactRegistryStub::UpdateProjectSettings(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::UpdateProjectSettingsRequest const&
        request) {
  google::devtools::artifactregistry::v1::ProjectSettings response;
  auto status =
      grpc_stub_->UpdateProjectSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
DefaultArtifactRegistryStub::GetVPCSCConfig(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
        request) {
  google::devtools::artifactregistry::v1::VPCSCConfig response;
  auto status = grpc_stub_->GetVPCSCConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
DefaultArtifactRegistryStub::UpdateVPCSCConfig(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&
        request) {
  google::devtools::artifactregistry::v1::VPCSCConfig response;
  auto status =
      grpc_stub_->UpdateVPCSCConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultArtifactRegistryStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultArtifactRegistryStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
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
}  // namespace artifactregistry_internal
}  // namespace cloud
}  // namespace google
