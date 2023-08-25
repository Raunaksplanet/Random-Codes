#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout <<  a + b << endl;
}

int sum(double a, double b)
{
    cout <<  a + b << endl;
}

int sum(int a, int b, int c)
{
    cout <<  a + b + c << endl;
}

int sum(double a, double b, double c)
{
    cout << a + b + c << endl;
}

int main()
{
    sum(2,2);
    sum(2,2,2);
    sum(2.2,2.2);
    sum(2.2,2.2,2.2);
}