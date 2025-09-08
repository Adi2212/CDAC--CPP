//Function Template – Maximum
//  Write a function template findMax() that returns the maximum of two values.
// Test with int, float, and char.
#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1, int2, choice;
    float float1, float2;
    char char1, char2;

    cout << "Menu Find Maximum\n1. Integer\n2. Float\n3. Character\n4. Exit ";
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter two integers: ";
                cin >> int1 >> int2;
                cout << "Maximum: " << findMax(int1, int2) << endl;
                break;
            case 2:
                cout << "Enter two floats: ";
                cin >> float1 >> float2;
                cout << "Maximum: " << findMax(float1, float2) << endl;
                break;
            case 3:
                cout << "Enter two characters: ";
                cin >> char1 >> char2;
                cout << "Maximum: " << findMax(char1, char2) << endl;
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}