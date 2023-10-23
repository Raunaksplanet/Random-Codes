#include <iostream>
using namespace std;

int x = 10; // Global variable

int main()
{
    int x = 5; // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl; // Using :: to access the global x
    return 0;
}
