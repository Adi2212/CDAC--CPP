//  3: Class Template – Box
 //Implement a class template Box<T> that stores one value of any type and provides          getValue() and setValue() methods.
#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;
public:
    void setValue(T val) {
        value = val;
    }
    T getValue() {
        return value;
    }
};

int main() {
    Box<int> intBox;
    Box<double> doubleBox;
    Box<string> stringBox;

    int intValue;
    double doubleValue;
    string stringValue;

    cout << "Menu Box\n1. Integer\n2. Double\n3. String\n4. Exit ";
    int choice;
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter an integer: ";
                cin >> intValue;
                intBox.setValue(intValue);
                cout << "Stored integer: " << intBox.getValue() << endl;
                break;
            case 2:
                cout << "Enter a double: ";
                cin >> doubleValue;
                doubleBox.setValue(doubleValue);
                cout << "Stored double: " << doubleBox.getValue() << endl;
                break;
            case 3:
                cout << "Enter a string: ";
                cin >> stringValue;
                stringBox.setValue(stringValue);
                cout << "Stored string: " << stringBox.getValue() << endl;
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