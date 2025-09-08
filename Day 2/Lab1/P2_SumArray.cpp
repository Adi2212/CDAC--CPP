//2. Sum & Average of Array. Input marks of `n` students, find total & average.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n]; 
    cout << "Enter marks of " << n << " students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }

    double average = static_cast<double>(total) / n;
    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;

    return 0;
}