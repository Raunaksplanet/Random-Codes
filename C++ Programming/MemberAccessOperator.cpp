#include <iostream>
using namespace std;

class MyClass
{
public:
    int value;
    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    MyClass obj;
    obj.value = 42;

    MyClass *objPtr = &obj;
    objPtr->display(); // Using -> to access the display() function through a pointer

    return 0;
}
