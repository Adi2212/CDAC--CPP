//2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class.
#include <iostream>
using namespace std;

class Date {
    int dd;
    int mm;
    int yy;
public:
    // Default constructor
    Date() : dd(1), mm(6), yy(2000) {}
    // Parameterized constructor
    Date(int d, int m, int y) : dd(d), mm(m), yy(y) {}
    // Getter for day
    int getDay() const {
        return dd;
    }
    // Setter for day
    void setDay(int d) {
        if(d >= 1 && d <= 31) // Basic validation
            dd = d;
    }
    // Getter for month
    int getMonth() const {
        return mm;
    }
    // Setter for month
    void setMonth(int m) {
        if(m >= 1 && m <= 12) // Basic validation
            mm = m;
    }
    // Getter for year
    int getYear() const {
        return yy;
    }
    // Setter for year
    void setYear(int y) {
        if(y >= 0) // Basic validation
            yy = y;
    }
    // Display function
    void display() const {
        cout << "Date: " << (dd < 10 ? "0" : "") << dd << "/"
             << (mm < 10 ? "0" : "") << mm << "/"
             << yy << endl;
    }
};

int main() {
    Date date1;
    date1.display();
    cout << endl;

    Date date2(15, 8, 2023);
    date2.display();
    cout << endl;

    date1.setDay(5);
    date1.setMonth(10);
    date1.setYear(2024);
    date1.display();
    cout << endl;

    cout << "Day: " << date1.getDay() << endl;
    cout << "Month: " << date1.getMonth() << endl;
    cout << "Year: " << date1.getYear() << endl;

    return 0;
}