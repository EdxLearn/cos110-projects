# Project 1: Complex Number Class

**Difficulty:** ⭐⭐☆☆☆ Easy-Medium
**Focus:** Friend functions for arithmetic operators
**Estimated Time:** 45-60 minutes

## 📚 Learning Objectives

- Understand when to use friend functions instead of member functions
- Implement binary arithmetic operators as friend functions
- Enable symmetric type conversion
- Work with multi-member classes
- Practice const-correctness

## 🎯 Project Description

Implement a `Complex` class to represent complex numbers (numbers with real and imaginary parts: a + bi). You'll overload arithmetic operators (`+`, `-`, `*`) as friend functions to enable natural mathematical expressions.

###

 Why Friend Functions?

For this project, we use friend functions because:
1. **Symmetric operations:** Both `c1 + 5` and `5 + c1` should work
2. **Type conversion:** If we have a constructor `Complex(double real)`, the compiler can convert doubles to Complex automatically for both operands
3. **Natural syntax:** Binary operators treat both operands equally

## 📋 Specifications

### Class: `Complex`

**Private Members:**
- `double real` - Real part of the complex number
- `double imag` - Imaginary part of the complex number

**Public Members:**

#### Constructors:
```cpp
Complex();                           // Default: 0 + 0i
Complex(double r);                   // r + 0i (allows implicit conversion)
Complex(double r, double i);         // r + ii
```

#### Friend Functions:
```cpp
// Arithmetic operators
friend const Complex operator+(const Complex& c1, const Complex& c2);
friend const Complex operator-(const Complex& c1, const Complex& c2);
friend const Complex operator*(const Complex& c1, const Complex& c2);

// Comparison
friend bool operator==(const Complex& c1, const Complex& c2);

// Stream operators
friend ostream& operator<<(ostream& out, const Complex& c);
friend istream& operator>>(istream& in, Complex& c);
```

#### Member Functions:
```cpp
double getReal() const;
double getImag() const;
```

## 🧮 Complex Number Mathematics

### Addition:
```
(a + bi) + (c + di) = (a + c) + (b + d)i
```

### Subtraction:
```
(a + bi) - (c + di) = (a - c) + (b - d)i
```

### Multiplication:
```
(a + bi) * (c + di) = (ac - bd) + (ad + bc)i
```

### Equality:
```
(a + bi) == (c + di) if a == c AND b == d
```

## 💻 Implementation Tasks

### Task 1: Constructors (Easy)
Implement all three constructors. Initialize members using initializer lists.

### Task 2: Getters (Easy)
Implement `getReal()` and `getImag()`. Both should be const functions.

### Task 3: Addition Operator (Medium)
Implement `operator+` as a friend function. Remember:
- Takes TWO parameters (both Complex)
- Returns Complex by value (const to prevent `(a+b) = c`)
- Can access private members of both parameters

### Task 4: Subtraction Operator (Medium)
Similar to addition, but subtract the components.

### Task 5: Multiplication Operator (Medium)
Use the formula: `(ac - bd) + (ad + bc)i`

### Task 6: Equality Operator (Easy)
Compare both real and imaginary parts. Return true only if both match.

### Task 7: Stream Output Operator (Medium)
Format: `3 + 4i` or `3 - 4i` (note the sign handling)
- Handle negative imaginary part correctly
- Return the stream reference for chaining

### Task 8: Stream Input Operator (Medium)
Read format: `real imag` (e.g., "3 4" for 3 + 4i)
- Read both components
- Return the stream reference

## 📝 Sample Usage

```cpp
int main() {
    // Test constructors
    Complex c1;              // 0 + 0i
    Complex c2(3.0);         // 3 + 0i
    Complex c3(3.0, 4.0);    // 3 + 4i
    Complex c4(1.0, -2.0);   // 1 - 2i

    // Test arithmetic (friend functions enable symmetric operations)
    Complex sum = c3 + c4;           // Works
    Complex sum2 = c3 + 5.0;         // Works! Converts 5.0 to Complex(5.0)
    Complex sum3 = 5.0 + c3;         // Works! Friend function allows this

    // Test output
    cout << "c3 = " << c3 << endl;   // 3 + 4i
    cout << "c4 = " << c4 << endl;   // 1 - 2i
    cout << "sum = " << sum << endl; // 4 + 2i

    // Test input
    Complex c5;
    cout << "Enter complex number (real imag): ";
    cin >> c5;
    cout << "You entered: " << c5 << endl;

    // Test equality
    Complex c6(3, 4), c7(3, 4);
    if (c6 == c7) {
        cout << "Equal!" << endl;
    }

    // Test multiplication
    Complex c8(2, 1), c9(3, 4);
    Complex product = c8 * c9;  // (2+1i)*(3+4i) = 2*3-1*4 + (2*4+1*3)i = 2+11i
    cout << product << endl;

    return 0;
}
```

## ✅ Expected Output

```
c3 = 3 + 4i
c4 = 1 - 2i
sum = 4 + 2i
Enter complex number (real imag): 5 -3
You entered: 5 - 3i
Equal!
2 + 11i
```

## 🧪 Testing Checklist

Test your implementation with:

- [ ] Default constructor creates 0 + 0i
- [ ] Single-parameter constructor works (3.0 becomes 3 + 0i)
- [ ] Two-parameter constructor works
- [ ] Addition: (3+4i) + (1+2i) = 4+6i
- [ ] Subtraction: (3+4i) - (1+2i) = 2+2i
- [ ] Multiplication: (2+1i) * (3+4i) = 2+11i
- [ ] Symmetric addition: c1 + 5 and 5 + c1 both work
- [ ] Output handles negative imaginary: 3 - 4i (not 3 + -4i)
- [ ] Input reads two numbers correctly
- [ ] Equality comparison works
- [ ] Chaining works: cout << c1 << c2 << c3

## 💡 Hints

<details>
<summary>Hint 1: Friend Function Declaration</summary>

Inside the class:
```cpp
friend const Complex operator+(const Complex& c1, const Complex& c2);
```

Outside the class (NO friend keyword, NO Complex::):
```cpp
const Complex operator+(const Complex& c1, const Complex& c2) {
    // Implementation
}
```
</details>

<details>
<summary>Hint 2: Handling Negative Imaginary in Output</summary>

```cpp
if (c.imag >= 0) {
    out << c.real << " + " << c.imag << "i";
} else {
    out << c.real << " - " << (-c.imag) << "i";
}
```
</details>

<details>
<summary>Hint 3: Multiplication Formula</summary>

```cpp
(a + bi) * (c + di) = ac + adi + bci + bdi²
                    = ac + adi + bci - bd  (since i² = -1)
                    = (ac - bd) + (ad + bc)i
```

So:
```cpp
double newReal = c1.real * c2.real - c1.imag * c2.imag;
double newImag = c1.real * c2.imag + c1.imag * c2.real;
```
</details>

## 🐛 Common Mistakes

❌ Implementing operators as member functions (won't allow `5 + c1`)
❌ Forgetting to return the stream in `<<` and `>>`
❌ Making the Complex parameter const in `operator>>`
❌ Not handling negative imaginary numbers in output (showing "3 + -4i")
❌ Using the `friend` keyword in the definition (outside the class)

## 🏆 Extension Challenges

Once you complete the basic implementation:

1. Add division operator (tricky!)
2. Add conjugate function: `(a+bi)*` = `(a-bi)`
3. Add magnitude function: `|a+bi| = sqrt(a² + b²)`
4. Handle special cases (i.e., don't print "+ 0i" for real numbers)
5. Add compound assignment operators (+=, -=, *=)

## 📖 Concepts Covered

- ✅ Friend functions vs member functions
- ✅ Symmetric type conversion
- ✅ Binary operator overloading
- ✅ Stream operators as friends
- ✅ Const-correctness in operators
- ✅ Reference parameters and return values

## 🔗 Related Resources

- Main Website: Section 4 (Friend Functions)
- Textbook: Chapter 8.2
- Lecture: Week 4 - Operator Overloading Continued

---

Good luck! Remember: friend functions give you the power of private access with the flexibility of symmetric operations! 🚀
