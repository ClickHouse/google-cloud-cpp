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

#include "google/cloud/bigquery/v2/minimal/internal/dataset_logging.h"
#include "google/cloud/bigquery/v2/minimal/internal/log_wrapper.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/debug_string.h"
#include "google/cloud/internal/debug_string_status.h"
#include "google/cloud/internal/invoke_result.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/log.h"
#include "google/cloud/status_or.h"
#include "absl/strings/string_view.h"

namespace google {
namespace cloud {
namespace bigquery_v2_minimal_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetLogging::DatasetLogging(std::shared_ptr<DatasetRestStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

// Customized LogWrapper is used here since GetDatasetRequest is
// not a protobuf message.
StatusOr<GetDatasetResponse> DatasetLogging::GetDataset(
    rest_internal::RestContext& rest_context,
    GetDatasetRequest const& request) {
  return LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             GetDatasetRequest const& request) {
        return child_->GetDataset(rest_context, request);
      },
      rest_context, request, __func__,
      "google.cloud.bigquery.v2.minimal.internal.GetDatasetRequest",
      "google.cloud.bigquery.v2.minimal.internal.GetDatasetResponse",
      tracing_options_);
}

// Customized LogWrapper is used here since ListDatasetsRequest is
// not a protobuf message.
StatusOr<ListDatasetsResponse> DatasetLogging::ListDatasets(
    rest_internal::RestContext& rest_context,
    ListDatasetsRequest const& request) {
  return LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             ListDatasetsRequest const& request) {
        return child_->ListDatasets(rest_context, request);
      },
      rest_context, request, __func__,
      "google.cloud.bigquery.v2.minimal.internal.ListDatasetsRequest",
      "google.cloud.bigquery.v2.minimal.internal.ListDatasetsResponse",
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_v2_minimal_internal
}  // namespace cloud
}  // namespace google
