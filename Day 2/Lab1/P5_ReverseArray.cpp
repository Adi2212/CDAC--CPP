//5. Reverse Array. Reverse an array and display the result.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

  

    cout << "Reversed array:" << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}