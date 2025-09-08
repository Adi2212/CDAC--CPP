//Assignment: Inline Functions in C++
// Write a program using inline functions to calculate:
// Area of a square (side × side)
// Area of a rectangle (length × breadth)
// Area of a circle (π × r × r, use π = 3.14159)
#include <iostream>
using namespace std;

inline double areaOfSquare(double side) {
    return side * side;
}
inline double areaOfRectangle(double length, double breadth) {
    return length * breadth;
}
inline double areaOfCircle(double radius) {
    const double pi = 3.14159;
    return pi * radius * radius;
}
int main() {
    double side, length, breadth, radius;

    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of Square: " << areaOfSquare(side) << endl;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << areaOfRectangle(length, breadth) << endl;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << areaOfCircle(radius) << endl;

    return 0;
}
