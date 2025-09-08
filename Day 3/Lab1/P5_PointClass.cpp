//4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class.
#include <iostream>
using namespace std;

class Point {
    int x;
    int y;
public:
    // Default constructor
    Point() : x(0), y(0) {}
    // Parameterized constructor
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}
    // Getter for x
    int getX() const {
        return x;
    }
    // Setter for x
    void setX(int xVal) {
        x = xVal;
    }
    // Getter for y
    int getY() const {
        return y;
    }
    // Setter for y
    void setY(int yVal) {
        y = yVal;
    }
    // Display function
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point point1;
    point1.display();
    cout << endl;

    Point point2(5, 10);
    point2.display();
    cout << endl;

    point1.setX(3);
    point1.setY(7);
    point1.display();
    cout << endl;

    cout << "X Coordinate: " << point1.getX() << endl;
    cout << "Y Coordinate: " << point1.getY() << endl;

    return 0;
}
