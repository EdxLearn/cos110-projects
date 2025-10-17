// calculator.cpp
// Implementation file for Calculator class
// Contains function definitions

#include "calculator.h"
#include <iostream>

using namespace std;

// Constructor
Calculator::Calculator() {
    memory = 0;
}

// Basic arithmetic operations
double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

// Memory functions
void Calculator::memoryStore(double value) {
    memory = value;
}

double Calculator::memoryRecall() const {
    return memory;
}

void Calculator::memoryClear() {
    memory = 0;
}
