//2:Create Employee class with members id(int),name(string),dob(Date).Use above created Date class. Write default and parameterised constructor in Employee Class.Write accept() function to accept information and display() to display emp information.
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
        cout << day << "/" << month << "/" << year;
    }
};  

class Employee
{
    int id;
    string name;
    Date dob;
public:
    Employee() {
        id = 0;
        name = "unknown";
        dob = Date();
    } 
    Employee(int i, string n, Date d) {
        id = i;
        name = n;
        dob = d;
    }
    void accept() 
    {
        int d, m, y;
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Date of Birth (day month year): ";
        cin >> d >> m >> y;
        dob = Date(d, m, y); 
    }

    void display() 
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Date of Birth: ";
        dob.display();
        cout << endl;
    }
};

int main() 
{
    Employee emp1; 
    Employee emp2(101, "aditya", Date(04,10, 2001)); 
    emp1.display();

    cout << "Employee initialized using no-argument constructor:" << endl;
    emp1.accept(); 
    emp1.display();

    cout << "Employee initialized using parameterized constructor:" << endl;
    emp2.display();

    return 0;
}