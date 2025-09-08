//Function Template – Swap
//  Write a function template swapValues() that swaps two variables of any type.
// Test with int, double, and strin
#include <iostream>     
using namespace std;


template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1, int2,choice;
    double double1, double2;
    string str1, str2;

    cout<<"menu Swap Values\n1. Integer\n2. Double\n3. String\n4.Exit ";
    do{
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter two integers: ";
                cin>>int1>>int2;
                swapValues(int1, int2);
                cout<<"After swapping: "<<int1<<" "<<int2<<endl;
                break;
            case 2:
                cout<<"Enter two doubles: ";
                cin>>double1>>double2;
                swapValues(double1, double2);
                cout<<"After swapping: "<<double1<<" "<<double2<<endl;
                break;
            case 3:
                cout<<"Enter two strings: ";
                cin>>str1>>str2;
                swapValues(str1, str2);
                cout<<"After swapping: "<<str1<<" "<<str2<<endl;
                break;
            case 4:
                cout<<"Exiting the program."<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }while(choice != 4);
    return 0;
}