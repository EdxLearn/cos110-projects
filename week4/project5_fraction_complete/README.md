# Project 5: Complete Fraction Class

**Difficulty:** ⭐⭐⭐⭐☆ Medium-Hard
**Focus:** All Week 4 concepts combined
**Estimated Time:** 90-120 minutes

## 📚 Learning Objectives

- Combine friend functions, stream operators, increment/decrement, and more
- Implement a complete, production-quality class
- Practice operator overloading decision-making
- Use GCD algorithm for fraction simplification
- Implement The Big Three (if needed)

## 🎯 Project Description

Implement a complete `Fraction` class representing rational numbers (numerator/denominator). This is the ultimate Week 4 challenge, combining ALL concepts you've learned.

### Features

Your Fraction class will support:
- Arithmetic: +, -, *, / (as friend functions)
- Comparison: ==, !=, <, >, <=, >= (as friends or members)
- Increment/Decrement: ++, -- (both prefix and postfix)
- Stream I/O: <<, >> (as friend functions)
- Automatic simplification using GCD
- Proper handling of negative fractions

## 📋 Specifications

### Class: `Fraction`

**Private Members:**
- `int numerator`
- `int denominator`

**Private Helper:**
```cpp
void simplify();    // Reduce to lowest terms using GCD
int gcd(int a, int b) const;  // Greatest Common Divisor
```

**Public Members:**

#### Constructors:
```cpp
Fraction();                      // 0/1
Fraction(int n);                 // n/1
Fraction(int n, int d);          // n/d, simplified
```

#### Friend Functions (Arithmetic):
```cpp
friend Fraction operator+(const Fraction& f1, const Fraction& f2);
friend Fraction operator-(const Fraction& f1, const Fraction& f2);
friend Fraction operator*(const Fraction& f1, const Fraction& f2);
friend Fraction operator/(const Fraction& f1, const Fraction& f2);
```

#### Friend Functions (Comparison):
```cpp
friend bool operator==(const Fraction& f1, const Fraction& f2);
friend bool operator!=(const Fraction& f1, const Fraction& f2);
friend bool operator<(const Fraction& f1, const Fraction& f2);
friend bool operator>(const Fraction& f1, const Fraction& f2);
```

#### Member Functions (Increment/Decrement):
```cpp
Fraction& operator++();          // Prefix: adds 1
Fraction operator++(int);        // Postfix: adds 1
Fraction& operator--();          // Prefix: subtracts 1
Fraction operator--(int);        // Postfix: subtracts 1
```

#### Stream Operators:
```cpp
friend ostream& operator<<(ostream& out, const Fraction& f);
friend istream& operator>>(istream& in, Fraction& f);
```

#### Getters:
```cpp
int getNumerator() const;
int getDenominator() const;
double toDecimal() const;
```

## 🧮 Fraction Mathematics

### Addition:
```
a/b + c/d = (ad + bc) / (bd)
```

### Subtraction:
```
a/b - c/d = (ad - bc) / (bd)
```

### Multiplication:
```
a/b * c/d = (ac) / (bd)
```

### Division:
```
a/b ÷ c/d = (ad) / (bc)
```

### Comparison:
```
a/b < c/d  if  ad < bc
```

### GCD (Euclidean Algorithm):
```cpp
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
```

## 💻 Implementation Tasks

### Task 1: GCD and Simplification
Implement GCD using recursion, then use it to simplify fractions.

### Task 2: Constructors
Create all three constructors. Always simplify in the constructor.

### Task 3: Arithmetic Operators (Friend Functions)
Implement +, -, *, / using the formulas above. Simplify results.

### Task 4: Comparison Operators
Cross-multiply to compare: a/b < c/d if ad < bc

### Task 5: Increment/Decrement
++fraction adds 1 (increment numerator by denominator)
--fraction subtracts 1

### Task 6: Stream Operators
Output: "3/4" or just "3" if denominator is 1
Input: Read "num/den" or just "num"

## 📝 Sample Usage

```cpp
int main() {
    Fraction f1(3, 4);      // 3/4
    Fraction f2(2, 8);      // Simplifies to 1/4
    Fraction f3(5);         // 5/1

    // Arithmetic
    Fraction sum = f1 + f2;   // 3/4 + 1/4 = 1/1 = 1
    Fraction diff = f1 - f2;  // 3/4 - 1/4 = 1/2
    Fraction prod = f1 * f2;  // 3/4 * 1/4 = 3/16
    Fraction quot = f1 / f2;  // 3/4 ÷ 1/4 = 3

    cout << f1 << " + " << f2 << " = " << sum << endl;

    // Comparison
    if (f1 > f2) {
        cout << f1 << " is greater" << endl;
    }

    // Increment/Decrement
    ++f1;  // Now 7/4
    f1--;  // Back to 3/4

    // Stream I/O
    Fraction f4;
    cin >> f4;
    cout << "You entered: " << f4 << endl;

    return 0;
}
```

## ✅ Expected Output

```
f1: 3/4
f2 (simplified from 2/8): 1/4
3/4 + 1/4 = 1
3/4 - 1/4 = 1/2
3/4 * 1/4 = 3/16
3/4 / 1/4 = 3
3/4 is greater than 1/4
++f1 = 7/4
f1-- returns 7/4, f1 is now 3/4
```

## 🧪 Testing Checklist

- [ ] GCD works correctly
- [ ] Fractions automatically simplify (6/8 → 3/4)
- [ ] Arithmetic operators work and simplify
- [ ] Comparison operators use cross-multiplication
- [ ] Increment adds 1 (num += den)
- [ ] Decrement subtracts 1 (num -= den)
- [ ] Stream output handles whole numbers (5/1 → 5)
- [ ] Stream input reads fractions
- [ ] No division by zero

## 💡 Hints

<details>
<summary>Hint 1: GCD Implementation</summary>

```cpp
int Fraction::gcd(int a, int b) const {
    a = (a < 0) ? -a : a;  // Make positive
    b = (b < 0) ? -b : b;
    if (b == 0) return a;
    return gcd(b, a % b);
}
```
</details>

<details>
<summary>Hint 2: Simplify Implementation</summary>

```cpp
void Fraction::simplify() {
    int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
    // Keep denominator positive
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}
```
</details>

<details>
<summary>Hint 3: Addition</summary>

```cpp
Fraction operator+(const Fraction& f1, const Fraction& f2) {
    int num = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    int den = f1.denominator * f2.denominator;
    return Fraction(num, den);  // Constructor will simplify
}
```
</details>

## 🐛 Common Mistakes

❌ Not simplifying fractions
❌ Forgetting to handle negative denominators
❌ Division by zero not checked
❌ Not using friend functions for arithmetic
❌ Comparison without cross-multiplication
❌ Increment/decrement by 1/1 instead of den/den

## 🏆 Extension Challenges

1. Add mixed number support (2 1/3)
2. Add pow() for exponentiation
3. Handle very large numbers (check overflow)
4. Add reciprocal() function
5. Support compound operators (+=, -=, etc.)

---

Complete this and you've mastered Week 4! 🎉🚀
