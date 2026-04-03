# Data Structures in C++

A comprehensive collection of **from-scratch implementations** of fundamental C++ data structures. This project demonstrates how classic data structures work under the hood, without relying on STL containers.

## 📋 Overview

Each data structure includes:

- **Complete implementation** with header (.h) and source (.cpp) files
- **Example usage** demonstrating practical use cases

## 🗂️ Implemented Data Structures

### 1. **Binary Search Tree (BST)**
- Location: `bst/`
- Files: `bst.h`, `bst.cpp`, `example.cpp`
- Features:
  - Insert and search operations
  - Tree traversal
  - Efficient O(log n) average-case operations

### 2. **Linked List**
- Location: `linked_list/`
- Files: `LinkedList.h`, `LinkedList.cpp`, `example.cpp`
- Features:
  - Dynamic memory allocation
  - Insert, delete, and traverse operations
  - Node-based structure

### 3. **Queue**
- Location: `queue/`
- Files: `ArrayQueue.h`, `ArrayQueue.cpp`, `example.cpp`
- Features:
  - FIFO (First-In-First-Out) data structure
  - Array-based implementation
  - Enqueue and dequeue operations

### 4. **Stack**
- Location: `stack/`
- Files: `ArrayStack.h`, `ArrayStack.cpp`, `LinkedStack.h`, `LinkedStack.cpp`, `example.cpp`
- Features:
  - LIFO (Last-In-First-Out) data structure
  - Dual implementations: Array-based and Linked List-based
  - Push and pop operations

## 🚀 Getting Started

### Build the Project
Compile the main program:
```bash
g++ -std=c++11 main.cpp -o main
```

Or compile with a specific data structure example:
```bash
g++ -std=c++11 bst/bst.cpp bst/example.cpp -o bst_example
```

### View Examples
Each data structure includes an `example.cpp` file demonstrating its usage:
- `bst/example.cpp` - BST operations
- `linked_list/example.cpp` - Linked list operations
- `queue/example.cpp` - Queue operations
- `stack/example.cpp` - Stack operations
