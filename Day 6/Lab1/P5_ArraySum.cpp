//Function Template – Array Sum
//Write a function template sumArray() that accepts an array of any type and returns the sum of its elements.
#include <iostream>
using namespace std;

template <typename T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

      int choice, size;
      cout<<"Enter size of array : ";
      cin>>size;
    int intArr[size];
    double doubleArr[size];
  

    cout << "Menu Array Sum\n1. Integer Array\n2. Double Array\n3. Exit ";
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter " << size << " integers: ";
                for (int i = 0; i < size; i++) {
                    cin >> intArr[i];
                }
                cout << "Sum of integer array: " << sumArray(intArr, size) << endl;
                break;
            case 2:
                cout << "Enter " << size << " doubles: ";
                for (int i = 0; i < size; i++) {
                    cin >> doubleArr[i];
                }
                cout << "Sum of double array: " << sumArray(doubleArr, size) << endl;
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