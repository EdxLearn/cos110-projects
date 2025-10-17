/**
 * COS 110 - Chapter 16: Templates and Generic Programming
 * Project 1: Generic Pair Class
 *
 * This program demonstrates:
 * - Class templates with multiple type parameters
 * - Template member functions
 * - Operator overloading with templates
 * - Friend functions with templates
 *
 * Author: Swift Tuition
 * Standard: C++98
 */

#include <iostream>
#include <string>

using namespace std;

// TODO: Define the Pair template class
// Use two template parameters: T1 and T2
// template <class T1, class T2>
// class Pair {
// private:
//     T1 first;
//     T2 second;
// public:
//     // Constructors
//     Pair();
//     Pair(T1 f, T2 s);
//
//     // Getters
//     T1 getFirst() const;
//     T2 getSecond() const;
//
//     // Setters
//     void setFirst(T1 f);
//     void setSecond(T2 s);
//
//     // Comparison operators
//     bool operator==(const Pair<T1, T2>& other) const;
//     bool operator!=(const Pair<T1, T2>& other) const;
//     bool operator<(const Pair<T1, T2>& other) const;
//
//     // Friend function for stream output
//     friend ostream& operator<<(ostream& out, const Pair<T1, T2>& p) {
//         out << "(" << p.first << ", " << p.second << ")";
//         return out;
//     }
// };

// TODO: Implement the default constructor
// template <class T1, class T2>
// Pair<T1, T2>::Pair() : first(T1()), second(T2()) {}

// TODO: Implement the parameterised constructor
// template <class T1, class T2>
// Pair<T1, T2>::Pair(T1 f, T2 s) : first(f), second(s) {}

// TODO: Implement getFirst()
// template <class T1, class T2>
// T1 Pair<T1, T2>::getFirst() const {
//     return first;
// }

// TODO: Implement getSecond()
// template <class T1, class T2>
// T2 Pair<T1, T2>::getSecond() const {
//     return second;
// }

// TODO: Implement setFirst()
// template <class T1, class T2>
// void Pair<T1, T2>::setFirst(T1 f) {
//     first = f;
// }

// TODO: Implement setSecond()
// template <class T1, class T2>
// void Pair<T1, T2>::setSecond(T2 s) {
//     second = s;
// }

// TODO: Implement operator==
// template <class T1, class T2>
// bool Pair<T1, T2>::operator==(const Pair<T1, T2>& other) const {
//     return (first == other.first) && (second == other.second);
// }

// TODO: Implement operator!=
// template <class T1, class T2>
// bool Pair<T1, T2>::operator!=(const Pair<T1, T2>& other) const {
//     return !(*this == other);
// }

// TODO: Implement operator<
// Compare first values; if equal, compare second values
// template <class T1, class T2>
// bool Pair<T1, T2>::operator<(const Pair<T1, T2>& other) const {
//     if (first < other.first) return true;
//     if (first > other.first) return false;
//     return second < other.second;
// }

int main() {
    cout << "=== COS 110 Project 1: Generic Pair Class ===" << endl << endl;

    // TODO: Test Pair<int, string>
    // Pair<int, string> p1(1, "Alice");
    // Pair<int, string> p2(2, "Bob");
    // cout << "Testing Pair<int, string>:" << endl;
    // cout << "p1: " << p1 << endl;
    // cout << "p2: " << p2 << endl;
    // cout << "p1 == p2? " << (p1 == p2 ? "Yes" : "No") << endl;
    // cout << "p1 < p2? " << (p1 < p2 ? "Yes" : "No") << endl;
    // cout << endl;

    // TODO: Test Pair<double, double>
    // Pair<double, double> p3(3.14, 2.71);
    // Pair<double, double> p4(3.14, 2.71);
    // cout << "Testing Pair<double, double>:" << endl;
    // cout << "p3: " << p3 << endl;
    // cout << "p4: " << p4 << endl;
    // cout << "p3 == p4? " << (p3 == p4 ? "Yes" : "No") << endl;
    // cout << endl;

    // TODO: Test Pair<string, int> with setters
    // Pair<string, int> p5("Product", 100);
    // cout << "Testing Pair<string, int>:" << endl;
    // cout << "p5: " << p5 << endl;
    // p5.setSecond(150);
    // cout << "Updated p5: " << p5 << endl;
    // cout << endl;

    // TODO: Test mixed types
    // Pair<int, string> idName(12345, "John Doe");
    // Pair<double, double> coordinates(10.5, 20.3);
    // cout << "Testing mixed types:" << endl;
    // cout << "idName: " << idName << endl;
    // cout << "coordinates: " << coordinates << endl;

    cout << "Remove the TODO comments and implement the Pair class!" << endl;

    return 0;
}
