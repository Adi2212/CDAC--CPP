//13:Check whether the number is palindrome or not?
#include <iostream>
using namespace std;

int main() {
    int number, ogNumber, rvNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> number;

    ogNumber = number; 

    while (number != 0) {
        remainder = number % 10; 
        rvNumber = rvNumber * 10 + remainder; 
        number /= 10; 
    }

    if (ogNumber == rvNumber)
        cout << ogNumber << " is a palindrome." << endl;
    else
        cout << ogNumber << " is not a palindrome." << endl;

    return 0;
}