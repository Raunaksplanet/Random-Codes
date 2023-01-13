// Find prime number from x to y position given by user using function.
// The code:-

#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int a,b,i;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for(i=a;i<=b;i++)
    {
        if(prime(i))
       cout << i << endl;
    }
}
