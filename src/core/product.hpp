#pragma once
#include <string>

namespace argus {
class Product {
 public:
  Product(std::string name, std::string timeAdded, int quantity = 0, double price = 0.0);

 private:
  std::string name_;
  int quantity_ = 0;
  double price_ = 0.0;
  std::string timeAdded_;
};
}  // namespace argus
