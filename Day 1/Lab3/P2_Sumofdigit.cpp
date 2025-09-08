//2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8
#include <iostream>
using namespace std;    

int main() {
    int number, sum = 0, digit;
    cout << "Enter a positive integer: ";
    cin >> number;

    while (number != 0) {
        digit = number % 10; 
        sum += digit; 
        number /= 10; 
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}