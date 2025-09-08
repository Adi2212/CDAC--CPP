//7Class Template – Queue
//  Implement a class template Queue<T> with functions:
// enqueue(), dequeue(), front(), isEmpty().
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Queue {
private:
    vector<T> elements;
public:
    void enqueue(T value) {
        elements.push_back(value);
    }
    void dequeue() {
        if (!isEmpty()) {
            elements.erase(elements.begin());
        } else {
            cout << "Queue is empty. Cannot dequeue." << endl;
        }
    }
    T front() {
        if (!isEmpty()) {
            return elements.front();
        } else {
            cout << "Queue is empty. Cannot access front." << endl;
            return T(); 
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
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (const T& elem : elements) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue<int> intQueue;
    Queue<string> stringQueue;
    int choice, intValue;
    string strValue;

    cout << "Menu Queue\n1. Integer Queue\n2. String Queue\n3. Exit ";
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int intChoice;
                cout << "Integer Queue Menu\n1. Enqueue\n2. Dequeue\n3. Front\n4. Is Empty\n5. Display\n6. Back to Main Menu ";
                do {
                    cout << "\nEnter your choice: ";
                    cin >> intChoice;
                    switch (intChoice) {
                        case 1:
                            cout << "Enter an integer to enqueue: ";
                            cin >> intValue;
                            intQueue.enqueue(intValue);
                            break;
                        case 2:
                            intQueue.dequeue();
                            break;
                        case 3:
                            cout << "Front element: " << intQueue.front() << endl;
                            break;
                        case 4:
                            cout << (intQueue.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
                            break;
                        case 5:
                            intQueue.display();
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
                cout << "String Queue Menu\n1. Enqueue\n2. Dequeue\n3. Front\n4. Is Empty\n5. Display\n6. Back to Main Menu ";
                do {
                    cout << "\nEnter your choice: ";
                    cin >> strChoice;
                    switch (strChoice) {
                        case 1:
                            cout << "Enter a string to enqueue: ";
                            cin >> strValue;
                            stringQueue.enqueue(strValue);
                            break;
                        case 2:
                            stringQueue.dequeue();
                            break;
                        case 3:
                            cout << "Front element: " << stringQueue.front() << endl;
                            break;
                        case 4:
                            cout << (stringQueue.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
                            break;
                        case 5:
                            stringQueue.display();
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
