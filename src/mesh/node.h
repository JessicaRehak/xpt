#ifndef NODE_H_
#define NODE_H_

#include <array>

namespace xpt {

namespace mesh {

struct Node {
  Node() { };
  Node(std::array<double, 2> position, unsigned index, bool is_interior) :
      position(position), index(index), is_interior(is_interior) { };
  std::array<double, 2> position;
  unsigned index;
  bool is_interior;
};
  
} //namespace mesh

} //namespace xpt

#endif
