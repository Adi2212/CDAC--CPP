//6: Class Template – Stack
//  Implement a class template Stack<T> with functions:
// push(), pop(), peek(), isEmpty().
//  Test with int and string.
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;
public:
    void push(T value) {
        elements.push_back(value);
    }
    void pop() {
        if (!isEmpty()) {
            elements.pop_back();
        } else {
            cout << "Stack is empty. Cannot pop." << endl;
        }
    }
    T peek() {
        if (!isEmpty()) {
            return elements.back();
        } else {
            cout << "Stack is empty. Cannot peek." << endl;
            return T(); // Return default value of T
        }
    }
    bool isEmpty() {
        return elements.empty();
    }
    int size() {
        return elements.size();
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = elements.size() - 1; i >= 0; i--) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> intStack;
    Stack<string> stringStack;
    int choice, intValue;
    string strValue;

    
    do {
        cout << "Menu Stack\n1. Integer Stack\n2. String Stack\n3. Exit ";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int intChoice;
                do {
                     cout << "Integer Stack Menu\n1. Push\n2. Pop\n3. Peek\n4. Is Empty\n5. Display\n6. Back to Main Menu ";
                    cout << "\nEnter your choice: ";
                    cin >> intChoice;
                    switch (intChoice) {
                        case 1:
                            cout << "Enter an integer to push: ";
                            cin >> intValue;
                            intStack.push(intValue);
                            break;
                        case 2:
                            intStack.pop();
                            break;
                        case 3:
                            cout << "Top element: " << intStack.peek() << endl;
                            break;
                        case 4:
                            cout << (intStack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                            break;
                        case 5:
                            intStack.display();
                            break;
                        case 6:
                            cout << "Returning to main menu." << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                    }
                } while (intChoice != 6);
                break;
            }
            case 2: {
                int strChoice;
                cout << "String Stack Menu\n1. Push\n2. Pop\n3. Peek\n4. Is Empty\n5. Display\n6. Back to Main Menu ";
                do {
                    cout << "\nEnter your choice: ";
                    cin >> strChoice;
                    switch (strChoice) {
                        case 1:
                            cout << "Enter a string to push: ";
                            cin >> strValue;
                            stringStack.push(strValue);
                            break;
                        case 2:
                            stringStack.pop();
                            break;
                        case 3:
                            cout << "Top element: " << stringStack.peek() << endl;
                            break;
                        case 4:
                            cout << (stringStack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                            break;
                        case 5:
                            stringStack.display();
                            break;  
                        case 6:
                            cout << "Returning to main menu." << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                    }
                } while (strChoice != 6);   
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;    
        }
    } while (choice != 3);
    return 0;
}