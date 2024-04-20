#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList<int> myList;
    myList.append(6);
    myList.append(7);
    myList.append(12);
    myList.displayElements();
    myList.deleteAt(1);
    myList.displayElements();
}