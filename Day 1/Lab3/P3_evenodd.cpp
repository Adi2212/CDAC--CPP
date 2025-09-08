//3:. Write a  program to find sum of all even and odd numbers between 1 to n. 
#include <iostream>
using namespace std;

int main() {
    int n,i,eSum=0,oSum=0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(i=0;i<=n;i++){
        if(i%2==0)
        eSum+=i;
        else
        oSum+=i;
    }
    cout << "Sum of even numbers between 1 and " << n << " is: " << eSum << endl;
    cout << "Sum of odd numbers between 1 and " << n << " is: " << oSum << endl;
    return 0;
}