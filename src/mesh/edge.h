#ifndef EDGE_H_
#define EDGE_H_

#include "edge_interface.h"
#include "node.h"

#include <array>

namespace xpt {

namespace mesh {

class Edge : public EdgeInterface {
 public:
  Edge(Node&, Node&);
  std::array<Node*, 2> Nodes() const { return nodes_; };
  float Length() const { return length_; };
  
};

} // namespace mesh

} // namespace xpt


#endif
