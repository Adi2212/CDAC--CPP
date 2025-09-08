// 1:Write a program to create an array of integers and perform following operations on that array like 
// finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
// array from user. 
#include <iostream>
using namespace std;    

int main() {
    int n, sum = 0, max, min;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer for the number of elements." << endl;
        return 1;
    }

    int* arr = new int[n]; 

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i]; 

        if (i == 0) {
            max = arr[i]; 
            min = arr[i]; 
        } else {
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }
    }

    double average = static_cast<double>(sum) / n; 

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    delete[] arr; 

    return 0;
}