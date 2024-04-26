#include <iostream>

#include "bst.h"
using namespace std;

int main() {
  Tree<int> myTree;
  myTree.insert(12);
  myTree.insert(8);
  myTree.insert(9);
  myTree.insert(10);
  myTree.insert(15);
  myTree.insert(25);
  cout << myTree.getLevel(100) << endl;
  if (myTree.find(7) == true)
    cout << "Found 7" << endl;
  else
    cout << "Did not find 7" << endl;
  if (myTree.find(10) == true)
    cout << "Found 10" << endl;
  else
    cout << "Did not find 10" << endl;
  return 0;
}