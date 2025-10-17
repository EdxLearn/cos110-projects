/**
 * COS 110 - Week 4, Project 2: Time Class with Stream Operators
 *
 * Focus: Stream insertion (<<) and extraction (>>) operators
 *
 * Implement a Time class with properly formatted I/O.
 */

#include <iostream>
using namespace std;

class Time {
private:
    int hours;      // 0-23
    int minutes;    // 0-59

public:
    // =====================================================
    // TODO 1: Implement Constructors
    // =====================================================

    // Default constructor: 00:00
    Time() {
        // TODO: Initialize hours and minutes to 0
    }

    // Parameterized constructor with validation
    Time(int h, int m) {
        // TODO: Validate hours (0-23) and minutes (0-59)
        // If valid, assign them
        // If invalid, set to 00:00 and display error message
    }

    // =====================================================
    // TODO 2: Implement Validation and Getters
    // =====================================================

    bool isValid() const {
        // TODO: Return true if hours in [0,23] and minutes in [0,59]
        return false;  // Replace this
    }

    int getHours() const {
        // TODO: Return hours
        return 0;  // Replace this
    }

    int getMinutes() const {
        // TODO: Return minutes
        return 0;  // Replace this
    }

    // Friend function declarations
    friend ostream& operator<<(ostream& out, const Time& t);
    friend istream& operator>>(istream& in, Time& t);
};

// =========================================================
// TODO 3: Implement operator<< (Stream Output)
// =========================================================
// Format: HH:MM (always 2 digits, e.g., "09:05")

ostream& operator<<(ostream& out, const Time& t) {
    // TODO: Output hours with zero-padding if needed
    // Output ':'
    // Output minutes with zero-padding if needed

    // Hint: if (t.hours < 10) out << '0';

    return out;  // Don't forget to return the stream!
}

// =========================================================
// TODO 4: Implement operator>> (Stream Input)
// =========================================================
// Format: Read HH:MM (e.g., "14:30")

istream& operator>>(istream& in, Time& t) {
    // TODO: Read hours, colon, and minutes
    // Validate the colon character
    // Validate hours and minutes ranges
    // If invalid, display error and set to 00:00

    char colon;
    // in >> t.hours >> colon >> t.minutes;
    // Check if colon == ':'
    // Validate ranges

    return in;  // Don't forget to return the stream!
}

// =========================================================
// Main Function - Testing
// =========================================================

int main() {
    cout << "=== COS 110 - Project 2: Time with Streams ===" << endl << endl;

    // Test 1: Constructors
    cout << "Test 1: Constructors" << endl;
    Time t1;              // 00:00
    Time t2(14, 30);      // 14:30
    Time t3(9, 5);        // 09:05 (test zero-padding)
    Time t4(23, 59);      // 23:59 (edge case)

    cout << "t1 (default): " << t1 << endl;
    cout << "t2 (14:30): " << t2 << endl;
    cout << "t3 (9:05): " << t3 << endl;
    cout << "t4 (23:59): " << t4 << endl;
    cout << endl;

    // Test 2: Invalid times
    cout << "Test 2: Invalid Times (should default to 00:00)" << endl;
    Time t5(25, 30);      // Invalid hours
    Time t6(12, 60);      // Invalid minutes
    Time t7(-1, 30);      // Negative hours
    cout << "t5 (25:30): " << t5 << endl;
    cout << "t6 (12:60): " << t6 << endl;
    cout << "t7 (-1:30): " << t7 << endl;
    cout << endl;

    // Test 3: Chaining
    cout << "Test 3: Stream Chaining" << endl;
    cout << "Times: " << t1 << ", " << t2 << ", " << t3 << endl;
    cout << endl;

    // Test 4: Input (commented out for automated testing)
    /*
    cout << "Test 4: Input" << endl;
    Time t8;
    cout << "Enter time (HH:MM format): ";
    cin >> t8;
    cout << "You entered: " << t8 << endl;
    cout << endl;
    */

    // Test 5: Getters
    cout << "Test 5: Getters" << endl;
    cout << "t2 hours: " << t2.getHours() << endl;
    cout << "t2 minutes: " << t2.getMinutes() << endl;
    cout << endl;

    // Test 6: Validation
    cout << "Test 6: Validation" << endl;
    cout << "t2 valid? " << (t2.isValid() ? "Yes" : "No") << endl;
    cout << "t5 valid? " << (t5.isValid() ? "Yes" : "No") << endl;
    cout << endl;

    cout << "=== All tests complete! ===" << endl;
    return 0;
}
