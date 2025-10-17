/**
 * COS 110 - Week 4, Project 3: Counter with Increment/Decrement
 *
 * Focus: Prefix and postfix increment/decrement operators
 *
 * Understand the critical differences and implementation patterns.
 */

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // =====================================================
    // TODO 1: Implement Constructors
    // =====================================================

    Counter() {
        // TODO: Initialize count to 0
    }

    Counter(int initial) {
        // TODO: Initialize count to initial value
    }

    // =====================================================
    // TODO 2: Implement Prefix Increment (++counter)
    // =====================================================
    // Pattern: Increment, then return reference to *this

    Counter& operator++() {
        // TODO: Increment count
        // TODO: Return *this (reference to this object)

        return *this;
    }

    // =====================================================
    // TODO 3: Implement Postfix Increment (counter++)
    // =====================================================
    // Pattern: Save old, call prefix, return old
    // Note the dummy int parameter!

    const Counter operator++(int) {
        // TODO: Create temp copy of *this (save old value)
        // TODO: Call prefix increment: ++(*this);
        // TODO: Return the temp (old value)

        return Counter();  // Replace this
    }

    // =====================================================
    // TODO 4: Implement Prefix Decrement (--counter)
    // =====================================================

    Counter& operator--() {
        // TODO: Decrement count
        // TODO: Return *this

        return *this;
    }

    // =====================================================
    // TODO 5: Implement Postfix Decrement (counter--)
    // =====================================================

    const Counter operator--(int) {
        // TODO: Save old, call prefix decrement, return old

        return Counter();  // Replace this
    }

    // =====================================================
    // Getter and Stream Operator
    // =====================================================

    int getCount() const {
        return count;
    }

    friend ostream& operator<<(ostream& out, const Counter& c) {
        out << c.count;
        return out;
    }
};

// =========================================================
// Main Function - Testing
// =========================================================

int main() {
    cout << "=== COS 110 - Project 3: Counter with ++/-- ===" << endl << endl;

    // Test 1: Constructors
    cout << "Test 1: Constructors" << endl;
    Counter c1;           // 0
    Counter c2(5);        // 5
    cout << "c1 (default): " << c1 << endl;
    cout << "c2 (5): " << c2 << endl;
    cout << endl;

    // Test 2: Prefix Increment
    cout << "Test 2: Prefix Increment (++c)" << endl;
    cout << "c2 before: " << c2 << endl;
    cout << "++c2 returns: " << ++c2 << endl;  // Should be 6
    cout << "c2 after: " << c2 << endl;        // Should be 6
    cout << endl;

    // Test 3: Postfix Increment
    cout << "Test 3: Postfix Increment (c++)" << endl;
    cout << "c2 before: " << c2 << endl;
    cout << "c2++ returns: " << c2++ << endl;  // Should return 6 (old value)
    cout << "c2 after: " << c2 << endl;        // Should be 7
    cout << endl;

    // Test 4: Prefix Decrement
    cout << "Test 4: Prefix Decrement (--c)" << endl;
    cout << "c2 before: " << c2 << endl;
    cout << "--c2 returns: " << --c2 << endl;  // Should be 6
    cout << "c2 after: " << c2 << endl;        // Should be 6
    cout << endl;

    // Test 5: Postfix Decrement
    cout << "Test 5: Postfix Decrement (c--)" << endl;
    cout << "c2 before: " << c2 << endl;
    cout << "c2-- returns: " << c2-- << endl;  // Should return 6
    cout << "c2 after: " << c2 << endl;        // Should be 5
    cout << endl;

    // Test 6: Chaining Prefix
    cout << "Test 6: Chaining Prefix" << endl;
    cout << "c2 before: " << c2 << endl;
    ++(++c2);  // Should increment twice
    cout << "c2 after ++(++c2): " << c2 << endl;  // Should be 7
    cout << endl;

    // Test 7: Multiple Operations
    cout << "Test 7: Multiple Operations" << endl;
    Counter c3(10);
    cout << "c3 initial: " << c3 << endl;
    cout << "++c3: " << ++c3 << endl;     // 11
    cout << "c3++: " << c3++ << endl;     // 11 (returns old)
    cout << "c3 now: " << c3 << endl;     // 12
    cout << "--c3: " << --c3 << endl;     // 11
    cout << "c3--: " << c3-- << endl;     // 11 (returns old)
    cout << "c3 final: " << c3 << endl;   // 10
    cout << endl;

    // Test 8: Understanding the Difference
    cout << "Test 8: Prefix vs Postfix Difference" << endl;
    Counter c4(5);
    int x = (++c4).getCount();  // Prefix: increment first, returns 6
    cout << "After ++c4, x = " << x << ", c4 = " << c4 << endl;

    Counter c5(5);
    int y = (c5++).getCount();  // Postfix: returns 5, then increments
    cout << "After c5++, y = " << y << ", c5 = " << c5 << endl;
    cout << endl;

    cout << "=== All tests complete! ===" << endl;
    return 0;
}
