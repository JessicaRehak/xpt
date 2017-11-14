#include "edge.h"
#include <cmath>
#include <stdexcept>


namespace xpt {

namespace mesh {

Edge::Edge(Node& node_1, Node& node_2) {
  //Calculate length
  float sum = std::pow(node_1.position[0] - node_2.position[0], 2);
  sum += std::pow(node_1.position[1] - node_2.position[1], 2);

  length_ = std::sqrt(sum);
  if (length_ == 0)
    throw std::invalid_argument("Zero length edge");

  nodes_ = std::array<Node*, 2>{&node_1, &node_2};
}

} //namespace mesh

} //namespace xpt
