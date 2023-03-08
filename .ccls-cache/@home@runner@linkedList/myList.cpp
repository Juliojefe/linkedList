#include "myList.h"

namespace julio {
  myList::myList() {
    head_ = nullptr;
    tail_ = nullptr;
  }

  myList::~myList() {
    while (this->head_) {
      Node* temp = this->head_;
      this->head_ = temp->next;
      delete temp;
    }
  }

  void myList::push_back(const std::string& val) {
    Node* newNode = new Node {val};
    if (this->size() == 0) {
      this->head_ = this->tail_ = newNode;
    } else {
      this->tail_->next = newNode;
      newNode->prev = this->tail_;
      this->tail_ = newNode;
    }
    ++this->size_;
  }

  std::string julio::myList::pop_back() {
    std::string temp;
    //  if list is empty
    if (this->head_ == nullptr) {
      return temp;
    }
    // if only one element in list
    if (this->head_ == this->tail_) {
      temp = this->tail_->data;
      delete this->tail_;
      --this->size_;
      this->head_ = nullptr;
      this->tail_ = nullptr;
      return temp;
    }
    //  multiple elements in list 
    else {
      temp = this->tail_-> data;
      Node* temp2 = this->tail_->prev;
      temp2-> next = nullptr;
      delete this->tail_;
      --this->size_;
      this->tail_ = temp2;
      return temp;
    }
  }

  void myList::push_front(const std::string& val) {
    Node* newNode = new Node {val};
    if (this->size() == 0) {
      this->head_ = this->tail_ = newNode;
    } else {
      this->head_->prev = newNode;
      newNode->next = this->head_;
      this->head_ = newNode;
    }
    ++this->size_;
  }

  std::string julio::myList::pop_front() {
    std::string temp;
    //  if list is empty
    if (this->head_ == nullptr) {
      return temp;
    }
    // if only one element in list
    if (this->head_ == this->tail_) {
      temp = this->head_->data;
      delete this-> head_;
      --this->size_;
      this->head_ = nullptr;
      this->tail_ = nullptr;
      return temp;
    }
    //  multiple elements in list 
    else {
      temp = this->head_->data;
      Node * temp2 = this-> head_-> next;
      temp2->prev = nullptr;
      delete this->head_;
      --this->size_;
      this->head_ = temp2;
      return temp;
    }
  }

  std::size_t myList::size() const {
    return size_;
  }

} //  namespace julio
