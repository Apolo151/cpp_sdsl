#ifndef ArrayStack_H
#define ArrayStack_H

// Global Variables
extern int DEFAULT_CAPACITY;

template <class T>
class ArrayStack{
    T* arr; // dynamic array pointer
    int capacity; // stores the current max capacity of the stack
    int elements; // stores the current no. of elements in the stack

public:
    // Constructors & Destructors
    ArrayStack(int initialCapacity=DEFAULT_CAPACITY);
    ~ArrayStack(void);

    // Member Functions
    T top(); // Returns the top element of the stack
    void push(T value); // Pushes the value into the stack
    T pop(); // Removes the top element of the stack
    void expand(int expandingFactor=2); // Expands the capacity of the stack
    bool isEmpty(); // Returns true if the stack is empty 
};
#endif