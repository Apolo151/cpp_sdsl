#pragma
template <class T>
class Node
{
public:
    T value;
    Node<T> *next;
    //
    Node();
    Node(T value);
};

template <class T>
class LinkedList
{
public:
    Node<T> *head;
    Node<T> *tail;
    int size;
    //
    LinkedList();
    //
    void append(T value);
    void displayElements();
    void insertAt(T val, int pos);
    void deleteAt(int pos);
    void moveNode(T val, int pos);
};