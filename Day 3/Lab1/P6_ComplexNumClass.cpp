//5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class.
#include <iostream>
using namespace std;

class ComplexNumber {
    float real;
    float imaginary;
public:
    // Default constructor
    ComplexNumber() : real(0.0f), imaginary(0.0f) {}
    // Parameterized constructor
    ComplexNumber(float r, float i) : real(r), imaginary(i) {}
    // Getter for real part
    float getReal() const {
        return real;
    }
    // Setter for real part
    void setReal(float r) {
        real = r;
    }
    // Getter for imaginary part
    float getImaginary() const {
        return imaginary;
    }
    // Setter for imaginary part
    void setImaginary(float i) {
        imaginary = i;
    }
    // Display function
    void display() const {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    ComplexNumber cn1;
    cn1.display();
    cout << endl;

    ComplexNumber cn2(3.5f, 2.5f);
    cn2.display();
    cout << endl;

    cn1.setReal(1.5f);
    cn1.setImaginary(4.5f);
    cn1.display();
    cout << endl;

    cout << "Real Part: " << cn1.getReal() << endl;
    cout << "Imaginary Part: " << cn1.getImaginary() << endl;

    return 0;
}