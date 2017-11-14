#include "edge.h"
#include <array>
#include <cmath>

namespace xpt {

namespace mesh {

template <unsigned dim>
Edge<dim>::Edge (Node<dim>& node_1, Node<dim>& node_2) {
  nodes_ = std::array<Node<dim>*, 2>(&node_1, &node_2);

  float sum = 0;
  for (int i = 0; i < dim; ++i)
    sum += std::pow(node_1.Position()[i] - node_2.Position()[i], 2);

  length_ = std::sqrt(sum);
}

template class Edge<2>;
template class Edge<3>;

} //namespace mesh

} //namespace xpt
