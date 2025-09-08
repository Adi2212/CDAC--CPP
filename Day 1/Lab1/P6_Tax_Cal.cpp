//6. Write a program, which accepts annual basic salary of an employee and calculates and displays the 
// Income tax as per the following rules. 
// Basic: < 1, 50,000 Tax = 0
//  1, 50,000 to 3,00,000 Tax = 20% 
//  > 3,00,000 Tax = 30% 
#include<iostream>
using namespace std;

int main (){
    float salary, tax;
    cout << "Enter your salary: ";
    cin >> salary;
    if(salary <= 150000)
        tax = 0;
    else if(salary >= 150000 && salary <=300000)
        tax = 0.2 * (salary - 50000);
    else
        tax = 0.2 * 150000 + 0.3 * (salary - 300000);

    cout << "Your tax is: " << tax << endl;
    return 0;

}
