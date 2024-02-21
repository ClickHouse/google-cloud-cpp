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
// source: google/cloud/dialogflow/cx/v3/session.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSIONS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSIONS_STUB_H

#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/streaming_read_rpc.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/session.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SessionsStub {
 public:
  virtual ~SessionsStub() = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
  DetectIntent(grpc::ClientContext& context,
               google::cloud::dialogflow::cx::v3::DetectIntentRequest const&
                   request) = 0;

  virtual std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::cloud::dialogflow::cx::v3::DetectIntentResponse>>
  ServerStreamingDetectIntent(
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::cx::v3::DetectIntentRequest const&
          request) = 0;

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>
  AsyncStreamingDetectIntent(google::cloud::CompletionQueue const& cq,
                             std::shared_ptr<grpc::ClientContext> context) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse>
  MatchIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
  FulfillIntent(grpc::ClientContext& context,
                google::cloud::dialogflow::cx::v3::FulfillIntentRequest const&
                    request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::AnswerFeedback>
  SubmitAnswerFeedback(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::SubmitAnswerFeedbackRequest const&
          request) = 0;
};

class DefaultSessionsStub : public SessionsStub {
 public:
  explicit DefaultSessionsStub(
      std::unique_ptr<
          google::cloud::dialogflow::cx::v3::Sessions::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
  DetectIntent(grpc::ClientContext& context,
               google::cloud::dialogflow::cx::v3::DetectIntentRequest const&
                   request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::cloud::dialogflow::cx::v3::DetectIntentResponse>>
  ServerStreamingDetectIntent(
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request)
      override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>
  AsyncStreamingDetectIntent(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context) override;

  StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse> MatchIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
  FulfillIntent(grpc::ClientContext& context,
                google::cloud::dialogflow::cx::v3::FulfillIntentRequest const&
                    request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::AnswerFeedback>
  SubmitAnswerFeedback(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::SubmitAnswerFeedbackRequest const&
          request) override;

 private:
  std::unique_ptr<google::cloud::dialogflow::cx::v3::Sessions::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSIONS_STUB_H
