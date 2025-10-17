# Week 5 Practice Projects: Separate Compilation, Namespaces, and Inheritance

This directory contains 5 comprehensive practice projects for Week 5 of COS 110. Each project reinforces the concepts covered in this week's material:

- **Separate Compilation**: Header files, implementation files, include guards
- **Namespaces**: Creating and using namespaces, scope resolution
- **Inheritance**: Base and derived classes, constructors, virtual functions
- **Polymorphism**: Abstract classes, pure virtual functions

## 📋 Project List

### Project 1: Multi-File Calculator ⭐⭐☆☆☆
**Focus**: Separate Compilation, Include Guards, Makefiles

Implement a Calculator class split across header and implementation files. Practice proper file organization and basic Makefiles.

**Concepts**: Header files, include guards, scope resolution operator, Makefiles

[View Project →](./project1_multi_file_calculator/)

---

### Project 2: Namespace Management System ⭐⭐☆☆☆
**Focus**: Namespaces, Scope Resolution, Name Collisions

Create multiple namespaces with overlapping function names. Demonstrate how namespaces prevent name collisions and enable code organization.

**Concepts**: Namespace definition, using declarations, scope resolution, unnamed namespaces

[View Project →](./project2_namespace_management/)

---

### Project 3: Employee Inheritance System ⭐⭐⭐☆☆
**Focus**: Basic Inheritance, Constructors, Protected Members

Build an employee management system with Employee base class and HourlyEmployee/SalariedEmployee derived classes. Practice constructor chaining and protected members.

**Concepts**: Public inheritance, constructor chaining, protected vs private, function redefinition

[View Project →](./project3_employee_inheritance/)

---

### Project 4: Shape Hierarchy with Virtual Functions ⭐⭐⭐☆☆
**Focus**: Virtual Functions, Polymorphism, Abstract Classes

Create an abstract Shape base class with Circle, Rectangle, and Triangle derived classes. Implement pure virtual functions and use polymorphism.

**Concepts**: Abstract classes, pure virtual functions, polymorphism, virtual destructors

[View Project →](./project4_shape_hierarchy/)

---

### Project 5: University System (Complete) ⭐⭐⭐⭐☆
**Focus**: ALL Week 5 Concepts Combined

Build a complete university management system with Person base class, Student and Staff derived classes. Uses separate compilation, namespaces, inheritance, virtual functions, and the Big Three.

**Concepts**: Multi-file projects, namespaces, inheritance hierarchies, polymorphism, assignment operators, copy constructors, complex Makefiles

[View Project →](./project5_university_system/)

---

## 🚀 How to Use These Projects

### Option 1: GitHub Codespaces (Recommended)
Click the "Open in Codespaces" button on each project page. This opens a fully-configured development environment in your browser - no installation required!

### Option 2: Clone the Repository
```bash
git clone https://github.com/SwiftTuition/swift-tuition-2025.git
cd swift-tuition-2025/Tuks/COS_110/Week5_Section/projects
```

### Option 3: Download as ZIP
Download individual project folders as ZIP files from the GitHub repository.

---

## 🔨 Compilation Instructions

Each project includes a Makefile for easy compilation:

```bash
# Navigate to project directory
cd project1_multi_file_calculator

# Compile the project
make

# Run the program
make run

# Clean compiled files
make clean

# Rebuild from scratch
make rebuild
```

### Manual Compilation (without Makefile)
```bash
# Compile implementation files to object files
g++ -Wall -Wextra -std=c++98 -c file1.cpp -o file1.o
g++ -Wall -Wextra -std=c++98 -c file2.cpp -o file2.o

# Link object files into executable
g++ file1.o file2.o -o program

# Run
./program
```

---

## 📚 Learning Outcomes

By completing these projects, you will:

✅ Understand how to organize code across multiple files
✅ Master include guards and the compilation process
✅ Create and use namespaces effectively
✅ Implement inheritance hierarchies with proper constructors
✅ Use virtual functions and polymorphism
✅ Design abstract base classes with pure virtual functions
✅ Apply the Big Three (copy constructor, destructor, assignment operator) in inheritance
✅ Write professional Makefiles for multi-file projects

---

## 🆘 Getting Help

### Code Bugs in GitHub Projects
Report issues at [GitHub Issues](https://github.com/SwiftTuition/swift-tuition-2025/issues)

### Content Questions/Errors
Email: [christian@swifttuition.co.za](mailto:christian@swifttuition.co.za)

### General Inquiries
Email: [admin@swifttuition.co.za](mailto:admin@swifttuition.co.za)

---

## 📖 Related Resources

- **Week 5 Teaching Content**: Comprehensive notes on separate compilation, namespaces, and inheritance (provided separately by your tutor)
- **Interactive Quiz**: Test your knowledge with 180+ questions
- **Past Papers**: EO1 and EO2 questions with detailed solutions

---

## 🎯 Tips for Success

1. **Start with Project 1**: Build your understanding of separate compilation first
2. **Read the READMEs**: Each project has detailed instructions and hints
3. **Compile frequently**: Test your code after each small change
4. **Use the Makefiles**: They handle dependencies automatically
5. **Study the sample output**: Make sure your output matches exactly
6. **Review the teaching content**: Refer back to the main website when stuck
7. **Understand, don't memorize**: Focus on why the code works, not just how

---

## ⚠️ Important Notes

- All projects use **C++98 standard** (as required for COS 110)
- **British spelling** is used throughout (initialise, colour, etc.)
- Projects are designed for **EO1-EO3 difficulty level**
- Each project includes **sample output** to verify correctness
- All code compiles without warnings with `-Wall -Wextra`

---

## 📊 Project Difficulty Guide

| Difficulty | Time Estimate | Description |
|------------|---------------|-------------|
| ⭐⭐☆☆☆ Easy-Medium | 1-2 hours | Fundamental concepts, straightforward implementation |
| ⭐⭐⭐☆☆ Medium | 2-3 hours | Multiple concepts combined, requires planning |
| ⭐⭐⭐⭐☆ Medium-Hard | 3-5 hours | Complete systems, all Week 5 concepts integrated |

---

**Good luck with your projects!** 🚀

Remember: The goal is to **understand** these concepts deeply, not just complete the projects. Take your time, experiment, and don't hesitate to ask for help.

---

*© 2025 Swift Tuition. Part of COS 110 Week 5 materials.*
