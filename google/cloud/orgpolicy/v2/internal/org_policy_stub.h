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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_V2_INTERNAL_ORG_POLICY_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_V2_INTERNAL_ORG_POLICY_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/orgpolicy/v2/orgpolicy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace orgpolicy_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class OrgPolicyStub {
 public:
  virtual ~OrgPolicyStub() = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::ListConstraintsResponse>
  ListConstraints(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::ListConstraintsRequest const& request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::ListPoliciesResponse>
  ListPolicies(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::ListPoliciesRequest const& request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::Policy> GetPolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::GetPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::Policy> GetEffectivePolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::Policy> CreatePolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::Policy> UpdatePolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) = 0;

  virtual Status DeletePolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
  CreateCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::CreateCustomConstraintRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
  UpdateCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::UpdateCustomConstraintRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
  GetCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::GetCustomConstraintRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::orgpolicy::v2::ListCustomConstraintsResponse>
  ListCustomConstraints(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::ListCustomConstraintsRequest const&
          request) = 0;

  virtual Status DeleteCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::DeleteCustomConstraintRequest const&
          request) = 0;
};

class DefaultOrgPolicyStub : public OrgPolicyStub {
 public:
  explicit DefaultOrgPolicyStub(
      std::unique_ptr<google::cloud::orgpolicy::v2::OrgPolicy::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::orgpolicy::v2::ListConstraintsResponse>
  ListConstraints(grpc::ClientContext& context,
                  google::cloud::orgpolicy::v2::ListConstraintsRequest const&
                      request) override;

  StatusOr<google::cloud::orgpolicy::v2::ListPoliciesResponse> ListPolicies(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::ListPoliciesRequest const& request)
      override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> GetPolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::GetPolicyRequest const& request) override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> GetEffectivePolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request)
      override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> CreatePolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::CreatePolicyRequest const& request)
      override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> UpdatePolicy(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request)
      override;

  Status DeletePolicy(grpc::ClientContext& context,
                      google::cloud::orgpolicy::v2::DeletePolicyRequest const&
                          request) override;

  StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
  CreateCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::CreateCustomConstraintRequest const&
          request) override;

  StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
  UpdateCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::UpdateCustomConstraintRequest const&
          request) override;

  StatusOr<google::cloud::orgpolicy::v2::CustomConstraint> GetCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::GetCustomConstraintRequest const& request)
      override;

  StatusOr<google::cloud::orgpolicy::v2::ListCustomConstraintsResponse>
  ListCustomConstraints(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::ListCustomConstraintsRequest const& request)
      override;

  Status DeleteCustomConstraint(
      grpc::ClientContext& context,
      google::cloud::orgpolicy::v2::DeleteCustomConstraintRequest const&
          request) override;

 private:
  std::unique_ptr<google::cloud::orgpolicy::v2::OrgPolicy::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_V2_INTERNAL_ORG_POLICY_STUB_H
