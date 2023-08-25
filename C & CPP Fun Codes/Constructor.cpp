#include <iostream>
using namespace std;

class array
{

private:
    int a, b;

public:
    array();
    void print();
};


array :: array()
{
    a = 4;
    b = 5; 
}

void array :: print()
{
    (a % 2 == 0)? cout << "Even": cout << "Odd" << endl;
    cout << "\n";
    (b % 2 == 0)? cout << "Even": cout << "Odd" << endl;
}

int main()
{
    array f;
    f.print();

}
