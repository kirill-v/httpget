#include "url.hpp"

namespace httpget {

URL::URL(const std::string& address) {}
std::ostream& operator<<(std::ostream& stream, const URL& url) {
  stream << "url {scheme: " << url.scheme_ << ", host: " << url.host_
         << ", port: " << url.port_ << ", path: " << url.path_
         << ", query: " << url.query_ << ", fragment: " << url.fragment_ << "}";
}
}  // namespace httpget