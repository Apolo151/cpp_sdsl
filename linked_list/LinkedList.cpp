#include "LinkedList.h"
#include <cassert>
#include <iostream>

template <class T>
Node<T>::Node()
{
    value = NULL;
    next = nullptr;
}

template <class T>
Node<T>::Node(T val)
{
    value = val;
    next = nullptr;
}

template <class T>
LinkedList<T>::LinkedList()
{
    head = tail = nullptr;
    size = 0;
}

template <class T>
void LinkedList<T>::append(T value)
{
    Node<T> *newNodePtr = new Node(value);
    if (!size)
    {
        head = tail = newNodePtr;
    }
    else
    {
        tail->next = newNodePtr;
        tail = tail->next;
    }
    //
    size++;
}

template <class T>
void LinkedList<T>::displayElements()
{
    Node<T> *nodePtr = head;
    while (nodePtr != nullptr)
    {
        std::cout << nodePtr->value << " ";
        nodePtr = nodePtr->next;
    }
    std::cout << std::endl;
}

template <class T>
void LinkedList<T>::insertAt(T val, int pos)
{
    assert(pos >= 0 && pos < size);
    Node<T> *newNodePtr = new Node(val);
    Node<T> *nodePtr = head;

    if (pos == 0)
    {
        newNodePtr->next = head;
        head = newNodePtr;
    }
    else
    {
        // get ptr to position
        for (int i = 0; i < pos - 1; i++)
        {
            nodePtr = nodePtr->next;
        }
        //
        newNodePtr->next = nodePtr->next;
        nodePtr->next = newNodePtr;
    }
    //
    size++;
}

template <class T>
void LinkedList<T>::deleteAt(int pos)
{
    assert(pos >= 0 && pos < size);
    Node<T> *nodeToDelete = nullptr;
    //
    if (pos == 0)
    {
        nodeToDelete = head;
        head = head->next;
    }
    else
    {
        Node<T> *nodePtr = head;
        for (int i = 0; i < pos - 1; i++)
        {
            nodePtr = nodePtr->next;
        }
        //
        nodeToDelete = nodePtr->next;
        nodePtr->next = nodeToDelete->next;
        if (pos == size)
        {
            tail = nodePtr;
        }
    }
    //
    delete nodeToDelete;
    size--;
}

template <class T>
void LinkedList<T>::moveNode(T val, int pos)
{
    assert(pos >= 0 && pos <= size);
    //
    int deletePos = -1;
    Node<T> *nodePtr = head;
    // find node & get it out
    for (int i = 0; i < size; i++)
    {
        if (nodePtr->value == val)
        {
            deletePos = i;
            break;
        }
        nodePtr = nodePtr->next;
    }
    assert(deletePos != -1);
    deleteAt(deletePos);
    // move it and insert
    if (pos == size)
        append(val);
    else
        insertAt(val, pos);
}

template class LinkedList<int>;