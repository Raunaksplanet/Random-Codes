#include <iostream>
using namespace std;

class array
{

private:
    int a, b;

public:
    array(int ,int);
    void print();
};


array :: array(int a1,int b1)
{
    a = a1, b = b1;
}

void array :: print()
{
    cout << "The value of A = " << a << "\nThe value of B = " << b << "\n\n";
}

int main()
{
    //Implicit call
    array f(5,3);

    //Explicit call
    array d = array(8,7);
    f.print();
    d.print();
}
