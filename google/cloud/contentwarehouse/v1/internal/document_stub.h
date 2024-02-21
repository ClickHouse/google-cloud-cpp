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
// source: google/cloud/contentwarehouse/v1/document_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/contentwarehouse/v1/document_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentServiceStub {
 public:
  virtual ~DocumentServiceStub() = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
  CreateDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::CreateDocumentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::Document> GetDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::GetDocumentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
  UpdateDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::UpdateDocumentRequest const&
          request) = 0;

  virtual Status DeleteDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::DeleteDocumentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::SearchDocumentsResponse>
  SearchDocuments(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::SearchDocumentsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::Document> LockDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::LockDocumentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse>
  FetchAcl(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::FetchAclRequest const& request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse> SetAcl(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::SetAclRequest const& request) = 0;
};

class DefaultDocumentServiceStub : public DocumentServiceStub {
 public:
  explicit DefaultDocumentServiceStub(
      std::unique_ptr<
          google::cloud::contentwarehouse::v1::DocumentService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
  CreateDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::CreateDocumentRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::Document> GetDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::GetDocumentRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
  UpdateDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::UpdateDocumentRequest const& request)
      override;

  Status DeleteDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::DeleteDocumentRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::SearchDocumentsResponse>
  SearchDocuments(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::SearchDocumentsRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::Document> LockDocument(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::LockDocumentRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse> FetchAcl(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::FetchAclRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse> SetAcl(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::SetAclRequest const& request)
      override;

 private:
  std::unique_ptr<
      google::cloud::contentwarehouse::v1::DocumentService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_STUB_H
