#include <iostream>
#include <cmath>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual functions
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implementation of abstract methods
    double getArea() const override {
        return M_PI * radius * radius;
    }

    double getPerimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of abstract methods
    double getArea() const override {
        return length * width;
    }

    double getPerimeter() const override {
        return 2 * (length + width);
    }
};

int main() {
    // Create objects of Circle and Rectangle
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    // Display the area and perimeter of the shapes
    cout << "Circle Area: " << circle->getArea() << endl;
    cout << "Circle Perimeter: " << circle->getPerimeter() << endl;
    cout << "Rectangle Area: " << rectangle->getArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle->getPerimeter() << endl;

    // Clean up
    delete circle;
    delete rectangle;

    return 0;
}

