//Check if a number is divisible by both 5 and 7
#include<iostream>
using namespace std;

int main(){
    int  num;
    cout << "Enter an integer: ";
    cin >> num;

    if(num % 5 == 0 && num % 7 == 0)
        cout << num << " is divisible by both 5 and 7." << endl;
    else
        cout << num << " is not divisible by both 5 and 7." << endl;
}