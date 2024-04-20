#include "ArrayQueue.h"
#include <cassert>

int DEFAULT_QUEUE_SIZE=10;

template <class T>
ArrayQueue<T>::ArrayQueue(int queueSize){
    capacity = queueSize;
    elements = 0;
    arr = new T[capacity];
    front = -1;
    back = -1;
}

template <class T>
ArrayQueue<T>::~ArrayQueue(){
    delete[] arr;
}

template <class T>
void ArrayQueue<T>::enqueue(T value){
    if(isFull())
        expand();
    //
    if(elements == 0){
        front = 0;
    }
    //
    back = (front+elements)%capacity;
    arr[back] = value;
    elements++;
}

template <class T>
T ArrayQueue<T>::dequeue(){
    assert(!isEmpty());
    T res = arr[front];
    if(elements == 1){
        front = -1;
        back = -1;
    }
    else{
        // the next element is the new front
        front = (front+1)%capacity;
    }
    elements--;
    return res;
}

template <class T>
void ArrayQueue<T>::expand(int expandingFactor){
    // create new queue
    T *newQ = new T[capacity*expandingFactor];
    // copy values to new queue
    int i=0, elementsNo = elements; // save true no. of elements
    while(!isEmpty()){
        newQ[i] = dequeue();
        i++;
    }
    // delete old queue and set new queue as current
    delete[] arr;
    arr = newQ;
    // update capacity
    capacity*=expandingFactor;
    // set front and back idxs
    elements = elementsNo;
    front = 0;
    back = elements;
}

template <class T>
T ArrayQueue<T>::getFront() const{
    assert(!isEmpty());
    return arr[front];
}

template <class T>
bool ArrayQueue<T>::isEmpty() const{
    return (elements == 0);
}

template <class T>
bool ArrayQueue<T>::isFull() const{
    return (elements == capacity);
}

template <class T>
int ArrayQueue<T>::size() const{
    return elements;
}

template class ArrayQueue<int>;