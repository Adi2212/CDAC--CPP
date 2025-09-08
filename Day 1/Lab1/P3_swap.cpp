//swap two numbers using a temporary variable
#include<iostream>
using namespace std;    

int main() {
   int a, b, temp;
   cout << "Enter two integers: ";
   cin >> a >> b; 
   
   temp = a; 
   a = b; 
   b = temp; 
   
   cout << "After swapping:" << endl;
   cout << "First integer: " << a << endl; 
   cout << "Second integer: " << b << endl; 
   return 0;
}