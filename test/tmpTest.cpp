#include <boost/ut.hpp>
#include <tmp.h>

auto main() -> int {
  using namespace boost::ut;

  "Add two values"_test = [] {
    auto result = odd(3);
    expect(result);
  };
}