# COS 110 Week 4: Advanced Operator Overloading - Practice Projects

Welcome! This repository contains 5 hands-on C++ projects designed to help you master **Week 4 concepts**: friend functions, stream operators, references, increment/decrement operators, and the subscript operator.

## 📚 What You'll Learn

- Friend functions and when to use them
- Overloading stream operators (`<<` and `>>`)
- C++ references and their applications
- Prefix and postfix increment/decrement operators
- Subscript operator (`[]`) for container-like classes
- Choosing between member and friend functions

## 🚀 Projects Overview

### Project 1: Complex Number Class (Friend Functions)
**Difficulty:** ⭐⭐☆☆☆ Easy-Medium
**Focus:** Friend functions for arithmetic, symmetric type conversion
**Topics:** Friend functions, binary operators

Implement a Complex number class (real + imaginary parts) with arithmetic operators as friend functions. Learn when friends are better than member functions.

### Project 2: Time Class with Streams (Stream Operators)
**Difficulty:** ⭐⭐☆☆☆ Easy-Medium
**Focus:** Stream insertion and extraction operators
**Topics:** `operator<<`, `operator>>`, friend functions, input validation

Create a Time class (hours:minutes) with stream operators so you can use `cin >> time` and `cout << time`. Master the pattern for I/O operators.

### Project 3: Counter with Inc/Dec (Increment/Decrement)
**Difficulty:** ⭐⭐⭐☆☆ Medium
**Focus:** Prefix and postfix increment/decrement
**Topics:** `operator++`, `operator--`, dummy int parameter, efficiency

Build a Counter class and correctly implement both prefix and postfix forms. Understand the crucial differences and implementation patterns.

### Project 4: SafeArray with Subscript (Subscript Operator)
**Difficulty:** ⭐⭐⭐☆☆ Medium
**Focus:** Subscript operator with bounds checking
**Topics:** `operator[]`, const/non-const versions, bounds checking, references

Implement a safe array class with subscript operators. Learn why you need both const and non-const versions, and how to return references properly.

### Project 5: Complete Fraction Class (All Concepts)
**Difficulty:** ⭐⭐⭐⭐☆ Medium-Hard
**Focus:** All Week 4 concepts combined
**Topics:** Friend functions, stream operators, arithmetic, comparison, ++/--, GCD

The ultimate challenge: a complete Fraction class with all operators implemented correctly. This brings together everything from Week 4.

## 🛠️ Setup Instructions

### Option 1: GitHub Codespaces (Recommended)
1. Click the green "Code" button above
2. Select "Codespaces" tab
3. Click "Create codespace on main"
4. Wait 1-2 minutes for setup (installs g++, make, valgrind automatically)
5. Ready to code!

### Option 2: Windows WSL
1. Install WSL: `wsl --install` (requires restart)
2. Open WSL terminal, install tools:
   ```bash
   sudo apt update
   sudo apt install build-essential git valgrind
   ```
3. Clone and navigate:
   ```bash
   git clone https://github.com/SwiftTuition/cos110-week4-projects
   cd cos110-week4-projects
   ```

### Option 3: Linux/Mac
1. Ensure you have g++, make, and valgrind installed
2. Clone and navigate:
   ```bash
   git clone https://github.com/SwiftTuition/cos110-week4-projects
   cd cos110-week4-projects
   ```

## 📖 How to Use These Projects

Each project folder contains:
- `README.md` - Detailed specifications and requirements
- `main.cpp` - Starter code with TODO comments
- `Makefile` - Build automation
- `sample_output.txt` - Expected output example
- `solution/` - Complete solution (try on your own first!)

### Working on a Project

1. Navigate to the project:
   ```bash
   cd project1_complex_numbers
   ```

2. Read the README.md thoroughly

3. Implement the TODOs in main.cpp

4. Compile and test:
   ```bash
   make          # Compile
   ./main        # Run
   make test     # Run with sample input
   make clean    # Clean build files
   ```

5. Check for memory leaks:
   ```bash
   make valgrind
   ```

6. Compare with solution (after attempting):
   ```bash
   cd solution
   make
   ./main
   ```

## 📝 Compilation

All projects use **C++98 standard** (as per COS 110 requirements):
```bash
g++ -std=c++98 -Wall -Wextra -pedantic main.cpp -o main
```

Or simply:
```bash
make
```

## ✅ Recommended Order

1. **Project 1** - Learn friend functions basics
2. **Project 2** - Master stream operators
3. **Project 3** - Understand increment/decrement
4. **Project 4** - Learn subscript operators
5. **Project 5** - Combine everything

## 💡 Tips for Success

- **Read the README** for each project carefully
- **Compile often** - don't wait until everything is done
- **Test incrementally** - implement one operator at a time
- **Use const correctly** - stream output takes const, input doesn't
- **Check memory** - use valgrind on every project
- **Try before looking** - attempt the solution yourself first
- **Understand, don't copy** - solutions are for learning, not copying

## 🔍 Common Mistakes to Avoid

❌ Forgetting to return the stream from `<<` and `>>`
❌ Making object parameter const in `operator>>`
❌ Forgetting dummy int for postfix `++`/`--`
❌ Returning by value from `operator[]`
❌ Implementing stream operators as member functions
❌ Forgetting bounds checking in `operator[]`
❌ Not implementing both const and non-const `operator[]`

## 📚 Resources

- **Main Website:** Week 4 Teaching Content (provided separately by your tutor)
- **Textbook:** Chapter 8.2-8.3
- **Lecture Notes:** Week 4-5
- **Interactive Quiz:** Week 4 Quiz (provided separately by your tutor)

## 🆘 Getting Help

- Review the main teaching website first
- Check the solution folder (after attempting!)
- Read compiler error messages carefully
- Use valgrind to find memory issues
- Ask questions in tutorials
- **Code bugs in GitHub projects:** Report at [GitHub Issues](https://github.com/SwiftTuition/swift-tuition-2025/issues)
- **Content questions/errors:** Email christian@swifttuition.co.za
- **General inquiries:** Email admin@swifttuition.co.za

## 📊 Progress Tracking

Track your progress:

- [ ] Project 1: Complex Numbers (Friend Functions)
- [ ] Project 2: Time with Streams (Stream Operators)
- [ ] Project 3: Counter with Inc/Dec (Increment/Decrement)
- [ ] Project 4: SafeArray (Subscript Operator)
- [ ] Project 5: Complete Fraction (All Concepts)

## 🎯 Learning Outcomes

After completing these projects, you should be able to:

✅ Decide when to use friend functions vs member functions
✅ Overload `<<` and `>>` correctly for any class
✅ Implement both prefix and postfix increment/decrement
✅ Create safe array classes with subscript operators
✅ Use const correctly in all operator overloads
✅ Return references safely from operators
✅ Understand the complete operator overloading patterns

## 🏆 Challenge Yourself

Once you complete all projects:

1. Add more operators to each class
2. Combine concepts (e.g., Array of Complex numbers)
3. Optimize for efficiency
4. Add error handling and validation
5. Create your own operator-heavy class

## 📄 License

These projects are for educational purposes for COS 110 students at the University of Pretoria.

---

**Good luck and happy coding!** 🚀

Remember: Operator overloading is powerful but should be used wisely. Make your code intuitive!
