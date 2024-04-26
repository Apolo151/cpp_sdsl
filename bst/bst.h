#pragma once

template <class T>
class TreeNode {
 public:
  T data;
  TreeNode<T>* left;
  TreeNode<T>* right;
  TreeNode(T);
};

template <class T>
class Tree {
 public:
  int size;
  TreeNode<T>* root;
  Tree();
  void insert(T);
  bool find(T);
  int getLevel(T);
};

template class TreeNode<int>;
template class Tree<int>;