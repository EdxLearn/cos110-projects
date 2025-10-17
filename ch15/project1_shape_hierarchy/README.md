# Project 1: Shape Hierarchy with Virtual Functions

**Difficulty:** ⭐⭐☆☆☆ (Easy)
**Chapter:** 15 - Polymorphism & Virtual Functions
**Concepts:** Virtual functions, abstract classes, pure virtual functions, polymorphism basics

## Learning Objectives

- Create an abstract base class with pure virtual functions
- Implement derived classes that override virtual functions
- Use polymorphism with base class pointers
- Calculate areas and perimeters for different shapes
- Work with heterogeneous collections

## Problem Description

Create a shape hierarchy with an abstract `Shape` base class and concrete derived classes for `Circle`, `Rectangle`, and `Triangle`. Each shape should be able to calculate its area and perimeter, and display its information.

## Requirements

### Base Class: Shape

Create an abstract `Shape` class with:
- Pure virtual function: `double area() const`
- Pure virtual function: `double perimeter() const`
- Pure virtual function: `void display() const`
- Virtual destructor

### Derived Class: Circle

Implement a `Circle` class with:
- Private member: `double radius`
- Constructor that takes radius
- Override all pure virtual functions
- Area formula: π × r²
- Perimeter formula: 2 × π × r

### Derived Class: Rectangle

Implement a `Rectangle` class with:
- Private members: `double width`, `double height`
- Constructor that takes width and height
- Override all pure virtual functions
- Area formula: width × height
- Perimeter formula: 2 × (width + height)

### Derived Class: Triangle

Implement a `Triangle` class with:
- Private members: `double side1`, `double side2`, `double side3`
- Constructor that takes three sides
- Override all pure virtual functions
- Area formula: Use Heron's formula (see below)
- Perimeter formula: side1 + side2 + side3

**Heron's Formula:**
```
s = (side1 + side2 + side3) / 2
area = √(s × (s - side1) × (s - side2) × (s - side3))
```

### Main Function

In your `main()` function:
1. Create an array of `Shape*` pointers
2. Add one Circle, one Rectangle, and one Triangle
3. Loop through the array and call `display()` for each shape
4. Calculate and display the total area of all shapes
5. Properly delete all dynamically allocated objects

## Expected Output

```
Circle with radius 5.00
Area: 78.54
Perimeter: 31.42

Rectangle with width 4.00 and height 6.00
Area: 24.00
Perimeter: 20.00

Triangle with sides 3.00, 4.00, 5.00
Area: 6.00
Perimeter: 12.00

Total area of all shapes: 108.54
```

## Hints

- Use `#include <cmath>` for `sqrt()` function
- Use `3.14159` for π (or `M_PI` if available)
- Remember to make the Shape destructor virtual!
- Test each shape individually before combining

## Compilation

```bash
g++ -o shape_hierarchy main.cpp -lm
./shape_hierarchy
```

## Testing Checklist

- [ ] Shape class cannot be instantiated (abstract)
- [ ] All three derived classes compile and run
- [ ] Circle calculations are correct
- [ ] Rectangle calculations are correct
- [ ] Triangle calculations are correct (Heron's formula)
- [ ] Polymorphism works (calling through Shape*)
- [ ] No memory leaks (all objects properly deleted)

## Extension Challenges

1. Add a `Square` class (can inherit from Rectangle)
2. Add an `Ellipse` class
3. Add a `draw()` function that prints ASCII art
4. Add colour as a property
5. Sort shapes by area

---

**Swift Tuition - COS 110 Chapter 15 Projects**
