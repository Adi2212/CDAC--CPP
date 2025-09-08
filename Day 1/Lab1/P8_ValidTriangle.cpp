//8. Write a  program to input angles of a triangle and check whether triangle is valid or not.
#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    cout << "Enter the three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        cout << "The triangle is valid." << endl;
    else
        cout << "The triangle is not valid." << endl;

    return 0;
}