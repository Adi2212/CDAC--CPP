//4. Search an Element (Linear Search). Input an array and search if a number exists.
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

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            found = true;
            break;
        }
    }

    if (found)
        cout << target << " exists in the array." << endl;
    else
        cout << target << " does not exist in the array." << endl;

    return 0;
}