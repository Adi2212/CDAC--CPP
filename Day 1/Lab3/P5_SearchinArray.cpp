//5:Write a program to accept array  from user .Accept number from user and search number is present in array or not.
#include <iostream>
using namespace std;

int main() {
    int n, searchNum;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer for the number of elements." << endl;
        return 1;
    }

    int* arr = new int[n]; 

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> searchNum;

    bool found = false; 
    for (int i = 0; i < n; ++i) {
        if (arr[i] == searchNum) {
            found = true; 
            break;
        }
    }

    if (found)
        cout << searchNum << " is present in the array." << endl;
    else
        cout << searchNum << " is not present in the array." << endl;

    delete[] arr; 

    return 0;
}