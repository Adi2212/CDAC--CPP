//7:Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.
#include <iostream>
using namespace std;

class Student
{
    int rollno;
    float marks1, marks2, marks3;   
    float total, percentage;
    char grade;
public:
    void acceptInfo();
    void display();
    void calculate();
    char findGrade();
};
void Student::acceptInfo()
{
    cout << "Enter Roll Number: ";
    cin >> rollno;
    cout << "Enter marks of subject 1: ";
    cin >> marks1;
    cout << "Enter marks of subject 2: ";
    cin >> marks2;
    cout << "Enter marks of subject 3: ";
    cin >> marks3;
}
void Student::calculate()
{
    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100; // Assuming each subject is out of 100
    grade = findGrade();
}

char Student::findGrade()
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}
void Student::display()
{
    cout << "\nRoll Number: " << rollno;
    cout << "\nMarks in Subject 1: " << marks1;
    cout << "\nMarks in Subject 2: " << marks2;
    cout << "\nMarks in Subject 3: " << marks3;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percentage << "%";
    cout << "\nGrade: " << grade << endl;
}
int main()
{
    Student student;
    student.acceptInfo();
    student.calculate();
    student.display();
    return 0;
}
