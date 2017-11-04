#include "gtest/gtest.h"
#include "mesh.h"

TEST (MeshUnitTests, DimSet) {
  xpt::mesh::Mesh<3u> test_mesh{};
  EXPECT_EQ(3, test_mesh.GetDim());
}
