//Class Template – Calculator
//  Create a class template Calculator<T> with functions:
// add(), subtract(), multiply(), divide().
//  Test with int and double
#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
    T subtract(T a, T b) {
        return a - b;
    }
    T multiply(T a, T b) {
        return a * b;
    }
    T divide(T a, T b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return zero or handle error as needed
        }
    }
};



int main() {
    Calculator<int> intCalc;
    Calculator<double> doubleCalc;
    int choice, int1, int2;
    double double1, double2;
    char operation;

    cout << "Menu Calculator\n1. Integer Operations\n2. Double Operations\n3. Exit ";
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter two integers: ";
                cin >> int1 >> int2;
                cout << "Addition: " << intCalc.add(int1, int2) << endl;
                cout << "Subtraction: " << intCalc.subtract(int1, int2) << endl;
                cout << "Multiplication: " << intCalc.multiply(int1, int2) << endl;
                cout << "Division: " << intCalc.divide(int1, int2) << endl;
                break;
            case 2:
                cout << "Enter two doubles: ";
                cin >> double1 >> double2;
                cout << "Addition: " << doubleCalc.add(double1, double2) << endl;
                cout << "Subtraction: " << doubleCalc.subtract(double1, double2) << endl;
                cout << "Multiplication: " << doubleCalc.multiply(double1, double2) << endl;
                cout << "Division: " << doubleCalc.divide(double1, double2) << endl;
                break;
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
    return 0;
}