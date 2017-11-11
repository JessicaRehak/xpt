#include "../edge.h"
#include "mock_node.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <array>

using ::testing::ReturnRef;

TEST (EdgeUnitTest, Init2DGoodNodes) {
  xpt::mesh::test::MockNode<2> mock_node_1;
  xpt::mesh::test::MockNode<2> mock_node_2;

  std::array<double, 2> position_1{0.5, 1.0};
  std::array<double, 2> position_2{1.0, 2.0};

  EXPECT_CALL(mock_node_1, Position())
      .WillOnce(ReturnRef(position_1));
  EXPECT_CALL(mock_node_2, Position())
      .WillOnce(ReturnRef(position_2));              
  
  xpt::mesh::Edge<2> test_edge(mock_node_1, mock_node_2);

  EXPECT_FLOAT_EQ(test_edge.Length(), 1.11803398875);
}
