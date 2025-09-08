//3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
// data members. Also add the display function. Create Default and Parameterized constructors. Create 
// the object of this class in main method and invoke all the methods in that class. 
#include <iostream>
#include <string>
using namespace std;

class Book {
    string bname;
    int id;
    string author;
    float price;
public:
    // Default constructor  
    Book() : bname("Unknown"), id(0), author("Unknown"), price(0.0f) {}
    // Parameterized constructor
    Book(string bn, int i, string a, float p) : bname(bn), id(i), author(a), price(p) {}
    // Getter for book name
    string getBname() const {
        return bname;
    }
    // Setter for book name
    void setBname(const string& bn) {
        bname = bn;
    }   
    // Getter for id
    int getId() const {
        return id;
    }
    // Setter for id
    void setId(int i) {
        if(i >= 0) // Basic validation
            id = i;
    }
    // Getter for author
    string getAuthor() const {
        return author;
    }
    // Setter for author
    void setAuthor(const string& a) {   
        author = a;
    }
    // Getter for price
    float getPrice() const {
        return price;
    }
    // Setter for price
    void setPrice(float p) {
        if(p >= 0.0f) // Basic validation
            price = p;
    }
    // Display function
    void display() const {
        cout << "Book Name: " << bname << endl;
        cout << "ID: " << id << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs." << price << endl;
    }
};

int main() {
    Book book1;
    book1.display();
    cout << endl;

    Book book2("The Great Gatsby", 101, "F. Scott Fitzgerald", 10.99f);
    book2.display();
    cout << endl;

    book1.setBname("1984");
    book1.setId(102);
    book1.setAuthor("George Orwell");
    book1.setPrice(8.99f);
    book1.display();
    return 0;
}