// 4:Create an application using map for storing key and value
//    key:int
//    value:Account type
//    Create Account class with actid ,name,balance
//    Create Menu driven app
//    1:Add Account
//    2:Display all
//    3:Search account by actid;
//    4:Remove all
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

class Account {
public:
    int actid;
    string name, actType;
    double balance;

    Account(string actType,int actid, const string& name, double balance) {
        this->actid = actid;
        this->name = name;
        this->balance = balance;
        this->actType=actType;
    }
};
       

map<int, Account> accounts;
void showMenu() {
    cout << "Menu:\n";
    cout << "1: Add Account\n";
    cout << "2: Display all Accounts\n";
    cout << "3: Search for an Account by ID\n";
    cout << "4: Remove all Accounts\n";
    cout << "5: Exit\n";
    cout << "Choose an option: ";
}
void addAccount() {
    int id;
    string name;
    double balance;
    string actType;
    cout << "Enter account type: ";
    cin >> actType;
    cout << "Enter account ID: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter balance: ";
    cin >> balance;

    accounts.emplace(id, Account(actType,id, name, balance));
    cout << "Account added successfully.\n";
}

void displayAccounts() {
    if (accounts.empty()) {
        cout << "No accounts available.\n";
        return;
    }
    cout << "Accounts:\n";
    for (const auto& pair : accounts) {
        const auto& account = pair.second;
        cout << "ID: " << account.actid << ", Name: " << account.name 
             << ", Balance: " << account.balance << "\n";
    }
}

void searchAccount() {
    int id;
    cout << "Enter account ID to search: ";
    cin >> id;
    auto it = accounts.find(id);
    if (it != accounts.end()) {
        const auto& account = it->second;
        cout << "Account found: ID: " << account.actid << ", Name: " << account.name 
             << ", Balance: " << account.balance << "\n";
    } else {
        cout << "Account with ID " << id << " not found.\n";
    }
}

void removeAllAccounts() {
    accounts.clear();
    cout << "All accounts removed.\n";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addAccount();
                break;
            case 2:
                displayAccounts();
                break;
            case 3:
                searchAccount();
                break;
            case 4:
                removeAllAccounts();
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}