#include "../element.h"
#include "gtest/gtest.h"

TEST (ElementTest, TestVal) {
  xpt::mesh::Element test_element{};
  EXPECT_EQ (20, test_element.GetTestVal());
}
