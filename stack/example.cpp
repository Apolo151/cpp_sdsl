#include <iostream>  // for printing

#include "ArrayStack.h"
#include "LinkedStack.h"

using namespace std;

void isStackEmpty(bool isEmpty) {
  if (isEmpty)
    cout << "Stack is Empty\n";
  else
    cout << "Stack is NOT Empty\n";
}

int main() {
  // LinkedStack<int> stack(10);
  ArrayStack<int> stack(10);
  stack.push(5);
  isStackEmpty(stack.isEmpty());
  // push some elements
  stack.push(7);
  stack.push(9);
  // return stack top
  cout << stack.top() << '\n';
  // pop element
  stack.pop();
  cout << stack.pop() << '\n';
  cout << stack.top() << endl;
  return 0;
}