#ifndef ELEMENT_H_
#define ELEMENT_H_

namespace xpt {

namespace mesh {

class Element {
 public:
  Element() {};

  int GetTestVal() const { return test_val_; }
  
 private:
  int test_val_ = 20;

};

}

}

#endif
