#ifndef ARR_QUEUE_H
#define ARR_QUEUE_H

extern int DEFAULT_QUEUE_SIZE;

template<class T>
class ArrayQueue{
    T *arr; // pointer to the queue array
    int elements;
    int capacity;
    int front;
    int back;
public:
    // Constructors & Destructors
    ArrayQueue(int queueSize=DEFAULT_QUEUE_SIZE);
    ~ArrayQueue(void);
    // Member Functions
    void enqueue(T value);
    T dequeue();
    T getFront() const;
    void expand(int expandingFactor=2);
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
};

#endif