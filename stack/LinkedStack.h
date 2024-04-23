#ifndef LinkedStack_H
#define LinkedStack_H

template <class T>
class StackNode {
 public:
  T data;
  StackNode<T> *next;
  //
  StackNode();
  StackNode(T);
};

template <class T>
class LinkedStack {
 public:
  int size;
  StackNode<T> *head;
  LinkedStack();
  LinkedStack(T);
  ~LinkedStack();
  //
  bool isEmpty();
  T top();
  void push(T);
  T pop();
  void clear();
};

template class LinkedStack<int>;
#endif