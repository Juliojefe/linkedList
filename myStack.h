#ifndef myStack_H_
#define myStack_H_

#include "myList.h"

namespace julio {
  class myStack {
    public:
      myStack();
      void push(const std::string& val);
      std::string pop();
      bool isEmpty();

    private: 
      julio::myList lObject;
  };

} //  namespace julio

#endif