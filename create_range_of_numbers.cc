#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

void generate_range(std::vector<int64_t> & v, int64_t begin) {
  std::iota(std::begin(v), std::end(v), begin);
}

int main(int argc, const char * argv[]) {
  const int32_t UPPER_LIMIT{1000};
  std::vector<int64_t> v(UPPER_LIMIT);
  generate_range(v, 1);
  std::for_each(v.cbegin(), v.cend(), [](int64_t item) {
      printf(" %lld", item);
  });
  return 0;
}
