#include "../edge.h"
#include "gmock/gmock.h"

#include <array>

namespace xpt {

namespace mesh {

namespace test {

template <unsigned dim>
class MockNode : public xpt::mesh::Node<dim> {
 public:
  MOCK_CONST_METHOD0_T(Position, const std::array<double, dim>&());
  MOCK_CONST_METHOD0_T(Index, const unsigned&());
  MOCK_CONST_METHOD0_T(IsInterior, const bool&());
};

} //namespace test

} //namespace mesh

} //namespace xpt
