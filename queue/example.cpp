#include <iostream>
#include "ArrayQueue.h"

using namespace std;


int main(){
    ArrayQueue<int> myQ(2);
    cout << myQ.size() << '\n';
    myQ.enqueue(5);
    cout << myQ.getFront() << '\n';
    myQ.enqueue(8);
    cout << "SZ: " << myQ.size() << '\n';
    myQ.enqueue(33);
    cout << "SZ: " << myQ.size() << '\n';
    myQ.dequeue();
    cout << "SZ: " << myQ.size() << '\n';
    cout << myQ.getFront() << endl;
    return 0;
}