//:Sum of series :   1+2+3+....+n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i; 
    }

    cout << "Sum of series 1 to " << n << " = " << sum << endl;
    return 0;
}
