#ifndef myList_H_
#define myList_H_

#include <string>

namespace julio {
  class myList {
    public: 
    myList(); //  constructor
    ~myList(); //  destructor
    void push_back(const std::string& val); //  add string to the end
    std::string pop_back(); //  remove string from the end and return it
    void push_front(const std::string& val); //  add string to the front
    std::string pop_front(); //  remove string from the front and return it
    std::size_t size() const; //  returns the number of elements in the list

    private: 
  class Node {
      public: std::string data;
      Node* next;
      Node* prev;
      Node(std::string x) {
        this-> data = x;
        this-> next = nullptr;
        this-> prev = nullptr;
      }
    };
    Node* head_ = nullptr;
    Node* tail_ = nullptr;
    std::size_t size_ = 0;
  };

} //  namespace julio

#endif