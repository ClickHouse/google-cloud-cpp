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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_INTERNAL_ARTIFACT_REGISTRY_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_INTERNAL_ARTIFACT_REGISTRY_TRACING_STUB_H

#include "google/cloud/artifactregistry/internal/artifact_registry_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace artifactregistry_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ArtifactRegistryTracingStub : public ArtifactRegistryStub {
 public:
  ~ArtifactRegistryTracingStub() override = default;

  explicit ArtifactRegistryTracingStub(
      std::shared_ptr<ArtifactRegistryStub> child);

  StatusOr<google::devtools::artifactregistry::v1::ListDockerImagesResponse>
  ListDockerImages(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListDockerImagesRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::DockerImage> GetDockerImage(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetDockerImageRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ListMavenArtifactsResponse>
  ListMavenArtifacts(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListMavenArtifactsRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::MavenArtifact>
  GetMavenArtifact(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ListNpmPackagesResponse>
  ListNpmPackages(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListNpmPackagesRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::NpmPackage> GetNpmPackage(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ListPythonPackagesResponse>
  ListPythonPackages(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListPythonPackagesRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::PythonPackage>
  GetPythonPackage(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportAptArtifacts(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportYumArtifacts(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListRepositoriesRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::Repository> GetRepository(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetRepositoryRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::Repository> UpdateRepository(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ListPackagesResponse>
  ListPackages(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListPackagesRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::Package> GetPackage(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetPackageRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePackage(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::artifactregistry::v1::DeletePackageRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ListVersionsResponse>
  ListVersions(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListVersionsRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::Version> GetVersion(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetVersionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteVersion(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::artifactregistry::v1::DeleteVersionRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ListFilesResponse> ListFiles(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListFilesRequest const& request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::File> GetFile(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetFileRequest const& request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::ListTagsResponse> ListTags(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::ListTagsRequest const& request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Tag> GetTag(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetTagRequest const& request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Tag> CreateTag(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::CreateTagRequest const& request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Tag> UpdateTag(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::UpdateTagRequest const& request)
      override;

  Status DeleteTag(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::DeleteTagRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
  GetProjectSettings(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
  UpdateProjectSettings(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::
          UpdateProjectSettingsRequest const& request) override;

  StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig> GetVPCSCConfig(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
  UpdateVPCSCConfig(
      grpc::ClientContext& context,
      google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ArtifactRegistryStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_INTERNAL_ARTIFACT_REGISTRY_TRACING_STUB_H
