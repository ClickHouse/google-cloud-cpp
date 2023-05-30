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
// source: google/cloud/language/v1/language_service.proto

#include "google/cloud/language/v1/internal/language_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/language/v1/language_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace language_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceMetadata::LanguageServiceMetadata(
    std::shared_ptr<LanguageServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
LanguageServiceMetadata::AnalyzeSentiment(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeSentimentRequest const& request) {
  SetMetadata(context);
  return child_->AnalyzeSentiment(context, request);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
LanguageServiceMetadata::AnalyzeEntities(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeEntitiesRequest const& request) {
  SetMetadata(context);
  return child_->AnalyzeEntities(context, request);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
LanguageServiceMetadata::AnalyzeEntitySentiment(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request) {
  SetMetadata(context);
  return child_->AnalyzeEntitySentiment(context, request);
}

StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse>
LanguageServiceMetadata::AnalyzeSyntax(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeSyntaxRequest const& request) {
  SetMetadata(context);
  return child_->AnalyzeSyntax(context, request);
}

StatusOr<google::cloud::language::v1::ClassifyTextResponse>
LanguageServiceMetadata::ClassifyText(
    grpc::ClientContext& context,
    google::cloud::language::v1::ClassifyTextRequest const& request) {
  SetMetadata(context);
  return child_->ClassifyText(context, request);
}

StatusOr<google::cloud::language::v1::ModerateTextResponse>
LanguageServiceMetadata::ModerateText(
    grpc::ClientContext& context,
    google::cloud::language::v1::ModerateTextRequest const& request) {
  SetMetadata(context);
  return child_->ModerateText(context, request);
}

StatusOr<google::cloud::language::v1::AnnotateTextResponse>
LanguageServiceMetadata::AnnotateText(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnnotateTextRequest const& request) {
  SetMetadata(context);
  return child_->AnnotateText(context, request);
}

void LanguageServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void LanguageServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1_internal
}  // namespace cloud
}  // namespace google
