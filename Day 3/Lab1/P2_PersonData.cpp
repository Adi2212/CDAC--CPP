//1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
// members. Also add the display function. Create Default and Parameterized constructors. Create the 
// object of this class in main method and invoke all the methods in that class. 
#include <iostream>
using namespace std;
#include <string>

class Person {
    string name;
    int age;
    string city;
public:
    // Default constructor          
    Person() : name("Unknown"), age(0), city("Unknown") {}
    // Parameterized constructor
    Person(string n, int a, string c) : name(n), age(a), city(c) {}
    // Getter for name
    string getName() const {
        return name;
    }   
    // Setter for name
    void setName(const string& n) {
        name = n;
    }
    // Getter for age
    int getAge() const {
        return age;
    }
    // Setter for age
    void setAge(int a) {
        if(a >= 0) // Basic validation
            age = a;
    }
    // Getter for city
    string getCity() const {
        return city;
    }
    // Setter for city
    void setCity(const string& c) {
        city = c;
    }   
    // Display function
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }   
};

int main() {
    Person person1;
    person1.display();
    cout << endl;

    Person person2("Alice", 30, "New York");
    person2.display();
    cout << endl;

    person1.setName("Bob");
    person1.setAge(25);
    person1.setCity("Los Angeles");
    person1.display();

    return 0;
}
