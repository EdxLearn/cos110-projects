// main.cpp
// Application file that uses the Calculator class

#include "calculator.h"
#include <iostream>

using namespace std;

int main() {
    Calculator calc;

    cout << "=== Calculator Test Programme ===" << endl << endl;

    // Test basic operations
    cout << "Basic Operations:" << endl;
    cout << "10 + 5 = " << calc.add(10, 5) << endl;
    cout << "10 - 5 = " << calc.subtract(10, 5) << endl;
    cout << "10 * 5 = " << calc.multiply(10, 5) << endl;
    cout << "10 / 5 = " << calc.divide(10, 5) << endl;
    cout << endl;

    // Test division by zero
    cout << "Division by Zero Test:" << endl;
    cout << "10 / 0 = ";
    double result = calc.divide(10, 0);
    cout << "Result: " << result << endl;
    cout << endl;

    // Test memory functions
    cout << "Memory Functions:" << endl;
    cout << "Storing 42.5 in memory" << endl;
    calc.memoryStore(42.5);
    cout << "Memory recall: " << calc.memoryRecall() << endl;

    double memValue = calc.memoryRecall();
    cout << "Performing calculation: " << memValue << " + 7.5 = "
         << calc.add(memValue, 7.5) << endl;

    cout << "Clearing memory" << endl;
    calc.memoryClear();
    cout << "Memory recall: " << calc.memoryRecall() << endl;
    cout << endl;

    cout << "=== End of Tests ===" << endl;

    return 0;
}
