//1:Create Date class with members day,month ,year. Write no argument and parameterised constructor .Create two object s and initialize them using no argument and parameterised constructor respectively.Print date using display function.
#include <iostream>
using namespace std;

class Date
{
    int day, month, year;
public:
    Date() 
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int d, int m, int y) 
    {
        day = d;
        month = m;
        year = y;
    }

    void display() 
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() 
{
    Date date1; 
    Date date2(15, 8, 2023); 

    cout << "Date initialized using no-argument constructor:" << endl;
    date1.display();

    cout << "Date initialized using parameterized constructor:" << endl;
    date2.display();

    return 0;
}