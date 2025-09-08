//3. Write a program to accept a character, an integer n and display the next n characters.
#include <iostream>
using namespace std;

int main() {
    char ch;
    int n;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer n: ";
    cin >> n;

    cout << "The next " << n << " characters after '" << ch << "' are:" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << static_cast<char>(ch + i) << " "; 
    }
    cout << endl;

    return 0;
}