//3:Consider that payroll software needs to be developed for computerization of
// operations of an ABC organization. The organization has employees.
// 3.1. Construct a class Employee with following members using private access
// specifies:
//  Employee Id integer
//  Employee Name string
//  Basic Salary double
//  HRA double
//  Medical double=1000
//  PF double
// PT double
//  Net Salary double
//  Gross Salary double
// Please use following expressions for calculations://Note:Don't accept HRA,PF PT from user
//  * HRA = 50% of Basic Salary
// * PF = 12% of Basic Salary
// * PT = Rs. 200

// 3.2. Write methods to display the details of an employee and calculate the gross
// and net salary.
// * Goss Salary = Basic Salary + HRA + Medical
// * Net Salary = Gross Salary – (PT + PF)

// Create Object of employee class and assign values and display Details.

#include <iostream>  
using namespace std;

class Employee
{
    int empId;
    string empName;
    double basicSalary;
    double HRA;
    double medical = 1000;
    double PF;
    double PT = 200;
    double netSalary;
    double grossSalary;
public:
    Employee(int id, string name, double basic) : empId(id), empName(name), basicSalary(basic) 
    {
        HRA = 0.5 * basicSalary; 
        PF = 0.12 * basicSalary; 
        grossSalary = basicSalary + HRA + medical; 
        netSalary = grossSalary - (PT + PF); 
    }

    void display() 
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl
                << "Basic Salary: " << basicSalary << endl
                << "HRA: " << HRA << endl
                << "Medical: " << medical << endl
                << "PF: " << PF << endl
                << "PT: " << PT << endl
                << "Gross Salary: " << grossSalary << endl
                << "Net Salary: " << netSalary << endl;
    }
};  

int main() 
{
    int id;
    string name;
    double basic;

    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Basic Salary: ";
    cin >> basic;

    Employee emp(id, name, basic); 
    emp.display(); 
    

    return 0;
}
