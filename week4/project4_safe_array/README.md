# Project 4: SafeArray with Subscript Operator

**Difficulty:** ⭐⭐⭐☆☆ Medium
**Focus:** Subscript operator [] with bounds checking
**Estimated Time:** 60-75 minutes

## 📚 Learning Objectives

- Understand why operator[] must be a member function
- Learn why to return by reference (enables both reading and writing)
- Implement both const and non-const versions
- Practice bounds checking
- Work with dynamic memory safely

## 🎯 Project Description

Implement a `SafeArray` class - a dynamically allocated integer array with bounds checking via the subscript operator. Unlike regular C++ arrays that allow dangerous out-of-bounds access, your SafeArray will catch errors.

### Why operator[] Must Be a Member

The C++ standard requires `operator[]` to be a non-static member function. It cannot be a friend or standalone function. This is because subscript operations are fundamentally tied to the object's state.

### Why Return by Reference

```cpp
arr[0] = 42;  // Assignment - only works if [] returns reference!
int x = arr[0];  // Reading - works either way
```

Returning by reference makes `arr[i]` an lvalue (can appear on left side of =).

## 📋 Specifications

### Class: `SafeArray`

**Private Members:**
- `int* data` - Dynamic array
- `int size` - Array size

**Public Members:**

#### Constructors & Destructor:
```cpp
SafeArray(int s);                      // Create array of size s
SafeArray(const SafeArray& other);     // Copy constructor (deep copy)
~SafeArray();                          // Destructor (delete[] data)
```

#### Subscript Operators (BOTH versions needed!):
```cpp
int& operator[](int index);              // Non-const: allows modification
const int& operator[](int index) const;  // Const: read-only
```

#### Other Functions:
```cpp
int getSize() const;
SafeArray& operator=(const SafeArray& other);  // Assignment with deep copy
friend ostream& operator<<(ostream& out, const SafeArray& arr);
```

## 💻 Implementation Tasks

### Task 1: Constructor
- Allocate dynamic array: `data = new int[size];`
- Initialize all elements to 0
- Store the size

### Task 2: Destructor
- Clean up: `delete[] data;`
- Prevent memory leaks

### Task 3: Copy Constructor
- Make a DEEP copy (not shallow!)
- Allocate new array of same size
- Copy all elements

### Task 4: Assignment Operator
- Check for self-assignment: `if (this == &other) return *this;`
- Delete old array
- Allocate new array
- Copy elements
- Return `*this`

### Task 5: Non-Const operator[]
```cpp
int& operator[](int index) {
    // Bounds checking
    if (index < 0 || index >= size) {
        cout << "Error: Index out of bounds!" << endl;
        exit(1);
    }
    return data[index];  // Return reference
}
```

### Task 6: Const operator[]
Same as non-const, but:
- Function is const: `const int& operator[](int index) const`
- Can be called on const objects
- Returns const reference (read-only)

## 📝 Sample Usage

```cpp
int main() {
    SafeArray arr(5);

    // Writing using []
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Reading using []
    cout << arr[0] << endl;  // 10

    // Assignment and copy
    SafeArray arr2 = arr;  // Copy constructor
    arr2[0] = 100;         // Modify copy
    cout << arr[0] << endl;  // Still 10 (deep copy!)

    // Const object
    const SafeArray arr3(3);
    int x = arr3[0];  // Uses const version
    // arr3[0] = 5;   // ERROR: can't modify const

    // Bounds checking
    // arr[10] = 5;   // ERROR: Index out of bounds!

    return 0;
}
```

## ✅ Expected Output

```
Array contents: 10 20 30 0 0
arr[0] = 10
arr2 (copy) modified: 100 20 30 0 0
arr (original) unchanged: 10 20 30 0 0
Const array: 0 0 0
Error: Index 10 out of bounds!
```

## 🧪 Testing Checklist

- [ ] Constructor allocates array and initializes to 0
- [ ] Destructor prevents memory leaks
- [ ] Copy constructor makes deep copy
- [ ] Assignment operator makes deep copy
- [ ] Non-const [] allows reading and writing
- [ ] Const [] allows only reading
- [ ] Bounds checking catches invalid indices
- [ ] Can use [] on left side of assignment

## 💡 Hints

<details>
<summary>Hint 1: The Big Three</summary>

Classes with dynamic memory MUST implement:
1. Destructor
2. Copy constructor
3. Assignment operator

Otherwise you get shallow copies and memory leaks!
</details>

<details>
<summary>Hint 2: Deep Copy Pattern</summary>

```cpp
SafeArray(const SafeArray& other) : size(other.size) {
    data = new int[size];
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}
```
</details>

<details>
<summary>Hint 3: Const vs Non-Const</summary>

The compiler chooses which operator[] to call:
- Non-const object → calls non-const version
- Const object → calls const version
- If only non-const exists, const objects can't use [] at all!
</details>

## 🐛 Common Mistakes

❌ Returning by value (prevents `arr[i] = x;`)
❌ Only implementing non-const version (const objects can't use [])
❌ Not doing bounds checking
❌ Shallow copy in copy constructor/assignment
❌ Forgetting to delete[] in destructor
❌ Not checking self-assignment in operator=

## 🏆 Extension Challenges

1. Add `fill(int value)` method
2. Add comparison operators
3. Support negative indexing (Python-style: -1 is last element)
4. Add `resize()` method
5. Template it to work with any type

---

Master subscript operators and you can build any container class! 🚀
