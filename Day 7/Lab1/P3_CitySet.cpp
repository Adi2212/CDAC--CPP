// 3:Create an application using set .
//   Accept name of city from user and store in set
//   Create Menu drivien app
//   1:add city
//   2:display  all city
//   3: serach city
//with auto id/key.
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

set<string> cities;
void showMenu() {
    cout << "Menu:\n";
    cout << "1: Add city\n";
    cout << "2: Display all cities\n";
    cout << "3: Search for a city\n";
    cout << "4: Exit\n";
    cout << "Choose an option: ";
}

void addCity() {
    string city;
    cout << "Enter city name to add: ";
    cin >> city;
    auto result = cities.insert(city);
    if (result.second) {
        cout << city << " added to the set.\n";
    } else {
        cout << city << " is already in the set.\n";
    }
}

void displayCities() {
    if (cities.empty()) {
        cout << "No cities available.\n";
        return;
    }
    cout << "Cities in the set: ";
    for (const auto& city : cities) {
        cout << city << " ";
    }
    cout << "\n";
}

void searchCity() {
    string city;
    cout << "Enter city name to search: ";
    cin >> city;
    auto it = cities.find(city);
    if (it != cities.end()) {
        cout << city << " found in the set.\n";
    } else {
        cout << city << " not found in the set.\n";
    }
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addCity();
                break;
            case 2:
                displayCities();
                break;
            case 3:
                searchCity();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
