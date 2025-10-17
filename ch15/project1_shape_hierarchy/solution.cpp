/**
 * COS 110 - Chapter 15: Polymorphism & Virtual Functions
 * Project 1: Shape Hierarchy with Virtual Functions - SOLUTION
 *
 * Author: Swift Tuition
 * Standard: C++98
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Abstract Shape base class
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display() const = 0;
    virtual ~Shape() {}
};

// Circle class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const {
        return 3.14159 * radius * radius;
    }

    double perimeter() const {
        return 2 * 3.14159 * radius;
    }

    void display() const {
        cout << "Circle with radius " << fixed << setprecision(2) << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const {
        return width * height;
    }

    double perimeter() const {
        return 2 * (width + height);
    }

    void display() const {
        cout << "Rectangle with width " << fixed << setprecision(2) << width;
        cout << " and height " << height << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl << endl;
    }
};

// Triangle class
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() const {
        // Heron's formula
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const {
        return side1 + side2 + side3;
    }

    void display() const {
        cout << "Triangle with sides " << fixed << setprecision(2);
        cout << side1 << ", " << side2 << ", " << side3 << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl << endl;
    }
};

int main() {
    cout << "=== COS 110 Project 1: Shape Hierarchy ===" << endl << endl;

    // Create array of Shape pointers
    Shape* shapes[3];

    // Create different shapes
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 4.0, 5.0);

    // Display all shapes using polymorphism
    for (int i = 0; i < 3; i++) {
        shapes[i]->display();
    }

    // Calculate total area
    double totalArea = 0.0;
    for (int i = 0; i < 3; i++) {
        totalArea += shapes[i]->area();
    }

    cout << "Total area of all shapes: " << fixed << setprecision(2) << totalArea << endl;

    // Clean up memory
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
