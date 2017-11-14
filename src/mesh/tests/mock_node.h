#include "../edge.h"
#include "gmock/gmock.h"

#include <array>

namespace xpt {

namespace mesh {

namespace test {

class MockNode : public xpt::mesh::Node {
 public:
  MOCK_CONST_METHOD0(Position, const std::array<double, 2>());
  MOCK_CONST_METHOD0(Index, const unsigned&());
  MOCK_CONST_METHOD0(IsInterior, const bool&());
};

} //namespace test

} //namespace mesh

} //namespace xpt
