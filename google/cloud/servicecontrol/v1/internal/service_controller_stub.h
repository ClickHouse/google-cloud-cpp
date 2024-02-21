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
// source: google/api/servicecontrol/v1/service_controller.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V1_INTERNAL_SERVICE_CONTROLLER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V1_INTERNAL_SERVICE_CONTROLLER_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/api/servicecontrol/v1/service_controller.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicecontrol_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceControllerStub {
 public:
  virtual ~ServiceControllerStub() = 0;

  virtual StatusOr<google::api::servicecontrol::v1::CheckResponse> Check(
      grpc::ClientContext& context,
      google::api::servicecontrol::v1::CheckRequest const& request) = 0;

  virtual StatusOr<google::api::servicecontrol::v1::ReportResponse> Report(
      grpc::ClientContext& context,
      google::api::servicecontrol::v1::ReportRequest const& request) = 0;
};

class DefaultServiceControllerStub : public ServiceControllerStub {
 public:
  explicit DefaultServiceControllerStub(
      std::unique_ptr<
          google::api::servicecontrol::v1::ServiceController::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::api::servicecontrol::v1::CheckResponse> Check(
      grpc::ClientContext& context,
      google::api::servicecontrol::v1::CheckRequest const& request) override;

  StatusOr<google::api::servicecontrol::v1::ReportResponse> Report(
      grpc::ClientContext& context,
      google::api::servicecontrol::v1::ReportRequest const& request) override;

 private:
  std::unique_ptr<
      google::api::servicecontrol::v1::ServiceController::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V1_INTERNAL_SERVICE_CONTROLLER_STUB_H
