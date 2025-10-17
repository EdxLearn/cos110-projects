/**
 * COS 110 - Week 4, Project 4: SafeArray with Subscript Operator
 *
 * Focus: operator[] with bounds checking, const/non-const versions
 *
 * Build a safe dynamic array class with The Big Three.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

class SafeArray {
private:
    int* data;
    int size;

public:
    // =====================================================
    // TODO 1: Implement Constructor
    // =====================================================

    SafeArray(int s) {
        // TODO: Set size to s
        // TODO: Allocate dynamic array: data = new int[size];
        // TODO: Initialize all elements to 0 (use loop)
    }

    // =====================================================
    // TODO 2: Implement Destructor
    // =====================================================

    ~SafeArray() {
        // TODO: Delete the dynamic array: delete[] data;
    }

    // =====================================================
    // TODO 3: Implement Copy Constructor (Deep Copy!)
    // =====================================================

    SafeArray(const SafeArray& other) {
        // TODO: Copy size
        // TODO: Allocate NEW array of same size
        // TODO: Copy all elements from other.data to this->data
    }

    // =====================================================
    // TODO 4: Implement Assignment Operator (Deep Copy!)
    // =====================================================

    SafeArray& operator=(const SafeArray& other) {
        // TODO: Check for self-assignment: if (this == &other) return *this;
        // TODO: Delete old data: delete[] data;
        // TODO: Copy size
        // TODO: Allocate new array
        // TODO: Copy elements
        // TODO: Return *this

        return *this;
    }

    // =====================================================
    // TODO 5: Implement Non-Const operator[]
    // =====================================================
    // Allows both reading and writing

    int& operator[](int index) {
        // TODO: Check bounds: if (index < 0 || index >= size)
        //       Display error and exit(1)
        // TODO: Return data[index] by reference

        return data[0];  // Replace this
    }

    // =====================================================
    // TODO 6: Implement Const operator[]
    // =====================================================
    // Allows only reading (for const objects)

    const int& operator[](int index) const {
        // TODO: Same as non-const version
        // But note the function is const and returns const reference

        return data[0];  // Replace this
    }

    // =====================================================
    // Other Functions
    // =====================================================

    int getSize() const {
        return size;
    }

    friend ostream& operator<<(ostream& out, const SafeArray& arr) {
        for (int i = 0; i < arr.size; i++) {
            out << arr.data[i];
            if (i < arr.size - 1) out << " ";
        }
        return out;
    }
};

// =========================================================
// Main Function - Testing
// =========================================================

int main() {
    cout << "=== COS 110 - Project 4: SafeArray ===" << endl << endl;

    // Test 1: Constructor and Writing
    cout << "Test 1: Constructor and Writing" << endl;
    SafeArray arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << "Array contents: " << arr << endl;
    cout << endl;

    // Test 2: Reading
    cout << "Test 2: Reading" << endl;
    cout << "arr[0] = " << arr[0] << endl;
    cout << "arr[2] = " << arr[2] << endl;
    cout << "arr[4] = " << arr[4] << endl;
    cout << endl;

    // Test 3: Copy Constructor (Deep Copy)
    cout << "Test 3: Copy Constructor" << endl;
    SafeArray arr2 = arr;
    cout << "arr2 (copy): " << arr2 << endl;
    arr2[0] = 100;  // Modify copy
    cout << "After arr2[0] = 100:" << endl;
    cout << "arr2: " << arr2 << endl;
    cout << "arr (original): " << arr << endl;  // Should be unchanged!
    cout << endl;

    // Test 4: Assignment Operator (Deep Copy)
    cout << "Test 4: Assignment Operator" << endl;
    SafeArray arr3(3);
    arr3 = arr;
    cout << "arr3 (assigned from arr): " << arr3 << endl;
    arr3[1] = 200;
    cout << "After arr3[1] = 200:" << endl;
    cout << "arr3: " << arr3 << endl;
    cout << "arr (original): " << arr << endl;  // Should be unchanged!
    cout << endl;

    // Test 5: Const Object
    cout << "Test 5: Const Object" << endl;
    const SafeArray arr4(3);
    cout << "Const array: " << arr4 << endl;
    int x = arr4[0];  // Uses const version (reading)
    cout << "Read arr4[0]: " << x << endl;
    // arr4[0] = 5;  // ERROR if uncommented: can't modify const
    cout << endl;

    // Test 6: Self-Assignment
    cout << "Test 6: Self-Assignment" << endl;
    arr = arr;  // Should handle this gracefully
    cout << "After arr = arr: " << arr << endl;
    cout << endl;

    // Test 7: Bounds Checking (commented to prevent crash)
    /*
    cout << "Test 7: Bounds Checking" << endl;
    arr[10] = 5;  // Should display error and exit
    */

    cout << "Test 7: Bounds Checking (skipped to prevent crash)" << endl;
    cout << "To test: uncomment arr[10] = 5; in main()" << endl;
    cout << endl;

    cout << "=== All tests complete! ===" << endl;
    return 0;
}
