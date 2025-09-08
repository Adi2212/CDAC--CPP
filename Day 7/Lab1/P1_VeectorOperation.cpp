//1:Create an application for storing int values in vector.
//   Create menu drivin app for following menu;
//   1:add 2:show all 3:search 4:sort 5:reverse 6:clear
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> values;

void showMenu() {
    cout << "\nMenu:\n";
    cout << "1: Add value\n";
    cout << "2: Show all values\n";
    cout << "3: Search for a value\n";
    cout << "4: Sort values\n";
    cout << "5: Reverse values\n";
    cout << "6: Clear all values\n";
    cout << "7: Exit\n";
    cout << "Choose an option: ";
}

void addValue() {
    int value;
    cout << "Enter an integer to add: ";
    cin >> value;
    values.push_back(value);
    cout << value << " added to the vector.\n";
}

void display() {
    if (values.empty()) {
        cout << "The vector is empty.\n";
        return;
    }
    cout << "Values in the vector: ";
    for (int val : values) {
        cout << val << " ";
    }
    cout << "\n";
}

void searchValue() {
    int value;
    cout << "Enter an integer to search for: ";
    cin >> value;
    auto it = find(values.begin(), values.end(), value);
    if (it != values.end()) {
        cout << value << " found in the vector.\n";
    } else {
        cout << value << " not found in the vector.\n";
    }
}

int main() {
    int choice;

    showMenu();
    do {
        
        cin >> choice;

        switch (choice) {
            case 1:
                addValue();
                break;
            case 2:
                display();
                break;
            case 3:
                searchValue();
                break;
            case 4:
                sort(values.begin(), values.end());
                cout << "Values sorted.\n";
                display();
                break;
            case 5:
                reverse(values.begin(), values.end());
                cout << "Values reversed.\n";
                display();
                break;
            case 6:
                values.clear();
                cout << "All values cleared.\n";
                break;
            case 7:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
