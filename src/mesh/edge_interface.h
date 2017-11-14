#ifndef EDGE_INTERFACE_H_
#define EDGE_INTERFACE_H_

#include "node.h"

#include <array>

namespace xpt {

namespace mesh {

class EdgeInterface {
 public:
  virtual std::array<Node*, 2> Nodes() const = 0;
  virtual float Length() const = 0;
  
 protected:
  std::array<Node*, 2> nodes_;
  float length_;
  
};

}// namespace mesh

} //namespace xpt

#endif
