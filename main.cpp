#include <iostream>
#include "myStack.h"

int main() {

  julio::myStack test;
  std::string x;
  while (std::getline(std::cin, x)) {
    test.push(x);
  }
  while(!test.isEmpty()) {
    std::cout << test.pop() << '\n';
  }

}