#ifndef EDGE_H_
#define EDGE_H_

#include "node.h"

namespace xpt {

namespace mesh {

template <unsigned dim>
class Edge {
 public:
  Edge() { };
  Edge(Node<dim> node_1, Node<dim> node_2) { };

  float Length() const { };

 private:
  float length_;  
  
};

} //namespace mesh

} //namespace xpt


#endif
