#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_PERCENT_ENCODE_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_PERCENT_ENCODE_H

#include "google/cloud/version.h"
#include "absl/strings/string_view.h"
#include <cctype>
#include <string>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

// Strict RFC 3986 percent-encoding: escapes everything except the unreserved
// characters. Matches the semantics of `curl_easy_escape`, unlike `UrlEncode`
// which leaves some reserved characters unescaped.
inline std::string PercentEncode(absl::string_view value) {
  auto constexpr kDigits = "0123456789ABCDEF";
  std::string result;
  result.reserve(value.size());
  for (auto c : value) {
    auto uc = static_cast<unsigned char>(c);
    if (std::isalnum(uc) || c == '-' || c == '.' || c == '_' || c == '~') {
      result.push_back(c);
    } else {
      result.push_back('%');
      result.push_back(kDigits[(uc >> 4) & 0xF]);
      result.push_back(kDigits[uc & 0xF]);
    }
  }
  return result;
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_PERCENT_ENCODE_H
