/**
 * COS 110 - Week 4, Project 1: Complex Number Class
 *
 * Focus: Friend functions for arithmetic operators
 *
 * Implement a Complex class with friend functions for arithmetic.
 * This demonstrates when friend functions are better than member functions.
 */

#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // =====================================================
    // TODO 1: Implement Constructors
    // =====================================================

    // Default constructor: 0 + 0i
    Complex() {
        // TODO: Initialize real and imag to 0
    }

    // Single parameter constructor: r + 0i
    // This allows implicit conversion from double to Complex
    Complex(double r) {
        // TODO: Initialize real to r, imag to 0
    }

    // Two parameter constructor: r + ii
    Complex(double r, double i) {
        // TODO: Initialize real to r, imag to i
    }

    // =====================================================
    // TODO 2: Implement Getters
    // =====================================================

    double getReal() const {
        // TODO: Return real
        return 0.0;  // Replace this
    }

    double getImag() const {
        // TODO: Return imag
        return 0.0;  // Replace this
    }

    // =====================================================
    // Friend Function Declarations
    // =====================================================

    // Arithmetic operators (DECLARED as friends inside class)
    friend const Complex operator+(const Complex& c1, const Complex& c2);
    friend const Complex operator-(const Complex& c1, const Complex& c2);
    friend const Complex operator*(const Complex& c1, const Complex& c2);

    // Comparison
    friend bool operator==(const Complex& c1, const Complex& c2);

    // Stream operators
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};

// =========================================================
// TODO 3: Implement operator+ (Addition)
// =========================================================
// Formula: (a+bi) + (c+di) = (a+c) + (b+d)i
// Remember: DEFINED outside class, NO friend keyword, NO Complex::

const Complex operator+(const Complex& c1, const Complex& c2) {
    // TODO: Add real parts and imaginary parts
    // Create and return a new Complex with the results

    return Complex();  // Replace this
}

// =========================================================
// TODO 4: Implement operator- (Subtraction)
// =========================================================
// Formula: (a+bi) - (c+di) = (a-c) + (b-d)i

const Complex operator-(const Complex& c1, const Complex& c2) {
    // TODO: Subtract real parts and imaginary parts

    return Complex();  // Replace this
}

// =========================================================
// TODO 5: Implement operator* (Multiplication)
// =========================================================
// Formula: (a+bi) * (c+di) = (ac-bd) + (ad+bc)i

const Complex operator*(const Complex& c1, const Complex& c2) {
    // TODO: Use the formula above
    // newReal = c1.real * c2.real - c1.imag * c2.imag
    // newImag = c1.real * c2.imag + c1.imag * c2.real

    return Complex();  // Replace this
}

// =========================================================
// TODO 6: Implement operator== (Equality)
// =========================================================

bool operator==(const Complex& c1, const Complex& c2) {
    // TODO: Return true if both real and imag are equal

    return false;  // Replace this
}

// =========================================================
// TODO 7: Implement operator<< (Stream Output)
// =========================================================
// Format: "3 + 4i" or "3 - 4i" (handle negative imag correctly)

ostream& operator<<(ostream& out, const Complex& c) {
    // TODO: Output format depends on sign of imag
    // If imag >= 0: output "real + imagi"
    // If imag < 0:  output "real - (-imag)i" (don't show "real + -imagi")

    // Remember to return out for chaining!
    return out;
}

// =========================================================
// TODO 8: Implement operator>> (Stream Input)
// =========================================================
// Format: Read two numbers: real imag

istream& operator>>(istream& in, Complex& c) {
    // TODO: Read c.real and c.imag from the stream

    // Remember to return in for chaining!
    return in;
}

// =========================================================
// Main Function - Testing
// =========================================================

int main() {
    cout << "=== COS 110 - Project 1: Complex Numbers ===" << endl << endl;

    // Test 1: Constructors
    cout << "Test 1: Constructors" << endl;
    Complex c1;              // 0 + 0i
    Complex c2(3.0);         // 3 + 0i
    Complex c3(3.0, 4.0);    // 3 + 4i
    Complex c4(1.0, -2.0);   // 1 - 2i

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c3 = " << c3 << endl;
    cout << "c4 = " << c4 << endl;
    cout << endl;

    // Test 2: Addition
    cout << "Test 2: Addition" << endl;
    Complex sum1 = c3 + c4;           // (3+4i) + (1-2i) = 4+2i
    Complex sum2 = c3 + 5.0;          // Friend allows implicit conversion
    Complex sum3 = 5.0 + c3;          // Symmetric! Only works with friend

    cout << c3 << " + " << c4 << " = " << sum1 << endl;
    cout << c3 << " + 5 = " << sum2 << endl;
    cout << "5 + " << c3 << " = " << sum3 << endl;
    cout << endl;

    // Test 3: Subtraction
    cout << "Test 3: Subtraction" << endl;
    Complex diff = c3 - c4;  // (3+4i) - (1-2i) = 2+6i
    cout << c3 << " - " << c4 << " = " << diff << endl;
    cout << endl;

    // Test 4: Multiplication
    cout << "Test 4: Multiplication" << endl;
    Complex c5(2.0, 1.0);    // 2 + 1i
    Complex c6(3.0, 4.0);    // 3 + 4i
    Complex product = c5 * c6;  // (2+1i)*(3+4i) = 2+11i
    cout << c5 << " * " << c6 << " = " << product << endl;
    cout << endl;

    // Test 5: Equality
    cout << "Test 5: Equality" << endl;
    Complex c7(3, 4), c8(3, 4), c9(3, 5);
    cout << c7 << " == " << c8 << " ? " << (c7 == c8 ? "Yes" : "No") << endl;
    cout << c7 << " == " << c9 << " ? " << (c7 == c9 ? "Yes" : "No") << endl;
    cout << endl;

    // Test 6: Input (commented out for automated testing)
    /*
    cout << "Test 6: Input" << endl;
    Complex c10;
    cout << "Enter a complex number (real imag): ";
    cin >> c10;
    cout << "You entered: " << c10 << endl;
    cout << endl;
    */

    // Test 7: Chaining
    cout << "Test 7: Chaining" << endl;
    cout << "Three complex numbers: " << c3 << ", " << c4 << ", " << c5 << endl;
    cout << endl;

    // Test 8: Complex arithmetic expressions
    cout << "Test 8: Complex Expressions" << endl;
    Complex result = (c3 + c4) * c5;
    cout << "(" << c3 << " + " << c4 << ") * " << c5 << " = " << result << endl;
    cout << endl;

    cout << "=== All tests complete! ===" << endl;
    return 0;
}
