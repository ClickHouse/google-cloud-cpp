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

#include "google/cloud/language/v1/internal/language_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace language_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LanguageServiceTracingStub::LanguageServiceTracingStub(
    std::shared_ptr<LanguageServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
LanguageServiceTracingStub::AnalyzeSentiment(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeSentimentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.language.v1.LanguageService",
                                     "AnalyzeSentiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->AnalyzeSentiment(context, request));
}

StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
LanguageServiceTracingStub::AnalyzeEntities(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeEntitiesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.language.v1.LanguageService",
                                     "AnalyzeEntities");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->AnalyzeEntities(context, request));
}

StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
LanguageServiceTracingStub::AnalyzeEntitySentiment(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.language.v1.LanguageService",
                                     "AnalyzeEntitySentiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->AnalyzeEntitySentiment(context, request));
}

StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse>
LanguageServiceTracingStub::AnalyzeSyntax(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnalyzeSyntaxRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.language.v1.LanguageService",
                                     "AnalyzeSyntax");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->AnalyzeSyntax(context, request));
}

StatusOr<google::cloud::language::v1::ClassifyTextResponse>
LanguageServiceTracingStub::ClassifyText(
    grpc::ClientContext& context,
    google::cloud::language::v1::ClassifyTextRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.language.v1.LanguageService",
                                     "ClassifyText");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ClassifyText(context, request));
}

StatusOr<google::cloud::language::v1::ModerateTextResponse>
LanguageServiceTracingStub::ModerateText(
    grpc::ClientContext& context,
    google::cloud::language::v1::ModerateTextRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.language.v1.LanguageService",
                                     "ModerateText");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ModerateText(context, request));
}

StatusOr<google::cloud::language::v1::AnnotateTextResponse>
LanguageServiceTracingStub::AnnotateText(
    grpc::ClientContext& context,
    google::cloud::language::v1::AnnotateTextRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.language.v1.LanguageService",
                                     "AnnotateText");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->AnnotateText(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<LanguageServiceStub> MakeLanguageServiceTracingStub(
    std::shared_ptr<LanguageServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<LanguageServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1_internal
}  // namespace cloud
}  // namespace google
