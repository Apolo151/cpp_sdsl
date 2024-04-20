#include <iostream> // for printing
#include "ArrayStack.h"

using namespace std;

template <class T>
void isStackEmpty(ArrayStack<T> &stackArr){
    if(stackArr.isEmpty())
        cout << "Stack is Empty\n";
    else
        cout << "Stack is NOT Empty\n";
}

int main(){
    // check if its empty
    ArrayStack<int> stackArr(10);
    isStackEmpty(stackArr);
    stackArr.push(5);
    isStackEmpty(stackArr);
    // push some elements
    stackArr.push(7);
    stackArr.push(9);
    // return stack top
    cout << stackArr.top() << '\n';
    // pop element
    stackArr.pop();
    cout << stackArr.pop() << '\n';
    cout << stackArr.top() << endl;
    return 0;
}