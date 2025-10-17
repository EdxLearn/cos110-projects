/**
 * COS 110 - Week 4, Project 5: Complete Fraction Class
 *
 * Focus: ALL Week 4 concepts combined
 *
 * The ultimate operator overloading challenge!
 */

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    // =====================================================
    // TODO 1: Implement GCD (Greatest Common Divisor)
    // =====================================================
    // Use Euclidean algorithm (recursive)

    int gcd(int a, int b) const {
        // TODO: Make a and b positive
        // TODO: If b == 0, return a
        // TODO: Otherwise, return gcd(b, a % b)

        return 1;  // Replace this
    }

    // =====================================================
    // TODO 2: Implement Simplify
    // =====================================================
    // Reduce fraction to lowest terms

    void simplify() {
        // TODO: Find GCD of numerator and denominator
        // TODO: Divide both by GCD
        // TODO: Keep denominator positive (if negative, negate both)
    }

public:
    // =====================================================
    // TODO 3: Implement Constructors
    // =====================================================

    // Default: 0/1
    Fraction() {
        // TODO: Set numerator = 0, denominator = 1
    }

    // Single parameter: n/1
    Fraction(int n) {
        // TODO: Set numerator = n, denominator = 1
    }

    // Two parameters: n/d (simplified)
    Fraction(int n, int d) {
        // TODO: Check d != 0 (if 0, set to 1 and print error)
        // TODO: Set numerator = n, denominator = d
        // TODO: Call simplify()
    }

    // =====================================================
    // Getters
    // =====================================================

    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    double toDecimal() const {
        return static_cast<double>(numerator) / denominator;
    }

    // =====================================================
    // TODO 4: Implement Arithmetic Operators (Friends)
    // =====================================================

    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator-(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);

    // =====================================================
    // TODO 5: Implement Comparison Operators (Friends)
    // =====================================================

    friend bool operator==(const Fraction& f1, const Fraction& f2);
    friend bool operator!=(const Fraction& f1, const Fraction& f2);
    friend bool operator<(const Fraction& f1, const Fraction& f2);
    friend bool operator>(const Fraction& f1, const Fraction& f2);

    // =====================================================
    // TODO 6: Implement Increment/Decrement (Members)
    // =====================================================

    // Prefix ++: add 1 (add denominator to numerator)
    Fraction& operator++() {
        // TODO: numerator += denominator
        // TODO: Call simplify()
        // TODO: Return *this

        return *this;
    }

    // Postfix ++
    Fraction operator++(int) {
        // TODO: Save copy, call prefix, return copy

        return Fraction();  // Replace this
    }

    // Prefix --: subtract 1
    Fraction& operator--() {
        // TODO: numerator -= denominator
        // TODO: Call simplify()
        // TODO: Return *this

        return *this;
    }

    // Postfix --
    Fraction operator--(int) {
        // TODO: Save copy, call prefix, return copy

        return Fraction();  // Replace this
    }

    // =====================================================
    // Stream Operators (Friends)
    // =====================================================

    friend ostream& operator<<(ostream& out, const Fraction& f);
    friend istream& operator>>(istream& in, Fraction& f);
};

// =========================================================
// TODO 4: Implement Arithmetic Operators
// =========================================================

// Addition: a/b + c/d = (ad + bc) / (bd)
Fraction operator+(const Fraction& f1, const Fraction& f2) {
    // TODO: Calculate new numerator and denominator
    // TODO: Return Fraction(num, den) - constructor will simplify

    return Fraction();  // Replace this
}

// Subtraction: a/b - c/d = (ad - bc) / (bd)
Fraction operator-(const Fraction& f1, const Fraction& f2) {
    // TODO: Implement

    return Fraction();  // Replace this
}

// Multiplication: a/b * c/d = (ac) / (bd)
Fraction operator*(const Fraction& f1, const Fraction& f2) {
    // TODO: Implement

    return Fraction();  // Replace this
}

// Division: a/b ÷ c/d = (ad) / (bc)
Fraction operator/(const Fraction& f1, const Fraction& f2) {
    // TODO: Check f2.numerator != 0
    // TODO: Implement

    return Fraction();  // Replace this
}

// =========================================================
// TODO 5: Implement Comparison Operators
// =========================================================
// Use cross-multiplication: a/b < c/d if ad < bc

bool operator==(const Fraction& f1, const Fraction& f2) {
    // TODO: Compare after simplification (or cross-multiply)

    return false;  // Replace this
}

bool operator!=(const Fraction& f1, const Fraction& f2) {
    return !(f1 == f2);
}

bool operator<(const Fraction& f1, const Fraction& f2) {
    // TODO: ad < bc

    return false;  // Replace this
}

bool operator>(const Fraction& f1, const Fraction& f2) {
    return f2 < f1;
}

// =========================================================
// TODO 7: Implement Stream Operators
// =========================================================

ostream& operator<<(ostream& out, const Fraction& f) {
    // TODO: If denominator == 1, just print numerator
    // TODO: Otherwise, print "numerator/denominator"

    return out;
}

istream& operator>>(istream& in, Fraction& f) {
    // TODO: Read numerator
    // TODO: Check for '/' character (peek)
    // TODO: If '/', read denominator
    // TODO: Otherwise, denominator = 1
    // TODO: Set f.numerator and f.denominator
    // TODO: Call f.simplify()

    return in;
}

// =========================================================
// Main Function - Testing
// =========================================================

int main() {
    cout << "=== COS 110 - Project 5: Complete Fraction ===" << endl << endl;

    // Test 1: Constructors and Simplification
    cout << "Test 1: Constructors and Simplification" << endl;
    Fraction f1(3, 4);      // 3/4
    Fraction f2(6, 8);      // Simplifies to 3/4
    Fraction f3(5);         // 5/1 = 5
    Fraction f4;            // 0/1 = 0

    cout << "f1 (3,4): " << f1 << endl;
    cout << "f2 (6,8 simplified): " << f2 << endl;
    cout << "f3 (5): " << f3 << endl;
    cout << "f4 (default): " << f4 << endl;
    cout << endl;

    // Test 2: Arithmetic
    cout << "Test 2: Arithmetic" << endl;
    Fraction sum = f1 + f2;       // 3/4 + 3/4 = 6/4 = 3/2
    Fraction diff = f1 - Fraction(1, 4);  // 3/4 - 1/4 = 1/2
    Fraction prod = f1 * Fraction(2, 3);  // 3/4 * 2/3 = 1/2
    Fraction quot = f1 / Fraction(3, 8);  // 3/4 ÷ 3/8 = 2

    cout << f1 << " + " << f2 << " = " << sum << endl;
    cout << f1 << " - " << Fraction(1, 4) << " = " << diff << endl;
    cout << f1 << " * " << Fraction(2, 3) << " = " << prod << endl;
    cout << f1 << " / " << Fraction(3, 8) << " = " << quot << endl;
    cout << endl;

    // Test 3: Comparison
    cout << "Test 3: Comparison" << endl;
    cout << f1 << " == " << f2 << " ? " << (f1 == f2 ? "Yes" : "No") << endl;
    cout << f1 << " != " << f3 << " ? " << (f1 != f3 ? "Yes" : "No") << endl;
    cout << f1 << " < " << f3 << " ? " << (f1 < f3 ? "Yes" : "No") << endl;
    cout << f3 << " > " << f1 << " ? " << (f3 > f1 ? "Yes" : "No") << endl;
    cout << endl;

    // Test 4: Increment/Decrement
    cout << "Test 4: Increment/Decrement" << endl;
    Fraction f5(3, 4);
    cout << "f5 initial: " << f5 << endl;
    cout << "++f5: " << ++f5 << endl;        // 3/4 + 1 = 7/4
    cout << "f5 after ++: " << f5 << endl;
    cout << "f5++: " << f5++ << endl;        // Returns 7/4, becomes 11/4
    cout << "f5 after f5++: " << f5 << endl;
    cout << "--f5: " << --f5 << endl;        // 11/4 - 1 = 7/4
    cout << "f5--: " << f5-- << endl;        // Returns 7/4, becomes 3/4
    cout << "f5 final: " << f5 << endl;
    cout << endl;

    // Test 5: Decimal conversion
    cout << "Test 5: Decimal Conversion" << endl;
    cout << f1 << " = " << f1.toDecimal() << " (decimal)" << endl;
    cout << endl;

    // Test 6: Complex expression
    cout << "Test 6: Complex Expression" << endl;
    Fraction result = (f1 + f2) * Fraction(1, 2);
    cout << "(" << f1 << " + " << f2 << ") * " << Fraction(1, 2)
         << " = " << result << endl;
    cout << endl;

    cout << "=== All tests complete! ===" << endl;
    return 0;
}
