//14:Write a  program to find sum of all even and odd numbers between 1 to n.
#include <iostream>
using namespace std;
int main() {
    int n, i, sumEven = 0, sumOdd = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            sumEven += i; 
        else
            sumOdd += i; 
    }

    cout << "Sum of even numbers between 1 and " << n << " = " << sumEven << endl;
    cout << "Sum of odd numbers between 1 and " << n << " = " << sumOdd << endl;

    return 0;
}