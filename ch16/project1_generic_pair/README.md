# Project 1: Generic Pair Class

**Difficulty:** ⭐⭐☆☆☆ (Easy)
**Chapter:** 16 - Templates and Generic Programming
**Concepts:** Class templates, multiple template parameters, operator overloading, comparison operators

## Learning Objectives

- Create a class template with two type parameters
- Implement getters and setters for template types
- Overload comparison operators for template classes
- Overload stream operators with template friends
- Work with different type combinations

## Problem Description

Create a generic `Pair` template class that can hold two values of potentially different types. The class should support getting/setting values, comparing pairs, and stream output.

## Requirements

### Template Class: Pair

Create a `Pair` template class with two type parameters:
- `template <class T1, class T2>`
- Private members: `T1 first`, `T2 second`

### Constructors
- Default constructor (initialises members with default values)
- Parameterised constructor: `Pair(T1 f, T2 s)`

### Member Functions
- `void setFirst(T1 f)` - Set the first value
- `void setSecond(T2 s)` - Set the second value
- `T1 getFirst() const` - Return the first value
- `T2 getSecond() const` - Return the second value

### Operator Overloading

Implement the following operators:

1. **Equality operator (==)**: Two pairs are equal if both their first and second values are equal
2. **Inequality operator (!=)**: Opposite of ==
3. **Less than operator (<)**: Compare based on first value; if equal, compare second value
4. **Stream insertion operator (<<)**: Output format: `(first, second)`

## Expected Output

```
=== COS 110 Project 1: Generic Pair Class ===

Testing Pair<int, string>:
p1: (1, Alice)
p2: (2, Bob)
p1 == p2? No
p1 < p2? Yes

Testing Pair<double, double>:
p3: (3.14, 2.71)
p4: (3.14, 2.71)
p3 == p4? Yes

Testing Pair<string, int>:
p5: (Product, 100)
Updated p5: (Product, 150)

Testing mixed types:
idName: (12345, John Doe)
coordinates: (10.5, 20.3)
```

## Hints

- Use friend functions for operator<< to access private members
- Remember the template syntax for friend functions
- The comparison operators should use the operators defined for T1 and T2
- For operator<, compare first values first, then second if first are equal

## Compilation

```bash
make              # Compile student version
make solution     # Compile solution
make run          # Compile and run student version
make run-solution # Compile and run solution
make clean        # Remove compiled files
```

Or manually:
```bash
g++ -std=c++98 -Wall -Wextra -o pair main.cpp
./pair
```

## Testing Checklist

- [ ] Default constructor works
- [ ] Parameterised constructor works
- [ ] Getters return correct values
- [ ] Setters update values correctly
- [ ] Equality operator (==) works correctly
- [ ] Inequality operator (!=) works correctly
- [ ] Less than operator (<) works correctly
- [ ] Stream insertion operator (<<) outputs correctly
- [ ] Works with different type combinations (int-string, double-double, etc.)
- [ ] Compiles without warnings with -Wall -Wextra

## Extension Challenges

1. Add operator> (greater than)
2. Add operator<= and operator>=
3. Implement a swap() member function
4. Create a Triple class with three type parameters
5. Add a template function makePair() that creates a Pair without explicit type specification

---

**Swift Tuition - COS 110 Chapter 16 Projects**
