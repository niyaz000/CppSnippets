#include <numeric>
#include <cstdint>
#include <vector>
#include <string>

std::string concat(const std::vector<int> & vec, const std::string & seperator = ",") {
    if(vec.empty()) {
        return "";
    }
 auto concant_elements = [seperator](std::string a, int arg) -> std::string {
  return std::move(a) + seperator + std::to_string(arg);
 };
 return std::accumulate(std::next(vec.cbegin()), vec.cend(), std::to_string(vec[0]), concant_elements);
}
