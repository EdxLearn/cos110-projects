/**
 * COS 110 - Chapter 16: Templates and Generic Programming
 * Project 1: Generic Pair Class - SOLUTION
 *
 * Author: Swift Tuition
 * Standard: C++98
 */

#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Default constructor
    Pair() : first(T1()), second(T2()) {}

    // Parameterised constructor
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Getters
    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

    // Setters
    void setFirst(T1 f) {
        first = f;
    }

    void setSecond(T2 s) {
        second = s;
    }

    // Equality operator
    bool operator==(const Pair<T1, T2>& other) const {
        return (first == other.first) && (second == other.second);
    }

    // Inequality operator
    bool operator!=(const Pair<T1, T2>& other) const {
        return !(*this == other);
    }

    // Less than operator (lexicographic comparison)
    bool operator<(const Pair<T1, T2>& other) const {
        if (first < other.first) return true;
        if (first > other.first) return false;
        return second < other.second;
    }

    // Friend function for stream output
    friend ostream& operator<<(ostream& out, const Pair<T1, T2>& p) {
        out << "(" << p.first << ", " << p.second << ")";
        return out;
    }
};

int main() {
    cout << "=== COS 110 Project 1: Generic Pair Class ===" << endl << endl;

    // Test Pair<int, string>
    Pair<int, string> p1(1, "Alice");
    Pair<int, string> p2(2, "Bob");
    cout << "Testing Pair<int, string>:" << endl;
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p1 == p2? " << (p1 == p2 ? "Yes" : "No") << endl;
    cout << "p1 < p2? " << (p1 < p2 ? "Yes" : "No") << endl;
    cout << endl;

    // Test Pair<double, double>
    Pair<double, double> p3(3.14, 2.71);
    Pair<double, double> p4(3.14, 2.71);
    cout << "Testing Pair<double, double>:" << endl;
    cout << "p3: " << p3 << endl;
    cout << "p4: " << p4 << endl;
    cout << "p3 == p4? " << (p3 == p4 ? "Yes" : "No") << endl;
    cout << endl;

    // Test Pair<string, int> with setters
    Pair<string, int> p5("Product", 100);
    cout << "Testing Pair<string, int>:" << endl;
    cout << "p5: " << p5 << endl;
    p5.setSecond(150);
    cout << "Updated p5: " << p5 << endl;
    cout << endl;

    // Test mixed types
    Pair<int, string> idName(12345, "John Doe");
    Pair<double, double> coordinates(10.5, 20.3);
    cout << "Testing mixed types:" << endl;
    cout << "idName: " << idName << endl;
    cout << "coordinates: " << coordinates << endl;

    return 0;
}
