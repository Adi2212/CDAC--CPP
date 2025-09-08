//8.Second Largest Element. Find the second largest number without sorting.
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

    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++){
        if (arr[i] > firstLargest){
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != firstLargest){
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "There is no second largest element." << endl;
    else
        cout << "Second largest element: " << secondLargest << endl;

    return 0;
}