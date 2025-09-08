//7. Write a menu driven program to do following operations :
// a) Compute area of circle
// b) Compute area of rectangle
// c) Compute area of triangle
// d) Exit
// Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
// operation. Continue this process until user selects exit option.
#include <iostream>
using namespace std;
const float PI = 3.14159;

int main() {
    int choice;
    float area, radius, length, width, base, height;

     cout << "Menu:\n";
        cout << "1. Compute area of circle\n";
        cout << "2. Compute area of rectangle\n";
        cout << "3. Compute area of triangle\n";
        cout << "4. Exit\n";
        
    do {
       
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                area = PI * radius * radius;
                cout << "Area of the circle: " << area << endl;
                break;
            case 2:
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                area = length * width;
                cout << "Area of the rectangle: " << area << endl;
                break;
            case 3:
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                area = 0.5 * base * height;
                cout << "Area of the triangle: " << area << endl;
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}