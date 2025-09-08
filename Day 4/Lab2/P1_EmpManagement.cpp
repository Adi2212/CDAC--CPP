//1 Solve this.
// Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

// Create Emp based organization structure --- Emp , Mgr , Worker


// 1.1 Emp state--- id(int), name, deptId , basicSalary(double)
// Accept all of above in constructor arguments.

// Methods ---
// 1.2. compute net salary ---ret 0
// (eg : public double computeNetSalary(){return 0;})

// 1.2 Mgr state  ---id,name,basic,deptId , perfBonus
// Add suitable constructor
// Methods ----
// 1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


// 1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
// Methods : 
// 1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
// 2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

// Create suitable array to store organization details.
// Provide following options
// 1. Hire Manager
// I/P : all manager details

// 2. Hire Worker  
// I/P : all worker details

// 3. Display information of all employees net salary (by invoking computeNetSal), 

// 4. Exit

#include <iostream>
#include <vector>
using namespace std;

class Emp {
protected:
    int id;
    string name;
    int deptId;
    double basicSalary;
public:
    Emp(int i, string n, int dId, double bSal) 
        : id(i), name(n), deptId(dId), basicSalary(bSal) {}
    
    virtual ~Emp() {}  

    virtual double computeNetSalary() {
        return 0;
    }
    
    virtual void display() {
        cout << "ID: " << id 
             << ", Name: " << name 
             << ", Dept ID: " << deptId 
             << ", Basic Salary: " << basicSalary;
    }
};

class Mgr : public Emp {
    double perfBonus;
public:
    Mgr(int i, string n, int dId, double bSal, double pBonus) 
        : Emp(i, n, dId, bSal), perfBonus(pBonus) {}
    
    double computeNetSalary() override {
        return basicSalary + perfBonus;
    }
    
    void display() override {
        Emp::display();
        cout << ", Performance Bonus: " << perfBonus 
             << ", Net Salary: " << computeNetSalary() << endl;
    }
};

class Worker : public Emp {
    int hoursWorked;
    double hourlyRate;
public:
    Worker(int i, string n, int dId, double bSal, int hWorked, double hRate) 
        : Emp(i, n, dId, bSal), hoursWorked(hWorked), hourlyRate(hRate) {}
    
    double computeNetSalary() override {
        return basicSalary + (hoursWorked * hourlyRate);
    }
    
    double getHourlyRate() {
        return hourlyRate;
    }
    
    void display() override {
        Emp::display();
        cout << ", Hours Worked: " << hoursWorked 
             << ", Hourly Rate: " << hourlyRate 
             << ", Net Salary: " << computeNetSalary() << endl;
    }
};

int main() {
    vector<Emp*> employees;   

    int choice;
    do {
        cout << "\n--- Organization Menu ---\n";
        cout << "1. Hire Manager\n2. Hire Worker\n3. Display All Employees\n4. Exit\nEnter your choice: ";
        cin >> choice;
       

        if (choice == 1) {
            int id, deptId;
            string name;
            double basicSalary, perfBonus;
            cout << "Enter Manager ID, Name, Dept ID, Basic Salary, Performance Bonus:\n";
            cin >> id ;  
            cin >>name;
            cin >> deptId >> basicSalary >> perfBonus;
            employees.push_back(new Mgr(id, name, deptId, basicSalary, perfBonus));
        } 
        else if (choice == 2) {
            int id, deptId, hoursWorked;
            string name;
            double basicSalary, hourlyRate;
            cout << "Enter Worker ID, Name, Dept ID, Basic Salary, Hours Worked, Hourly Rate:\n";
            cin >> id ;
            cin >> name;
            cin >> deptId >> basicSalary >> hoursWorked >> hourlyRate;
            employees.push_back(new Worker(id, name, deptId, basicSalary, hoursWorked, hourlyRate));
        } 
        else if (choice == 3) {
            cout << "\n--- Employee Details ---\n";
            for (auto emp : employees) {
                emp->display();
            }
        }
    } while (choice != 4);

    
    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}
