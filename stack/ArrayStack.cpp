#include "ArrayStack.h"
#include <iostream>
using namespace std;

int DEFAULT_CAPACITY = 10;


template <class T>
ArrayStack<T>::ArrayStack(int initialCapacity){
    capacity = initialCapacity;
    elements = 0;
    arr = new T[capacity];
}

template <class T>
ArrayStack<T>::~ArrayStack(){
    elements = 0;
    capacity = DEFAULT_CAPACITY;
    delete[] arr;
}

template <class T>
T ArrayStack<T>::top(){
    if(isEmpty())
        throw "The Stack is Empty";
    return arr[elements-1];
}

template <class T>
void ArrayStack<T>::push(T value){
    if(elements == capacity)
        expand();
    //
    arr[elements] = value;
    elements++;
}

template <class T>
T ArrayStack<T>::pop(){
    if(isEmpty())
        throw "The Stack is Empty";
    //
    elements--;
    return arr[elements];
}

template <class T>
bool ArrayStack<T>::isEmpty(){
    if(elements == 0)
        return true;
    return false;
}

template <class T>
void ArrayStack<T>::expand(int expandingFactor){
    // create a new dynamic array with capacity*expandingFactor
    T *newArr = new T[capacity*expandingFactor];
    // copy elements
    for(int i=0; i < elements; i++){
        newArr[i] = arr[i];
    }
    // delete old array and update stack array
    delete[] arr;
    arr = newArr;
    // update capacity
    capacity*=expandingFactor;
}

// Explicit Initialization
template class ArrayStack<int>;
template class ArrayStack<double>;
template class ArrayStack<char>;