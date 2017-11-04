
namespace xpt {

namespace mesh {

template <unsigned dim>
class Mesh {
 public:
  Mesh() {};
  ~Mesh() {};

  unsigned GetDim() const { return dim_; };
  virtual unsigned GetNCells() const;
  
 protected:
  unsigned dim_ = dim;
  
};
  
} //namespace mesh

} //namespace xpt
