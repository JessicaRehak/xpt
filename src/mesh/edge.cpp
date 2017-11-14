#include "edge.h"
#include <array>
#include <cmath>
#include <iostream>

namespace xpt {

namespace mesh {

Edge::Edge (Node& node_1, Node& node_2) {
  nodes_ = std::array<Node*, 2>{&node_1, &node_2};

  float sum = 0;
  for (int i = 0; i < 2; ++i) {
    sum += std::pow(node_1.Position()[i] - node_2.Position()[i], 2);
  }
  length_ = std::sqrt(sum);
}

} //namespace mesh

} //namespace xpt
