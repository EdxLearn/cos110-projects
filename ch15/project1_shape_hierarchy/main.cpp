/**
 * COS 110 - Chapter 15: Polymorphism & Virtual Functions
 * Project 1: Shape Hierarchy with Virtual Functions
 *
 * This program demonstrates:
 * - Abstract base classes with pure virtual functions
 * - Virtual function overriding
 * - Polymorphism with base class pointers
 * - Dynamic memory management with inheritance
 *
 * Author: Swift Tuition
 * Standard: C++98
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// TODO: Define the abstract Shape class
// - Add pure virtual functions: area(), perimeter(), display()
// - Add a virtual destructor

class Shape {
public:
    // TODO: Declare pure virtual functions here
    // virtual double area() const = 0;
    // virtual double perimeter() const = 0;
    // virtual void display() const = 0;

    // TODO: Declare virtual destructor
    // virtual ~Shape() {}
};

// TODO: Define the Circle class
// - Private member: radius
// - Constructor
// - Override area(), perimeter(), display()

class Circle : public Shape {
private:
    double radius;

public:
    // TODO: Implement constructor
    // Circle(double r) : radius(r) {}

    // TODO: Implement area() - π × r²
    // double area() const {
    //     return 3.14159 * radius * radius;
    // }

    // TODO: Implement perimeter() - 2 × π × r
    // double perimeter() const {
    //     return 2 * 3.14159 * radius;
    // }

    // TODO: Implement display()
    // void display() const {
    //     cout << "Circle with radius " << fixed << setprecision(2) << radius << endl;
    //     cout << "Area: " << area() << endl;
    //     cout << "Perimeter: " << perimeter() << endl << endl;
    // }
};

// TODO: Define the Rectangle class
// - Private members: width, height
// - Constructor
// - Override area(), perimeter(), display()

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // TODO: Implement constructor and functions
};

// TODO: Define the Triangle class
// - Private members: side1, side2, side3
// - Constructor
// - Override area() using Heron's formula, perimeter(), display()

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    // TODO: Implement constructor and functions
    // For area(), use Heron's formula:
    // s = (side1 + side2 + side3) / 2.0
    // area = sqrt(s * (s - side1) * (s - side2) * (s - side3))
};

int main() {
    cout << "=== COS 110 Project 1: Shape Hierarchy ===" << endl << endl;

    // TODO: Create an array of Shape pointers
    // Shape* shapes[3];

    // TODO: Create one of each shape
    // shapes[0] = new Circle(5.0);
    // shapes[1] = new Rectangle(4.0, 6.0);
    // shapes[2] = new Triangle(3.0, 4.0, 5.0);

    // TODO: Display all shapes using polymorphism
    // for (int i = 0; i < 3; i++) {
    //     shapes[i]->display();
    // }

    // TODO: Calculate total area
    // double totalArea = 0.0;
    // for (int i = 0; i < 3; i++) {
    //     totalArea += shapes[i]->area();
    // }
    // cout << "Total area of all shapes: " << totalArea << endl;

    // TODO: Clean up memory
    // for (int i = 0; i < 3; i++) {
    //     delete shapes[i];
    // }

    cout << "Remove the TODO comments and implement the classes!" << endl;

    return 0;
}
