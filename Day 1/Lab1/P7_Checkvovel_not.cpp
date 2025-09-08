//7. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";  
    cin >> ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a vowel." << endl;
    else if(ch>='a' && ch<='z')
        cout << ch << " is consonant." << endl;
    else
        cout <<  "pls enter lower character.." << endl;
}