// 2:Create an application for storing user information in vector.
//   (Hint:User class with data member userid,name,email,pwd)
//   Create Menu Driven app
//   1:add user
//   2:display all users
//   3:search user
//   4:change pwd
//   5:delete all
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class User {
public:
    int userid;
    string name;
    string email;
    string pwd;

    User(int id, const string& n, const string& e, const string& p)
        : userid(id), name(n), email(e), pwd(p) {}
};  

vector<User> users;
void showMenu() {
    cout << "Menu:\n";
    cout << "1: Add user\n";
    cout << "2: Display all users\n";
    cout << "3: Search for a user by ID\n";
    cout << "4: Change user password\n";
    cout << "5: Delete all users\n";
    cout << "6: Exit\n";
    cout << "Choose an option: ";
}

void addUser() {
    int id;
    string name, email, pwd;
    cout << "Enter user ID: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter password: ";
    cin >> pwd;

    users.emplace_back(id, name, email, pwd);
    cout << "User added successfully.\n";
}

void displayUsers() {
    if (users.empty()) {
        cout << "No users available.\n";
        return;
    }
    cout << "Users:\n";
    for (const auto& user : users) {
        cout << "ID: " << user.userid << ", Name: " << user.name 
             << ", Email: " << user.email << "\n";
    }
}

void searchUser() {
    int id;
    cout << "Enter user ID to search: ";
    cin >> id;
    auto it = find_if(users.begin(), users.end(), [id](const User& user) {
        return user.userid == id;
    });
    if (it != users.end()) {
        cout << "User found: ID: " << it->userid << ", Name: " << it->name 
             << ", Email: " << it->email << "\n";
    } else {
        cout << "User with ID " << id << " not found.\n";
    }
}

void changePassword() {
    int id;
    string newPwd;
    cout << "Enter user ID to change password: ";
    cin >> id;
    auto it = find_if(users.begin(), users.end(), [id](const User& user) {
        return user.userid == id;
    });
    if (it != users.end()) {
        cout << "Enter new password: ";
        cin >> newPwd;
        it->pwd = newPwd;
        cout << "Password updated successfully.\n";
    } else {
        cout << "User with ID " << id << " not found.\n";
    }
}

void deleteAllUsers() {
    users.clear();
    cout << "All users deleted.\n";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addUser();
                break;
            case 2:
                displayUsers();
                break;
            case 3:
                searchUser();
                break;
            case 4:
                changePassword();
                break;
            case 5:
                deleteAllUsers();
                break;
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
