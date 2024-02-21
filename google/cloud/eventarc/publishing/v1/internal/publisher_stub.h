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
// source: google/cloud/eventarc/publishing/v1/publisher.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_PUBLISHING_V1_INTERNAL_PUBLISHER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_PUBLISHING_V1_INTERNAL_PUBLISHER_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/eventarc/publishing/v1/publisher.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_publishing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublisherStub {
 public:
  virtual ~PublisherStub() = 0;

  virtual StatusOr<google::cloud::eventarc::publishing::v1::
                       PublishChannelConnectionEventsResponse>
  PublishChannelConnectionEvents(
      grpc::ClientContext& context,
      google::cloud::eventarc::publishing::v1::
          PublishChannelConnectionEventsRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::eventarc::publishing::v1::PublishEventsResponse>
  PublishEvents(
      grpc::ClientContext& context,
      google::cloud::eventarc::publishing::v1::PublishEventsRequest const&
          request) = 0;
};

class DefaultPublisherStub : public PublisherStub {
 public:
  explicit DefaultPublisherStub(
      std::unique_ptr<
          google::cloud::eventarc::publishing::v1::Publisher::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::eventarc::publishing::v1::
               PublishChannelConnectionEventsResponse>
  PublishChannelConnectionEvents(
      grpc::ClientContext& context,
      google::cloud::eventarc::publishing::v1::
          PublishChannelConnectionEventsRequest const& request) override;

  StatusOr<google::cloud::eventarc::publishing::v1::PublishEventsResponse>
  PublishEvents(
      grpc::ClientContext& context,
      google::cloud::eventarc::publishing::v1::PublishEventsRequest const&
          request) override;

 private:
  std::unique_ptr<
      google::cloud::eventarc::publishing::v1::Publisher::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_publishing_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_PUBLISHING_V1_INTERNAL_PUBLISHER_STUB_H
