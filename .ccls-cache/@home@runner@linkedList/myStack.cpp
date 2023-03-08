#include "myStack.h"

namespace julio {
  myStack::myStack() {
    lObject.pop_back();
  }
  void myStack::push(const std::string& val) {
    lObject.push_front(val);
  }
  std::string julio::myStack::pop() {
    return lObject.pop_front();
  }
  bool myStack::isEmpty() {
    if (lObject.size() == 0) {
      return true;
    }
    return false;
  }

} //  namespace julio
