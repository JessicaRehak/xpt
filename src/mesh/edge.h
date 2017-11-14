#ifndef EDGE_H_
#define EDGE_H_

#include "node.h"

#include <array>

namespace xpt {

namespace mesh {

class Edge {
 public:
  Edge () { };
  Edge (Node&, Node&);

  float Length() const { return length_; };
  const std::array<Node*, 2>& Nodes() const { return nodes_; }
  
 private:
  float length_;
  std::array<Node*, 2> nodes_;
  
};

} //namespace mesh

} //namespace xpt


#endif
