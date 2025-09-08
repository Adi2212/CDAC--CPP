//write menudriven program to manage employee details using class emp,mnager,salesperson,developer
//emp--id,name,salary---display(), calSalary()
//manager--insentives,deptName, display(),assingTask()
//salesperson--foodAllowance,travelAllowance, petrolAllowance, display(),generateTourReport()
//developer--overtime,bonus,display(),nameProject, statusofProject()
#include <iostream>
using namespace std;

class Emp {
protected:
    int empId;
    string name;
    double basicSalary;
    public:
    Emp(int empId, string name, double basicSalary) {
        this->empId = empId;
        this->name = name;
        this->basicSalary = basicSalary;
    }

    virtual void computeNetSal() {
    }

    void display() {
        cout << "Employee ID: " << empId << ", Name: " << name << ", Basic Salary: " << basicSalary;
    }
};  

class Mgr : public Emp {
    double insentives;
public: 
    string deptName;
    Mgr(int empId, string name, double basicSalary, double insentives, string deptName) 
        : Emp(empId, name, basicSalary){
        this->insentives = insentives;
        this->deptName = deptName;
        }

    void computeNetSal() {
        double netSalary = basicSalary + insentives;
        cout << "Net Salary (Manager): " << netSalary << endl;
    }

    void display() {
        Emp::display();
        cout << ", Insentives: " << insentives << ", Dept Name: " << deptName << endl;
    }

    void assignTask(string task) {
        cout << "Task assigned to Manager " << name << ": " << task << endl;
    }
};

class Salesperson : public Emp {
    double foodAllowance;
    double travelAllowance;
    double petrolAllowance;
public:
    Salesperson(int empId, string name, double basicSalary, double foodAllowance, double travelAllowance, double petrolAllowance) 
        : Emp(empId, name, basicSalary) {
        this->foodAllowance = foodAllowance;
        this->travelAllowance = travelAllowance;
        this->petrolAllowance = petrolAllowance;
    }

    void computeNetSal() {
        double netSalary = basicSalary + foodAllowance + travelAllowance + petrolAllowance;
        cout << "Net Salary (Salesperson): " << netSalary << endl;
    }

    void display() {
        Emp::display();
        cout << ", Food Allowance: " << foodAllowance << ", Travel Allowance: " << travelAllowance << ", Petrol Allowance: " << petrolAllowance << endl;
    }

    void generateTourReport(string report) {
        cout << "Tour Report for Salesperson " << name << ": " << endl;
    }
};  

class Developer : public Emp {
    double overtime;
    double bonus;
public:
    string projectName;
    Developer(int empId, string name, double basicSalary, double overtime, double bonus) 
        : Emp(empId, name, basicSalary) {
        this->overtime = overtime;
        this->bonus = bonus;
    }

    void computeNetSal() {
        double netSalary = basicSalary + overtime + bonus;
        cout << "Net Salary (Developer): " << netSalary << endl;
    }

    void display() {
        Emp::display();
        cout << ", Overtime: " << overtime << ", Bonus: " << bonus << endl;
    }

    void nameProject(string projectName) {
        this->projectName = projectName;
        cout << "Project assigned to Developer " << name << ": "<< endl;
    }

    void statusOfProject(string status) {
        cout << "Status of Project for Developer " << name << ": "<< endl;
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Emp* employees[MAX_EMPLOYEES];
    int empCount = 0;

    int choice;
    do {
        cout << "Menu:\n1. Add Manager\n2. Add Salesperson\n3. Add Developer\n4. Display All Employees\n5. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name, deptName;
            double basicSalary, insentives;
            cout << "Enter Manager ID, Name, Basic Salary, Insentives, Dept Name: ";
            cin >> id >> name >> basicSalary >> insentives >> deptName;
            employees[empCount++] = new Mgr(id, name, basicSalary, insentives, deptName);
        } 
        else if (choice == 2) {
            int id;
            string name;
            double basicSalary, foodAllowance, travelAllowance, petrolAllowance;
            cout << "Enter Salesperson ID, Name, Basic Salary, Food Allowance, Travel Allowance, Petrol Allowance: ";
            cin >> id >> name >> basicSalary >> foodAllowance >> travelAllowance >> petrolAllowance;
            employees[empCount++] = new Salesperson(id, name, basicSalary, foodAllowance, travelAllowance, petrolAllowance);
        } 
        else if (choice == 3) {
            int id;
            string name, projectName, statusOfProject;
            double basicSalary, overtime, bonus;
            cout << "Enter Developer ID, Name, Basic Salary, Overtime, Bonus, Project Name, Status of Project: ";
            cin >> id >> name >> basicSalary >> overtime >> bonus >> projectName ;
            employees[empCount++] = new Developer(id, name, basicSalary, overtime, bonus);
        } 
        else if (choice == 4) {
            for (int i = 0; i < empCount; i++) {
                employees[i]->display();
                employees[i]->computeNetSal();
                cout << endl;
            }
        }
    } while (choice != 5);

    for (int i = 0; i < empCount; i++) {
        delete employees[i];
    }

    return 0;
}

