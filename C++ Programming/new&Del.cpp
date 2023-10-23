#include <iostream>
using namespace std;

int main()
{

    int *dynamicInt = new int; // Allocate memory for an integer
    *dynamicInt = 42;          // Store a value in the dynamically allocated memory
    cout << "Dynamic Integer: " << *dynamicInt << endl;
    delete dynamicInt; // Deallocate the memory
}