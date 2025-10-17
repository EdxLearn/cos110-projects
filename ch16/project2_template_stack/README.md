# Project 2: Template Stack Implementation

**Difficulty:** ⭐⭐⭐☆☆ (Medium)
**Chapter:** 16 - Templates and Generic Programming
**Concepts:** Class templates, dynamic arrays, stack operations, exception handling

## Learning Objectives

- Implement a template stack using dynamic arrays
- Manage dynamic memory with templates
- Handle stack overflow and underflow conditions
- Implement standard stack operations (push, pop, peek)
- Understand LIFO (Last-In-First-Out) data structure

## Problem Description

Create a generic `Stack` template class that implements a stack data structure using a dynamically allocated array. The stack should have a fixed capacity and handle overflow/underflow appropriately.

## Requirements

### Template Class: Stack

- `template <class T>`
- Private members:
  - `T* elements` - Dynamic array to store elements
  - `int top` - Index of the top element (-1 when empty)
  - `int capacity` - Maximum number of elements

### Constructor and Destructor

- Constructor: `Stack(int cap = 10)` - Create stack with specified capacity
- Destructor: Clean up dynamic memory

### Core Operations

- `void push(T val)` - Add element to top (check for overflow)
- `T pop()` - Remove and return top element (check for underflow)
- `T peek() const` - Return top element without removing (check if empty)
- `bool isEmpty() const` - Check if stack is empty
- `bool isFull() const` - Check if stack is full
- `int size() const` - Return current number of elements

## Expected Output

```
=== COS 110 Project 2: Template Stack ===

Testing Stack<int>:
Pushing: 10 20 30 40 50
Stack size: 5
Top element: 50
Popping: 50 40 30 20 10
Stack is empty: Yes

Testing Stack<string>:
Pushing: Hello World C++ Templates
Stack size: 4
Top element: Templates
Popping all elements...

Testing Stack<double> overflow:
Pushing 15 elements to stack with capacity 10...
Stack overflow detected at element 11
Final stack size: 10 (full)
```

## Hints

- Initialize top to -1 for an empty stack
- Check `top >= capacity - 1` for overflow
- Check `top == -1` for underflow
- Use `new T[capacity]` for dynamic allocation
- Return a default-constructed T() on error conditions

## Compilation

```bash
make
make run
```

## Extension Challenges

1. Add copy constructor and assignment operator
2. Implement dynamic resizing when capacity is reached
3. Add a clear() method to empty the stack
4. Overload operator<< to print stack contents
5. Add exception throwing instead of returning default values

---

**Swift Tuition - COS 110 Chapter 16 Projects**
