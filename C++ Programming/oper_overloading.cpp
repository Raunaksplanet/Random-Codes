#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    Complex c3 = c1 + c2; // Operator overloading
    c3.display(); // Outputs: 4 + 6i

    return 0;
}
