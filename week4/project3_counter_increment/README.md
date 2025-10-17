# Project 3: Counter with Increment/Decrement Operators

**Difficulty:** ⭐⭐⭐☆☆ Medium
**Focus:** Prefix and postfix increment/decrement operators
**Estimated Time:** 60-75 minutes

## 📚 Learning Objectives

- Understand the difference between prefix (++x) and postfix (x++)
- Learn the dummy int parameter pattern
- Master return types: reference vs value
- Implement efficient postfix by calling prefix
- Understand why prefix is more efficient

## 🎯 Project Description

Implement a `Counter` class that can be incremented and decremented. You'll implement both prefix and postfix versions of ++ and --, understanding the crucial differences between them.

### Key Concepts

**Prefix (++x):**
- Increments first, then returns the new value
- Returns by reference
- More efficient (no copy needed)
- Signature: `Counter& operator++()`

**Postfix (x++):**
- Saves old value, increments, returns old value
- Returns by value (a copy)
- Less efficient (must create copy)
- Signature: `const Counter operator++(int)` (dummy int!)

## 📋 Specifications

### Class: `Counter`

**Private Members:**
- `int count` - The counter value

**Public Members:**

#### Constructors:
```cpp
Counter();                 // Default: count = 0
Counter(int initial);      // Initialize with value
```

#### Increment Operators (Member Functions):
```cpp
Counter& operator++();              // Prefix: ++counter
const Counter operator++(int);      // Postfix: counter++
```

#### Decrement Operators (Member Functions):
```cpp
Counter& operator--();              // Prefix: --counter
const Counter operator--(int);      // Postfix: counter--
```

#### Other Functions:
```cpp
int getCount() const;
friend ostream& operator<<(ostream& out, const Counter& c);
```

## 💻 Implementation Tasks

### Task 1: Prefix Increment (++x)
```cpp
Counter& operator++() {
    count++;
    return *this;  // Return reference to modified object
}
```

### Task 2: Postfix Increment (x++)
```cpp
const Counter operator++(int dummy) {
    Counter temp(*this);  // Save old value
    ++(*this);            // Call prefix (avoid code duplication!)
    return temp;          // Return old value
}
```

### Task 3: Prefix Decrement (--x)
Similar to prefix increment, but decrement

### Task 4: Postfix Decrement (x--)
Similar to postfix increment, but using prefix decrement

## 📝 Sample Usage

```cpp
int main() {
    Counter c(5);

    cout << "Initial: " << c << endl;          // 5

    // Prefix increment
    cout << "++c: " << ++c << endl;            // 6 (increment, then return)
    cout << "After ++c: " << c << endl;        // 6

    // Postfix increment
    cout << "c++: " << c++ << endl;            // 6 (return old, then increment)
    cout << "After c++: " << c << endl;        // 7

    // Prefix decrement
    cout << "--c: " << --c << endl;            // 6

    // Postfix decrement
    cout << "c--: " << c-- << endl;            // 6 (return old)
    cout << "After c--: " << c << endl;        // 5

    // Chaining prefix (works because it returns reference)
    ++(++c);
    cout << "After ++(++c): " << c << endl;    // 7

    return 0;
}
```

## ✅ Expected Output

```
Initial: 5
++c: 6
After ++c: 6
c++: 6
After c++: 7
--c: 6
c--: 6
After c--: 5
After ++(++c): 7
```

## 🧪 Testing Checklist

- [ ] Prefix ++ increments and returns new value
- [ ] Postfix ++ returns old value, then increments
- [ ] Prefix -- decrements and returns new value
- [ ] Postfix -- returns old value, then decrements
- [ ] Prefix chaining works: ++(++c)
- [ ] Postfix returns const (can't do (c++)++)
- [ ] Efficiency: postfix calls prefix internally

## 💡 Hints

<details>
<summary>Hint 1: Dummy Int Parameter</summary>

The `int` parameter in postfix is NEVER used. It's purely to distinguish postfix from prefix for the compiler:
```cpp
const Counter operator++(int) {  // Parameter has no name - not used!
    Counter temp(*this);
    ++(*this);
    return temp;
}
```
</details>

<details>
<summary>Hint 2: Why Return const?</summary>

Postfix returns `const Counter` to prevent nonsensical expressions like `(c++)++`:
- `c++` returns a temporary copy
- Incrementing that copy would be confusing (doesn't affect c)
- Making it const prevents this misuse
</details>

<details>
<summary>Hint 3: Avoid Code Duplication</summary>

Don't copy the increment logic! Call prefix from postfix:
```cpp
const Counter operator++(int) {
    Counter temp(*this);     // Save old
    ++(*this);               // Call prefix operator++()
    return temp;             // Return old
}
```
</details>

## 🐛 Common Mistakes

❌ Forgetting the dummy int parameter for postfix
❌ Returning by reference from postfix (must return by value!)
❌ Returning by value from prefix (should return reference!)
❌ Not calling prefix from postfix (code duplication)
❌ Using the dummy int parameter (it's not used!)
❌ Forgetting to save old value in postfix

## 🏆 Extension Challenges

1. Add compound operators (+=, -=)
2. Add comparison operators (==, <, etc.)
3. Prevent negative counts
4. Add step parameter: increment by n
5. Track how many times operators were called

---

Master this pattern - it's used everywhere in C++! 🚀
