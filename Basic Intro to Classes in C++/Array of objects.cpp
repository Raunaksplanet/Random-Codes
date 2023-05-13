#include <iostream>
using namespace std;

class array
{

private:
    int a, b;

public:
    void setValues();
    void sum();
    void multiply();
};

void array :: setValues()
{
    int a1, b1;
    cout << "Enter first number: ";
    cin >> a1;
    
    cout << "Enter second number: ";
    cin >> b1;
    
    a = a1, b = b1;
}

void array :: sum()
{
    
    cout << "The sum of two number is: " << a + b << endl;
}

void array :: multiply()
{
    cout << "The multiplication of two number is: " << a * b << endl << "\n";
}

int main()
{
    // Array of obejcts
    array b[3];
    for (int i = 0; i < 3; i++)
    {
        b[i].setValues();
        b[i].sum();
        b[i].multiply();
    }

}
