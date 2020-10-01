#include <numeric>
#include <cstdint>
#include <vector>
#include <string>

std::string concat(const std::vector<int> & vec, const std::string & separator = ",") {
    if(vec.empty()) {
        return "";
    }
 auto concat_elements = [separator](std::string a, int arg) -> std::string {
  return std::move(a) + separator + std::to_string(arg);
 };
 return std::accumulate(std::next(vec.cbegin()), vec.cend(), std::to_string(vec[0]), concat_elements);
}
