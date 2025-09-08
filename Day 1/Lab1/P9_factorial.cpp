// Program to calculate the factorial of a number
#include <iostream>
using namespace std;

int main() {
    int number,i;
    unsigned long long factorial = 1; 

    cout << "Enter a positive integer: ";
    cin >> number;

    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (i = 1; i <= number; ++i) {
            factorial *= i; 
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }

    return 0;
}