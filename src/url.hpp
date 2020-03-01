#ifndef __HTTPGET_URL_HPP__
#define __HTTPGET_URL_HPP__

#include <cstdint>
#include <iostream>
#include <string>

namespace httpget {
class URL {
 public:
  using PortType = std::uint16_t;
  URL(const std::string& address) {}

  friend std::ostream& operator<<(std::ostream& stream, const URL& url);

 private:
  static const std::string scheme_separator_;
  std::string fragment_;
  std::string host_;
  std::string password_;
  std::string path_;
  PortType port_;
  std::string query_;
  std::string scheme_;
  std::string user_name_;
};
}  // namespace httpget

#endif