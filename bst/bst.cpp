#include "bst.h"

#include <iostream>

using namespace std;

template <class T>
TreeNode<T>::TreeNode(T value) {
  left = nullptr;
  right = nullptr;
  data = value;
}

template <class T>
Tree<T>::Tree() {
  size = 0;
  root = nullptr;
}

template <class T>
void Tree<T>::insert(T value) {
  TreeNode<T> *node = new TreeNode<T>(value);
  if (root == nullptr) {
    root = node;
  } else {
    TreeNode<T> *tmp = root;
    TreeNode<T> *parent = nullptr;
    while (tmp != nullptr) {
      parent = tmp;
      if (value < tmp->data) {
        tmp = tmp->left;
      } else {
        tmp = tmp->right;
      }
    }
    //
    if (value < parent->data)
      parent->left = node;
    else
      parent->right = node;
  }
  size++;
}

template <class T>
bool Tree<T>::find(T value) {
  TreeNode<T> *tmp = root;
  while (tmp != nullptr) {
    // cout << tmp->data << " -> ";
    if (tmp->data == value) return true;
    if (value < tmp->data)
      tmp = tmp->left;
    else
      tmp = tmp->right;
  }
  return false;
}

template <class T>
int Tree<T>::getLevel(T value) {
  TreeNode<T> *tmp = root;
  int lvl = 0;
  while (tmp != nullptr) {
    if (tmp->data == value)
      return lvl;
    else {
      lvl++;
      if (value < tmp->data)
        tmp = tmp->left;
      else
        tmp = tmp->right;
    }
  }
  return -1;
}
