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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_DOMAINS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_DOMAINS_CONNECTION_H

#include "google/cloud/domains/v1/domains_connection_idempotency_policy.h"
#include "google/cloud/domains/v1/internal/domains_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/domains/v1/domains.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace domains_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using DomainsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    domains_v1_internal::DomainsRetryTraits>;

using DomainsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        domains_v1_internal::DomainsRetryTraits>;

using DomainsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        domains_v1_internal::DomainsRetryTraits>;

/**
 * The `DomainsConnection` object for `DomainsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DomainsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DomainsClient`.
 *
 * To create a concrete instance, see `MakeDomainsConnection()`.
 *
 * For mocking, see `domains_v1_mocks::MockDomainsConnection`.
 */
class DomainsConnection {
 public:
  virtual ~DomainsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::domains::v1::SearchDomainsResponse>
  SearchDomains(
      google::cloud::domains::v1::SearchDomainsRequest const& request);

  virtual StatusOr<
      google::cloud::domains::v1::RetrieveRegisterParametersResponse>
  RetrieveRegisterParameters(
      google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
          request);

  virtual future<StatusOr<google::cloud::domains::v1::Registration>>
  RegisterDomain(
      google::cloud::domains::v1::RegisterDomainRequest const& request);

  virtual StatusOr<
      google::cloud::domains::v1::RetrieveTransferParametersResponse>
  RetrieveTransferParameters(
      google::cloud::domains::v1::RetrieveTransferParametersRequest const&
          request);

  virtual future<StatusOr<google::cloud::domains::v1::Registration>>
  TransferDomain(
      google::cloud::domains::v1::TransferDomainRequest const& request);

  virtual StreamRange<google::cloud::domains::v1::Registration>
  ListRegistrations(
      google::cloud::domains::v1::ListRegistrationsRequest request);

  virtual StatusOr<google::cloud::domains::v1::Registration> GetRegistration(
      google::cloud::domains::v1::GetRegistrationRequest const& request);

  virtual future<StatusOr<google::cloud::domains::v1::Registration>>
  UpdateRegistration(
      google::cloud::domains::v1::UpdateRegistrationRequest const& request);

  virtual future<StatusOr<google::cloud::domains::v1::Registration>>
  ConfigureManagementSettings(
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request);

  virtual future<StatusOr<google::cloud::domains::v1::Registration>>
  ConfigureDnsSettings(
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request);

  virtual future<StatusOr<google::cloud::domains::v1::Registration>>
  ConfigureContactSettings(
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request);

  virtual future<StatusOr<google::cloud::domains::v1::Registration>>
  ExportRegistration(
      google::cloud::domains::v1::ExportRegistrationRequest const& request);

  virtual future<StatusOr<google::cloud::domains::v1::OperationMetadata>>
  DeleteRegistration(
      google::cloud::domains::v1::DeleteRegistrationRequest const& request);

  virtual StatusOr<google::cloud::domains::v1::AuthorizationCode>
  RetrieveAuthorizationCode(
      google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
          request);

  virtual StatusOr<google::cloud::domains::v1::AuthorizationCode>
  ResetAuthorizationCode(
      google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request);
};

/**
 * A factory function to construct an object of type `DomainsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DomainsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DomainsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::domains_v1::DomainsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DomainsConnection` created by
 * this function.
 */
std::shared_ptr<DomainsConnection> MakeDomainsConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_DOMAINS_CONNECTION_H
