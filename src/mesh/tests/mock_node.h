#include "../edge.h"
#include "gmock/gmock.h"

#include <array>

namespace xpt {

namespace mesh {

namespace test {

class MockNode : public xpt::mesh::Node {
 public:
  MOCK_CONST_METHOD0_T(Position, const std::array<double, 2>&());
  MOCK_CONST_METHOD0_T(Index, const unsigned&());
  MOCK_CONST_METHOD0_T(IsInterior, const bool&());
};

} //namespace test

} //namespace mesh

} //namespace xpt
