//10. Merge Two Arrays. Take two arrays and merge them into a third array.
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter number of elements in first array: ";
    cin >> n1;
    cout << "Enter number of elements in second array: ";
    cin >> n2;

    int arr1[n1], arr2[n2]; 
    cout << "Enter " << n1 << " elements for first array:" << endl;
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter " << n2 << " elements for second array:" << endl;
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    int mergedArr[n1 + n2];
    for (int i = 0; i < n1; i++)
        mergedArr[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        mergedArr[n1 + i] = arr2[i];

    cout << "Merged array:" << endl;
    for (int i = 0; i < n1 + n2; i++)
        cout << mergedArr[i] << " ";
    cout << endl;

    return 0;
}