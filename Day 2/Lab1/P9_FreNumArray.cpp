//9. Frequency of Each Element. Count how many times each element occurs.
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

    bool visited[n] = {false};

    cout << "Element frequencies:" << endl;
    for (int i = 0; i < n; i++){
        if (visited[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " occurs " << count << " time(s)" << endl;
    }

    return 0;
}