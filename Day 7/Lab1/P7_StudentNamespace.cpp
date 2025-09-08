//  7:Create Student class in namespace CDAC namespace .
//     Create another Student class in IACSD namespace.
//     Try to access both student classes using namespace
#include <iostream> 
using namespace std;

namespace CDAC {
    class Student {
        int id;
        string name;
    public:
        void input() {
            cout << "CDAC Student ID: ";
            cin >> id;
            cout << "CDAC Student Name: ";
            cin >> name;
        }
        void display() const {
            cout << "CDAC Student ID: " << id << ", Name: " << name << endl;
        }
    };
}

namespace IACSD {
    class Student {
        int id;
        string name;
    public:
        void input() {
            cout << "IACSD Student ID: ";
            cin >> id;
            cout << "IACSD Student Name: ";
            cin >> name;
        }
        void display() const {
            cout << "IACSD Student ID: " << id << ", Name: " << name << endl;
        }
    };
}

int main() {
    CDAC::Student cdacStudent;
    IACSD::Student iacsdStudent;

    cout << "Enter details for CDAC Student:\n";
    cdacStudent.input();    
    cout << "Enter details for IACSD Student:\n";
    iacsdStudent.input();
    cout << "\nDisplaying CDAC Student details:\n";
    cdacStudent.display();
    return 0;
}

