#define CATCH_CONFIG_MAIN
#include "Addition.h"
#include "catch2/catch.hpp"

TEST_CASE("addition should work", "[addition]") {
  auto add = Addition(5, 7);
  REQUIRE(add.GetResult() == 12);
}
