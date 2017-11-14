#ifndef NODE_H_
#define NODE_H_

#include <array>

namespace xpt {

namespace mesh {

class Node {
 public:
  Node() { };
  Node(std::array<double, 2> position, unsigned index, bool is_interior) :
      position_(position), index_(index), is_interior_(is_interior) { };

  const std::array<double, 2>& Position() const { return position_;};
  const unsigned& Index() const { return index_; };
  const bool& IsInterior() const { return is_interior_;};
  
 private:
  std::array<double, 2> position_;
  unsigned index_;
  bool is_interior_;
  
};
  
} //namespace mesh

} //namespace xpt

#endif
