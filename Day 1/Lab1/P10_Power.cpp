//10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
#include <iostream>
using namespace std;

int main() {
    int m, n, i;
    long long result = 1; 

    cout << "Enter base (m): ";
    cin >> m;
    cout << "Enter power (n): ";
    cin >> n;

        for (i = 0; i < n; ++i) {
            result *= m; 
        }
        cout << m << " to the power of " << n << " = " << result << endl;
    
    return 0;
}