# Project 1: Multi-File Calculator

**Difficulty**: ⭐⭐☆☆☆ (Easy-Medium)
**Estimated Time**: 1-2 hours
**Focus**: Separate Compilation, Include Guards, Makefiles

## 📋 Learning Objectives

By completing this project, you will:
- ✅ Understand how to split code across header (.h) and implementation (.cpp) files
- ✅ Master include guards to prevent multiple inclusion
- ✅ Use the scope resolution operator (::) correctly
- ✅ Create and use professional Makefiles
- ✅ Understand the compilation process (preprocessing, compiling, linking)

## 🎯 Problem Statement

You are to implement a simple `Calculator` class that can perform basic arithmetic operations. The class must be properly split across three files:

1. **calculator.h** - Header file (interface)
2. **calculator.cpp** - Implementation file
3. **main.cpp** - Application file (uses the Calculator)

The Calculator class should support:
- Addition
- Subtraction
- Multiplication
- Division (with division-by-zero handling)
- Memory storage (store a value, recall it, clear it)

## 📝 Requirements Checklist

### Part 1: Header File (calculator.h)
- [ ] Proper include guards (#ifndef, #define, #endif)
- [ ] Class definition with public and private sections
- [ ] Function declarations (not definitions)
- [ ] Clear comments explaining the interface

### Part 2: Implementation File (calculator.cpp)
- [ ] Include the header file
- [ ] Implement all member functions using scope resolution operator (::)
- [ ] Handle division by zero appropriately
- [ ] Implement memory functions (store, recall, clear)

### Part 3: Application File (main.cpp)
- [ ] Include the calculator header
- [ ] Demonstrate all Calculator functions
- [ ] Show memory storage/recall functionality
- [ ] Display results clearly

### Part 4: Makefile
- [ ] Variables for compiler and flags
- [ ] all target (default)
- [ ] Proper dependencies (calculator.o, main.o)
- [ ] clean target
- [ ] run target (optional)

## 🔧 Class Interface

Your Calculator class should have this interface:

```cpp
class Calculator {
public:
    // Constructor
    Calculator();

    // Basic arithmetic operations
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);  // Handle division by zero!

    // Memory functions
    void memoryStore(double value);
    double memoryRecall() const;
    void memoryClear();

private:
    double memory;
};
```

## 📂 File Structure

Your project should have this structure:

```
project1_multi_file_calculator/
├── calculator.h          # Header file
├── calculator.cpp        # Implementation file
├── main.cpp              # Application file
├── Makefile              # Build automation
├── README.md             # This file
└── sample_output.txt     # Expected output
```

## 🔨 Compilation Instructions

### Using the Makefile (Recommended)
```bash
# Compile the project
make

# Run the program
./calculator

# Or compile and run in one command
make run

# Clean up compiled files
make clean

# Rebuild from scratch
make rebuild
```

### Manual Compilation
```bash
# Step 1: Compile calculator.cpp to object file
g++ -Wall -Wextra -std=c++98 -c calculator.cpp -o calculator.o

# Step 2: Compile main.cpp to object file
g++ -Wall -Wextra -std=c++98 -c main.cpp -o main.o

# Step 3: Link object files into executable
g++ calculator.o main.o -o calculator

# Step 4: Run
./calculator
```

## 💡 Hints and Tips

### Include Guards
```cpp
// calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

// All your class definition here

#endif
```

**Why?** Prevents the compiler from seeing the class definition multiple times if the header is included from multiple files.

### Scope Resolution Operator
```cpp
// In calculator.cpp
double Calculator::add(double a, double b) {
    return a + b;
}
```

**Important**: Use `Calculator::` to show this function belongs to the Calculator class!

### Division by Zero
```cpp
double Calculator::divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;  // Or handle differently
    }
    return a / b;
}
```

### Memory Implementation
The memory variable stores a single value that persists between operations:
```cpp
void Calculator::memoryStore(double value) {
    memory = value;
}

double Calculator::memoryRecall() const {
    return memory;
}

void Calculator::memoryClear() {
    memory = 0;
}
```

## 📊 Sample Output

```
=== Calculator Test Programme ===

Basic Operations:
10 + 5 = 15
10 - 5 = 5
10 * 5 = 50
10 / 5 = 2

Division by Zero Test:
10 / 0 = Error: Division by zero!
Result: 0

Memory Functions:
Storing 42.5 in memory
Memory recall: 42.5
Performing calculation: 42.5 + 7.5 = 50
Clearing memory
Memory recall: 0

=== End of Tests ===
```

## ⚠️ Common Mistakes to Avoid

1. **Forgetting include guards** → Compilation errors about redefinition
2. **Defining functions in the header** → Multiple definition linker errors
3. **Forgetting scope resolution operator** → "undefined reference" linker errors
4. **Including .cpp files** → NEVER do this! Only include .h files
5. **Using `using namespace std;` in headers** → Bad practice, pollutes global namespace

## 🧪 Testing Your Code

Test these cases:
1. ✅ Basic arithmetic (positive numbers)
2. ✅ Negative numbers
3. ✅ Floating-point numbers
4. ✅ Division by zero
5. ✅ Memory store/recall/clear
6. ✅ Compile without warnings (`-Wall -Wextra`)
7. ✅ Clean up with `make clean`

## 🆘 Getting Help

**Code bugs**: [GitHub Issues](https://github.com/SwiftTuition/swift-tuition-2025/issues)
**Content questions**: christian@swifttuition.co.za
**General inquiries**: admin@swifttuition.co.za

## 🔗 Related Concepts

- **Week 5 Content**: Separate Compilation section
- **Textbook**: Chapter 11 (Separate Compilation and Namespaces)
- **Next Project**: Project 2 (Namespaces)

---

**Good luck!** Remember: The goal is to understand separate compilation, not just complete the project. Experiment, break things, and learn from errors!

*Part of COS 110 Week 5 materials - © 2025 Swift Tuition*
