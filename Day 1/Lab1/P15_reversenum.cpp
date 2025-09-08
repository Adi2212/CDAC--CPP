//15: Write a  program to enter a number and print its reverse.
#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> number;

    while (number != 0) {
        remainder = number % 10; 
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10; 
    }

    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}