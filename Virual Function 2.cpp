/*MAYANK 2K21/EP/59*/
#include <iostream>

class Shape {
public:
    // Virtual function for calculating the area (to be overridden by derived classes)
    virtual double calculateArea() {
        return 0.0;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Override the calculateArea function for Triangle
    double calculateArea() override {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the calculateArea function for Rectangle
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    // Create objects of Triangle and Rectangle
    Triangle triangle(4.0, 6.0);
    Rectangle rectangle(5.0, 8.0);

    // Calculate and display the area of the Triangle and Rectangle
    std::cout << "Area of Triangle: " << triangle.calculateArea() << " square units" << std::endl;
    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << " square units" << std::endl;

    return 0;
}
