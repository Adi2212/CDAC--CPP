//5. Write a program to calculate factors of a given number.
#include <iostream>
using namespace std;    

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Factors of " << number << " are: ";
    
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << i << " "; // Print the factor
        }
    }
    
    cout << endl;
    return 0;
}