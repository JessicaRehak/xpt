#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../edge.h"

#include <array>
#include <stdexcept>
#include <string>

using ::testing::ElementsAre;

TEST (EdgeUnitTest, ConstructorTest) {
  //Build nodes
  xpt::mesh::Node node_1(std::array<double, 2>{0.5, 1.0}, 0, false);
  xpt::mesh::Node node_2(std::array<double, 2>{0.75, 1.5}, 1, false);

  xpt::mesh::Edge test_edge{node_1, node_2};

  ASSERT_FLOAT_EQ(test_edge.Length(), 0.559016994374);
  ASSERT_THAT(test_edge.Nodes(), ElementsAre(&node_1, &node_2));

}

TEST (EdgeUnitTest, ZeroLengthConstructor) {
  xpt::mesh::Node node_1(std::array<double, 2>{0.5, 1.0}, 0, false);

  try {
    xpt::mesh::Edge test_edge{node_1, node_1};
    FAIL() << "Expected std::invalid_argument";
  }
  catch(std::invalid_argument const & err) {
    EXPECT_EQ(err.what(), std::string("Zero length edge"));
  }
  catch (...) {
    FAIL() << "Expected std::invalid_argument";
  }
}
