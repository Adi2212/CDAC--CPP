//19:Create menu driven program for Pizza Shop.And display total amount,
#include <iostream>
using namespace std;    

int main() {
    int choice;
    double total = 0.0;

    cout << "Welcome to the Pizza Shop!" << endl;
    cout << "Menu:" << endl;
    cout << "1. Margherita Pizza - Rs. 8.99" << endl;
    cout << "2. Pepperoni Pizza - Rs. 10.99" << endl;
    cout << "3. BBQ Chicken Pizza - Rs. 12.99" << endl;
    cout << "4. Veggie Pizza - Rs. 9.99" << endl;
    cout << "5. Exit" << endl;

    while (true) {
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            break; 
        }

        switch (choice) {
            case 1:
                total += 8.99;
                cout << "Margherita Pizza added to your order." << endl;
                break;
            case 2:
                total += 10.99;
                cout << "Pepperoni Pizza added to your order." << endl;
                break;
            case 3:
                total += 12.99;
                cout << "BBQ Chicken Pizza added to your order." << endl;
                break;
            case 4:
                total += 9.99;
                cout << "Veggie Pizza added to your order." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    cout << "Your total amount is: RS. " << total << endl;
    cout << "Thank you for visiting the Pizza Shop!" << endl;

    return 0;
}