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
// source: google/cloud/domains/v1/domains.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_LOGGING_DECORATOR_H

#include "google/cloud/domains/v1/internal/domains_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace domains_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DomainsLogging : public DomainsStub {
 public:
  ~DomainsLogging() override = default;
  DomainsLogging(std::shared_ptr<DomainsStub> child,
                 TracingOptions tracing_options,
                 std::set<std::string> components);

  StatusOr<google::cloud::domains::v1::SearchDomainsResponse> SearchDomains(
      grpc::ClientContext& context,
      google::cloud::domains::v1::SearchDomainsRequest const& request) override;

  StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
  RetrieveRegisterParameters(
      grpc::ClientContext& context,
      google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRegisterDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::RegisterDomainRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
  RetrieveTransferParameters(
      grpc::ClientContext& context,
      google::cloud::domains::v1::RetrieveTransferParametersRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncTransferDomain(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::TransferDomainRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::ListRegistrationsResponse>
  ListRegistrations(grpc::ClientContext& context,
                    google::cloud::domains::v1::ListRegistrationsRequest const&
                        request) override;

  StatusOr<google::cloud::domains::v1::Registration> GetRegistration(
      grpc::ClientContext& context,
      google::cloud::domains::v1::GetRegistrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::UpdateRegistrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncConfigureManagementSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncConfigureDnsSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncConfigureContactSettings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::ExportRegistrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRegistration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::domains::v1::DeleteRegistrationRequest const& request)
      override;

  StatusOr<google::cloud::domains::v1::AuthorizationCode>
  RetrieveAuthorizationCode(
      grpc::ClientContext& context,
      google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
          request) override;

  StatusOr<google::cloud::domains::v1::AuthorizationCode>
  ResetAuthorizationCode(
      grpc::ClientContext& context,
      google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<DomainsStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // DomainsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_INTERNAL_DOMAINS_LOGGING_DECORATOR_H
