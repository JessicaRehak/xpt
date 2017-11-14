#include "../node.h"
#include "gtest/gtest.h"
#include <array>

TEST (NodeUnitTest, TestConstructor) {
  std::array<double, 2> position{0.2, 0.3};
  xpt::mesh::Node test_node(position, 0, false);
  EXPECT_EQ (test_node.Position(), position);
  EXPECT_EQ (test_node.Index(), 0);
  EXPECT_EQ (test_node.IsInterior(), false);
}


