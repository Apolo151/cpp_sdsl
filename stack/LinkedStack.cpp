#include "LinkedStack.h"

#include <cassert>

template <class T>
StackNode<T>::StackNode(T value) {
  data = value;
  next = nullptr;
};

template <class T>
StackNode<T>::StackNode() {
  next = nullptr;
}

template <class T>
LinkedStack<T>::LinkedStack() {
  size = 0;
  head = nullptr;
}

template <class T>
LinkedStack<T>::LinkedStack(T value) {
  size = 1;
  head = new StackNode(value);
}

template <class T>
LinkedStack<T>::~LinkedStack() {
  clear();
}

template <class T>
bool LinkedStack<T>::isEmpty() {
  return (size == 0);
}

template <class T>
T LinkedStack<T>::top() {
  return head->data;
}

template <class T>
void LinkedStack<T>::push(T value) {
  StackNode<T> *newNode = new StackNode(value);
  newNode->next = head;
  head = newNode;
  size++;
}

template <class T>
T LinkedStack<T>::pop() {
  assert(!isEmpty());
  StackNode<T> *node = head;
  head = node->next;

  T value = node->data;
  delete node;
  size--;
  return value;
}

template <class T>
void LinkedStack<T>::clear() {
  StackNode<T> *tmp;
  while (size) {
    tmp = head;
    head = head->next;
    delete tmp;
    size--;
  }
}