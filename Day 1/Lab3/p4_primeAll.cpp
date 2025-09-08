//4:. Write a  program to print all Prime numbers between 1 to n. 
#include <iostream>
using namespace std;    

int main() {
    int n, num, i;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";

    for (num = 2; num <= n; ++num) {
        bool isPrime = true; 

        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false; 
                break;
            }
        }

        if (isPrime)
            cout << num << ", ";
    }

    cout << endl;
    return 0;
}