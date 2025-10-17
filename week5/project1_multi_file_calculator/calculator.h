// calculator.h
// Header file for Calculator class
// Contains class definition and function declarations

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // Constructor
    Calculator();

    // Basic arithmetic operations
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);

    // Memory functions
    void memoryStore(double value);
    double memoryRecall() const;
    void memoryClear();

private:
    double memory;
};

#endif
