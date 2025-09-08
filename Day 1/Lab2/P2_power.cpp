//2. Write a program to accept two integers x and n and compute x raised to n
#include <iostream>
using namespace std;

int main() {
    int x, n, i;
    long long result = 1; 

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

        for (i = 0; i < n; ++i) {
            result *= x; 
        }
        cout << x << " to the power of " << n << " = " << result << endl;
    
    return 0;
}