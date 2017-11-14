#ifndef EDGE_H_
#define EDGE_H_

#include "node.h"

#include <array>

namespace xpt {

namespace mesh {

template <unsigned dim>
class Edge {
 public:
  Edge () { };
  Edge (Node<dim>&, Node<dim>&);

  float Length() const { return length_; };
  std::array<Node<dim>, dim>& Nodes() const { return nodes_; }
  
 private:
  float length_;
  std::array<Node<dim>, dim> nodes_;
  
};

} //namespace mesh

} //namespace xpt


#endif
