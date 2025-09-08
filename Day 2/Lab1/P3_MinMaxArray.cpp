//3. Find Maximum and Minimum. Input array and print the largest & smallest element.
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

    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < n; i++){
        if (arr[i] > maxElement)
            maxElement = arr[i];
        if (arr[i] < minElement)
            minElement = arr[i];
    }

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}